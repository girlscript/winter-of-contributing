# Reinforcement Learning 
# Video Link : [click here](https://drive.google.com/file/d/1gEt2yV7u0lVranUdghuC0Io0UgxMq1rm/view?usp=sharingg)


![img](https://github.com/Anna-cod/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Videos/Reinforcement%20Learning/Images/Reinforcement_learning_diagr.png) 
<br> *RL - Img source Wikipedia* 
<br> **Machine Learning** as defined by Arthur Samuel is &quot;the field of technology that gives computer ability to learn without being explicitly programmed&quot;. It is the most demanded skill that has attracted students belonging to the majors of engineering, mathematics, and data analytics. Machine Learning is the growing field that is further divided into four types.

Types of machine Learning:
![](https://github.com/Anna-cod/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Videos/Reinforcement%20Learning/Images/Picture1.png)

*1. ML branches*

The target of this document is to simplify the knowledge of Reinforcement learning, unleash its growing applications, algorithms, and few limitations. It also highlights the pre-requisites which may be required by the aspiring students looking to advance their education in the field of Reinforcement learning.

# Reinforcement Learning:

Reinforcement learning is branch of machine learning that employs agent to execute set of actions in the simulated environment and achieve target assigned to it. The goal of the agent is to maximize the reward. In RL, datasets are not given hence the agent devise strategy that will enable it to gain maximum rewards without provision of any hint etc. By leveraging the power of search and many trials, reinforcement learning is currently the most effective way to hint machine&#39;s creativity[deepsense.ai]. In basic kind of RL, the output programme is not an absolute value but is based on the policy devised which would draw the maximum rewards. Hence the main goal of the machine is to determine the best possible solution for the given problem.

### RL Vocabulary:

Before diving into depth in reinforcement learning, let&#39;s learn about its basic terminologies:
- Agent : Agent experience the environment by interacting with it and learns to gain maximum award.
- Environment : An environment is the surrounding in which agent performs the desired actions.
- Action : The task undertook by agent to gain rewards
- State : The position of the agent with respect to surrounding
- Reward : the point, bonus gained by agent when it succeeds in performing the required task.
- Policy : The strategy adopted by agent to gain award and minimize penalty.
- Value function : Total award that agent receive by the following the self-devised policy
- Model based method : method for solving reinforcement problems.
- Model of environment : Simulated environment intended to provide real situation for agent to interact with.
- Action value(Q) : it is similar to value also includes additional parameter of action by agent.

### Reinforcement Learning in action:

Reinforcement learning is ingrained in human civilisation as one of the effective teaching methodologies for past many years. Consider taming a pet. A pet, a dog or a cat is trained by series of award and punishment upon achieving or not the stipulated task. Here your pet is an agent which is the subjected to be train by series of test and trials in the environment which could be playground or house in general cases. Reward can be in the form of pet&#39;s favourite food if pet is able to undergo the action from the present state. Penalty shall be provided in the other case.

### Types of RL:
Two type sof RL are:
|   | Positive RL   |  Negative RL |   
|---|---|---|
| Definition | In this RL method, a stimulus presented to the agent upon the performed action and increases the possibility of action by the agent  | In this RL method, the stimulus that results in action by agent is removed hence it strengthen the likelihood of action.  |   
| Advantages  | It strengthens the occurrence of the action that will generate more reward  | Set the minimum action required to achieve the reward or assigned value function  |  
| Disadvantages |  Excess overload of state may lead to minimize awards |It adds the limit to the performance level of agent   |   


### Algorithms:

Three approaches to work with RL algorithms are as follows:

1. Value based: aka Q-learning, tries to set the maximum value function for the agent. The agent gains the reward in return
2. Policy based: This RL method devise a policy to the agent by which maximum reward can be obtained. E.g., SARSA (State-action-reward-state-action)
3. Model based: A simulated, or artificial environment is provided to the agent to perform the action.


### Learning Models:

#### 1. Markov&#39;s decision process: MDPs

Markov&#39;s decision process or MDPs is based upon the long-term impact of the choice. Markov&#39;s property state that the reward of action is dependent upon present condition only. MDP consist of 5 components

1. Agent
2. State
3. Environment
4. Action
5. Reward

Consider an example where rabbit is an agent which has carrot and broccoli at its both sides in the environment. Eating any of it would provide a reward of 10 points to the rabbit. It is natural for a rabbit to prefer carrot over broccoli. However, there is a tiger next to carrot, which would result in a penalty of -1000 points. It is noted from the provided example that next state or future reward is only evaluated based on the present state and action of te agent. ![](https://github.com/Anna-cod/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Videos/Reinforcement%20Learning/Images/Picture2.png)
*2. Image source: coursera*
<br> Game of chess is a Markovian as current state of each piece is considered while taking next move and past reference is excluded. Tic tac toe is another example.
<br> ![test](https://github.com/Anna-cod/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Videos/Reinforcement%20Learning/Images/Picture3.png) *3 Image source : coursera*

#### 2. Q learning:
For basic understandinmg of Q-learning, knowldge of terms *exploration* and *exploitation* is requried. Let's decipher these terms first.
- **Exploration** : An act of exploring the environmnt without knowing the next state.
- **Exploitataion** : This act involves taking appropriate actions that would result in maximum award as the condition of next state is known by the agent.
In RL, both the act of exploring and exploiting is necessary for agent to acheive the maximum value function. 
<br> Q learning algorithm proceed in the following procedure: 
![](https://cdn-media-1.freecodecamp.org/images/oQPHTmuB6tz7CVy3L05K1NlBmS6L8MUkgOud) *image source freecodecamp* 

##### Explanation
These steps are simplified as follows:
- First step involves making a q-table that segregate the entire enviroment in to small equal peices and marked each piece with reward and penalty. A q-function is used here that takes two parameter of state and action. This function determine the next step selected by the agent. <br> ![optimal Q-function](https://github.com/Anna-cod/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Videos/Reinforcement%20Learning/Images/Picture4.png)
- Step 2 and 3 requres agent to explore and exploit the environment in the search of reward and target value function. The agent will chose action based on the state of the envronment.
- Q function is updated in 4th step based upon the reward or penalty acquired by the agent.

### Limitations of RL:

Although research in field of RL is taking its pace rapidly, few hurdles interpose in its way. For example, the agent needs to be trained in the simulated environment and devise a strategy to achieve the provided target. It is however in need of large amount of time and expected trail and error come in its way. In real life situation, this become a matter of concern especially in autonomous vehicle where real environment changes swiftly and health risk safety concerns are paramount. Also, the algorithms once fed to agent cannot be altered except of changing parameters like reward and punishment hence it creates an issue when modification to previously defined algorithm is needed.

### Reinforcement Learning in contrast with supervised and unsupervised learning:

In supervised learning, model is trained by providing the labelled dataset while in unsupervised learning, large unlabelled data is fed into system with the set of complex algorithms that enable that model to itself distinguish between different elements of dataset provided. However, RL takes an entirely different approach, it provided the agent with defined targets and rewards and punishment and agent must develop the strategy to gain rewards and minimize penalty while achieving the target during its interaction with the environment. Due to resonance with supervised learning on the provision of certain defined parameters to the machine, it is also referred to the subset of supervised learning.

### Real-life applications of RL:
Applications of Reinforcement learning are diverse ranging from games, automation industry, robotics, marketing, finance, healthcare, and military to name few. Below are listed major uses of RL.

AlphaGo: an intelligent computer that toppled the world records by defeating the world champions Mr Lee Sedol in the competition of Go by completely swiping out by 5-0. The Go game is one of the most complex game that involves two players playing with black and white stones like chess. However, the probability of the player next move in Go game to chess game is 250 to 35 in ratio. Development of AlphaGo and later AlphaGo Zero are the prominent advancement in field of RL, which was built explicitly without acquiring any human data and beat previous champion AlphaGo by 100-0.

Other major applications of RL are in the field of robotics and automation industry. In robotics manipulation, RL algorithms like deep Q-learning are employed to train robots to grasp objects by steering robotic arms and legs. RL train the robot to autonomously gain the reward by experiencing trial and error interaction with the environment.

### Pre-requsites:
1. Proficiency in Python
2. Calculus, Linear Algebra
3. Basic Probability and Statistics
4. basic knowledge on machine learning

### Synopsis:
In general, reinforcement learning is the subset of machine learning that require an agent to be fed by complex algorithms, perform stipulated target, gain the rewards, and avoid penalties. RL is often beneficial when large no of dataset is unavailable however its downside is that it increases the time lapse of the execution of the action. The most widely known application of RL is gaming like AlphaGo, Chess etc.

### Resources:
Below I have listed some popular online resources of reinforcement learning for beginners:
1. [Reference 1](https://neptune.ai/blog/best-reinforcement-learning-tutorials-examples-projects-and-courses)
2. [Reference 2](https://wiki.pathmind.com/deep-reinforcement-learning)
3. [Reference 3 - Github repo](https://github.com/ShangtongZhang/reinforcement-learning-an-introduction)
4. [Reference 4](https://deepsense.ai/what-is-reinforcement-learning-the-complete-guide/)
5. [Reference 5](https://www.guru99.com/reinforcement-learning-tutorial.html#:~:text=Two%20types%20of%20reinforcement%20learning,given%20sample%20data%20or%20example).
6. [Reference 6](https://www.ias.informatik.tu-darmstadt.de/uploads/Publications/Kober_IJRR_2013.pdf)
7. [Reference 7](https://www.freecodecamp.org/news/an-introduction-to-q-learning-reinforcement-learning-14ac0b4493cc/)

