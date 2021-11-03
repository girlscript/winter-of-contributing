![Title Image](https://github.com/Mann-tech13/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Ensemble_based_Learning_%26_Probabilistic_ML/Assets/Title.jpg)

# **What is Hidden Markov Model (HMM)?**

HMM is probabilistic model for machine learning. It is mostly used in speech recognition, to some extent it is also applied for classification task. HMM provides solution of three problems : evaluation, decoding and learning to find most likelihood classification.The HMM is probabilistic sequence classifiers; which means given a sequence of units its job is to compute a probability distribution over possible labels and choose the best label sequence.
This documentation starts with description of Markov chain sequence labeler and then it follows elaboration of HMM, which is based on Markov chain.

# **Markov Chains/Markov process**

![Markov chain/process](https://github.com/Mann-tech13/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Ensemble_based_Learning_%26_Probabilistic_ML/Assets/markov-chain--process.png)

A Markov chain is specified by the following components:

**Q** = **q**1**q**2 ...**q**N 

A set of states

**A** = **[aij]** nxn

A transition probability matrix A, each aij representing the probability of moving from state i to state j.

**q**0, **q**end

A special start state and end state which are not associated with
observations.

Markov processes are widely used in engineering, science, and business modeling. They are used to model systems that have a limited memory of their past. A first-order Markov process is a stochastic process in which the future state solely depends on the current state only. The first-order Markov process is often simply called the Markov process. If it is in a discrete space, it is called the Markov chain.
A random process {X(t), t ∈ T} is called a first-order Markov process if for any t0 < t1 < ⋯ < tn the conditional CDF of X(tn) for given values of X(t0), X(t1), …, X(tn − 1) depends only on X(tn − 1).
A discrete-state Markov process is called a <u>**Markov chain**</u>. Similarly, with respect to time, a Markov process can be either a discrete-time Markov process or a continuous-time Markov process. Thus, there are four basic types of Markov processes:

1. Discrete-time Markov chain (or discrete-time discrete-state Markov process)

2. Continuous-time Markov chain (or continuous-time discrete-state Markov process)

3. Discrete-time Markov process (or discrete-time continuous-state Markov process)

4. Continuous-time Markov process (or continuous-time continuous-state Markov process)

Markov chain is a special case of a weighted automaton in which the input sequence uniquely determines states the automaton will go through for that input sequence. Markov chain is only useful for assigning probabilities to unambiguous sequences.
A Markov chain is specified by the following components:

**Q** = **q**1**q**2 ...**q**N 

A set of states

**A** = **[aij]** nxn

A transition probability matrix A, each aij representing the probability of moving from state i to state j.

**q**0, **q**end

In practice, the Markov process can be an appropriate approximation in solving complex ML and reinforcement learning problems

![Markov chain](https://github.com/Mann-tech13/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Ensemble_based_Learning_%26_Probabilistic_ML/Assets/markovchain.jpeg)

# **More about Hidden Markov Model (HMM)**

A Markov chain is useful when we need to compute the probability for a sequence of events that we can observe in the world. Focusing on how it differs from a Markov chain; according to Jurafsky, Martin [2005] an HMM is specified by the
following components:
**Q** = **q**1**q**2 . . .**q**N 
a set of states

**A** = **[aij]** NxN 
a transition probability matrix A, each aij representing the probability of moving from state i to state j,

**O** = **o**1**o**2 . . .**o**N 
a set of observations, each one drawn from a vocabulary

**V** = **v**1,**v**2, ...,**v**V .

**B** = **b**i(**o**t ) 
A set of observation likelihoods:, also called emission probabilities, each expressing the probability of an observation ot being generated from a state i. 

**q**0, **q**end 
a special start state and end state which are not associated with observation.

An alternative representation for Markov chains is sometimes used for HMM. HMM models a process with a Markov process.

* It includes the initial state distribution π (the probability distribution of the initial state)

* The transition probabilities A from one state (xt) to another.
 
* HMM also contains the likelihood B of the observation (yt) given a hidden state. Matrix B is called the emission probabilities. It demonstrates the probability of our observation given a specific internal state.

**Two major assumptions are made in HMM. The next state and the current observation solely depend on the current state only.**

For example, if I am happy, there is a 40% chance that I will go to a party. But there is a 10% chance that I will be found at a party when I am sad too. With HMM, we determine the internal state (happy or sad) by making observations — where I was found.

![HMM-example](https://github.com/Mann-tech13/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Ensemble_based_Learning_%26_Probabilistic_ML/Assets/HMM-eg.jpeg)

Depending on the situation, we usually ask three different types of questions regarding an HMM problem.

**Likelihood (likelihood of the observation):** 

How likely are the observations based on the current model or the probability of being at a state at a specific time step. Likelihood is to find the likelihood of observation Y.

![HMM-likelihood](https://github.com/Mann-tech13/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Ensemble_based_Learning_%26_Probabilistic_ML/Assets/HMM-likelihood.jpeg)

This is computationally intense. Our strategy will employ a divide-and-conquer. In specifically, if we can express components recursively, we can break down the problem into intermediate steps and share results. This is the idea of dynamic programming that breaks the exponential curse. The likelihood of the observations can be calculated recursively for each time step below.

![HMM-likelihood-conc](https://github.com/Mann-tech13/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Ensemble_based_Learning_%26_Probabilistic_ML/Assets/HMM-likelihood-conc.jpeg)

**Decoding:** 

Find the internal state sequence based on the current model and observations.The decoding problem is finding the optimal internal states sequence given a sequence of observations. Again, we want to express our components recursively.In this algorithm, we also record the maximum path leading to each node at time t (the red arrow above). e.g. we are transited from a happy state H at t=1 to the happy state H at t=2 above since it is the most optimal (likely) path.

![HMM-decoding](https://github.com/Mann-tech13/winter-of-contributing/blob/Machine_Learning/Machine_Learning/Ensemble_based_Learning_%26_Probabilistic_ML/Assets/HMM-decoding.jpeg)

**Learning (Baum–Welch algorithm or Forward-Backward Algorithm — build the model):**

Besides likelihood and decoding, the last algorithm learns the HMM model parameters λ given the observation. Here, we will use the Baum–Welch algorithm to learn the transition and the emission probability. EM algorithm solves the problem in iteration steps. In each step, we optimizing one latent variable while fixing the others. Even for a continuous space, we work with limited provisions, and therefore, there are finite states to explore and improve only.

# **Advantages and Disadvantages of HMM**

## **Advantages**

* The underlying theoretical basis is much more sound, elegant and easy to understand.
* It is easier to implement and analyze.
* HMM taggers are very simple to train (just need to compile counts from thetraining corpus).
* Performs relatively well (over 90% performance on named entities).
* Statisticians are comfortable with the theoretical base of HMM.
* Liberty to manipulate the training and verification processes.
* Mathematical / theoretical analysis of the results and processes.
* Incorporates prior knowledge into the architecture with good design.
* Initialize the model close to something believed to be correct.
* It eliminates label bias problem.
* It has also been proved effective for a number of other tasks, such as speech recognition, handwriting recognition and sign language recognition.

## **DisAdvantages**

* In order to define joint probability over observation and label sequence HMM needs to enumerate all possible observation sequences.
* Main difficulty is modeling probability of assigning a tag to word can be very difficult if “words” are complex.
* It is not practical to represent multiple overlapping features and long term dependencies.
* Number of parameters to be evaluated is huge. So it needs a large data set for training.
* It requires huge amount of training in order to obtain better results.
* HMMs only use positive data to train. In other words, HMM training involves maximizing the observed probabilities for examples belonging to a class. But it does not minimize the probability of observation of instance from other classes.
* It adopts the Markovian assumption: that the emission and the transition
probabilities depend only on the current state, which does not map well to
many real-world domains;
* Because each HMM uses only positive data, they scale well; since new words can be added without affecting learnt HMMs. 

[Click here to know more about Baum-Welch Algorithm](https://https://en.wikipedia.org/wiki/Baum%E2%80%93Welch_algorithm)
