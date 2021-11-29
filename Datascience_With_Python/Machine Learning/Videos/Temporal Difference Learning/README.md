# Temporal Difference Learning

## Video Link : [Temporal Difference Learning](https://drive.google.com/file/d/12QWOrnVWdrk4cMGZMa-4YMC7uF5-cNcK/view?usp=sharing)

- Temporal difference (TD) learning is an approach to learning how to predict a quantity that depends on future values of a given signal. The name TD derives from its use of changes, or differences, in predictions over successive time steps to drive the learning process. 
- The prediction at any given time step is updated to bring it closer to the prediction of the same quantity at the next time step. 
- It is a supervised learning process in which the training signal for a prediction is a future prediction.
-  TD algorithms are often used in reinforcement learning to predict a measure of the total amount of reward expected over the future, but they can be used to predict other quantities as well. Continuous-time TD algorithms have also been developed.

### Temporal-Difference(TD) method is a blend of the Monte Carlo (MC) method and the Dynamic Programming (DP) method.

Below are key characteristics of Monte Carlo (MC) method:

1.There is no model (the agent does not know state MDP transitions)

2.the agent learns from sampled experience (Similar to MC)

3.Like DP, TD methods update estimates based in part on other learned estimates, without waiting for a final outcome (they bootstrap like DP).

4.It can learn from incomplete episode thus this method can be used in continuous problems as well

5. TD updates a guess towards a guess and revise the guess based on real experience

To understand this better, consider a real-life analogy; if Monte Carlo learning is like an annual examination where student completes its episode at the end of the year. 

Similarly, we have TD learning, which can be thought like a weekly or monthly examination (student can adjust their performance based on this score (reward received) after every small interval and the final score is the accumulation of all weekly tests (total rewards)).

![image](https://user-images.githubusercontent.com/63282184/143806478-cf0e2e8a-e5a3-43b3-8b10-3bcb8c621713.png)


## TD(0)
- TD(0) is the simplest form of TD learning. In this form of TD learning, after every step value function is updated with the value of the next state and along the way reward obtained. 
- This observed reward is the key factor that keeps the learning grounded and algorithm converges after a sufficient number of sampling (in the limit of infinity). Below is the backup diagram of TD(0) and an example of TD(0) for our gem collection and examination example.


![image](https://user-images.githubusercontent.com/63282184/143806513-58e0df6e-3928-44d1-afba-4eac59155027.png)

- TD(0) can be represented with the equation in the below diagram. Equation 1 is generally shown in literature but I find the same equation written as per Equation 2 is more intuitive. We have α as a learning factor, γ as a discount factor. 
- Here the value of a state S is getting updated in the next time step (t+1) based on the reward r t+1 observed after the time step t with the expected value of S in time step t+1.
-  So its the bootstrap of S at time step t using the estimation from time step t+1 while r t+1 is the observed reward (real thing that makes the algorithm grounded) TD target and TD error as shown below are two important components of the equation which are used in many other areas of RL.

![image](https://user-images.githubusercontent.com/63282184/143806718-aba0589d-5032-464e-b952-14d46f542e3f.png)


##  limitations 
TD is a biased estimation

TD is more sensitive to the initial value

## Conclusion and advantages :
- TD can learn in every step online or offline
- TD can learn from the incomplete sequence
- TD can work in non-terminating environments (continuing)
- TD has a lower variance compared to MC as depends on one random action, transition, reward
- Usually more efficient than MC
- TD exploits Markov property and thus more effective in Markov environments
