## Hyperparameter Tuning
## [Click here to listen the audio](https://drive.google.com/file/d/1Bl5ni8U7NoYg22S1FsMdDqRqvsRq2LAg/view?usp=sharing)

- In Machine learning models, there be a number of parameters that need to be learned from the data.
- There are other kinds of parameters called hyperparameters, these cannot be learned directly.
- They are fixed before the training process begins.
- It is important as it expresses the important properties of a model like the complexity and fastness of the model.
- Some of the examples:
      - L1 or L2 regularization
      - Learning rate in neural network
      - C and sigma parameters in SVM
      - K in k-nn 
- strategies of  tuning the  hyperparameter:
       - GridSearchCV
       - RandomizedSearchCv

![image](https://user-images.githubusercontent.com/79050917/143676210-1ef82e1a-06c3-43aa-860b-9f7fbefd44d5.png)

**GridSearchCV:**
- In this method, the algorithm searches for the best set of hyperparameters from a grid of hyperparameters values.

**RandomizedSearchCV:**
- In this algorithm, it moves within the grid in a random fashion to find the best set of hyperparameters. 
- It reduces unnecessary computation.

![image](https://user-images.githubusercontent.com/79050917/143676220-779d7760-66ce-4300-97f4-7ecb2e320cf5.png)

**Work Flow:**
![image](https://user-images.githubusercontent.com/79050917/143676216-2e7d4be6-4bef-4ee7-b97c-cc64e1ad3766.png)

**Disadvantages:**
- It can lead to the overfitting problem
- It becomes difficult to split when we have the skewed dataset

**Advantages:**
- Increases the accuracy
- Reduces the complexity for the model

**Conclusion:**
- Hyperparameters are the special parameters in a model of machine learning as it helps in increasing the accuracy and also reducing the complexity. It can be used in many models with ease and also effortlessly. It tunes the models. 
 
 
 
 
 
 
 
 
 
 
 
 
 




