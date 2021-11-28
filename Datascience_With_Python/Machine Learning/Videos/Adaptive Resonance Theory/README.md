# Adaptive Resonance Theory

## Video Link: [Adaptive Resonance Theory](https://drive.google.com/file/d/16AGUi3g43E4SgXLh7JXvGJWZi8Hruysl/view?usp=sharing)

## Adaptive Resonance Theory (ART)
- Adaptive resonance theory is a type of neural network technique developed by Stephen Grossberg and Gail Carpenter in 1987.
- The basic ART uses unsupervised learning technique. The term “adaptive” and “resonance” used in this suggests that they are open to new learning(i.e. adaptive) without discarding the previous or the old information(i.e. resonance).
- The ART networks are known to solve the stability-plasticity dilemma i.e., stability refers to their nature of memorizing the learning and plasticity refers to the fact that they are flexible to gain new information.
- Due to this the nature of ART they are always able to learn new input patterns without forgetting the past.
- ART networks implement a clustering algorithm. Input is presented to the network and the algorithm checks whether it fits into one of the already stored clusters.
- If it fits then the input is added to the cluster that matches the most else a new cluster is formed.

![image](https://user-images.githubusercontent.com/63282184/143730137-975559c6-c320-4206-9f35-4f2428efe4c2.png)

## Types of Adaptive Resonance Theory(ART)

Carpenter and Grossberg developed different ART architectures as a result of 20 years of research. The ARTs can be classified as follows:

- ART1 – It is the simplest and the basic ART architecture. It is capable of clustering binary input values.
- ART2 – It is extension of ART1 that is capable of clustering continuous-valued input data.
- Fuzzy ART – It is the augmentation of fuzzy logic and ART.
- ARTMAP – It is a supervised form of ART learning where one ART learns based on the previous ART module. It is also known as predictive ART.
- FARTMAP – This is a supervised ART architecture with Fuzzy logic included.

## Basic of Adaptive Resonance Theory (ART) Architecture
The adaptive resonant theory is a type of neural network that is self-organizing and competitive. It can be of both types, the unsupervised ones(ART1, ART2, ART3, etc) or the supervised ones(ARTMAP). Generally, the supervised algorithms are named with the suffix “MAP”.
But the basic ART model is unsupervised in nature and consists of :

- F1 layer or the comparison field(where the inputs are processed)
- F2 layer or the recognition field (which consists of the clustering units)
- The Reset Module (that acts as a control mechanism)


The F1 layer accepts the inputs and performs some processing and transfers it to the F2 layer that best matches with the classification factor.

There exist two sets of weighted interconnection for controlling the degree of similarity between the units in the F1 and the F2 layer.

The F2 layer is a competitive layer.The cluster unit with the large net input becomes the candidate to learn the input pattern first and the rest F2 units are ignored.

- The reset unit makes the decision whether or not the cluster unit is allowed to learn the input pattern depending on how similar its top-down weight vector is to the input vector and to he decision. This is called the vigilance test.
- Thus we can say that the vigilance parameter helps to incorporate new memories or new information. Higher vigilance produces more detailed memories, lower vigilance produces more general memories.

- Generally two types of learning exists,slow learning and fast learning.In fast learning, weight update during resonance occurs rapidly. It is used in ART1.In slow learning, the weight change occurs slowly relative to the duration of the learning trial. It is used in ART2.

## Advantage of Adaptive Resonance Theory (ART)

- It exhibits stability and is not disturbed by a wide variety of inputs provided to its network.
- It can be integrated and used with various other techniques to give more good results.
- It can be used for various fields such as mobile robot control, face recognition, land cover classification, target recognition, medical diagnosis, signature verification, clustering web users, etc.
- It has got advantages over competitive learning (like bpnn etc). The competitive learning lacks the capability to add new clusters when deemed necessary.
- It does not guarantee stability in forming clusters.

## Limitations of Adaptive Resonance Theory

- Some ART networks are inconsistent (like the Fuzzy ART and ART1) as they depend upon the order in which training data, or upon the learning rate.
