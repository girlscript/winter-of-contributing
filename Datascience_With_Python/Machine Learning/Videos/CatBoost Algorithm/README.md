# CatBoost Algorithm

## Video Link: [CatBoost Algorithm](https://drive.google.com/file/d/1FuHKsm5p-TgTH72ihrS7ghtskeMoT9Z5/view?usp=sharing)

CatBoost is the first Russian machine learning algorithm developed to be open source. The algorithm was developed in the year 2017 by machine learning researchers and engineers at Yandex (a technology company).

The intention is to serve multi-functional purposes such as

- Recommendation systems, 
- Personal assistants, 
- Self-driving cars, 
- Weather prediction, and many other tasks.

CatBoost algorithm is another member of the gradient boosting technique on decision trees.


One of the many unique features that the CatBoost algorithm offers is the integration to work with diverse data types to solve a wide range of data problems faced by numerous businesses. 

Not just that, but CatBoost also offers accuracy just like the other algorithm in the tree family.


## Advantages of CatBoost Library
- Performance: CatBoost provides state of the art results and it is competitive with any leading machine learning algorithm on the performance front.
- Handling Categorical features automatically: We can use CatBoost without any explicit pre-processing to convert categories into numbers. CatBoost converts categorical values into numbers using various statistics on combinations of categorical features and combinations of categorical and numerical features. You can read more about it here.
- Robust: It reduces the need for extensive hyper-parameter tuning and lower the chances of overfitting also which leads to more generalized models. Although, CatBoost has multiple parameters to tune and it contains parameters like the number of trees, learning rate, regularization, tree depth, fold size, bagging temperature and others. You can read about all these parameters here.
- Easy-to-use: You can use CatBoost from the command line, using an user-friendly API for both Python and R.

![image](https://user-images.githubusercontent.com/63282184/143666812-08b3d215-83f4-4455-9740-023c63aaa4f1.png)

## Is tuning required in CatBoost?
The answer is not straightforward because of the type and features of the dataset. The default settings of the parameters in CatBoost would do a good job. 

CatBoost produces good results without extensive hyper-parameter tuning. However, some important parameters can be tuned in CatBoost to get a better result. 

These features are easy to tune and are well-explained in the CatBoost documentation. Here are some of the parameters that can be optimized for a better result;

- cat_ features, 
- one_hot_max_size, 
- learning_rate & n_estimators,
- max_depth, 
- subsample, 
- colsample_bylevel, 
- colsample_bytree, 
- colsample_bynode, 
- l2_leaf_reg, 
- random_strength.

## When To Use CatBoost

- Short training time on a robust data
- Working on a small data set
- When you are working on a categorical dataset
- When To Not Use CatBoost

## Implementation 

![image](https://user-images.githubusercontent.com/63282184/143666989-2271347c-ce4a-4ad2-a66e-05ccae1d2524.png)

 ## Advantages of CatBoost
- It is said to be faster in implementation of GPU/CPU training.
- Because it uses symmetric trees, that makes it to have a fast inference.
- Its boosting schemes helps to reduce over fitting and improves quality of the model.
- It supports sophisticated categorical features.

## Conclusion

The CatBoost algorithm is excellent and is also dominating as the algorithm is used by many because of the features it offers, most especially handling categorical features.
