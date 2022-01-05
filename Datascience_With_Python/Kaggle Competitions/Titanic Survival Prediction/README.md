## Titanic Survival Prediction
## [Click here to see the video](https://drive.google.com/file/d/110jvHc7o-4_IckocR1L_xpquaWVws4iR/view?usp=sharing)

- The sinking of the Titanic is one of the most infamous shipwrecks in history.

- On April 15, 1912, during her maiden voyage, the widely considered “unsinkable” RMS Titanic sank after colliding with an iceberg. Unfortunately, there weren’t enough lifeboats for everyone onboard, resulting in the death of 1502 out of 2224 passengers and crew.

- While there was some element of luck involved in surviving, it seems some groups of people were more likely to survive than others.

- In this challenge, we ask you to build a predictive model that answers the question: “what sorts of people were more likely to survive?” using passenger data (ie name, age, gender, socio-economic class, etc).

## Goal:
Classify whether the person will survive or not.

## Libraries used :
The required libraries for this project work
- Numpy==1.19.2
- Pandas==1.2.4
- Matplotlib==3.4.2
- Sklearn
- Seaborn

## Work Flow:
Load the dataset -> EDA -> Model Building -> Evaluation -> Deployment

- Load the dataset:
![image](https://user-images.githubusercontent.com/79050917/143768471-693727bc-ade3-4ed4-9820-cc01376d71f2.png)

- EDA
![image](https://user-images.githubusercontent.com/79050917/143768500-1a18985d-ce54-4d1d-8ac2-365dad8a6ed3.png)

- Model Building and evaluation
![image](https://user-images.githubusercontent.com/79050917/143768518-6d68630e-0883-4c74-8409-34b6b7e02906.png)





## Data Visualization :

![image](https://user-images.githubusercontent.com/79050917/143763002-443798ce-e450-48c9-930d-2589cb4dee95.png)
- Countplot of sex column

## Accuracy:
SVC: 84.43%
RandomForestClassifier  84.11%
KNeighborsClassifier: 81.86%


## Conclusion:
- SVC is used to train the data.
- Goal is to predict the person having the breast cancer or not using SVC.






