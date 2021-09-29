<h1>Fuzzy Neural Network</h1>

Fuzzy neural networks are an example of a hybrid approach, which combines the learning ability of a neural network with the noise-handling capability of FL. In their simplest form, a fuzzy neural network can be viewed as a three-layer feedforward network, with a fuzzy input layer (fuzzification), a hidden layer containing the fuzzy rules, and a final fuzzy output layer (defuzzification). 


<br>
<h2>What is Fuzzy Theory?</h2>
There is always uncertainty in real world experiments. And thus while modeling our systems, we need to take this uncertainty into account. You are already familiar with one form of uncertainty which forms the basis of Probability Theory. Analogous to probability theory, a different way to work with uncertainty was developed by Zadeh known as Fuzzy Set.

<br>
<h2>Fuzzy set operations</h2>

Assuming X to be the universe of discourse, A ∈ X and B ∈ X, the fuzzy set operations are defined as follows:

-  ```Comparison (Is A = B?)``` : if mA(x) = mB(x) for all x in X
-  ```Containment (Is A ⊂ B?)``` : if mA(x) < mB(x) for all x in X
-  ```Union: m(A ∨B)(x)``` = max(mA(x), mB(x)) for all x in X
-  ```Intersection: m(A ∧ B)(x)``` = min(mA(x), mB(x)) for all x in X



<br>
<h2>When to Use Fuzzy Neural Networks?</h2>

> - A neuro-fuzzy system based on an underlying fuzzy system is trained by means of a data-driven learning method derived from neural network theory.
> - It can be represented as a set of fuzzy rules at any time of the learning process, i.e., before, during and after.
> - A neuro-fuzzy system approximates a n-dimensional unknown function which is partly represented by training examples

<br>
<h2><b> Architecture </h2></b>

A neuro-fuzzy system is represented as special three-layer feedforward neural network as it is shown in __figure__

<img align="right" alt="Github Image" src="https://user-images.githubusercontent.com/53006261/134787085-6a8e0463-f5d1-4f87-ad6f-55290d7bbc65.png" />


- The first layer corresponds to the input variables.
- The second layer symbolizes the fuzzy rules.
- The third layer represents the output variables.
- The fuzzy sets are converted as (fuzzy) connection weights.

> Some approaches also use five layers where the fuzzy sets are encoded in the units of the second and fourth layer, respectively. However, these models can be transformed into a three-layer architecture.


<br>
<h2><b>Types of Fuzzy Neural Network</h2></b>


<img align="right" alt="Github Image" src="https://user-images.githubusercontent.com/53006261/134787572-755fce89-e068-455f-8d55-7bb3685fc562.png">

- Cooperative Fuzzy Neural Network
>In the case of cooperative neural fuzzy systems, both artificial neural network and fuzzy system work independently from each other.The ANN tries to learn the parameters     from the fuzzy system. This can be either performed offline or online while the fuzzy system is applied.The fuzzy neural network learns fuzzy set from given training data. This is usually performed by fitting membership functions with a neural network. The Fuzzy sets are then determined offline. They are then utilized to form the fuzzy system by fuzzy rules that are given (not learned) as well. the system learns all membership function parameters online, i.e., while the fuzzy system is applied. 

    


<img align="right" alt="Github Image" src="https://user-images.githubusercontent.com/53006261/134787527-b22654ca-b17b-4b46-9653-503c296faa99.png">

- Hybrid Fuzzy Neural Network

> Hybrid neuro-fuzzy systems are homogeneous and usually resemble neural networks. Here, the fuzzy system is interpreted as special kind of neural network. The advantage of such hybrid NFS is its architecture since both fuzzy system and neural network do not have to communicate any more with each other. They are one fully fused entity. These systems can learn online and offline

<br>
<h2><b> Approach And Sample Code </h2></b>

<img alt="Github Image" src="https://user-images.githubusercontent.com/53006261/134787364-4da8e865-7e77-4016-ab69-e3b3d81d3e00.png">

- [To gain more insight on FuzzyClassificator](https://github.com/devopshq/FuzzyClassificator)
- [Steps to make a Fuzzy Min Max Classifier](https://github.com/Cartmanishere/Fuzzy-min-max-classifier)
- [Bank Failure Prediction and Missing Data Reconstruction using Fuzzy Neural Network](https://github.com/Javelin1991/htet_predict_bank_failure)
- [More Project Ideas ....](https://github.com/topics/fuzzy-neural-network)



<br>
<h2><b> Motivation and References </h2></b>

- [Fuzzy Min Max Classifier](https://medium.com/@apbetahouse45/understanding-fuzzy-neural-network-with-code-and-graphs-263d1091d773)
- [Fuzzy neural network](http://www.scholarpedia.org/article/Fuzzy_neural_network)
- [Fuzzy neural network Research](https://www.sciencedirect.com/topics/chemical-engineering/fuzzy-neural-networks)
- [Fuzzy neural network Research](https://www.hindawi.com/journals/complexity/2021/9980528/)
- [Fuzzy neural network Project](https://github.com/Javelin1991/htet_predict_bank_failure)
- [Fuzzy neural network Project](https://github.com/devopshq/FuzzyClassificator)





