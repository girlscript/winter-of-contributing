import pandas as pd
import torch
import torchaudio
from torch.utils.data import Dataset
import glob
import numpy as np
#from scipy.io import wavfile as wf
import librosa
from scipy.stats import kurtosis
import math


class preprocessed(Dataset):
    '''
    Load the audio data, and Normalize, Remove Silences, balance (if required) and apply any/other preprocessing/transformation on it.    
    
    preprocess.get_processed(:params)-
    applies all the required transformations and 
    either returns the data as a tensor or stores as new audio files in some directory..
    '''
    def __init__(self,path_to_csv,device=None,transform=None,path_to_data='same'):
        
        self.path_to_csv = path_to_csv
        if path_to_data == 'same':
            self.path_to_data=path_to_csv + '/..'
        else:
            self.path_to_data=path_to_data + '/' if path_to_data[-1] !='/' else path_to_data        
        data_annotated = pd.read_csv(path_to_csv)
        
        self.data_annotated=pd.DataFrame(np.zeros((len(glob.glob(self.path_to_data+'*/*/*.wav')),36)),columns=list(data_annotated.columns))
        self.files=glob.glob(self.path_to_data+'*/*/')
        #self.files=glob.glob(self.path_to_data+'*/*/') #paths to individual patients
        self.sample_rate = 44100
        add=0
        for subdir in self.files:
            #path_to_person=subdir
            count_of_files=len(glob.glob(subdir + '/*.wav'))  
            subdir=subdir[0:-1]
            idx=data_annotated[data_annotated['id']==subdir.split('\\')[-1]].index.values[0]
            self.data_annotated.iloc[add:add+count_of_files,:]=np.hstack((np.transpose([[subdir]*count_of_files]),np.array([data_annotated.iloc[idx,1:]]*count_of_files)))
            add+=count_of_files
        self.device = torch.device(device) if device else torch.device("cuda" if torch.cuda.is_available() else "cpu")
        self.transform = transform
        self.extraction = extract_features(sr=self.sample_rate)
        
                
    def _remove_silences(self,signal,sr):
        time_win = 0.05
        amp_thresh = 0.005
        
        # Resampling
        signal_rs = torchaudio.transforms.Resample(sr, self.sample_rate) 
        signal_rs = signal_rs(signal)
        signal_length = signal_rs.size()[1]
        
        # Normalizing
        signal_nr = 0.9 * (signal_rs/(signal_rs.max())) # c_i(t)
        
        # Equation 2
        signal_I = []
        for j in range(0, math.floor(signal_length/(self.sample_rate*time_win))):
            j_mu_lam = j * self.sample_rate * time_win
            j1_mu_lam = (j+1) * self.sample_rate * time_win # (j+1)_mu_lam
            signal_I.append(signal_nr[0, int(j_mu_lam) : int(j1_mu_lam)])

        sig_I = torch.stack(signal_I)
        sig_I = torch.flatten(sig_I) # (393, 2205)
        sig_I = torch.unsqueeze(sig_I, 0) #C_I(t)
        
        # Equation 3
        silenced_signal = []
        for j in range(sig_I.size()[1]):
            if np.abs(sig_I[0,j]) >= amp_thresh:
                silenced_signal.append(sig_I[0,j])
                
        silenced_signal = torch.tensor(silenced_signal)
        silenced_signal = torch.unsqueeze(silenced_signal, 0)
        
        return silenced_signal      
        
    def __len__(self):
        return self.data_annotated.shape[0]
        
    def __getitem__(self, index):
        path=glob.glob(self.data_annotated.iloc[index,0] + '/*.wav')
        audio,sr=torchaudio.load(np.random.choice(path))
        silence_removed_audio=self._remove_silences(signal=audio,sr=sr)
        features_extracted=self.extraction.mfccs(signal=silence_removed_audio)
        return features_extracted, self.data_annotated.iloc[index,2]
    
    def get_processed(self):
        '''
        Returns the audio data with all the processings/transformations applied
        '''
        pass
    
    
    
