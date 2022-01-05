## Introduction to Unsupervised Learning

## AUDIO LINK: [Introduction to Unsupervised Learning](https://drive.google.com/file/d/1cqauvQabB_7SPCNXdqvxC5UX9ZPCL5f8/view?usp=sharing)

**“Machine learning”** as the term suggests we are teaching machines to do human-like tasks and how humans learn, either from someone or by observation. 

Same as humans, the way machine learns, Machine learning can be divided into 3 parts:
- Supervised learning
- Unsupervised learning
- Reinforcement learning

![image](https://user-images.githubusercontent.com/63282184/137133908-c3523b3d-2f8f-4c0a-9f21-0794b3d46a71.png)

## Types of Machine Learning

**Reinforcement learning** is agent-based learning which involves reward and punishment upon actions taken by an agent. The end goal is to maximise the overall reward in the process of learning from the environment.

When you have input-output data, in short, labelled data for example, given height and weight to determine whether a person is male or female can be considered as a **Supervised learning** task (from someone in the case of humans).

But in many real-life scenarios, this labelled or annotated data is not always available. Many times we face problems of segmenting objects based on their properties which are not explicitly mentioned. How to solve this problem? Well, Unsupervised learning is the solution.

Wikipedia says: **Unsupervised learning** is a type of self-organised Hebbian learning that helps find previously unknown patterns in data set without pre-existing labels. In unsupervised learning, we don’t have any label information but still, we want to get insights from the data based on its different properties.


## Types of Unsupervised Machine Learning

Unsupervised learning tasks can be broadly divided into 3 categories:

- Association rule mining
- Clustering
- Recommendation system

## Association Rule Mining:

When we have transactional data for something, it can be for products sold or any transactional data for that matters, I want to know, is there any hidden relationship between buyer and the products or product to product, such that I can somehow leverage this information to increase my sales. Extracting these relationships is the core of Association Rule Mining. We can use the AIS, SETM, Apriori, FP growth algorithms for extracting relationships.

## Clustering

Clustering can be done any data where we do not have the class or label information. We want to group the data such that the observations with similar properties belong to the same cluster/group and inter-cluster distance should be maximum. Whereas intra-cluster distance should be minimum. We can cluster the voter’s data to find out the opinion about the government, or cluster products, based on their features and usage. Segment population based on income features or use clustering in sales and marketing.

We can use **K-Means, K-Means++, K-Medoids, Fuzzy C-means (FCM), Expectation-Maximisation (EM), Agglomerative Clustering, DBSCAN, types of Hierarchical Clustering as single linkage, complete linkage, median linkage, Ward’s method** algorithms for clustering.

## Recommendation System:

Recommendation System is basically an extension of Association rule mining in the sense, in ARM we are extracting relationships and in Recommendation System, we are using these relationships to recommend something which is having higher acceptance chances by the end-user. Recommendation systems have gained popularity after Netflix announced a grand prize of US$1,000,000 prize in 2009.

Recommendation Systems works on transactional data be it financial transaction, e-commerce or grocery shop transaction. Nowadays giant players in the e-commerce industry are luring customers by making a customised recommendation for each user based on their past purchase history and similar behaviour purchase data from other users. Methods to develop Recommendation Systems can be broadly divided into **Collaborative filtering and Content-Based filtering**. In Collaborative filtering again we have **user-user Collaborative filtering and Item-Item Collaborative filtering** which are **memory-based approaches & Matrix factorisation and Singular Value Decomposition (SVD) are model-based approaches**.


## Applications of Unsupervised learning

As the world’s data is increasing tremendously every day, unsupervised learning has many applications. We are always creating data by using social media platforms or some video content on YouTube and many times we don’t even do deliberately. All this data is unstructured and labelling it for supervised learning tasks will be tiring and expensive. The following are some cool applications of unsupervised machine learning.
- Grocery shop or e-commerce store/ marketplace: Extract Association rules from customers transactional data and recommendations for consumers to buy products.
- Social Media Platform: Extract relationships with different users, to suggest products or services. Recommend new people for social connect.
- Services: Recommendations of travel services, a recommendation of houses to rent, or matchmaking services.
- Banking: Cluster customers based on their financial transactions. Cluster fraudulent transaction for fraud detection.
- Politics: Cluster voter’s opinions about chances of a win for a particular party.
- Data Visualisation: With clustering and t-distributed Stochastic Neighbour Embedding (t-SNE) we can visualise high dimensional data. Also, this can be used for dimensionality reduction.
- Entertainment: Recommendations for movies, music, as Netflix and Amazon are doing.
- Image segmentation: Cluster images portions based on nearest pixel values.
- Content: personalised newspapers, recommendations of Web pages, e-learning applications, and email filters.
- Structural discovery: With clustering, we can discover any hidden structure in the data. Cluster twitter data for sentiment analysis.

## Conclusion

Unsupervised machine learning is not quantifiable but can solve a lot of problems in which supervised algorithms fail. There are many applications to unsupervised learning in many domains where we have unstructured and unlabelled data. We can use unsupervised learning techniques to teach our machines to do a better job than us.
