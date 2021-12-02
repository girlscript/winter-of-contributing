import torch
from utils import preprocessed
from torch.utils.data import DataLoader
from model import CNN_1
import tqdm
import torch.nn.functional as F

N_epochs=30
batch_size=32
num_workers=2
device = torch.device('cuda') if torch.cuda.is_available() else torch.device('cpu')
train_dataset = preprocessed(path_to_csv='combined_data.csv',path_to_data='Extracted_Data')
train_dataloader = DataLoader(train_dataset, batch_size=batch_size, shuffle=True)
model = CNN_1().to(device)
optimizer = torch.optim.Adam(model.parameters())
loss=F.cross_entropy
total_loss=0
for epoch in tqdm(range(0, N_epochs + 1)):
  for index,batch in enumerate(train_dataloader):
    optimizer.zero_grad()
  
    signals = batch[0]
    target_labels = batch[1]
    output = model(signals.to(device))
    loss_train= loss(output, target_labels)
    total_loss += loss_train.item()
  
    loss_train.backward()
    optimizer.step()
