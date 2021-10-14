# Deep Q-Networks
---
## What is Deep Q-learning?
1) We know that Q-learning is a form of Reinforcement Learning which uses Q values. Q values are those values which tell us how efficient it is to take an action 'A' at a particular state 'S'.<br>
2) These Q-values helps to improve the behaviour of a learning agent.<br>
3) But if an environment which includes many states and actions per state is needed to train an agent, we need to use a method other than Q-learning.<br>
4) This is done to not use a lot of memory on updation and saving new Q-tables as the number of states has increased.Other than that the time required to adapt to these stages will also be huge.<br>
5) Hence another approach to Q-learning known as Deep Q-learnings is used here.<br> 
## Introduction to Deep Q-Networks
1) To find the optimal or approximate Q-value function we make use of neural networks.<br>
2) Here the input given is the: State<br>
3) The output generated is: Q-values of all actions that can be performed or that are possible.<br>
## Main mathematical formula involved
1) The user stores all the past actions in memory, which means all the actions learned are easily stored in memory.<br>
2) Maximum Q-Value or the output of Deep Q-Networks determines the next action.<br>
3) To find out this Q-Values table we make use of an an approximating function denoted by-Q(s,a; θ).<br>
Here θ represents the weights/agents that can be trained.<br>
4) We know the Bellman Equation is used to derive the cost function-<br>
![bellman formula](https://user-images.githubusercontent.com/34717612/137270732-cb4767f6-8d16-498e-9c4b-7783ffd629fd.png)<br>
So now to minimize the cost function, we make use of the approximation function and hence the minimum cost function is found when the Q-value reaches its converged value.<br>
![costfuntion](https://user-images.githubusercontent.com/34717612/137271439-e9ec1f6f-9fbe-4869-8c78-ba62e98f0a10.png)<br>
## Algorithm
1) We first give the 'states' as an input to our Deep Q-Networks.<br>
2) As the ouput all the Q-values of possible actions is returned.<br>
3) We then select a random action 'A' and by using epsilon-greedy policy assign it a probability 1-eps(epsilon).<br>
4) Select an action that has maximum Q-Value and perform it in a state, say 'S'.<br>
5) Then move to new state(s') and store the transition in a buffer.<br>
6) Similarly random batches of transitions are peformed by the buffer and the cost function is calculated using the above formula.<br>
7) We then minimize this cost function by performing gradient descent.<br>
8) The above steps are repeated for the total number of episodes/environments present and the actual network weights are copied to the target network weights.<br>
## Advantages
1) Helps us in dealing with complex enviroments where there are many states and many actions associated with a particular state.<br>
2) Reduces time and memory usage to calculate Q-Values for Q-Tables.<br>
3) There are separate target networks(pediction and target) to decrease instabilities.<br>
## Disadvantages
1) Netural networks can take only one type of input-<br>
a) Either one state-action as an input which returns a single output value.<br>
b) One state as input and which returns output of Q-Values of only those actions which are discrete.<br>
## References 
1) https://towardsdatascience.com/qrash-course-deep-q-networks-from-the-ground-up-1bbda41d3677<br>
2) https://www.analyticsvidhya.com/blog/2019/04/introduction-deep-q-learning-python/
