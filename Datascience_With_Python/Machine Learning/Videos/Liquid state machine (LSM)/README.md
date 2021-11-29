# Liquid state machine (LSM)

## Video Link : [Liquid state machine (LSM)](https://drive.google.com/file/d/1FclRUi4tSJnpDx76CG0fERxPGrmuJzHV/view?usp=sharing)

- A liquid state machine (LSM) is a type of reservoir computer that uses a spiking neural network. An LSM consists of a large collection of units (called nodes, or neurons). Each node receives time varying input from external sources (the inputs) as well as from other nodes. 
- Nodes are randomly connected to each other. The recurrent nature of the connections turns the time varying input into a spatio-temporal pattern of activations in the network nodes. The spatio-temporal patterns of activation are read out by linear discriminant units.

- The soup of recurrently connected nodes will end up computing a large variety of nonlinear functions on the input.
-  Given a large enough variety of such nonlinear functions, it is theoretically possible to obtain linear combinations (using the read out units) to perform whatever mathematical operation is needed to perform a certain task, such as speech recognition or computer vision.

- The word liquid in the name comes from the analogy drawn to dropping a stone into a still body of water or other liquid. The falling stone will generate ripples in the liquid. 

![image](https://user-images.githubusercontent.com/63282184/143865954-5d1b0901-f471-4eda-bf4e-656b25f12c8f.png)

- The input (motion of the falling stone) has been converted into a spatio-temporal pattern of liquid displacement (ripples).

- LSMs have been put forward as a way to explain the operation of brains. LSMs are argued to be an improvement over the theory of artificial neural networks because:

1. Circuits are not hard coded to perform a specific task.

2. Continuous time inputs are handled "naturally".

3. Computations on various time scales can be done using the same network.

4. The same network can perform multiple computations.

![image](https://user-images.githubusercontent.com/63282184/143866106-3d6e8af0-b8f2-4b61-a32c-5c159fadfb92.png)


- Criticisms of LSMs as used in computational neuroscience are that

1. LSMs don't actually explain how the brain functions. At best they can replicate some parts of brain functionality.

2. There is no guaranteed way to dissect a working network and figure out how or what computations are being performed.

3.Very little control over the process.


![image](https://user-images.githubusercontent.com/63282184/143866014-61cd4c07-79f0-4d7b-bf80-7327f15a49d6.png)

## Conclusion

- We have presented an ensemble approach for Liquid State Machines (LSMs) that enhances separation and approximation properties, leading to accuracy improvements.
-  The separation property in LSMs measures the dispersion between projected liquid states from different classes, whereas the approximation property indicates the concentration of the liquid states that belong to the same class. 
-  The ratio between SP and AP (DR) is a measure of the class discrimination.
-   We witnessed that the DR increases when a large liquid is divided into multiple smaller independent liquids across four speech and image recognition tasks. 
-   We observed the existence of an optimal number of liquids (Nens, opt) until which the DR increases and saturates thereafter.
-    Owing to the improvement in the DR in our proposed ensemble approach, we noticed an LSM accuracy enhancement with increasing number of liquids. 
-   The accuracy peaked at the same Nens, opt point at which each DR saturated, for different recognition tasks. 
-   This validated the existence of an optimal number of liquids which gives the best accuracy for the LSM, and this point is highly dependent upon the application and the total number of liquid neurons.
