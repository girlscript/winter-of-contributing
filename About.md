LightGBM (Light Gradient Boosting Machine)

LightGBM is a gradient boosting framework based on decision trees to increases the efficiency of the model and reduces memory usage.
It uses two novel techniques: Gradient-based One Side Sampling and Exclusive Feature Bundling (EFB) which fulfils the limitations of histogram-based algorithm that is primarily used in all GBDT (Gradient Boosting Decision Tree) frameworks. The two techniques of GOSS and EFB described below form the characteristics of LightGBM Algorithm. They comprise together to make the model work efficiently and provide it a cutting edge over other GBDT frameworks.

Gradient-based One Side Sampling Technique for LightGBM:
Different data instances have varied roles in the computation of information gain. The instances with larger gradients (i.e., under-trained instances) will contribute more to the information gain. GOSS keeps those instances with large gradients (e.g., larger than a predefined threshold, or among the top percentiles), and only randomly drop those instances with small gradients to retain the accuracy of information gain estimation. This treatment can lead to a more accurate gain estimation than uniformly random sampling, with the same target sampling rate, especially when the value of information gain has a large range.

Exclusive Feature Bundling Technique for LightGBM:
High-dimensional data are usually very sparse which provides us a possibility of designing a nearly lossless approach to reduce the number of features. Specifically, in a sparse feature space, many features are mutually exclusive, i.e., they never take nonzero values simultaneously. The exclusive features can be safely bundled into a single feature (called an Exclusive Feature Bundle).  Hence, the complexity of histogram building changes from O(#data × #feature) to O(#data × #bundle), while #bundle<<#feature . Hence, the speed for training framework is improved without hurting accuracy.

Architecture:
LightGBM splits the tree leaf-wise as opposed to other boosting algorithms that grow tree level-wise. It chooses the leaf with maximum delta loss to grow. Since the leaf is fixed, the leaf-wise algorithm has lower loss compared to the level-wise algorithm. Leaf-wise tree growth might increase the complexity of the model and may lead to overfitting in small datasets.

200~Parameter Tuning
Few important parameters and their usage are listed below:

1.      max_depth : It sets a limit on the depth of tree. The default value is 20. It is effective in controlling over fitting.
2.      categorical_feature : It specifies the categorical feature used for training model.
3.      bagging_fraction : It specifies the fraction of data to be considered for each iteration.
4.      num_iterations : It specifies the number of iterations to be performed. The default value is 100.
5.      num_leaves : It specifies the number of leaves in a tree. It should be smaller than the square of max_depth.
6.      max_bin : It specifies the maximum number of bins to bucket the feature values.
7.      min_data_in_bin : It specifies minimum amount of data in one bin.
8.      task : It specifies the task we wish to perform which is either train or prediction. The default entry is train. Another possible value for this parameter is prediction.
9.      feature_fraction : It specifies the fraction of features to be considered in each iteration. The default value is one.


References:

https://www.geeksforgeeks.org/lightgbm-vs-xgboost-which-algorithm-is-better/
https://www.analyticsvidhya.com/blog/2017/06/which-algorithm-takes-the-crown-light-gbm-vs-xgboost/
https://www.geeksforgeeks.org/ml-gradient-boosting/
https://www.geeksforgeeks.org/xgboost-for-regression/
https://www.geeksforgeeks.org/ml-xgboost-extreme-gradient-boosting/
https://www.geeksforgeeks.org/boosting-in-machine-learning-boosting-and-adaboost/
https://www.geeksforgeeks.org/xgboost/
https://medium.com/@pushkarmandot/https-medium-com-pushkarmandot-what-is-lightgbm-how-to-implement-it-how-to-fine-tune-the-parameters-60347819b7fc
https://www.geeksforgeeks.org/lightgbm-light-gradient-boosting-machine/#:~:text=LightGBM%20is%20a%20gradient%20boosting,model%20and%20reduces%20memory%20usage.&text=Gradient%2Dbased%20One%20Side%20Sampling%20Technique%20for%20LightGBM%3A,the%20computation%20of%20information%20gain.
