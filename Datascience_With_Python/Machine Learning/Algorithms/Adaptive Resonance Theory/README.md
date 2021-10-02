# Adaptive Resonance Theory

## Introduction
Adaptive resonance theory is a type of neural network technique developed by Stephen Grossberg and Gail Carpenter in 1987. It is based on competition and uses unsupervised learning model. Adaptive Resonance Theory **ART** networks, as the name suggests, is always open to new learning *adaptive* without losing the old patterns *resonance*. Basically, ART network is a vector classifier which accepts an input vector and classifies it into one of the categories depending upon which of the stored pattern it resembles the most.

## Operating Principal
The main operation of ART classification can be divided into the following phases -
* **Recognition phase** − The input vector is compared with the classification presented at every node in the output layer. The output of the neuron becomes “1” if it best matches with the classification applied, otherwise it becomes “0”.
* **Comparison phase** − In this phase, a comparison of the input vector to the comparison layer vector is done. The condition for reset is that the degree of similarity would be less than vigilance parameter.
* **Search phase** − In this phase, the network will search for reset as well as the match done in the above phases. Hence, if there would be no reset and the match is quite good, then the classification is over. Otherwise, the process would be repeated and the other stored pattern must be sent to find the correct match.

### Types of Adaptive Resonance Theory (ART)
Carpenter and Grossberg developed different ART architectures as a result of 20 years of research. The ARTs can be classified as follows:

* **ART1** – It is the simplest and the basic ART architecture. It is capable of clustering binary input values.
* **ART2** – It is extension of ART1 that is capable of clustering continuous-valued input data.
* **Fuzzy ART** – It is the augmentation of fuzzy logic and ART.
* **ARTMAP** – It is a supervised form of ART learning where one ART learns based on the previous ART module. It is also known as predictive ART.
* **FARTMAP** – This is a supervised ART architecture with Fuzzy logic included.

### ART1
It is a type of ART, which is designed to cluster binary vectors. We can understand about this with the architecture of it.

#### Architecture of ART1
It consists of the following two units −

**Computational Unit** − It is made up of the following −
* **Input unit (F1 layer)** − It further has the following two portions −
    * **F1 a layer** *Inputportion* − In ART1, there would be no processing in this portion rather than having the input vectors only. It is connected to F1b layer interfaceportion.
    * **F1 b layer** *Interfaceportion* − This portion combines the signal from the input portion with that of F2 layer. F1b layer is connected to F2 layer through bottom up weights bij and F2 layer is connected to F1b layer through top down weights tji.
* **Cluster Unit (F2 layer)** − This is a competitive layer. The unit having the largest net input is selected to learn the input pattern. The activation of all other cluster unit are set to 0.
* **Reset Mechanism** − The work of this mechanism is based upon the similarity between the top-down weight and the input vector. Now, if the degree of this similarity is less than the vigilance parameter, then the cluster is not allowed to learn the pattern and a rest would happen.

<img src="https://github.com/Apoorv-17/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Adaptive%20Resonance%20Theory/Images/Computational%20Unit.png">

**Supplement Unit** − Actually the issue with Reset mechanism is that the layer **F2** must have to be inhibited under certain conditions and must also be available when some learning happens. That is why two supplemental units namely, **G1** and **G2** is added along with reset unit, **R**. They are called **gain control units**. These units receive and send signals to the other units present in the network. ‘+’ indicates an excitatory signal, while ‘−’ indicates an inhibitory signal.

<img src="https://github.com/Apoorv-17/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Adaptive%20Resonance%20Theory/Images/Supplement%20Unit.png">

#### Parameters Used
Following parameters are used -
* **n** − Number of components in the input vector
* **m** − Maximum number of clusters that can be formed
* **bij** − Weight from F1b to F2 layer, i.e. bottom-up weights
* **tji** − Weight from F2 to F1b layer, i.e. top-down weights
* **ρ** − Vigilance parameter
* **||x||** − Norm of vector x

#### Algorithm
**Step 1** − Initialize the learning rate, the vigilance parameter, and the weights as follows −

<img src="https://github.com/Apoorv-17/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Adaptive%20Resonance%20Theory/Images/Algo1.png">

**Step 2** − Continue step 3-9, when the stopping condition is not true.

**Step 3** − Continue step 4-6 for every training input.

**Step 4** − Set activations of all F1 a and F1 units as follows

<img src="https://github.com/Apoorv-17/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Adaptive%20Resonance%20Theory/Images/Algo2.png">

**Step 5** − Input signal from F1a to F1b layer must be sent like

