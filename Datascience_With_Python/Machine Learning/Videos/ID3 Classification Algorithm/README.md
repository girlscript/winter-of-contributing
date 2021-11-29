# ID3 Classification Algorithm

## Video Link : [ID3 Classification Algorithm](https://drive.google.com/file/d/1NT5i7CI8ajS3IHPD0du4ECwAv9_RlVpD/view?usp=sharing)


ID3 algorithm, stands for Iterative Dichotomiser 3, is a classification algorithm that follows a greedy approach of building a decision tree by selecting a best attribute that yields maximum Information Gain (IG) or minimum Entropy (H).

## What are the steps in ID3 algorithm?
The steps in ID3 algorithm are as follows:

1.Calculate entropy for dataset.

2. For each attribute/feature.

2.1. Calculate entropy for all its categorical values.

2.2. Calculate information gain for the feature.

3.Find the feature with maximum information gain.

4.Repeat it until we get the desired tree.

## Example :

## Data

![image](https://user-images.githubusercontent.com/63282184/143804195-88946c78-2419-4d21-ad76-207b376bda8a.png)

![image](https://user-images.githubusercontent.com/63282184/143804212-53d69e7c-aecd-433e-b107-8f14ba0f79d8.png)

Here, when Outlook == overcast, it is of pure class(Yes).
Now, we have to repeat same procedure for the data with rows consist of Outlook value as Sunny and then for Outlook value as Rain.

![image](https://user-images.githubusercontent.com/63282184/143804255-19b12aa1-7dbd-4d1b-ba9b-a9ef43d0c3e1.png)

Here, when Outlook = Sunny and Humidity = High, it is a pure class of category "no". And When Outlook = Sunny and Humidity = Normal, it is again a pure class of category "yes". Therefore, we don't need to do further calculations.

![image](https://user-images.githubusercontent.com/63282184/143804401-a2f3fc57-a9dc-4a15-a71b-b92dc001d38a.png)


Here, when Outlook = Rain and Wind = Strong, it is a pure class of category "no". And When Outlook = Rain and Wind = Weak, it is again a pure class of category "yes".
And this is our final desired tree for the given dataset.

## Characteristics and conclusion 

- ID3 uses a greedy approach that's why it does not guarantee an optimal solution; it can get stuck in local optimums.
- ID3 can overfit to the training data (to avoid overfitting, smaller decision trees should be preferred over larger ones).
- This algorithm usually produces small trees, but it does not always produce the smallest possible tree.
- ID3 is harder to use on continuous data (if the values of any given attribute is continuous, then there are many more places to split the data on this attribute, and searching for the best value to split by can be time consuming).




