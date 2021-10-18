## ITEM BASED FILTERING SYSTEM

## AUDIO LINK: [Item Based Filtering System](https://drive.google.com/file/d/1ckhY_FjiNTSo8pIQTi1IzqCH-dlzYFbH/view?usp=sharing)

## WHAT IS COLLABORATIVE FILTERING 

- Collaborative Filtering is a technique or a method to predict a user’s taste and find the items that a user might prefer on the basis of information collected from various other users having similar tastes or preferences. 
- It takes into consideration the basic fact that if person X and person Y have a certain reaction for some items then they might have the same opinion for other items too.

**The two most popular forms of collaborative filtering are:**

-	User Based: Here, we look for the users who have rated various items in the same way and then find the rating of the missing item with the help of these users.

-	Item Based: Here, we explore the relationship between the pair of items (the user who bought Y, also bought Z). We find the missing rating with the help of the ratings given to the other items by the user.

- **Item-Based Collaborative Filtering** in detail.
-  It was first invented and used by Amazon in 1998.
-   Rather than matching the user to similar customers, item-to-item collaborative filtering matches each of the user’s purchased and rated items to similar items, then combines those similar items into a recommendation list. 


## Item to Item Similarity: 
The very first step is to build the model by finding similarity between all the item pairs. The similarity between item pairs can be found in different ways. One of the most common methods is to use cosine similarity.

Formula for Cosine Similarity:

![image](https://user-images.githubusercontent.com/63282184/136332425-a2345756-49a0-4c43-9552-3892d7131ee3.png)


## Prediction Computation: 

The second stage involves executing a recommendation system. It uses the items (already rated by the user) that are most similar to the missing item to generate rating. We hence try to generate predictions based on the ratings of similar products. We compute this using a formula which computes rating for a particular item using weighted sum of the ratings of the other similar products.

![image](https://user-images.githubusercontent.com/63282184/136332486-29efd9c2-4b6c-449b-a8c8-acbc348bb4a9.png)


## Example:

Let us consider one example. Given below is a set table that contains some items and the user who have rated those items. The rating is explicit and is on a scale of 1 to 5. Each entry in the table denotes the rating given by a ith User to a jth Item. In most cases majority of cells are empty as a user rates only for few items. Here, we have taken 4 users and 3 items. We need to find the missing ratings for the respective user.

![image](https://user-images.githubusercontent.com/63282184/136332543-c649cb02-c09f-4f12-b720-6f65c345f65a.png)


**Step 1: Finding similarities of all the item pairs.**

Form the item pairs. For example in this example the item pairs are (Item_1, Item_2), (Item_1, Item_3), and (Item_2, Item_3). Select each item to pair one by one. After this, we find all the users who have rated for both the items in the item pair. Form a vector for each item and calculate the similarity between the two items using the cosine formula stated above.

Sim(Item1, Item2)

In the table, we can see only User_1 and User_2 have rated for both items 1 and 2.

Thus, let I1 be vector for Item_1 and I2 be for Item_2. Then,

I1 = 5U2 +  3U3 and,

I2 = 2U2 +  3U3

![image](https://user-images.githubusercontent.com/63282184/136332628-82f56a98-0b37-401e-a45d-9e6bf1caedd4.png)


Sim(Item2, Item3)

In the table we can see only User_3 and User_4 have rated for both the items 1 and 2. 

Thus, let I2 be vector for Item_2 and I3 be for Item_3. Then,

I2 = 3U3 +  2U4 and,

I3 = 1U3 +  2U4

![image](https://user-images.githubusercontent.com/63282184/136332674-97b1e914-69dc-4dcc-b3f0-3557770cb334.png)

Sim(Item1, Item3)

In the table we can see only User_1 and User_3 have rated for both the items 1 and 2. 

Thus, let I1 be vector for Item_1 and I3 be for Item_3. Then,

I1 = 2U1 +  3U3 and,

I3 = 3U1 +  1U3

![image](https://user-images.githubusercontent.com/63282184/136332717-9584e0d8-7daa-42b3-8223-4e6f2cf4ca97.png)

**Step 2: Generating the missing ratings in the table**

Now, in this step we calculate the ratings that are missing in the table.

![image](https://user-images.githubusercontent.com/63282184/136332763-288d41a0-3d8a-4e18-9ad8-36fbf72f889c.png)

![image](https://user-images.githubusercontent.com/63282184/136332785-4c3b8220-c6bf-4d98-be5e-02fdc49b2c76.png)


## Conclusion

- A recommender system or recommendation system is a subclass of information filtering systems that predict the items the user may be interested in based on the user past behaviour.
- Collaborative filtering is one such recommendation technique that filters items of user interest based on user/item similarity. Due to ease of use and domain-free, it is being used and explored at a large scale by researchers.
- In this example, we have implemented item-based collaborative filtering to recommend movies to users using cosine similarity. Other similarity metrics such as the Pearson correlation coefficient and Jaccard similarity could also be explored. This is still an open area of research with the motive to provide the user with the most relevant items.







