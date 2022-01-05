## SARSA Algorithm
## [Click here to listen the audio](https://drive.google.com/file/d/1qKHADBFG9OFk8zzCvnSxMlGYp23pDGK5/view?usp=sharing)

- SARSA algorithm is a slight variation of the popular Q-Learning algorithm. For a learning agent in any Reinforcement Learning algorithm it’s policy can be of two types:- 
- On Policy: In this, the learning agent learns the value function according to the current action derived from the policy currently being used.
- Off Policy: In this, the learning agent learns the value function according to the action derived from another policy.
- Q-Learning technique is an Off Policy technique and uses the greedy approach to learn the Q-value. SARSA technique, on the other hand, is an On Policy and uses the action performed by the current policy to learn the Q-value.
- State–action–reward–state–action (SARSA) is an algorithm for learning a Markov decision process policy, used in the reinforcement learning area of machine learning.
- It was proposed by Rummery and Niranjan in a technical note with the name "Modified Connectionist Q-Learning" (MCQ-L).

![image](https://user-images.githubusercontent.com/79050917/143870037-f495d123-68e7-4c38-9e58-f42caf5a980c.png)

**Q-learning has the following advantages and disadvantages compared to SARSA:**
- Q-learning directly learns the optimal policy, whilst SARSA learns a near-optimal policy whilst exploring. If you want to learn an optimal policy using SARSA, then you will need to decide on a strategy to decay in greedy action choice, which may become a fiddly hyperparameter to tune.
- Q-learning (and off-policy learning in general) has higher per-sample variance than SARSA, and may suffer from problems converging as a result. This turns up as a problem when training neural networks via Q-learning.
- SARSA will approach convergence allowing for possible penalties from exploratory moves, whilst Q-learning will ignore them. That makes SARSA more conservative - if there is risk of a large negative reward close to the optimal path, Q-learning will tend to trigger that reward whilst exploring, whilst SARSA will tend to avoid a dangerous optimal path and only slowly learn to use it when the exploration parameters are reduced. The classic toy problem that demonstrates this effect is called cliff walking.

![image](https://user-images.githubusercontent.com/79050917/143870079-d50a6bef-c5ec-4055-9906-69ad1111845b.png)

**Overview:**
- SARSA uses the action value function (Q-value) for the action which has been taken in the step and hence it is an on-policy learning. 
- While Q-learning, explores action values for all possible actions in given state and selects the one having the maximum action value. 
- This clearly indicates that Q-Learning is an off policy learning.

![image](https://user-images.githubusercontent.com/79050917/143870122-14f67824-bbac-44c2-b890-9a445255ab63.png)
