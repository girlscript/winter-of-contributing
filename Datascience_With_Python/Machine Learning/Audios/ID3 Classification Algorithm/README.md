## ID3 Classification Algorithm
## [Click here to listen the audio](https://drive.google.com/file/d/1NqBP2fzdED-0DvxH8zU47hfBTq4Lcutz/view?usp=sharing)

**ID3 Algorithm**
- ID3 stands for Iterative Dichotomiser 3
- It is a classification algorithm that follows a greedy approach by selecting a best attribute that yields maximum Information Gain(IG) or minimum Entropy(H).

![image](https://user-images.githubusercontent.com/79050917/144039498-aecdc84f-33e9-4dae-b4e2-205e308e7771.png)

**The steps in ID3 algorithm**

The steps in ID3 algorithm are as follows:
- Calculate entropy for dataset.
- For each attribute/feature.
- Calculate entropy for all its categorical values.
- Calculate information gain for the feature.
- Find the feature with maximum information gain.
- Repeat it until we get the desired tree.

![image](https://user-images.githubusercontent.com/79050917/144039548-657048fc-31bf-4435-92a1-7b55d1616081.png)

**Properties:**
- ID3-generated decision tree used to determine whether a particular nucleotide pair within a pre-mRNA sequence corresponds to an mRNA splice site. This tree has been shown to have a 95% correct prediction rate.
- ID3 does not guarantee an optimal solution. It can converge upon local optima. It uses a greedy strategy by selecting the locally best attribute to split the dataset on each iteration. The algorithm's optimality can be improved by using backtracking during the search for the optimal decision tree at the cost of possibly taking longer.
- ID3 can overfit the training data. To avoid overfitting, smaller decision trees should be preferred over larger ones. This algorithm usually produces small trees, but it does not always produce the smallest possible decision tree.
- ID3 is harder to use on continuous data than on factored data (factored data has a discrete number of possible values, thus reducing the possible branch points). If the values of any given attribute are continuous, then there are many more places to split the data on this attribute, and searching for the best value to split by can be time consuming.

![image](https://user-images.githubusercontent.com/79050917/144039654-95d06aa8-1970-4348-ae6e-5b2a1347775e.png)

**Usage:**
- The ID3 algorithm is used by training on a data set to produce a decision tree which is stored in memory. 
- At runtime, this decision tree is used to classify new test cases (feature vectors) by traversing the decision tree using the features of the datum to arrive at a leaf node. 
- The class of this terminal node is the class the test case is classified as.
