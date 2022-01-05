# Markov's Chain

## Audio Link : [Markov's Chain](https://drive.google.com/file/d/1qUEsbKKvPfJhapcgIzzF1Zcs2YGdJT0e/view?usp=sharing)

- Named after the Russian mathematician Andrey Markov, a Markov Chain is a mathematical system that experiences transitions from one state to another according to certain probabilistic rules.

- The defining characteristic of a Markov chain is that no matter how the process arrived at its present state, the possible future states are fixed. In other words, the probability of transitioning to any particular state is dependent solely on the current state and time elapsed. 
- The state space, or set of all possible states, can be anything: letters, numbers, weather conditions, health conditions or stock performances.

![image](https://user-images.githubusercontent.com/63282184/143379472-392ab16c-03d8-4ace-a705-911705c59c58.png)

Markov chains arise in statistical contexts and are widely employed in health, economics, game theory, communication, genetics, and finance.

## Basic Concepts

A Markov chain is a stochastic process, but it differs from a general stochastic process in that a Markov chain must be “memory-less.” That is, the probability of future actions are not dependent upon the steps that led up to the present state. This is called the Markov property. While the theory of Markov chains is important precisely because so many “everyday” processes satisfy the Markov property, there are many common examples of stochastic properties that do not satisfy the Markov property.

![image](https://user-images.githubusercontent.com/63282184/143379515-f6f9fced-929c-4a76-a792-d9412c53c904.png)


## Concepts regarding Markov chains

- When approaching Markov chains there are two different types: discrete-time Markov chains and continuous-time Markov chains.

- This means that we have one case where the changes happen at specific states and one where the changes are continuous. In this article, we will focus on discrete-time Markov chains.

- One example to explain the discrete-time Markov chain is the price of an asset where the value is registered only at the end of the day. The value of the Markov chain in discrete-time is called the state and in this case, the state corresponds to the closing price. A continuous-time Markov chain changes at any time.

- A Markov chain can be stationary and therefore be independent of the initial state in the process. This phenomenon is also called a steady-state Markov chain where the probabilities for different outcomes converge to a certain value. However, an infinite-state Markov chain does not have to be a steady-state, but a steady-state Markov chain must be time-homogenous.

## Application of Markov Chains

- Since Markov chains can be designed to model many real-world processes, they are used in a wide variety of situations. These fields range from the mapping of animal life populations to search engine algorithms, music composition and speech recognition. 
- In economics and finance, they are often used to predict macroeconomic situations like market crashes and cycles between recession and expansion. Other areas of application include predicting asset and option prices and calculating credit risks.


# Conclusion

- Markov chains are powerful for problems modelling when dealing with random dynamics. 
- Due to their useful properties, they are used in various fields such as statistics, biology and medicine, modelling of biological populations evolution, computer science, information theory and speech recognition through hidden Markov models are important tools and many others. 
- MySense utilises Markov chains in some of our modellings to give us deeper insights into our user’s behaviours, helping us to help provide the best care possible.
