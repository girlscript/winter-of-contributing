# Disneyland Review Analysis

### Aim:

The aim of this project is to analyse the reviews given by visitors from different countries of the world using Natural Language Processing (NLP) to understand the sentiment of the reviews and classify them using Sentiment Analysis metrics like Sentiment Polarity and VADER Polarity. This processed data is then fed to different classifier models (DecisionTreeClassifier and RandomForestClassifier) to get trained and predict the sentiment of the test reviews.

### Libraries Used:
- pandas
- numpy
- seaborn
- matplotlib
- nltk
- wordcloud
- scikit-learn
- string
- PIL

### Topics Covered:
- Loading the dataset
- Dealing with missing values
- Pre-processing of data
- Data visualization (via graphs and maps)
- Word cloud
- Label encoding on various columns
- Performing sentiment analysis using SentimentIntensityAnalyzer and VADER Polarity
- Splitting the data
- Using Tf-IDF Vectorizer
- Using Decision Tree Classifier
- Using Random Forest Classifier

### Models Used:
#### 1. Decision Tree Classifier: 
Decision tree is a type of supervised learning algorithm that can be used for both regression and classification problems. The algorithm uses training data to create rules that can be represented by a tree structure. Decision tree can work with both categorical and numerical data. This is in contrast with other machine learning algorithms that cannot work with categorical data and requires encoding to numeric values.

To read more about decision tree classifiers, [click here](https://machinelearningknowledge.ai/decision-tree-classifier-in-python-sklearn-with-example/).

#### 2. Random Forest Classifier:
Random forest is an ensemble machine learning algorithm. Random forest involves constructing a large number of decision trees from bootstrap samples from the training dataset, like bagging.

To read more about random forest classifiers, [click here](https://machinelearningmastery.com/random-forest-ensemble-in-python/).

[Dataset used](https://www.kaggle.com/arushchillar/disneyland-reviews?select=DisneylandReviews.csv)

### Conclusion

We can conclude that VADER Polarity is a better metric than Sentiment Polarity to analyze reviews.

Random Forest Classifier works better than Decision Tree Classifier in both Sentiment Polarity and VADER Polarity. Even though the training accuracy for Decision Tree Classifier (when trained using VADER Polarity) is higher (99.23%), Random Forest Classifier works better on testing data (accuracy of 91.61%).
