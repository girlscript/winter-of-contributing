# **Multi-agent reinforcement learning**

## **Outline**
* Introduction
* Relation with Single-agent reinforcement learning
* Libraries used for MARL
* Types of MARL
* Implementing MARL for Pistonball
* Applications of MARL
* Summary
* References and Resources

## **Introduction**
Multi-agent reinforcement learning is the study of numerous artificial intelligence agents cohabitating in an environment, often collaborating toward some end goal. When focusing on collaboration, it derives inspiration from other social structures in the animal kingdom. It also draws heavily on game theory.Multi-agent systems can be used to address problems in a variety of domains, including robotics, distributed control, telecommunications, and economics.

![MARL](https://miro.medium.com/max/1400/1*PqoJzG3aX9MXAd_cxf2OTQ.png)

## **Relation with Single-agent reinforcement learning**
Using reinforcement learning to control multiple agents, unsurprisingly, is referred to as multi-agent reinforcement learning. In general it’s the same as single agent reinforcement learning, where each agent is trying to learn it’s own policy to optimize its own reward. Using a central policy for all agents is possible, but multiple agents would have to communicate with a central server to compute their actions (which is problematic in most real world scenarios), so in practice decentralized multi-agent reinforcement learning is used. 

## **Libraries used for MARL**
Gym is a famous library in reinforcement learning developed by OpenAI that provides a standard API for environments so that they can be easily learned with different reinforcement learning codebases, and so that for the same learning code base different environments can be easily tried. PettingZoo is a newer library that’s like a multi-agent version of Gym.

## **Types of MARL**
1. Cooperative
2. Competitive
3. Some mix of the two

## **Implementing MARL for Pistonball**
In it, each piston is an agent that can be separately controlled by a policy.The action the policy returns is the amount to raise or lower the piston (from -4 to 4 pixels). The goal is for the pistons to learn how to work together to roll the ball to the left wall as fast as possible. Each piston agent is rewarded negatively if the ball moves right, positively if the ball moves left, and receives a small amount of negative reward at every time step to incentivize moving to the left as fast as possible.A plethora of techniques exist to learn a single agent environment in reinforcement learning. These serve as the basis for algorithms in multi-agent reinforcement learning. The simplest and most popular way to do this is to have a single policy network shared between all agents, so that all agents use the same function to pick an action. Each agent can train this shared network using any single agent method. This is typically referred to as parameter sharing. 

![pistonball](https://miro.medium.com/max/1838/1*gjbS52v4ZPlX24GrQzfnuw.png)

## **Applications of MARL**
* Popular strategy games
* Shown to be a catalyst for interesting emergent behavior
* Communication between different autonomous vehicles

## **Summary**
The span between the capabilities of state-of-the-art Multi-agent reinforcement learning and human social capabilities underscores just how far we have to go as a research discipline to achieve advanced artificial intelligence. It can be considered as one of the most important research domains, with its relevance to language development, empathy, imagination, ethics and other qualities we associate with being human.

## **References and Resources**
* https://towardsdatascience.com/ive-been-thinking-about-multi-agent-reinforcement-learning-marl-and-you-probably-should-be-too-8f1e241606ac
* https://towardsdatascience.com/multi-agent-deep-reinforcement-learning-in-15-lines-of-code-using-pettingzoo-e0b963c0820b
* https://medium.com/@RemiStudios/multi-agent-reinforcement-learning-3f00b561f5f0
* https://miro.medium.com/max/1400/1*PqoJzG3aX9MXAd_cxf2OTQ.png
* https://miro.medium.com/max/1838/1*gjbS52v4ZPlX24GrQzfnuw.png
