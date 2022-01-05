# Q Learning
### Terminologies
Before we dive into explaining reinforcement learning we need to define a few key peices of terminology.

**Enviornemt** In reinforcement learning tasks we have a notion of the enviornment. This is what our *agent* will explore. An example of an enviornment in the case of training an AI to play say a game of mario would be the level we are training the agent on.

**Agent** an agent is an entity that is exploring the enviornment. Our agent will interact and take different actions within the enviornment. In our mario example the mario character within the game would be our agent. 

**State** always our agent will be in what we call a *state*. The state simply tells us about the status of the agent. The most common example of a state is the location of the agent within the enviornment. Moving locations would change the agents state.

**Action** any interaction between the agent and enviornment would be considered an action. For example, moving to the left or jumping would be an action. An action may or may not change the current *state* of the agent. In fact, the act of doing nothing is an action as well! The action of say not pressing a key if we are using our mario example.

**Reward** every action that our agent takes will result in a reward of some magnitude (positive or negative). The goal of our agent will be to maximize its reward in an enviornment. Sometimes the reward will be clear, for example if an agent performs an action which increases their score in the enviornment we could say they've recieved a positive reward. If the agent were to perform an action which results in them losing score or possibly dying in the enviornment then they would recieve a negative reward. 

The most important part of reinforcement learning is determing how to reward the agent. After all, the goal of the agent is to maximize its rewards. This means we should reward the agent appropiatly such that it reaches the desired goal.


### Q-Learning
Q-Learning is a simple yet quite powerful technique in machine learning that involves learning a matrix of action-reward values. This matrix is often reffered to as a Q-Table or Q-Matrix. The matrix is in shape (number of possible states, number of possible actions) where each value at matrix[n, m] represents the agents expected reward given they are in state n and take action m. The Q-learning algorithm defines the way we update the values in the matrix and decide what action to take at each state. The idea is that after a succesful training/learning of this Q-Table/matrix we can determine the action an agent should take in any state by looking at that states row in the matrix and taking the maximium value column as the action.

**Consider this example.**

Let's say A1-A4 are the possible actions and we have 3 states represented by each row (state 1 - state 3).

| A1  | A2  | A3  | A4  |
|:--: |:--: |:--: |:--: |
|  0  |  0  | 10  |  5  |
|  5  | 10  |  0  |  0  |
| 10  |  5  |  0  |  0  |

If that was our Q-Table/matrix then the following would be the preffered actions in each state.

> State 1: A3

> State 2: A2

> State 3: A1

We can see that this is because the values in each of those columns are the highest for those states!

**For python implementation please refer to the [notebook](./Q%20Learning.ipynb)**

### Learning the Q-Table
So that's simple, right? Now how do we create this table and find those values. Well this is where we will dicuss how the Q-Learning algorithm updates the values in our Q-Table. 

I'll start by noting that our Q-Table starts of with all 0 values. This is because the agent has yet to learn anything about the enviornment. 

Our agent learns by exploring the enviornment and observing the outcome/reward from each action it takes in each state. But how does it know what action to take in each state? There are two ways that our agent can decide on which action to take.
1. Randomly picking a valid action
2. Using the current Q-Table to find the best action.

Near the beginning of our agents learning it will mostly take random actions in order to explore the enviornment and enter many different states. As it starts to explore more of the enviornment it will start to gradually rely more on it's learned values (Q-Table) to take actions. This means that as our agent explores more of the enviornment it will develop a better understanding and start to take "correct" or better actions more often. It's important that the agent has a good balance of taking random actions and using learned values to ensure it does get trapped in a local maximum. 

After each new action our agent wil record the new state (if any) that it has entered and the reward that it recieved from taking that action. These values will be used to update the Q-Table. The agent will stop taking new actions only once a certain time limit is reached or it has acheived the goal or reached the end of the enviornment. 

#### Updating Q-Values
The formula for updating the Q-Table after each action is as follows:
> $ Q[state, action] = Q[state, action] + \alpha * (reward + \gamma * max(Q[newState, :]) - Q[state, action]) $

- $\alpha$ stands for the **Learning Rate**

- $\gamma$ stands for the **Discount Factor**

#### Learning Rate $\alpha$
The learning rate $\alpha$ is a numeric constant that defines how much change is permitted on each QTable update. A high learning rate means that each update will introduce a large change to the current state-action value. A small learning rate means that each update has a more subtle change. Modifying the learning rate will change how the agent explores the enviornment and how quickly it determines the final values in the QTable.

#### Discount Factor $\gamma$
Discount factor also know as gamma ($\gamma$) is used to balance how much focus is put on the current and future reward. A high discount factor means that future rewards will be considered more heavily.

