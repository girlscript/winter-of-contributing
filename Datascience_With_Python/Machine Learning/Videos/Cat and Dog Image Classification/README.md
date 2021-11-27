## Cat and Dog Image Classification
## [Click here to listen the video](https://drive.google.com/file/d/18E6IjuB9wUpckiCrnsfK_YnAtjyJB62I/view?usp=sharing)
# Introduction:
The Asirra data set
- Web services are often protected with a challenge that's supposed to be easy for people to solve, but difficult for computers. Such a challenge is often called a CAPTCHA (Completely Automated Public Turing test to tell Computers and Humans Apart) or HIP (Human Interactive Proof). HIPs are used for many purposes, such as to reduce email and blog spam and prevent brute-force attacks on web site passwords.
- Asirra (Animal Species Image Recognition for Restricting Access) is a HIP that works by asking users to identify photographs of cats and dogs. This task is difficult for computers, but studies have shown that people can accomplish it quickly and accurately. Many even think it's fun! Here is an example of the Asirra interface:
- Asirra is unique because of its partnership with Petfinder.com, the world's largest site devoted to finding homes for homeless pets. They've provided Microsoft Research with over three million images of cats and dogs, manually classified by people at thousands of animal shelters across the United States. Kaggle is fortunate to offer a subset of this data for fun and research. 

Image recognition attacks
- While random guessing is the easiest form of attack, various forms of image recognition can allow an attacker to make guesses that are better than random. There is enormous diversity in the photo database (a wide variety of backgrounds, angles, poses, lighting, etc.), making accurate automatic classification difficult. In an informal poll conducted many years ago, computer vision experts posited that a classifier with better than 60% accuracy would be difficult without a major advance in the state of the art. For reference, a 60% classifier improves the guessing probability of a 12-image HIP from 1/4096 to 1/459.


Here is the link of the dataset : https://www.kaggle.com/c/dogs-vs-cats/data

## Goal:
CLassification of dog and cat

# Work Flow:
Loading the dataset -> EDA -> Building the model -> Evaluation -> Deployment


## Libraries used :
The required libraries for this project work
- Numpy==1.19.2
- Pandas==1.2.4
- Matplotlib==3.4.2
- Sklearn
- Seaborn

## Data Visualization :
![image](https://user-images.githubusercontent.com/79050917/143545649-2306b0e7-4832-408e-a69d-3a046ba8422d.png)
- Countplot of dog and cat

![image](https://user-images.githubusercontent.com/79050917/143545736-725faea4-8269-4a05-a93c-44116ab8ef9a.png)
- pictures of cat and dog

I have used keras to train the model.


## Conclusion:
- Used keras to classify the pictured into cat and dog
- the number of epochs used are 05.
