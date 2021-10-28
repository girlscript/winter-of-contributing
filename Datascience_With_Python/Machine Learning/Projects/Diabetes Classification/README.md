## Python code on diabetes Classification

## [Click here to watch video](https://drive.google.com/file/d/1NWQyi1kF8JUXFa0PCVtpGo4fEP_WVcu5/view?usp=sharing)

- Diabetes classification is a dataset and objective is to classify the data into the persons having diabetes or not.
- Dataset contains p_id, no_times_pregnant, glucose_concentration, blood_pressure, skin_fold_thickness, serum_insulin, bmi, diabetes pedigree, age, diabetes.

p_id: person id.

no_times_pregnant: number of times the person was pregnant.

glucose_concentration: concentration of glucose.

blood_pressure: blood pressure of person.

skin_fold_thickness: Thickness of skin fold.

serum_insulin: Insulin serum of person.

bmi: body mass index of person.

diabetes pedigree: diabetes pedigree of person.

age: age of person.

diabetes: 0: person not having diabetes, 1: person having diabetes.

- In this project I have used:
- Pandas to import thr data.

![Capture_1](https://user-images.githubusercontent.com/79050917/134951299-285568e2-86fe-4d41-ad50-191311b95f80.PNG)

- seaborn to visualize the data.

![Capture_2](https://user-images.githubusercontent.com/79050917/134951316-39354ec6-ee1a-4e83-904e-d4b6c9249164.PNG)

- matplotlib to plot the data and also to adjust the figure size of the plot.
- RandomForestClassifier, LogisticRegression, DecisionTreeClassifier these are the supervised machine learning models, I have used these models to train the models.

![Capture_3](https://user-images.githubusercontent.com/79050917/134951332-3c13961a-8d7c-4694-b2f6-5f51a2332f7c.PNG)
![Capture_4](https://user-images.githubusercontent.com/79050917/134951421-57bbbbdc-1f4d-4b63-85ea-85ba6478a9bb.PNG)
![Capture_5](https://user-images.githubusercontent.com/79050917/134951434-e1797511-df89-4d31-9324-10383cd69bb1.PNG)


- I have choosen decision tree algorithm which has the more accuracy and hence, i have trained the test data with decision tree algorithm.

![Capture_6](https://user-images.githubusercontent.com/79050917/134951466-f651a64c-70c0-43c9-bfbc-470ff0ca6d98.PNG)


- **I have followed the following steps while writing code.**
- **Importing the libraries.**
- **Loading the required datasets.**
- **Pre-processing the data for further process.**
- **Some of the pre-processing steps:**
- Describing the data.
- Print of some statistical information.
- Print of correlation matrix.
- Data Visualization.
- Value counts of each columns.
- **Building of model.**
- Splitting of dataset for model building.
- Training the model.
- Knowing the accuracy.
- Testing on test data.
- **Model Evaluation.**


