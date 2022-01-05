## Adaboost Algorithm
## [Click here to listen the audio](https://drive.google.com/file/d/10YTK9F6BAu7hiYrr5TacCwsOdpzqd_rz/view?usp=sharing)

- AdaBoost also called Adaptive Boosting is a technique in Machine Learning used as an Ensemble Method. 
- The most common algorithm used with AdaBoost is decision trees with one level that means with Decision trees with only 1 split. 
- These trees are also called Decision Stumps.

**Algorithm**
- In the case of AdaBoost, higher points are assigned to the data points which are miss-classified or incorrectly predicted by the previous model. 
- This means each successive model will get a weighted input.

**Model1**
Suppose the first model gives the following result, where it is able to classify two blue points on the left side and all red points correctly. But the model also miss-classify the three blue points here.

![image](https://user-images.githubusercontent.com/79050917/143810472-da5a50f6-608a-4e1e-a8f0-9cc8e10850f0.png)

**Model 2**
Now, these miss- classified data points will be given higher weight. So these three blue positive points will be given higher weights in the next iteration. For representation, the points with higher weight are bigger than the others in the image. Giving higher weights to these points means my model is going to focus more on these values. Now we will build a new model.

![image](https://user-images.githubusercontent.com/79050917/143810485-e5f8f990-b8e8-4123-ab4c-2131428bf8da.png)

**Model 3**
Now, these miss-classified red points will get a higher weight. Again we will build another model and do the predictions. The task of the third model is two focus on these three red negative points. So the decision boundary will be something as shown here.

![image](https://user-images.githubusercontent.com/79050917/143810526-3f570e3f-5d34-41ba-a722-cc92a0a08032.png)

**AdaBoost Ensemble**
After multiple iterations, we will be able to create the right decision boundary with the help of all the previous weak learners.

![image](https://user-images.githubusercontent.com/79050917/143810625-b39d3ee5-896f-4fab-bdb2-9d27a58220bc.png)

**Overview:**
- Adaptive Boosting is a good ensemble technique and can be used for both Classification and Regression problems. 
- In most cases, it is used for classification problems. 
- It is better than any other model as it improves model accuracy which can be checked by going in sequence. 
