import torch
from torch import nn


'''
2 CNN architectures are designed following the optimal 
hyperparameters as proposed in the paper.
CNN_1: α1=48, α2=2, α3=0.3, α4=16, β3=128, β4=130 
CNN_2: α1=48, α2=2, α3=0.3, α4=16, β3=128, β4=130 
where, 
α1 = No. of conv. filters
α2 = Size of the conv. kernel
α3 = Dropout rate
α4 = No. of dense units

β3 = Batch size
β4 = No. of epochs

Input: (1, 65, 99)
Output: (-1, 2) 

Outputs 2 classes: Covid +ve or -ve
'''

class CNN_1(nn.Module):
    def __init__(self):
        super().__init__()

        self.conv = nn.Sequential(
            nn.Conv2d(
                in_channels = 1,
                out_channels= 48, #alpha-1
                kernel_size = 2,  #alpha-2
                stride = 1,
                padding = 2
            ),
            nn.ReLU(),
            nn.MaxPool2d(kernel_size=2),
            nn.Dropout(p=0.3) #alpha-3
        )

        self.flatten = nn.Flatten()
        self.linear_1 = nn.Linear(48*34*51, 16)  #alpha-4
        self.linear_2 = nn.Linear(16, 8)
        self.linear_3 = nn.Linear(8, 2)
        self.softmax = nn.Softmax()

    def forward(self, input_data):

        x = self.conv(input_data)
        x = self.flatten(x)
        logits = self.linear_1(x)
        logits = self.linear_2(logits)
        logits = self.linear_3(logits)
        predictions = self.softmax(logits)

        return predictions

class CNN_2(nn.Module):
    def __init__(self):
        super().__init__()
        self.conv = nn.Sequential(
            nn.Conv2d(
                in_channels = 1,
                out_channels = 96, #alpha-1
                kernel_size = 2, #alpha-2
                stride = 1,
                padding = 2
            ),
            nn.ReLU(),
            nn.MaxPool2d(kernel_size=2),
            nn.Dropout(p=0.1) #alpha-3
        )

        self.flatten = nn.Flatten()
        self.linear_1 = nn.Linear(96*34*51, 16)  #alpha-4
        self.linear_2 = nn.Linear(16, 8)
        self.linear_3 = nn.Linear(8, 2)
        self.softmax = nn.Softmax()

    def forward(self, input_data):

        x = self.conv(input_data)
        x = self.flatten(x)
        logits = self.linear_1(x)
        logits = self.linear_2(logits)
        logits = self.linear_3(logits)
        predictions = self.softmax(logits)

        return predictions



if __name__=='__main__':
    cnn = CNN_1()




