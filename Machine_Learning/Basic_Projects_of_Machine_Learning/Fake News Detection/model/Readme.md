## Fake News Detection

Develop a machine learning program to identify when an article might be fake news.
![I-Newspaper2](https://user-images.githubusercontent.com/72789934/142722008-de7f8a30-6417-4501-b454-29dadc09ac02.jpg)

## Dataset :

The dataset which is used here, is collected from Kaggle website. Here is the link of the dataset :https://www.kaggle.com/c/fake-news

## Goal/Aim of the project :

To develop a machine learning program to identify when a article might be fake news.

## Libraries used :

1. Numpy
2. Pandas
3. Matplotlib
4. Sklearn
5. nltk

## What have I done?

1. Importing all the required libraries. Check requirements.txt
2. Upload the dataset and the Jupyter Notebook file.

3. Data Processing
4. Feature extraction(Count Vectorizer)
5. Creating Bag of words and Stemming
6. Normalization
7. Prediction Models
   - MultinomialNB
   - PassiveAggressiveClassifier
   - Multinomial Classifier with Hyperparameter
8. Conclusion

## Model comparison :

<br>
 MultinomialNB: 81%     <br>
    
![confusion_matrix](https://user-images.githubusercontent.com/72789934/142722267-c410c08d-9b39-4d78-8799-4465852b515f.png)

 PassiveAggressiveClassifier : 77% <br>
 ![confusion_matrix_passive regressor_algo](https://user-images.githubusercontent.com/72789934/142722278-ecc31245-8926-44c0-8403-563f922d070a.png)

 Multinomial Classifier with Hyperparameter: 82% <br>

## Conclusion :

Hence according to the accuracy we can say that Multinomial Classifier with Hyperparameter is the most accurate estimator for this dataset,

---

**GirlScript Winter of Contributions 2021**
