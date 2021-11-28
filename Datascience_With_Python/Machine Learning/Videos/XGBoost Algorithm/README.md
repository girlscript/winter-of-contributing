# XGBoost Algorithm

## Video link : [XGBoost Algorithm](https://drive.google.com/file/d/1Wa1VGDkO5ErsqAOjGcRAaJjT7gemErLV/view?usp=sharing)

## XGBoost
- XGBoost stands for eXtreme Gradient Boosting. It became popular in the recent days and is dominating applied machine learning and Kaggle competitions for structured data because of its scalability.

- XGBoost is an extension to gradient boosted decision trees (GBM) and specially designed to improve speed and performance.

## XGBoost Features
- Regularized Learning: Regularization term helps to smooth the final learnt weights to avoid over-fitting. The regularized objective will tend to select a model employing simple and predictive functions.
- Gradient Tree Boosting: The tree ensemble model cannot be optimized using traditional optimization methods in Euclidean space. Instead, the model is trained in an additive manner.
- Shrinkage and Column Subsampling: Besides the regularized objective, two additional techniques are used to further prevent overfitting. The first technique is shrinkage introduced by Friedman. Shrinkage scales newly added weights by a factor η after each step of tree boosting. Similar to a learning rate in stochastic optimization, shrinkage reduces the influence of each tree and leaves space for future trees to improve the model. 

The second technique is the column (feature) subsampling. This technique is used in Random Forest. Column sub-sampling prevents over-fitting even more so than the traditional row sub-sampling. The usage of column sub-samples also speeds up computations of the parallel algorithm.

![image](https://user-images.githubusercontent.com/63282184/143389540-072965ef-1e1c-41f2-a286-2433599b04d8.png)


## SPLITTING ALGORITHMS
- Exact Greedy Algorithm: The main problem in tree learning is to find the best split. This algorithm enumerates over all the possible splits on all the features. It is computationally demanding to enumerate all the possible splits for continuous features.
- Approximate Algorithm: The exact greedy algorithm is very powerful since it enumerates over all possible splitting points greedily. However, it is impossible to efficiently do so when the data does not fit entirely into memory. Approximate Algorithm proposes candidate splitting points according to percentiles of feature distribution. The algorithm then maps the continuous features into buckets split by these candidate points, aggregates the statistics and finds the best solution among proposals based on the aggregated statistics.
- Weighted Quantile Sketch: One important step in the approximate algorithm is to propose candidate split points. XGBoost has a distributed weighted quantile sketch algorithm to effectively handle weighted data.
Sparsity-aware Split Finding: In many real-world problems, it is quite common for the input x to be sparse. There are multiple possible causes for sparsity:

```
Presence of missing values in the data
Frequent zero entries in the statistics
Artifacts of feature engineering such as one-hot encoding
```


## System Features
- Parallelization of tree construction using all of your CPU cores during training. Collecting statistics for each column can be parallelized, giving us a parallel algorithm for split finding.
- Cache-aware Access: XGBoost has been designed to make optimal use of hardware. This is done by allocating internal buffers in each thread, where the gradient statistics can be stored.
- Blocks for Out-of-core Computation for very large datasets that don’t fit into memory.
- Distributed Computing for training very large models using a cluster of machines.
- Column Block for Parallel Learning. The most time-consuming part of tree learning is to get the data into sorted order. In order to reduce the cost of sorting, the data is - stored in the column blocks in sorted order in compressed format.

## Goals of XGBoost 
- Execution Speed: XGBoost was almost always faster than the other benchmarked implementations from R, Python Spark and H2O and it is really faster when compared to the other algorithms.
- Model Performance: XGBoost dominates structured or tabular datasets on classification and regression predictive modelling problems.

## Conclusion 
XGBoost is a faster algorithm when compared to other algorithms because of its parallel and distributed computing. XGBoost is developed with both deep considerations in terms of systems optimization and principles in machine learning. The goal of this library is to push the extreme of the computation limits of machines to provide a scalable, portable and accurate library.
