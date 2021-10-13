# **Reinforcement Learning**
Reinforcement learning is a machine learning training method based on rewarding desired behaviours and/or punishing undesired ones. It is a method that is concerned with how software agents should take actions in an environment. It helps you to maximize some portion of the cumulative reward.

![Reinforcement Learning](https://github.com/Shivangik01/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/Assets/Reinforcement_Learning_1.png?raw=true)

​In a way, Reinforcement Learning is the science of making optimal decisions using experiences. Breaking it down, the process of Reinforcement Learning involves the following steps:
1. Observe the environment
2. Figure out how to act using some strategies
3. Act accordingly
4. Receive a reward or penalty
5. Learn from the experience and refine our strategies
6. Iterate until an optical strategy is found

## **Important terms used in Reinforcement AI**

- **Agent:** It is an assumed entity which performs actions in an environment to gain some reward.
- **Environment (e):** A scenario that an agent has to face.
- **Reward (R):** An immediate return given to an agent when he or she performs specific action or task.
- **State (s):** State refers to the current situation returned by the environment.
- **Policy (π):** It is a strategy which applies by the agent to decide the next action based on the current state.
- **Value (V):** It is expected long-term return with discount, as compared to the short-term reward.
- **Value Function:** It specifies the value of a state that is the total amount of reward. It is an agent which should be expected beginning from that state.
- **Model of the environment:** This mimics the behavior of the environment. It helps you to make inferences to be made and also determine how the environment will behave.
- **Model based methods:** It is a method for solving reinforcement learning problems which use model-based methods.
- **Q value or action value (Q):** Q value is quite similar to value. The only difference between the two is that it takes an additional parameter as a current action.

## **Example of Reinforcement Learning Scenario**
- As cat doesn’t understand English or any other human language, we can’t tell her directly what to do. Instead, we follow a different strategy.
- We emulate a situation, and the cat tries to respond in many different ways. If the cat’s response is the desired way, we will give her fish.
- Now whenever the cat is exposed to the same situation, the cat executes a similar action with even more enthusiastically in expectation of getting more reward(food).
- That’s like learning that cat gets from “what to do” from positive experiences.
- At the same time, the cat also learns what not to do when faced with negative experiences.

![Reinforcement Learning using Cat Example](https://github.com/Shivangik01/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Reinforcement_Learning/Assets/Reinforcement_Learning_2.jpg?raw=true)

In this case,
- Your cat is an agent that is exposed to the environment. In this case, it is your house. An example of a state could be your cat sitting, and you use a specific word for the cat to walk.
- Our agent reacts by performing an action transition from one “state” to another -“state.”
- For example, your cat goes from sitting to walking.
- The reaction of an agent is an action, and the policy is a method of selecting an action given a state in expectation of better outcomes.
- After the transition, they may get a reward or penalty in return.

## **Reasons to use Reinforcement Learning**
- It helps you to find which situation needs an action
- Helps you to discover which action yields the highest reward over the longer period.
- Reinforcement Learning also provides the learning agent with a reward function.
- It also allows it to figure out the best method for obtaining large rewards.

## **Characteristics of Reinforcement Learning**
- There is no supervisor, only a real number or reward signal
- Sequential decision making
- Time plays a crucial role in Reinforcement problems
- Feedback is always delayed, not instantaneous
- Agent’s actions determine the subsequent data it receives

## **Types of Reinforcement Learning**
Two Types of Reinforcement Learning methods are:

### **Positive:**
It is defined as an event, that occurs because of specific behaviour. It increases the strength and the frequency of the behaviour and impacts positively on the action taken by the agent. This type of Reinforcement helps you to maximize performance and sustain change for a more extended period. However, too much Reinforcement may lead to over-optimization of the state, which can affect the results.

### **Negative:**
Negative Reinforcement is defined as the strengthening of behaviour that occurs because of a negative condition that should have been stopped or avoided. It helps you to define the minimum stand of performance. However, the drawback of this method is that it provides enough to meet up the minimum behaviour.

## **Common Reinforcement Learning Algorithms:**
Rather than referring to a specific algorithm, the field of reinforcement learning is made up of several algorithms that take somewhat different approaches. The differences are mainly due to their strategies for exploring their environments.

- ### **State-action-reward-state-action(SARSA)**  
This reinforcement learning algorithm starts by giving the agent what's known as a policy. The policy is essentially a probability that tells it the odds of certain actions resulting in rewards, or beneficial states.

- ### **Q-learning**
This approach to reinforcement learning takes the opposite approach. The agent receives no policy, meaning its exploration of its environment is more self-directed.

- ### **Deep Q-Networks**
These algorithms utilize neural networks in addition to reinforcement learning techniques. They utilize the self-directed environment exploration of reinforcement learning. Future actions are based on a random sample of past beneficial actions learned by the neural network.

## **Applications of Reinforcement Learning**
Current use cases include, but are not limited to, the following:
- Gaming
- Resource Management
- Personalized Recommendations
- Robotics for industrial automation.
- Business strategy planning
- It helps you to create training systems that provide custom instruction and materials according to the requirement of students.
- Aircraft control and robot motion control

Reinforcement learning is also used in operations research, information theory, game theory, control theory, simulation-based optimization, multiagent systems, swarm intelligence, statistics and genetic algorithms.

### **References**
- https://www.guru99.com/reinforcement-learning-tutorial.html
- https://www.kdnuggets.com/2018/03/5-things-reinforcement-learning.html
- https://www.geeksforgeeks.org/what-is-reinforcement-learning
