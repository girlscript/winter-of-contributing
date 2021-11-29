# Multi-agent reinforcement learning

## Video link : [Multi-agent reinforcement learning](https://drive.google.com/file/d/1y4jzPlNJlsxLeETT39gvcukkFuMdkJ7s/view?usp=sharing)

## Fristly lets have a Brief Introduction to Reinforcement Learning
- Reinforcement stems from using machine learning to optimally control an agent in an environment. It works by learning a policy, a function that maps an observation obtained from its environment to an action. Policy functions are typically deep neural networks, which gives rise to the name “deep reinforcement learning.”
- The goal of reinforcement learning is to learn an optimal policy, a policy that achieves the maximum expected reward from the environment when acting. The reward is a single dimensionless value that is returned by the environment immediately after an action. The whole process can be visualized like this:


![image](https://user-images.githubusercontent.com/63282184/143874827-3c3c8287-6400-4651-bb0b-be37b0808a2f.png)

This paradigm of reinforcement learning encompasses and incredible variety of scenarios, like a character in a computer game (e.g. Atari where the reward is the change in score), a robot delivering food in a city (where the agent is rewarded positively for successfully completing a trip and penalized for taking too long), or a bot trading stocks (where the reward is money gained).

## Multiagent Reinforcement Learning
- Learning to play multiplayer games represents many of the most profound achievements of artificial intelligence in our lifetimes. 
- These accomplishments include learning to play Go, DOTA 2, and StarCraft 2 to superhuman levels of performance. Using reinforcement learning to control multiple agents, unsurprisingly, is referred to as multi-agent reinforcement learning. 
- In general it’s the same as single agent reinforcement learning, where each agent is trying to learn it’s own policy to optimize its own reward. Using a central policy for all agents is possible, but multiple agents would have to communicate with a central server to compute their actions (which is problematic in most real world scenarios), so in practice decentralized multi-agent reinforcement learning is used. 
- This can be visualized as follows:

![image](https://user-images.githubusercontent.com/63282184/143874947-a5002e33-2244-4520-a9e0-26fa0ad9e756.png)

Multi-agent deep reinforcement learning, what we’ll be doing today, similarly just uses deep neural networks to represent the learned policies in multi-agent reinforcement learning.


## Conclusion:

Multi-agent reinforcement learning is the study of numerous artificial intelligence agents cohabitating in an environment, often collaborating toward some end goal. When focusing on collaboration, it derives inspiration from other social structures in the animal kingdom. It also draws heavily on game theory
