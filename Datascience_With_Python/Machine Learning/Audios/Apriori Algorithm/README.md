## Apriori Algorithm
## [Click here to listen the audio](https://drive.google.com/file/d/1jUHZ4FY3Xj2hUzmuBMieDC3cInbD_lii/view?usp=sharing)

- The Apriori algorithm uses frequent itemsets to generate association rules, and it is designed to work on the databases that contain transactions. 
- With the help of these association rule, it determines how strongly or how weakly two objects are connected. 
- This algorithm uses a breadth-first search and Hash Tree to calculate the itemset associations efficiently. 
- It is the iterative process for finding the frequent itemsets from the large dataset.

![image](https://user-images.githubusercontent.com/79050917/143733958-6c1997f3-8c02-4fc4-a0c4-ee64baf25d46.png)

**Advantages:** 
- This is easy to understand algorithm
- The join and prune steps of the algorithm can be easily implemented on large datasets.

![image](https://user-images.githubusercontent.com/79050917/143733964-45a95ecf-6662-4110-aad8-706d42cb4e63.png)

**Disadvantages:** 
- The apriori algorithm works slow compared to other algorithms.
- The overall performance can be reduced as it scans the database for multiple times.
- The time complexity and space complexity of the apriori algorithm is O(2D), which is very high. 
- Here D represents the horizontal width present in the database.

![image](https://user-images.githubusercontent.com/79050917/143733972-2a76dbb1-4a1a-48ee-a892-23e93234ca07.png)

**Overview:**
-  Name of the algorithm is Apriori because it uses prior knowledge of frequent itemset properties. 
-  We apply an iterative approach or level-wise search where k-frequent itemsets are used to find k+1 itemsets.
-  To improve the efficiency of level-wise generation of frequent itemsets, an important property is used called Apriori property which helps by reducing the search space.
