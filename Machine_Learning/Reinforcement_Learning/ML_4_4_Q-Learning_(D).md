# **Q Learning**
![](https://github.com/ayushi424/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/Assets/q3.jpg)

Let's understand what is Q Learning in Machine Learning.

## **Introduction to Q Learning**

- Q-learning is a model-free reinforcement learning algorithm to learn the value of an action in a particular state .i.e. it does not require a model of the environment, and it can handle problems with stochastic transitions and rewards without requiring adaptations
- Q-learning is a values-based learning algorithm. Value based algorithms updates the value function based on an equation(particularly Bellman equation). Whereas the other type, policy-based estimates the value function with a greedy policy obtained from the last policy improvement.

## **What is Q in Q learning**

‘Q’ in Q-learning stands for quality.
-  Quality here represents how useful a given action is in gaining some future reward.

## **Working of Q Learning**

### **Q Table** 

Q-Table is the data structure used to calculate the maximum  expected future rewards for action at each state.

### **Q Function** 

The Q-function uses the Bellman equation and takes two inputs: state (s) and action (a).

![](https://github.com/ayushi424/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/Assets/q1.png)

### **Algorithm** 
- Step 1: Initialize the Q-Table.
- step 2: Choose an Action.
- Step 3: Perform an Action.
- Step 4: Measure Reward.
- Step 5: Evaluate.



![](https://github.com/ayushi424/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/Assets/q2.png)

## **Applications**
- Self-driving cars
- Healthcare
- Marketing and advertising
- Robotics manipulation etc.


### **Some Useful Resources**

- [Guide to Q learning](https://towardsdatascience.com/a-beginners-guide-to-q-learning-c3e2a30a653c)
- [Introduction to Q learning](https://blog.floydhub.com/an-introduction-to-q-learning-reinforcement-learning/)


**Image Credits:** [towardsdatascience](https://towardsdatascience.com/a-beginners-guide-to-q-learning-c3e2a30a653c)
[analyticsvidya](https://www.analyticsvidhya.com/blog/2021/04/q-learning-algorithm-with-step-by-step-implementation-using-python/)
