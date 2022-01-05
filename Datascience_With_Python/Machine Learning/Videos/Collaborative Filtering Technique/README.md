# Collaborative Filtering Technique

## Video Link: [Collaborative Filtering Technique](https://drive.google.com/file/d/1XQgJkNJS1rqOls-o6OxxvEwuo2_lB8Oz/view?usp=sharing)

- We see the use of recommendation systems all around us. These systems are personalizing our web experience, telling us what to buy (Amazon), which movies to watch (Netflix), whom to be friends with (Facebook), which songs to listen (Spotify) etc. 
- These recommendation systems leverage our shopping/ watching/ listening patterns and predict what we could like in future based on our behavior patterns. 
- The most basic models for recommendations systems are collaborative filtering models which are based on assumption that people like things similar to other things they like, and things that are liked by other people with similar taste.

![image](https://user-images.githubusercontent.com/63282184/141819382-52717047-df1d-4696-99ba-ee76f212f618.png)

## Types of collaborative filtering techniques
A lot of research has been done on collaborative filtering (CF), and most popular approaches are based on low-dimensional factor models (model based matrix factorization. 

![image](https://user-images.githubusercontent.com/63282184/141819453-31e4d760-eb15-4e6f-be88-6977b49c8fa9.png)

## 1. Memory based approach:
- Memory-Based Collaborative Filtering approaches can be divided into two main sections: user-item filtering and item-item filtering. A user-item filtering takes a particular user, find users that are similar to that user based on similarity of ratings, and recommend items that those similar users liked. In contrast, item-item filtering will take an item, find users who liked that item, and find other items that those users or similar users also liked. It takes items and outputs other items as recommendations.
- Item-Item Collaborative Filtering: “Users who liked this item also liked …”
- User-Item Collaborative Filtering: “Users who are similar to you also liked …”
- The key difference of memory-based approach from the model-based techniques (hang on, will be discussed in next paragraph) is that we are not learning any parameter using gradient descent (or any other optimization algorithm). 
- The closest user or items are calculated only by using Cosine similarity or Pearson correlation coefficients, which are only based on arithmetic operations.


A common distance metric is cosine similarity. The metric can be thought of geometrically if one treats a given user’s (item’s) row (column) of the ratings matrix as a vector. For user-based collaborative filtering, two users’ similarity is measured as the cosine of the angle between the two users’ vectors. For users u and u′, the cosine similarity is:

![image](https://user-images.githubusercontent.com/63282184/141819612-c8139585-01b0-45ad-b988-ae463ec48f9d.png)


## 2. Model based approach
- In this approach, CF models are developed using machine learning algorithms to predict user’s rating of unrated items. As per my understanding, the algorithms in this approach can further be broken down into 3 sub-types.

![image](https://user-images.githubusercontent.com/63282184/141819662-235fda3d-86c8-4175-a98c-f56a23f651d3.png)


## Comparisons and Conclusions
Below is the plot of MSE obtained from different approaches on MovieLens 100k data.

![image](https://user-images.githubusercontent.com/63282184/141819766-4e2f5532-7044-4ab1-b296-5616ccfb3660.png)

Neural net (DL) and SVD give the best results. Neural net implementation will also perform well on imbalanced data, with infrequent users unlike other MF algorithms.
It can be useful to built customer targeted recommendation system for your products/ services. Most easiest and well-researched method out there is collaborative filtering. 
