# Disneyland Review Analysis

### Aim:

The aim of this project is to analyse the reviews given by visitors from different countries of the world using Natural Language Processing (NLP) to understand the sentiment of the reviews and classify them using Sentiment Analysis metrics like Sentiment Polarity and VADER Polarity. This processed data is then fed to different classifier models (DecisionTreeClassifier and RandomForestClassifier) to get trained and predict the sentiment of the test reviews.

---

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

---

### Workflow:
#### 1. Loading the dataset: 
The dataset is read using pandas as a dataframe.
#### 2. Dealing with missing values: 
Dropping rows containing missing values seemed like the best way to deal with them in this dataset. This was done using a function called dropna.
#### 3. Pre-processing of data:
To preprocess your text simply means to bring your text into a form that is predictable and analyzable for your task. First, the year_month column has been spilt and made
into separate columns (year and month) to make it easier to analyze the data. Multiple steps of preprocessing have been applied on the reviews. Some of which include lowering
of text, removing punctutation and stopwords, lemmatization, etc. For more on preprocessing of data, [click here](https://github.com/girlscript/winter-of-contributing/tree/Datascience_With_Python/Datascience_With_Python/Natural%20Language%20Processing/Tutorials/Text%20Preprocessing).
#### 4. Data visualization (via graphs and maps):
Data visualization has been used to observe the patterns in reviews and ratings. The libraries used for data visualization are seaborn and matplotlib.
#### 5. Word cloud:
This is another way to visualize data. In the word clouds in this project, most commonly used words in reviews have been included and the shape of the word cloud is the
map of the location where the branch is.
#### 6. Label encoding on various columns:
Label encoding is used to convert labels to numeric format which makes it machine readable. This was used on columns wherever necessary.
#### 7. Performing sentiment analysis using SentimentIntensityAnalyzer and VADER Polarity:
This step was quite straightforward, it just included importing the right packages and functions.
#### 8. Splitting the data:
The data is then spilt into training and testing data.
#### 9. Using Tf-IDF Vectorizer:
This is used to count the frequency of different words and decide how much weightage should be given to each for analysis.
#### 10. Using Decision Tree Classifier:
Decision tree is a type of supervised learning algorithm that can be used for both regression and classification problems. The algorithm uses training data to create rules that can be represented by a tree structure. Decision tree can work with both categorical and numerical data. This is in contrast with other machine learning algorithms that cannot work with categorical data and requires encoding to numeric values.

To read more about decision tree classifiers, [click here](https://machinelearningknowledge.ai/decision-tree-classifier-in-python-sklearn-with-example/).
#### 11. Using Random Forest Classifier:
Random forest is an ensemble machine learning algorithm. Random forest involves constructing a large number of decision trees from bootstrap samples from the training dataset, like bagging.

To read more about random forest classifiers, [click here](https://machinelearningmastery.com/random-forest-ensemble-in-python/).

---

[Link to dataset used.](https://www.kaggle.com/arushchillar/disneyland-reviews?select=DisneylandReviews.csv)

---

### Conclusion

We can conclude that VADER Polarity is a better metric than Sentiment Polarity to analyze reviews.

Random Forest Classifier works better than Decision Tree Classifier in both Sentiment Polarity and VADER Polarity. Even though the training accuracy for Decision Tree Classifier (when trained using VADER Polarity) is higher (99.23%), Random Forest Classifier works better on testing data (accuracy of 91.61%).

Project contributed by [Deepesha Burse](https://github.com/deepeshaburse).
