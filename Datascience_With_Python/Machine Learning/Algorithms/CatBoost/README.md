
# CatBoost Algorithm

https://www.analyticsvidhya.com/blog/2015/11/quick-introduction-boosting-algorithms-machine-learning/
https://towardsdatascience.com/4-easy-steps-for-implementing-catboost-c196fd82274b
https://en.wikipedia.org/wiki/Catboost

##### Format : Documentation


### CatBoost beat many other machine learning algorithms on benchmark datasets where logloss was the error metric. It has particularly hit LightGBM and XGBoost, which have recently become commonplace not only in data science competitions but also in professional settings.

#### When its comes to understand the performances and comparing various boosting algorithm it necessary to understand the term Boosting refers here.


Boosting is an ensemble learning strategy with the aim of reducing training errors by combining a set of weak learners and converting them to strong learners. It achieves this by consecutively building on weak learners, each trying to compensate for the weakness of its predecessor in order to generate one strong prediction rule.

#### To convert weak learner to strong learner, we’ll combine the prediction of each weak learner using methods like:
- Using average/ weighted average.
- Considering prediction has higher vote.

If we are talking about boosting alogrithm how we can forget to mention other boosting algorithms out there.

#### Different Types of Boosting Algorithm:
* AdaBoost (Adaptive) Boosting Algorithm
* Gradient Boosting Algorithm
* XGBoost Algorithm

#### What is CatBoost Algorithm?

CatBoost is an algorithm for gradient boosting on decision trees. It is developed by Yandex researchers and engineers, and is used for search, recommendation systems, personal assistant, self-driving cars, weather prediction and many other tasks at Yandex and in other companies, including CERN, Cloudflare, Careem taxi. It is in open-source and can be used by anyone.

### Gist of CatBoost

CatBoost is an open-source software library developed by Yandex. It provides a gradient boosting framework which attempts to solve for Categorical features using a permutation driven alternative compared to the classical algorithm.It works on Linux, Windows, macOS, and is available in Python, R, and models built using catboost can be used for predictions in C++, Java, C#, Rust, Core ML, ONNX, and PMML. The source code is licensed under Apache License and available on GitHub.

### Features
CatBoost has uper hand and gained popularity compared to other gradient boosting algorithms primarily due to the following features.

- CatBoost can handle missing values internally
- Make use of GPU
- Ordered Boosting to overcome over fitting
- Native handling for categorical features
- Using Oblivious Trees or Symmetric Trees for faster execution