class extract_features:
    '''
    Extracts all of the features from the processed audio-files.
    '''
    def __init__(self, sr):
        #self.signal = signal
        self.sr = sr
        self.melspec_args = {
            "f_max": 44100//2,
            "n_fft": 4096 ,
            "n_mels": 128,
            "win_length": 4096 # Frame size 
         }
        self.mel_cep_coeffs = torchaudio.transforms.MFCC(
                sample_rate=self.sr,
                n_mfcc=65,
                melkwargs=self.melspec_args
                )

    # MFCC
    def mfccs(self,signal):
        mfcc = self.mel_cep_coeffs(signal)
        # MFCC Velocity(∆)
        mfcc_vel = torchaudio.functional.compute_deltas(mfcc)
        # MFCC Acceleration(∆∆)
        mfcc_acc = torchaudio.functional.compute_deltas(mfcc_vel)
        if mfcc.shape[0]==1 & mfcc_vel.shape[0]==1 and mfcc_acc.shape[0]==1:
            return torch.stack((mfcc[0,:,:],mfcc_vel[0,:,:],mfcc_acc[0,:,:]))
        else:
            return torch.stack((mfcc,mfcc_vel,mfcc_acc))

    #kurtosis
    def kurtosis(self):
        kurtosis_var = kurtosis(self.signal)
        return kurtosis_var
    
    #Zero crossing rate
    def zcr(self, frame_length=4096, hop_length=2048):
        # Coversion to np array    
        signal = np.array(self.signal)
        signal = signal.reshape((len(signal[0,:]),))

        # Extracting zcr 
        zcr_signal = librosa.feature.zero_crossing_rate(signal, frame_length=frame_length, hop_length=hop_length)
        return zcr_signal

class SMOTE:
    def __init__(self, signals_arr: list, anchor):
        euc_dist = self._euc_dist(signals_arr, anchor)
        smote = self._smote(signal, euc_dist)

        return smote


    def _euc_dist(signals, anchor):
        euc_dist = []
        for sig in range(len(signals)):

            if not len(signals[anchor].t())==len(signals[sig].t()):
                # Condition which signal to pad
                sig_pad = signals[anchor] if (len(signals[anchor].t()) < len(signals[sig].t())) else signals[sig]

                # Padding 
                num_missing_samples = np.abs(len(signals[sig].t()) - len(signals[anchor].t()))
                last_dim_padding = (0, num_missing_samples)
                signal = torch.nn.functional.pad(sig_pad, last_dim_padding)

                # Signal with highest samples
                sig_high = signals[anchor] if (len(signals[anchor].t()) > len(signals[sig].t())) else signals[sig]

                # Calculating Euclidean distance
                dist = np.linalg.norm(signal - sig_high)
                euc_dist.append(dist)
        
        return min(euc_dist)            

    def _smote(signal: list, euc_dist):
        u = np.random.uniform(0,1)
        x_smote = signal + u * (euc_dist)

        return x_smote       

if __name__=='__main__':
    processed=preprocessed(path_to_csv='D:\GWoC\CovidFromCough\COSWARA\Coswara-Data\combined_data.csv',path_to_data='D:\GWoC\CovidFromCough\COSWARA\Coswara-Data\Extracted_data')
    signal, annot = processed[2]
    print(signal.shape, annot)


    '''
    #####################
    #    EXAMPLE RUN
    #####################
    processed=preprocessed(path_to_csv='combined_data.csv',path_to_data='Extracted_Data')
    signal, sr = processed[2]

    ## Feature extraction
    feature_extraction = extract_features(signal, sr)
    mfcc = feature_extraction.mfcc()
    mfcc_vel = feature_extraction.mfcc_del(mfcc)
    mfcc_acc = feature_extraction.mfcc_del(mfcc_vel)

    kurtosis = feature_extraction.kurtosis()
    zcr = feature_extraction.zcr(4096, 2048)

    print(mfcc.shape)
    print(mfcc_vel.shape)
    print(mfcc_acc.shape)
    print(kurtosis.shape)
    print(zcr.shape)


    '''


