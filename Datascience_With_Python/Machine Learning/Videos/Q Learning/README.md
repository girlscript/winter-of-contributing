## Q Learning

## VIDEO LINK: [Q Learning](https://drive.google.com/file/d/1hu43VLVWniE73nJB5W1MkUk9FeQcwolj/view?usp=sharing)

## What is Reinforcement learning.

Reinforcement Learning (RL) can be defined as the study of taking optimal 
decisions utilizing experiences. It is mainly intended to solve a specific kind 
of problem where the decision making is successive and the goal or 
objective is long-term, this includes robotics, game playing, or even logistics 
and resource management.
In simple words, unlike the other machine learning algorithms, the ultimate 
goal of RL is not to be greedy all the time by looking for quick immediate 
rewards, rather optimize for maximum rewards over the complete training 
process.

## MUST-KNOW TERMINOLOGIES:

**Agent:**

The agent in RL can be defined as the entity which acts as a learner 
and decision-maker. It is empowered to interact continually, select its own 
actions, and respond to those actions.

**Environment:**

It is the abstract world through which the agent moves. The 
Environment takes the current state and action of the agent as input and 
returns its next state and appropriate reward as the output.

**States:**

The specific place at which an agent is present is called a state. This 
can either be the current situation of the agent in the environment or any of 
the future situations.

**Actions:**

This defines the set of all possible moves an agent can make within 
an environment.


**Reward or Penalty:**

This is nothing but the feedback by means of which the 
success or failure of an agent’s action within a given state can be measured. 
The rewards are used for the effective evaluation of an agent’s action.

**Policy or Strategy:**

It is mainly used to map the states along with their 
actions. The agent is said to use a strategy to determine the next best action 
based on its current state.


![image](https://user-images.githubusercontent.com/63282184/137090006-e3d01906-4a26-45fd-acd3-a0276b5bdbbf.png)


Of all the types of algorithms available in reinforcement learning, ever 
wondered why this Q-learning has always been the sought-after one?

Q-learning is a model-free, value-based, off-policy learning algorithm.

• Model-free: The algorithm that estimates its optimal policy without 
the need for any transition or reward functions from the environment.

• Value-based: Q learning updates its value functions based on 
equations, (say Bellman equation) rather than estimating the value 
function with a greedy policy.

• Off-policy: The function learns from its own actions and doesn’t 
depend on the current policy.

## Example:

Scenario – Robots in a Warehouse

A growing e-commerce company is building a new warehouse, and the 
company would like all of the picking operations in the new warehouse to 
be performed by warehouse robots.

• In the context of e-commerce warehousing, “picking” is the task of 
gathering individual items from various locations in the warehouse in 
order to fulfill customer orders.

After picking items from the shelves, the robots must bring the items to a 
specific location within the warehouse where the items can be packaged for 
shipping.

In order to ensure maximum efficiency and productivity, the robots will 
need to learn the shortest path between the item packaging area and all 
other locations within the warehouse where the robots are allowed to 
travel.

• We will use Q-learning to accomplish this task!

## Import Required Libraries

#import libraries
import numpy as np

Define the Environment
The environment consists of states, actions, and rewards. States and 
actions are inputs for the Q-learning agent, while the possible actions are 
the agent’s outputs

## States


The states in the environment are all of the possible locations within the 
warehouse. 

Some of these locations are for storing items (black squares), 
while other locations are aisles that the robot can use to travel throughout 
the warehouse (white squares). The green square indicates the item 
packaging and shipping area.

The black and green squares are terminal states


![image](https://user-images.githubusercontent.com/63282184/137090357-08688269-f35e-4996-9b16-68706c64e5ae.png)


## Actions

The actions that are available to the agent are to move the robot in one of 
four directions:

• Up

• Right

• Down

• Left

## Rewards

The last component of the environment that we need to define is 
the rewards. To help the agent learn, each state (location) in the warehouse 
is assigned a reward value. The agent may begin at any white square, but its 
goal is always the same: to maximize its total rewards! Negative rewards 
(i.e., punishments) are used for all states except the goal.

![image](https://user-images.githubusercontent.com/63282184/137090507-ef34500a-8030-4631-871b-4dda79e3c666.png)


## Train the Model

Our next task is for our agent to learn about its environment by 
implementing a Q-learning model. The learning process will follow these 
steps:

1. Choose a random, non-terminal state (white square) for the agent to 
begin this new episode.

2. Choose an action (move up, right, down, or left) for the current state. 
Actions will be chosen using an epsilon greedy algorithm. This 
algorithm will usually choose the most promising action for the agent, 
but it will occasionally choose a less promising option in order to 
encourage the agent to explore the environment.

3. Perform the chosen action, and transition to the next state (i.e., move 
to the next location).

4. Receive the reward for moving to the new state, and calculate the 
temporal difference.

5. Update the Q-value for the previous state and action pair.

6. If the new (current) state is a terminal state, go to #1. Else, go to #2.

This entire process will be repeated across 1000 episodes. This will provide 
the agent sufficient opportunity to learn the shortest paths between the 
item packaging area and all other locations in the warehouse where the 
robot is allowed to travel, while simultaneously avoiding crashing into any of 
the item storage locations


## What are the advantages of Q-Learning?

One of the strengths of Q-Learning is that it is able to compare the expected 
utility of the available actions without requiring a model of the environment. 

Reinforcement Learning is an approach where the agent needs no teacher to learn 
how to solve a problem. 
