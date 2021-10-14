# Deep Q-Networks: 
## Deep Q Learning 

### In this documentation , You Guys will get know all about Reinforcement learning and Deep Q Networks under it.


Deep RL is relevant even if you’re not into gaming. Just check out the sheer variety of functions currently using Deep RL for research:

![Image](https://cdn.analyticsvidhya.com/wp-content/uploads/2019/04/Screenshot-2019-04-17-at-3.48.22-PM-768x566.png)

The scope of Deep RL is IMMENSE. This is a great time to enter into this field and make a career out of it.

In this article, I aim to help you take your first steps into the world of deep reinforcement learning. We’ll use one of the most popular algorithms in RL, 
deep Q-learning, to understand how deep RL works. And the icing on the cake? We will implement all our learning in an awesome case study using Python.

![Image](https://cdn.analyticsvidhya.com/wp-content/uploads/2019/04/Screenshot-2019-04-16-at-5.46.01-PM.png)

## RL Agent-Environment 


A reinforcement learning task is about training an agent which interacts with its environment. The agent arrives at different scenarios known as states by performing actions. Actions lead to rewards which could be positive and negative.

The agent has only one purpose here – to maximize its total reward across an episode. This episode is anything and everything that happens between the first state and the last or terminal state within the environment.
We reinforce the agent to learn to perform the best actions by experience. This is the strategy or policy.

## Why ‘Deep’ Q-Learning?

Q-learning is a simple yet quite powerful algorithm to create a cheat sheet for our agent. This helps the agent figure out exactly which action to perform.

But what if this cheatsheet is too long? Imagine an environment with 10,000 states and 1,000 actions per state.
This would create a table of 10 million cells. Things will quickly get out of control!

## Deep Q-Networks

In deep Q-learning, we use a neural network to approximate the Q-value function. 
The state is given as the input and the Q-value of all possible actions is generated as the output.

## Implementation -
Introduction
I have always been fascinated with games. The seemingly infinite options available to perform an action under a tight timeline – it’s a thrilling experience. There’s nothing quite like it.

So when I read about the incredible algorithms DeepMind was coming up with (like AlphaGo and AlphaStar), I was hooked. I wanted to learn how to make these systems on my own machine. And that led me into the world of deep reinforcement learning (Deep RL).

Deep RL is relevant even if you’re not into gaming. Just check out the sheer variety of functions currently using Deep RL for research:




### We will use the keras-rl library here which lets us implement deep Q-learning out of the box.

 
Step 1: Install keras-rl library
From the terminal, run the following code block:
The keras-rl library here which lets us implement deep Q-learning out of the box.

         git clone https://github.com/matthiasplappert/keras-rl.git
         cd keras-rl
         python setup.py install
         
Step 2: Install dependencies for the CartPole environment
Assuming you have pip installed, you need to install the following libraries:

         pip install h5py
         pip install gym
         
Step 3: Let’s get started!
First, we have to import the necessary modules:

           import numpy as np
           import gym
 
           from keras.models import Sequential
           from keras.layers import Dense, Activation, Flatten
           from keras.optimizers import Adam

           from rl.agents.dqn import DQNAgent
           from rl.policy import EpsGreedyQPolicy
           from rl.memory import SequentialMemory

Then, set the relevant variables:

         ENV_NAME = 'CartPole-v0'

# Get the environment and extract the number of actions available in the Cartpole problem
          env = gym.make(ENV_NAME)
          np.random.seed(123)
          env.seed(123)
          nb_actions = env.action_space.n
          Next, we will build a very simple single hidden layer neural network model:

           model = Sequential()
           model.add(Flatten(input_shape=(1,) + env.observation_space.shape))
           model.add(Dense(16))
           model.add(Activation('relu'))
           model.add(Dense(nb_actions))
           model.add(Activation('linear'))
           print(model.summary())
Now, configure and compile our agent. We will set our policy as Epsilon Greedy and our memory as Sequential Memory because we want to store the result of actions we performed and the rewards we get for each action.

           policy = EpsGreedyQPolicy()
           memory = SequentialMemory(limit=50000, window_length=1)
           dqn = DQNAgent(model=model, nb_actions=nb_actions, memory=memory, nb_steps_warmup=10,
           target_model_update=1e-2, policy=policy)
           dqn.compile(Adam(lr=1e-3), metrics=['mae'])

# Okay, now it's time to learn something! We visualize the training here for show, but this slows down training quite a lot. 
           dqn.fit(env, nb_steps=5000, visualize=True, verbose=2)
           
Test our reinforcement learning model:

         dqn.test(env, nb_episodes=5, visualize=True)
         
         
## Output 

![Image](https://cdn.analyticsvidhya.com/wp-content/uploads/2017/01/11103833/20160503205408128.gif)
