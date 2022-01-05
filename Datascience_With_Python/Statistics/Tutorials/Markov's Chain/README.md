# Data Science with Python : Markov's Chain #377 

## Description :

A statistical system in which occurrence of future state is entirely dependent on the immediately preceding state, is called Markov chain. It seems like ,this system has no <b>memory</b> of the past history of states. This is the <b>memorylessness property</b> of Markov Chain.

In the tutorial we have discussed the definition, types and representation of a vary basic 2-state Markov chain .

## Types of Markov Chain :

<b>discrete-time Markov chains</b> : This implies the index set T( state of the process at time t ) is a countable set here or we can say that changes occur at specific states. 
                                     Generally the term "Markov chain" is used for DTMC .
                                     
<b>continuos-time Markov chains</b> : Here the index set T( state of the process at time t ) is continum, that means changes are continous in CTMC.

## Properties of Markov Chain :

1. A Markov chain is said to be <i><b>Irreducible</b></i> if we can go one state to another in a single or more than one steps.
2. A state in a Markov chain is said to be <i><b>Periodic</b></i> if returning to it requires a multiple of some integer larger than 1, the greatest common divisor of all the possible return path length will the period of that state.
3. A state in a Markov chain is said to be <i><b>Transient</b></i> if there is a non-zero probability that the chain will never return to the same state, otherwise it is <i><b>Recurrent</b></i>.
4. A state in a Markov chain is called <i><b>Absorbing</b></i> if there is no possible way to leave that state. Absorbing states do not have any outgoing transitions from it.

## Assumptions for Markov Chain :

1. The statistical system contains finite number of states.
2. The states are mutually exclusive and collectively exhaustive.
3. The transition probability from one state to another state is constant over time.

## Why Markov Chain :

Markov processes are fairly common in real-life problems and Markov chains can be easily implemented because of its memorylessness property. Using Markov chain can simplify the problem without affecting its accuracy. 

let us take an example to understand the advantage of this tool, 
     suppose my friend is suggesting to have a meal. I may say that I do not want a pizza as I have that one hour ago. But Is it appropriate if I say that I do not want a pizza because I have it two months ago ? That means in this case, my probability of picking a meal is entirely dependent on my immediately preceding meal. 
Here is the effectiveness of Markov Chain.

## Conclusion :

We have learnt to code our simple Markov chain from scratch, how to do a random walk through the Markov chain, how to calculate Stationary distribution. Also we have find the probability of a particular state sequence. Markov chain is a useful tool for many more complex stochastic models which are used in various fields such as physics, statistics, signal processing, speech recognition and many more.

## References :

1. https://en.wikipedia.org/wiki/Markov_chain#Definition
2. https://en.wikipedia.org/wiki/Markov_chain#Properties
3. https://towardsdatascience.com/introduction-to-markov-chains-50da3645a50d
