## MOVIE RECOMMENDATION SYSTEM

## Audio Link : [MOVIE RECOMMENDATION SYSTEM](https://drive.google.com/file/d/19g0rsQeZmlIGTMdOchaJdB_tWk0LoaBU/view?usp=sharing)

## What Are Recommendation Systems?

- Recommender systems are the systems that are designed to recommend things to the user based on many different factors. 
- These systems predict the most likely product that the users are most likely to purchase and are of interest to. 
- Companies like Netflix, Amazon, etc. use recommender systems to help their users to identify the correct product or movies for them. 

## Why Recommendation system?

- Benefits users in finding items of their interest.
- Help item providers in delivering their items to the right user.
- Identity products that are most relevant to users.
- Personalized content.
- Help websites to improve user engagement.

## What can be Recommended?

- There are many different things that can be recommended by the system like movies, books, news, articles, jobs, advertisements, etc. 
- Netflix uses a recommender system to recommend movies & web-series to its users. 
- Similarly, YouTube recommends different videos. 
- There are many examples of recommender systems that are widely used today.

## Example:

![image](https://user-images.githubusercontent.com/63282184/135043622-c2294d32-0e26-426a-b892-3b89a5c94700.png)

## Types of Movie Recommendation systems

![image](https://user-images.githubusercontent.com/63282184/135043658-e75e5a85-2600-4eaf-a871-2b9517bd631e.png)

## A) Content-Based Movie Recommendation Systems

- Content-based methods are based on the similarity of movie attributes. Using this type of recommender system, if a user watches one movie, similar movies are recommended. 
- For example, if a user watches a comedy movie starring Adam Sandler, the system will recommend them movies in the same genre or starring the same actor, or both. 
- With this in mind, the input for building a content-based recommender system is movie attributes.

![image](https://user-images.githubusercontent.com/63282184/135043873-8ebb667d-c191-4678-adad-2d9b2d900570.png)


## B) Collaborative Filtering Movie Recommendation Systems

- With collaborative filtering, the system is based on past interactions between users and movies. With this in mind, the input for a collaborative filtering system is made up of past data of user interactions with the movies they watch.
- For example, if user A watches M1, M2, and M3, and user B watches M1, M3, M4, we recommend M1 and M3 to a similar user C. You can see how this looks in the figure below for clearer reference.

![image](https://user-images.githubusercontent.com/63282184/135043998-1e86c22a-0700-4b52-9553-a1e52247e1a4.png)


## Limitations of a recommendation system

**The cold-start problem:** Collaborative filtering systems are based on the action of available data from similar users. If you are building a brand new recommendation system, you would have no user data to start with. You can use content-based filtering first and then move on to the collaborative filtering approach.

**Scalability:** As the number of users grow, the algorithms suffer scalability issues. If you have 10 million customers and 100,000 movies, you would have to create a sparse matrix with one trillion elements.

**The lack of right data:** Input data may not always be accurate because humans are not perfect at providing ratings. User behavior is more important than ratings. Item-based recommendations provide a better answer in this case.






