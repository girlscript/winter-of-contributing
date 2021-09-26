##TOPIC:<br>
Data Science with Python : Movie Recommendation Systems


##RECOMMENDATION SYSTEM:<br>
Recommendation systems are Machine Learning systems that are designed to recommend items to the users based on factors. It helps users to discover new products and services.<br>
Companies like Netflix, Amazon uses recommendation systems to recommend movies or products to the users.


##WHY DO WE NEED RECOMMENDATION SYSTEM:
Recommender systems help the users to get personalized recommendations.<br>
It reduces transaction costs of finding and selecting items such as movies or products from e-commerce site.


#This tutorial is about movie recommendation system.

##TYPES OF RECOMMENDATION SYSTEM:<br>
The recommendation system is broadly classified into two types:<br>
• Content-based recommendation system: This system works on the principle of similar content. <br>
• Collaborative filtering recommendation system: This system works on the similarity between users.


##COSINE SIMILARITY
The similarity of content or similarity between the users is calculated using the cosine similarity metric.<br>
For that, we need to convert our data into vectors and then calculate the cosine angle between those vectors projected in a multi-dimensional space.


#In this tutorial, we will build a content-based movie recommendation system that recommends movies given the title of the movie as input.

##DATASET:
Link: https://www.kaggle.com/tmdb/tmdb-movie-metadata?select=tmdb_5000_movies.csv<br>
tmdb dataset of 5000 movies.<br>
It includes two CSV files: <br>
•tmdb_5000_movies: It has columns such as genres, budgets, keywords, title, overview, revenue, tagline, etc.<br>
•tmdb_5000_credits: It has columns such as movie id, title, cast, and crew.


##LIBRARIES USED:<br>
•pandas<br>
•numpy<br>
•sklearn<br>
•nltk toolkit


##REFERENCES:<br>
https://www.analyticsvidhya.com/blog/2020/11/create-your-own-movie-movie-recommendation-system/<br>
https://techvidvan.com/tutorials/movie-recommendation-system-python-machine-learning/
