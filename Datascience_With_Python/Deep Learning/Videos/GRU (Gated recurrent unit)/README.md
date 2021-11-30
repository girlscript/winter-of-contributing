# GRU (Gated recurrent unit)

## Video link : [GRU (Gated recurrent unit)](https://drive.google.com/file/d/13NkXibBa3yz-AVYzPeu2ysXDhuP58_4J/view?usp=sharing)

 Introduced by Cho, et al. in 2014, GRU (Gated Recurrent Unit) aims to solve the vanishing gradient problem which comes with a standard recurrent neural network. GRU can also be considered as a variation on the LSTM because both are designed similarly and, in some cases, produce equally excellent results.
 
## How do GRUs work?

As mentioned above, GRUs are improved version of standard recurrent neural network. But what makes them so special and effective?

To solve the vanishing gradient problem of a standard RNN, GRU uses, so-called, update gate and reset gate. Basically, these are two vectors which decide what information should be passed to the output. The special thing about them is that they can be trained to keep information from long ago, without washing it through time or remove information which is irrelevant to the prediction.

To explain the mathematics behind that process we will examine a single unit from the following recurrent neural network:

![image](https://user-images.githubusercontent.com/63282184/143872552-6bddbed6-a8d3-4d53-8acf-5b90eaa0a566.png)

![image](https://user-images.githubusercontent.com/63282184/143872590-1e2c2c7a-6158-4b5f-b1e2-e9c0e5ea86d7.png)

## 1. Update gate
We start with calculating the update gate z_t for time step t using the formula:

![image](https://user-images.githubusercontent.com/63282184/143872667-9afa8793-0c60-42a1-8f21-39b56c52532c.png)


## 2. Reset gate
Essentially, this gate is used from the model to decide how much of the past information to forget. To calculate it, we use:

![image](https://user-images.githubusercontent.com/63282184/143872741-835ed6fe-be09-45f1-a027-2b636f46be84.png)

## 3. Current memory content
Let’s see how exactly the gates will affect the final output. First, we start with the usage of the reset gate. We introduce a new memory content which will use the reset gate to store the relevant information from the past. It is calculated as follows:

![image](https://user-images.githubusercontent.com/63282184/143872815-ff5455fa-4b42-4221-b536-f486b27f4f1d.png)

## 4. Final memory at current time step
As the last step, the network needs to calculate h_t — vector which holds information for the current unit and passes it down to the network. In order to do that the update gate is needed. It determines what to collect from the current memory content — h’_t and what from the previous steps — h_(t-1). That is done as follows:

![image](https://user-images.githubusercontent.com/63282184/143872884-0b90d28f-c9ca-4e0a-ba21-a2fb35f86884.png)



## Conclusion 

- Now, you can see how GRUs are able to store and filter the information using their update and reset gates.
-  That eliminates the vanishing gradient problem since the model is not washing out the new input every single time but keeps the relevant information and passes it down to the next time steps of the network. 
-  If carefully trained, they can perform extremely well even in complex scenarios.
