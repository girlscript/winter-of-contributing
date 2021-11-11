## Title : GRU
🔴 **Type of Content** : Documentation

🔴 **Domain** : Machine Learning

🔴 **Module** : ML_For_Sequential_Data_&_Visual_Data


*********************************************************************

### Introduction:
1) GRU(Gated Recurrent Unit) is known to be the improvement to a Recurrent Neural Network(RNN).
2) Its main use is to solve vanishing gradient problem which is usually obtained when working with standars RNN.
3) It was explained by Kyunghyun Cho et al in the year of 2014.
4) GRU makes use of two gates to maintain the flow of information and has a very simple architecture.
5) These gates are reset gate and update gate.
### Architecture:
![image](https://user-images.githubusercontent.com/34717612/141144607-10084897-511a-4dc2-be42-413af07ec2d1.png)<br><br>
The above diagram shows a GRU Cell and its gates.<br>
**I) Reset Gate**:- It decides how much past information should be forgotten.Hence, it is responsible to store the short term memory of a network.<br>
**II) Update Gate**:-It updates the old information and decides which new information to use and which to discard.Hence, it is responsible to store the long term memory of a network.<br>
### Algorithm: 
Step 1) Take input of the current value and the previous hidden state in vector format.<br>
Step 2) Calculate the value of each gate by taking the hadmard product between the specified vector and weights for each state.<br>
Step 3) We then apply the sigmoid function as the activation function for each gate.<br>
Step 4) We pass the above obtained value to a tan(h) function and hence obtain the candidate state value.<br>
Step 5) We now calculate the hidden state by using the formula-<br>
![image](https://user-images.githubusercontent.com/34717612/141169829-355aac37-313c-4cca-93b4-f961e6ff55b3.png)<br><br>
### Working Diagram:
![image](https://user-images.githubusercontent.com/34717612/141171057-8514f1ed-a413-4410-93ec-8aa1d939916b.png)<br><br>
### Advantage:
1) Simple and easy to modify.
2) Uses less memory compared to LSTM.
3) Train faster on small/ less training data.
### Disadvantage:
1) When compared with LSTM they are less accurate and slow when there are long sequences of training data.
2) Slow Convergence
### References:
1) https://d2l.ai/chapter_recurrent-modern/gru.html
2) https://www.geeksforgeeks.org/gated-recurrent-unit-networks/
3) https://towardsdatascience.com/illustrated-guide-to-lstms-and-gru-s-a-step-by-step-explanation-44e9eb85bf21
*********************************************************************

### GirlScript Winter of Contributions 2021
