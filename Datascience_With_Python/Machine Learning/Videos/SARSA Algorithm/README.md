# SARSA Algorithm

## Video Link: [SARSA Algorithm](https://drive.google.com/file/d/1_OWUoz-ZflN-ImTPI7zN6rEnXySG-nBB/view?usp=sharing)

State–action–reward–state–action (SARSA) is an algorithm for learning a Markov decision process policy, used in the reinforcement learning area of machine learning. It was proposed by Rummery and Niranjan in a technical note[1] with the name "Modified Connectionist Q-Learning" (MCQ-L). The alternative name SARSA, proposed by Rich Sutton, was only mentioned as a footnote.

## Algorithm

![image](https://user-images.githubusercontent.com/63282184/143666413-9179b9fd-5e3e-4f9a-a909-8c431bfe7fe8.png)


- A SARSA agent interacts with the environment and updates the policy based on actions taken, hence this is known as an on-policy learning algorithm. The Q value for a state-action is updated by an error, adjusted by the learning rate alpha. Q values represent the possible reward received in the next time step for taking action a in state s, plus the discounted future reward received from the next state-action observation.

- Watkin's Q-learning updates an estimate of the optimal state-action value function {\displaystyle Q^{*}}Q^{*} based on the maximum reward of available actions. While SARSA learns the Q values associated with taking the policy it follows itself, Watkin's Q-learning learns the Q values associated with taking the optimal policy while following an exploration/exploitation policy.

- Some optimizations of Watkin's Q-learning may be applied to SARSA.

## Hyperparameters

### Learning rate (alpha)

The learning rate determines to what extent newly acquired information overrides old information. A factor of 0 will make the agent not learn anything, while a factor of 1 would make the agent consider only the most recent information.

### Discount factor (gamma)

The discount factor determines the importance of future rewards. A discount factor factor of 0 makes the agent "opportunistic", or "myopic", e.g. , by only considering current rewards, while a factor approaching 1 will make it strive for a long-term high reward. If the discount factor meets or exceeds 1, the {\displaystyle Q}Q values may diverge.




### Initial conditions (Q(s0, a0))

Since SARSA is an iterative algorithm, it implicitly assumes an initial condition before the first update occurs. A low (infinite) initial value, also known as "optimistic initial conditions", can encourage exploration: no matter what action takes place, the update rule causes it to have higher values than the other alternative, thus increasing their choice probability. In 2013 it was suggested that the first reward r could be used to reset the initial conditions. According to this idea, the first time an action is taken the reward is used to set the value of Q. This allows immediate learning in case of fixed deterministic rewards. This resetting-of-initial-conditions (RIC) approach seems to be consistent with human behavior in repeated binary choice experiments.

### SARSA algorithm is a slight variation of the popular Q-Learning algorithm. For a learning agent in any Reinforcement Learning algorithm it’s policy can be of two types:- 
 

- On Policy: In this, the learning agent learns the value function according to the current action derived from the policy currently being used.
- Off Policy: In this, the learning agent learns the value function according to the action derived from another policy.
- Q-Learning technique is an Off Policy technique and uses the greedy approach to learn the Q-value. SARSA technique, on the other hand, is an On Policy and uses the action performed by the current policy to learn the Q-value.


## Example code for the SARSA Algorithm

```
#Initializing the reward
reward=0

# Starting the SARSA learning
for episode in range(total_episodes):
	t = 0
	state1 = env.reset()
	action1 = choose_action(state1)

	while t < max_steps:
		#Visualizing the training
		env.render()
		
		#Getting the next state
		state2, reward, done, info = env.step(action1)

		#Choosing the next action
		action2 = choose_action(state2)
		
		#Learning the Q-value
		update(state1, state2, reward, action1, action2)

		state1 = state2
		action1 = action2
		
		#Updating the respective vaLues
		t += 1
		reward += 1
		
		#If at the end of learning process
		if done:
			break


```

## What's the advantage of an off policy algorithm?
Some benefits of Off-Policy methods are as follows: Continuous exploration: As an agent is learning other policy then it can be used for continuing exploration while learning optimal policy. Whereas On-Policy learns suboptimal policy. Learning from Demonstration: Agent can learn from the demonstration.

## Application 

The SARSA learning  algorithm in RL concept is applied to the IEEE 39-buses New England power system. Results show that SARSA learning algorithm is able to provide optimal or near optimal control settings for power system under varying system conditions.
