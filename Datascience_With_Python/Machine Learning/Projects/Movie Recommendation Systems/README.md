## TOPIC:<br>
Movie Recommendation Systems


## RECOMMENDATION SYSTEM:<br>
Recommendation systems are Machine Learning systems that are designed to recommend items to the users based on factors. It helps users to discover new products and services.<br>
Companies like Netflix, Amazon uses recommendation systems to recommend movies or products to the users.<br>


### WHY DO WE NEED RECOMMENDATION SYSTEM:<br>
The recommendation system recommends users based on their previous activities which lead to giving a personalized recommendation which reduces the amount of time that is used by the users to search similar items.


### This tutorial is about movie recommendation system.<br>
You will get to know about different types of recommendation systems with an example.<br> 
There are different ways of calculating similarity like Euclidean distance, Cosine similarity, etc. In this tutorial, I will be using Cosine similarity to calculate the similarity between different movies.

## TYPES OF RECOMMENDATION SYSTEM:<br>
The recommendation system is broadly classified into two types:<br>
• Content-based recommendation system: This system works on the principle of similar content. <br>
• Collaborative filtering recommendation system: This system works on the similarity between users.<br>
![Image](![image](https://user-images.githubusercontent.com/89564985/134880723-afc14df1-2785-4ce3-b9aa-35d31a87b0de.png)
Image source: https://www.google.com/url?sa=i&url=https%3A%2F%2Fwww.kdnuggets.com%2F2019%2F11%2Fcontent-based-recommender-using-natural-language-processing-nlp.html&psig=AOvVaw03KOaHghuNupzdiwZkLQnC&ust=1632492327318000&source=images&cd=vfe&ved=0CAkQjhxqFwoTCODX58uilfMCFQAAAAAdAAAAABAD


## COSINE SIMILARITY:<br>
The similarity of content or similarity between the users is calculated using the cosine similarity metric.<br>
For that, we need to convert our data into vectors and then calculate the cosine angle between those vectors projected in a multi-dimensional space.<br>


### In this tutorial, we will build a content-based movie recommendation system that recommends movies given the title of the movie as input.<br>
## WORKFLOW:<br>
• First we will import the libraries pandas and numpy. Pandas library is used for reading the CSV file and for data manipulation and analysis. Numpy library is used for working with arrays.<br>
• Read the CSV files and printing the first 5 rows using head().<br>
• Removing all the unnecessary columns which are not required to recommend movies.<br>
• Check for null and duplicate values and removing them if present.<br>
• The value in the genres, keywords, cast, and crew columns are not in proper format i.e. so will extract all the necessary information from those columns.<br>
  For eg. for our content-based approach, we only want the name of the director and not the other crew members so we will extract the name of the director for that movie and      change the value for that row.<br>
• Combining the columns so that all the relevant information is in the same column.<br>
• We will use CountVectorizer to count the frequency of the words present. For that, we will ignore all the stop words.<br>
Here the problem arises. Suppose there are two words let's say 'action' is the first word and 'actions' is the second word. Now the literal meaning of both the words is the same but the CountVectorizer will treat these words as two different words and will count the frequency. So for that first, we will reduce all the words to their base root and then calculate the frequency.<br>
So this process is known as stemming which is available in nltk toolkit.<br>
• Then we will calculate the similarity between all the movies and will create a recommend function.<br>
• So whenever this function is called it will print the top 6 similar movies given a movie name as an input.<br>

## DATASET USED:<br>
Link: https://www.kaggle.com/tmdb/tmdb-movie-metadata?select=tmdb_5000_movies.csv<br>
tmdb dataset of 5000 movies.<br>
It includes two CSV files: <br>
•tmdb_5000_movies: It has columns such as genres, budgets, keywords, title, overview, revenue, tagline, etc.<br>
•tmdb_5000_credits: It has columns such as movie id, title, cast, and crew.<br>


## LIBRARIES USED:<br>
•pandas<br>
•numpy<br>
•sklearn<br>
•nltk toolkit<br>


#### REFERENCES:<br>
https://www.analyticsvidhya.com/blog/2020/11/create-your-own-movie-movie-recommendation-system/<br>
https://techvidvan.com/tutorials/movie-recommendation-system-python-machine-learning/