<img src="https://github.com/Apoorv-17/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Adaptive%20Resonance%20Theory/Images/Algo3.png">

**Step 6** − For every inhibited F2 node

<img src="https://github.com/Apoorv-17/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Adaptive%20Resonance%20Theory/Images/Algo4.png">

**Step 7** − Perform step 8-10, when the reset is true.

**Step 8** − Find J for yJ ≥ yj for all nodes j.

**Step 9** − Again calculate the activation on F1 b as follows

<img src="https://github.com/Apoorv-17/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Adaptive%20Resonance%20Theory/Images/Algo5.png">

**Step 10** − Now, after calculating the norm of vector x and vector s, we need to check the reset condition as follows −

    If ||x||/ ||s|| < vigilance parameter ρ,⁡then⁡inhibit ⁡node J and go to step 7

    Else If ||x||/ ||s|| ≥ vigilance parameter ρ, then proceed further.

**Step 11** − Weight updating for node J can be done as follows −

<img src="https://github.com/Apoorv-17/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Adaptive%20Resonance%20Theory/Images/Algo6.png">

**Step 12** − The stopping condition for algorithm must be checked and it may be as follows −
* Do not have any change in weight.
* Reset is not performed for units.
* Maximum number of epochs reached.

#### Application of ART:

ART stands for Adaptive Resonance Theory. ART neural networks used for fast, stable learning and prediction have been applied in different areas. The application incorporates target recognition, face recognition, medical diagnosis, signature verification, mobile control robot.

<img src="https://github.com/Apoorv-17/winter-of-contributing/blob/Datascience_With_Python/Datascience_With_Python/Machine%20Learning/Algorithms/Adaptive%20Resonance%20Theory/Images/Applications.png">

**Target recognition:**
Fuzzy ARTMAP neural network can be used for automatic classification of targets depend on their radar range profiles. Tests on synthetic data show the fuzzy ARTMAP can result in substantial savings in memory requirements when related to k nearest neighbor(kNN) classifiers. The utilization of multiwavelength profiles mainly improves the performance of both kinds of classifiers.

**Medical diagnosis:**
Medical databases present huge numbers of challenges found in general information management settings where speed, use, efficiency, and accuracy are the prime concerns. A direct objective of improved computer-assisted medicine is to help to deliver intensive care in situations that may be less than ideal. Working with these issues has stimulated several ART architecture developments, including ARTMAP-IC.

**Signature verification:**
Automatic signature verification is a well known and active area of research with various applications such as bank check confirmation, ATM access, etc. the training of the network is finished using ART1 that uses global features as input vector and the verification and recognition phase uses a two-step process. In the initial step, the input vector is coordinated with the stored reference vector, which was used as a training set, and in the second step, cluster formation takes place.

**Mobile control robot:**
Nowadays, we perceive a wide range of robotic devices. It is still a field of research in their program part, called artificial intelligence. The human brain is an interesting subject as a model for such an intelligent system. Inspired by the structure of the human brain, an artificial neural emerges. Similar to the brain, the artificial neural network contains numerous simple computational units, neurons that are interconnected mutually to allow the transfer of the signal from the neurons to neurons. Artificial neural networks are used to solve different issues with good outcomes compared to other decision algorithms.

####  Advantage of Adaptive Resonance Theory (ART)

-   It exhibits stability and is not disturbed by a wide variety of inputs provided to its network.
-   It can be integrated and used with various other techniques to give more good results.
-   It can be used for various fields such as mobile robot control, face recognition, land cover classification, target recognition, medical diagnosis, signature verification, clustering web users, etc.
-   It has got advantages over competitive learning (like bpnn etc). The competitive learning lacks the capability to add new clusters when deemed necessary.
-   It does not guarantee stability in forming clusters.

#### Limitations of Adaptive Resonance Theory
Some ART networks are inconsistent (like the Fuzzy ART and ART1) as they depend upon the order in which training data, or upon the learning rate.

## Conclusion
* Adaptive Resonance Theory comes under unsupervised learning and is always open to new learning adaptive without losing the old patterns resonance.
* The main operation of ART network can be categorized into 3 types depending upon which of the stored pattern it resembles the most.
   * Recognition phase
   * Comparison phase
   * Search phase
* ART1 is designed to cluster binary vectors. Its architecture consists of 2 units −
   * Computational Unit
   * Supplement Unit
* Its application incorporates target recognition, face recognition, medical diagnosis, signature verification, mobile control robot.

## Contributor
* ID: 537
* DSWP Batch: 15
* [@Apoorv Yadav](https://github.com/Apoorv-17)