<br/>
<p>To perform updates on this table we will let the agent explpore the enviornment for a certain period of time and use each of its actions to make an update. Slowly we should start to notice the agent learning and choosing better actions. </p>

### Pros of Reinforcement Learning
1. Reinforcement learning can be used to solve very complex problems that cannot be solved by conventional techniques.
2. This technique is preferred to achieve long-term results, which are very difficult to achieve.
3. This learning model is very similar to the learning of human beings. Hence, it is close to achieving perfection.
4. The model can correct the errors that occurred during the training process.
5. Once an error is corrected by the model, the chances of occurring the same error are very less.
6. It can create the perfect model to solve a particular problem.
7. Robots can implement reinforcement learning algorithms to learn how to walk.
8. In the absence of a training dataset, it is bound to learn from its experience.
9. Reinforcement learning models can outperform humans in many tasks. DeepMind’s AlphaGo program, a reinforcement learning model, beat the world champion Lee Sedol at the game of Go in March 2016. 
10. Reinforcement learning is intended to achieve the ideal behavior of a model within a specific context, to maximize its performance.
11. It can be useful when the only way to collect information about the environment is to interact with it.
12. Reinforcement learning algorithms maintain a balance between exploration and exploitation. Exploration is the process of trying different things to see if they are better than what has been tried before. Exploitation is the process of trying the things that have worked best in the past. Other learning algorithms do not perform this balance.
### Cons of Reinforcement Learning
1. Reinforcement learning as a framework is wrong in many different ways, but it is precisely this quality that makes it useful.
2. Too much reinforcement learning can lead to an overload of states, which can diminish the results.
3. Reinforcement learning is not preferable to use for solving simple problems.
4. Reinforcement learning needs a lot of data and a lot of computation. It is data-hungry. That is why it works really well in video games because one can play the game again and again and again, so getting lots of data seems feasible.
5. Reinforcement learning assumes the world is Markovian, which it is not. The Markovian model describes a sequence of possible events in which the probability of each event depends only on the state attained in the previous event.
6. The curse of dimensionality limits reinforcement learning heavily for real physical systems. According to Wikipedia, the curse of dimensionality refers to various phenomena that arise when analyzing and organizing data in high-dimensional spaces that do not occur in low-dimensional settings such as the three-dimensional physical space of everyday experience.
7. Another disadvantage is the curse of real-world samples. For example, consider the case of learning by robots. The robot hardware is usually very expensive, suffers from wear and tear, and requires careful maintenance. Repairing a robot system is costs a lot.
8. To solve many problems of reinforcement learning, we can use a combination of reinforcement learning with other techniques rather than leaving it altogether. One popular combination is Reinforcement learning with Deep Learning.


### Difference between Reinforcement Learning and Deep Learning
* The main difference between reinforcement learning and deep learning is this: Deep learning is the process of learning from a training set and then applying that learning to a new data set. But reinforcement learning is the process of dynamically learning by adjusting actions based on continuous feedback to maximize a reward.

* Deep learning makes use of the existing available data and uses that data to predict patterns. Reinforcement learning can learn from its experience through trial and error.

### Applications of Reinforcement Learning
* A variety of problems can be solved using reinforcement learning. Some of them are game-playing, robotics, and many other fields.

* As I mentioned earlier, reinforcement learning is the best technology used for game playing. It can even beat world champions.

* Reinforcement learning can be used effectively to determine the best move to make in a game, depending on several different factors. It is very handy in games like Chess, Go, etc.

* Using reinforcement learning, we can improve and personalize the gaming experience in real-time. It is the algorithm that can solve different games and sometimes achieve super-human performance.

* This technology is used for the learning of robots. Robots are trained using the trial and error method with human supervision. Reinforcement learning teaches robots new tasks while retaining prior knowledge.
* E-commerce websites like Amazon can use reinforcement learning to solve their problems to generate the maximum revenue by displaying the most relevant ads to interested buyers.

* Self-driving cars also implement some reinforcement learning algorithms. Reinforcement learning can also be applied in optimizing chemical reactions.

* Industrial automation, trading stock prices forecasting, news recommendations, etc. are some other applications of reinforcement learning.

### Conclusion
Reinforcement learning is a type of machine learning in which the machine learns by itself after making many mistakes and correcting them.

### References
* https://vanshsharma10.medium.com/a-beginners-guide-to-reinforcement-learning-173a5484f412
* https://en.wikipedia.org/wiki/Reinforcement_learning
* https://en.wikipedia.org/wiki/Q-learning#Deep_Q-learning