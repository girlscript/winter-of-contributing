# Data Science with Python : Markov's Chain #377

## What is Markov's Chain ?

Markov chains, named after <a href = "https://en.wikipedia.org/wiki/Andrey_Markov">Andrey Markov</a>, a stochastic model that depicts a sequence of possible events where predictions or probabilities for the next state based solely on its previous event state not the states before. In simple words, the probability that n+1 th steps will be x depends only on the nth steps not the complete sequence of steps that came before n. This property is known as <i><b>Markov Property</b></i> or <i><b>Memorylessness</b></i>.
Let us explore our Markov chain with the help of a diagram,
<img src = "https://upload.wikimedia.org/wikipedia/commons/thumb/2/2b/Markovkate_01.svg/800px-Markovkate_01.svg.png" width="200"/>
A diagram representing a two-state(here, E and A) Markov process.Here the arrows originated from the current state and points to the future state and the number associated with the arrows indicates the probability of the Markov process changing from one state to another state. For instance,if the Markov process is in state E, then the probability it changes to state A is 0.7, while the probability it remains in same state is 0.3. Similarly, for any process in state A, probability to change to E state is 0.4 and probability to remain in same state is 0.6.


## Types of Markov Chain :

1. <i><b>discrete-time Markov chains</b></i> : Here changes occur at specific states.
2. <i><b>continuos-time Markov chains</b></i> : Changes are continous.

## How to Represent Markov Chain ?

From the diagram of the two state Markov process ,we can understand that the Markov chain is directed graph. So we can represent is with the help of an adjacency matrix. 

                 +-------+-------+         
                 |   A   |   E   |        --- Each element denotes the probability weight of the edge                       
         +-------+-------+-------+               connecting the two corresponding vertices                                     
         |   A   |  0.6  |  0.4  |        --- 0.4 is the probability for state A to go to state E and 0.6 is the probability 
         +-------+-------+-------+               to remain at the same state 
         |   E   |  0.7  |  0.3  |        --- 0.7 is the probability for state E to go to state A and 0.3 is the probability 
         +-------+-------+-------+               to remain at the same state 
         
         
This matrix is also called <i><b>Transition Matrix</b></i>. If the Markov chain has N possible states, the matrix will be an NxN matrix. Each row of this matrix should sum to 1.
In addition to this, a Markov chain also has an <i><b>Initial State Vector</b></i> of order Nx1.
These two entities are must to represent a Markov chain.

<i><b>N-step Transition Matrix :</b></i> Now let us learn higher order transition matrices. It helps us to find the chance of that transition occurring over multiple steps. To put in simple words, what will be the probability of moving from state <b>A</b> to state <b>E</b> over <b>N</b> step? There is actually a very simple way to calculate it. This can be determined by calculating the value of entry <b>(A,E)</b> of the matrix obtained by raising the transition matrix to the power of <b>N</b>.

## Properties of Markov Chain:

1. A Markov chain is said to be <i><b>Irreducible</b></i> if we can go one state to another in a single or more than one steps.
2. A state in a Markov chain is said to be <i><b>Periodic</b></i> if returning to it requires a multiple of some integer larger than 1, the greatest common divisor of all the possible return path length will the period of that state.
3. A state in a Markov chain is said to be <i><b>Transient</b></i> if there is a non-zero probability that the chain will never return to the same state, otherwise it is <i><b>Recurrent</b></i>.
4. A state in a Markov chain is called <i><b>Absorbing</b></i> if there is no possible way to leave that state. Absorbing states do not have any outgoing transitions from it.

## Markov Chain in Python :

Now we are going to code our Markov chain example above in python. Although for computing efficiently we generally use a library encoded Markov chain.


```python
#let's import our library
import numpy as np
```


```python
#Encoding this states to numbers as it is easier to deal with numbers instead of words.
state = {
    0 : "A",
    1 : "E",
}
state
```




    {0: 'A', 1: 'E'}




