# Fuzzy Neural Networks

## Video Link : [Fuzzy Neural Networks](https://drive.google.com/file/d/13bzDwVjrRnIhA6zIFj1_W4wpf78bJkdu/view?usp=sharing)

A fuzzy neural network or neuro-fuzzy system is a learning machine that finds the parameters of a fuzzy system (i.e., fuzzy sets, fuzzy rules) by exploiting approximation techniques from neural networks.

![image](https://user-images.githubusercontent.com/63282184/143688632-8063a044-b762-4a82-9479-4e6e3474694f.png)

![image](https://user-images.githubusercontent.com/63282184/143688920-1323b2db-58d9-4c39-9291-17386124eafd.png)

## Combining fuzzy systems with neural networks

- Both neural networks and fuzzy systems have some things in common. They can be used for solving a problem (e.g. pattern recognition, regression or density estimation) if there does not exist any mathematical model of the given problem. They solely do have certain disadvantages and advantages which almost completely disappear by combining both concepts.

- Neural networks can only come into play if the problem is expressed by a sufficient amount of observed examples. These observations are used to train the black box. On the one hand no prior knowledge about the problem needs to be given. On the other hand, however, it is not straightforward to extract comprehensible rules from the neural network's structure.

- On the contrary, a fuzzy system demands linguistic rules instead of learning examples as prior knowledge. Furthermore the input and output variables have to be described linguistically. If the knowledge is incomplete, wrong or contradictory, then the fuzzy system must be tuned. Since there is not any formal approach for it, the tuning is performed in a heuristic way. This is usually very time consuming and error-prone.

## Comparision

![image](https://user-images.githubusercontent.com/63282184/143688620-af446bb5-4a0d-4cc6-8311-2e218a6b8918.png)


## Characteristics

- A neuro-fuzzy system based on an underlying fuzzy system is trained by means of a data-driven learning method derived from neural network theory. This heuristic only takes into account local information to cause local changes in the fundamental fuzzy system.
- It can be represented as a set of fuzzy rules at any time of the learning process, i.e., before, during and after.
- Thus the system might be initialized with or without prior knowledge in terms of fuzzy rules.
- The learning procedure is constrained to ensure the semantic properties of the underlying fuzzy system.
- A neuro-fuzzy system approximates a n-dimensional unknown function which is partly represented by training examples.
- Fuzzy rules can thus be interpreted as vague prototypes of the training data.
- A neuro-fuzzy system is represented as special three-layer feedforward neural network as it is shown in Figure.
- The first layer corresponds to the input variables.
- The second layer symbolizes the fuzzy rules.
- The third layer represents the output variables.
- The fuzzy sets are converted as (fuzzy) connection weights.
- Some approaches also use five layers where the fuzzy sets are encoded in the units of the second and fourth layer, respectively. However, these models can be transformed into a three-layer architecture.

## Conclusion
### It is desirable for fuzzy systems to have an automatic adaption procedure which is comparable to neural networks.
