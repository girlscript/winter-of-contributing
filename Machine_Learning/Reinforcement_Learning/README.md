<div align = 'center'>
  <h1> 🟢 Chapter 4 -  Reinforcement Learning 🟢 </h1>
  </div>
  
<p align = 'justify'>
  Reinforcement Learning is a feedback-based Machine learning technique in which an agent learns to behave in an environment by performing the actions and seeing the results of actions. For each good action, the agent gets positive feedback, and for each bad action, the agent gets negative feedback or penalty.</p>
  
**Key Features about Re-inforcement Learning:**
* In Reinforcement Learning, the agent learns automatically using feedbacks without any labeled data, unlike supervised learning.
* Since there is no labeled data, so the agent is bound to learn by its experience only.
* RL solves a specific type of problem where decision making is sequential, and the goal is long-term, such as game-playing, robotics, etc.
* The agent interacts with the environment and explores it by itself. The primary goal of an agent in reinforcement learning is to improve the performance by getting the maximum positive rewards.
* The agent learns with the process of hit and trial, and based on the experience, it learns to perform the task in a better way. Hence, we can say that _**"Reinforcement learning is a type of machine learning method where an intelligent agent (computer program) interacts with the environment and learns to act within that."**_ How a Robotic dog learns the movement of his arms is an example of Reinforcement learning.
* It is a core part of Artificial intelligence, and all AI agent works on the concept of reinforcement learning. Here we do not need to pre-program the agent, as it learns from its own experience without any human intervention.

**Advantages of Re-inforcement Learning:**
* In RL, the agent is not instructed about the environment and what actions need to be taken.
* It is based on the hit and trial process.
* The agent takes the next action and changes states according to the feedback of the previous action.
* The agent may get a delayed reward.
* The environment is stochastic, and the agent needs to explore it to reach to get the maximum positive rewards.

Let's discuss more about the reinforcement learning,

********************************************************************
## 📌 List of Contents
  
| Sl. No. | Topics | Audio | Documentation | Video |
| :-: | :-: | :-: | :-: | :-: |
| 4.1 | **Introduction to RL: Definition and Types** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML_4_1_Introduction_to_RL_Definition_and_Types(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML_4_1_Introduction_to_RL_Definition_and_Types_(D).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML_4_1_Introduction_to_RL_Definition_and_Types_(V).md) |
| 4.2 | **Contrast in Supervised, Unsupervised and Reinforcement Learning** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML_4_2_Contrast_in_Supervised_Unsupervised_and_Reinforcement_Learning_(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML_4.2_Contrast_Supervised_Unsupervised_Reinforncement(D).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML_4_2_Contrast_in_Supervised_Unsupervised_and_Reinforcement_Learning_(V).md) |
| 4.3 | **SARSA** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML_4_3_SARSA_(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML_4_3_SARSA_(D).ipynb) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML_4_3_SARSA_(V).md) |
| 4.4 | **Q-Learning** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML_4_4_Q-Learning%20(A).md) | [Click  Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML_4_4_Q-Learning_(D).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML_4_4_Q-Learning_(V).md) |
| 4.5 | **Deep Q-Networks** |[Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML_4_5_Deep_Q-Networks_(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML_4_5_Deep_Q-Networks_(D).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML_4_5_Deep_Q-Networks_(V).md) |
| 4.6 | **Implement SARSA** |❌ | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML_4_6_Implement_SARSA_(D).ipynb) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML_4_6_Implement%20SARSA_(V).md) |
| 4.7 | **Implement Q-Learning** |❌| [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML_4_7_Implement_Q_Learnings_(D).ipynb) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML_4_7_Implement_Q-Learnings_(V).md) |
| 4.8 | **Implement Deep Q-Networks** | ❌ | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML_4_8_Implement%20DQNs_(D).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML_4_8_Implement%20DQNs_(V).md) |
| 4.9 | **Practical Applications** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML_4_9_Practical_Applications_of_Reinforcement_Learning(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML_4_9_Practical%20Applications%20of%20Reinforcement%20Learning_(D).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML_4_9_Practical%20Applications%20of%20Reinforcement%20Learning_(V).md) |
| 4.10 | **Challenges and Future Scopes** | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML_4_10_Challenges%20and%20Future%20Scope%20of%20Reinforcement%20Learning_(A).md) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML%204.10%20Challenges%20and%20Future%20Scope%20(D)%20.ipynb) | [Click Here](https://github.com/girlscript/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/ML_4_10%20Challenges%20and%20Future%20Scope%20of%20Reinforcement%20Learning(V).md) |


--------------------------------------------------------------

### Happy Contributions! 🚀
## GW:snowflake:C21
