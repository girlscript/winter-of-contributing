## Q Learning
## [Click here to listen the audio](https://drive.google.com/file/d/1dxYijYTqHj6XDH4TtKSCrV5AUnVIu5ip/view?usp=sharing)

- Reinforcement Learning briefly is a paradigm of Learning Process in which a learning agent learns, overtime, to behave optimally in a certain environment by interacting continuously in the environment. 
- The agent during its course of learning experience various different situations in the environment it is in. 
- These are called states. The agent while being in that state may choose from a set of allowable actions which may fetch different rewards(or penalties). 
- The learning agent overtime learns to maximize these rewards so as to behave optimally at any given state it is in.

![image](https://user-images.githubusercontent.com/79050917/143853035-266eff0b-6aba-4d74-ae9a-efa4c7efa09b.png)

**Advantages:** 
- One of the strengths of Q-Learning is that it is able to compare the expected utility of the available actions without requiring a model of the environment. 
- Reinforcement Learning is an approach where the agent needs no teacher to learn how to solve a problem.

**Disadvantage** 
- The main drawback of Q-learning is that the learning process is expensive for the agent, specially, in the beginning steps. 
- Because, every state-action pair should be visited frequently in order to converge to the optimal policy.

![image](https://user-images.githubusercontent.com/79050917/143852902-b433c9fc-3522-4ff5-9c49-5afcd2b6ce9e.png)

**Limitations:**
- The standard Q-learning algorithm (using a {\displaystyle Q}Q table) applies only to discrete action and state spaces. 
- Discretization of these values leads to inefficient learning, largely due to the curse of dimensionality. 
- However, there are adaptations of Q-learning that attempt to solve this problem such as Wire-fitted Neural Network Q-Learning.

![image](https://user-images.githubusercontent.com/79050917/143852963-df83af7c-aa42-457d-b07b-a75bc668f9bc.png)

**Overview:**
- Q-learning is a model-free reinforcement learning algorithm to learn the value of an action in a particular state. 
- It does not require a model of the environment (hence "model-free"), and it can handle problems with stochastic transitions and rewards without requiring adaptations.