```python
#Assigning the transition matrix to a variable i.e a numpy 2d matrix.
MyMatrix = np.array([[0.6, 0.4], [0.7, 0.3]])
MyMatrix
```




    array([[0.6, 0.4],
           [0.7, 0.3]])




```python
#Simulating a random walk on our Markov chain with 20 steps.
#Random walk simply means that we start with an arbitary state and then we move along our markov chain.
n = 20
StartingState = 0                                     #decide which state to start with
CurrentState = StartingState
print(state[CurrentState], "--->", end=" ")           #printing the stating state using state dictionary

while n-1:
    #Deciding the next state using a random.choice() function,that takes list of states 
    #and the probability to go to the next states from our current state
    CurrentState = np.random.choice([0, 1], p=MyMatrix[CurrentState])
    print(state[CurrentState], "--->", end=" ")       #printing the path of random walk
    n-=1
print("stop")
```

    A ---> A ---> A ---> A ---> A ---> E ---> A ---> E ---> A ---> A ---> A ---> E ---> E ---> E ---> A ---> E ---> A ---> A ---> A ---> E ---> stop
    


```python
#Let us find the stationary distribution of our Markov chain using repeated matrix multiplication
NumberOfSteps = 10**3
MyMatrix_n = MyMatrix

i=0
while i<NumberOfSteps:
    MyMatrix_n =  np.matmul(MyMatrix_n, MyMatrix)     #Multiplying our matrix with itself and storing it into MyMatrix_n
    i+=1

print("MyMatrix^n = \n", MyMatrix_n, "\n")
print("π = ", MyMatrix_n[0])                          #Printing the probability distribution
```

    MyMatrix^n = 
     [[0.63636364 0.36363636]
     [0.63636364 0.36363636]] 
    
    π =  [0.63636364 0.36363636]
    


```python
#Let us find the stationary distribution of our Markov chain by Finding Left Eigen Vectors
#Importing our library
import scipy.linalg
MyValues, left = scipy.linalg.eig(MyMatrix, right = False, left = True)    #We only need the left eigen vectors

print("left eigen vectors = \n", left, "\n")
print("eigen values = \n", MyValues)
```

    left eigen vectors = 
     [[ 0.86824314 -0.70710678]
     [ 0.49613894  0.70710678]] 
    
    eigen values = 
     [ 1. +0.j -0.1+0.j]
    


```python
#Pi is a probability distribution so the sum of the probabilities should be 1
#To get that from the above negative values we just have to normalize
pi = left[:,0]
pi_normalized = [(x/np.sum(pi)).real for x in pi]
pi_normalized
```




    [0.6363636363636364, 0.36363636363636365]



### Computing the Probability Corresponding to a Particular Sequence:


```python
#How about finding P(A-->E-->E-->A)

def calculate_probability(sequence, MyMatrix, pi):
    StartingState = sequence[0]
    prob = pi[StartingState]                                       #initializing prob with the prob of the start state
    PreviousState, CurrentState = StartingState, StartingState
    for i in range(1, len(sequence)):
        CurrentState = sequence[i]
        #Multiplying the transition prob from previous to current state with the current value of prob
        prob *= MyMatrix[PreviousState][CurrentState]
        PreviousState = CurrentState
    return prob

print(calculate_probability([0, 1, 1, 0], MyMatrix, pi_normalized))
```

    0.053454545454545456
    

## Application of Markov Chain :

1. Markov chains makes the study of many real-world processes much more simple and easy to understand. Using Markov chain we can derive some useful results such as Stationary Distribution and many more.
2. MCMC(Markov Chain Monte Carlo) ,gives solution to the problems come from the normalization factor, is based on Markov Chain.
3. Markov Chains are used in information theory, search engine, speech recognition etc.

Markov chain has huge possibilities, future and importance in the field of Data Science and the interested readers are requested to learn these stuff properly for being a competent person in the field of Data Science.


```python

```
