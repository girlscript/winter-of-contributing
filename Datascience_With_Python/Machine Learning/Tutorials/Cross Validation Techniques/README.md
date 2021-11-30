I've completed the documentation of Cross Validation Techniques in Machine Learning that comprises of all the aspects of it. This readme file gives a brief introduction of the issue. Detailed description is provided in cross_validation_techniques.ipynb file.
<ol>
  <li><b> Introduction of Cross Validation:</b></li>
  Cross-Validation is one of the most powerful tool for a Data Scientist toolbox becuase it allows us to use our data more. 
See whenever we create a machine model, we need it to provide some data which consists of two parts: Training Data and Testing Data. The training set is used to train the model, and the test set is used to validate it on data it has noway seen ahead. The classic approach is to do a simple 80-20 split, occasionally with different values like 70-30 or 90-10. Incross-validation, we do further than one split. We can do 3, 5, 10 or any K number of splits. Those splits called Folds, and there are numerous strategies we can produce these crowds with. When we've veritably little data, unyoking it into training and test set might leave us with a veritably small test set. Say we've only 100 samples, if we do a simple 80 – 20 split, we ’ll get 20 samples in our test set. But it isn't enough. We can get nearly any performance on this set only due to chance. The problem is indeed worse when we've a multi-classproblem.However, It leaves us with only 2 exemplifications for each class on average, If we've 10 classes and only 20 exemplifications. Testing anything on only 2 samples can’t lead to any real conclusion. 
But by using cross-validation techniques we can make K different models and tackle the real world problems.<br/>
  <li><b>Features of Cross Validation:</b></li>
   In machine learning there are many algorithms that require some parameters tuning. It could be the number of trees in Grade Boosting classifier, hidden subcaste size or activation functions in a Neural Network, type of kernel in an SVM and numerous further. And for finding the best parameter we have to try different values and choosing the stylish bones. There are numerous styles to do this. It could be a homemade hunt, a grid hunt or some further sophisticated optimization. Still, in all those cases we ca n’t do it on our training test. We've to use a third set, a confirmation set. 
 By doing cross-validation, we ’re suitable to do all those way using a single set especially if we don’t have a lot of data. 

  <li><b>Types of Cross Validation</b></li>
  A detailed description of all the cross validation techniques is presented in .ipynb file
    <ul>
      <li>Exhaustive Methods with their examples</li>
      <ul>
        <li>Leave-P-out cross-validation</li>
        <li>Leave one out cross-validation</li>
      </ul>
      <li>Non-Exhaustive Methods with their examples</li>
      <ul>
       <li>Hold-out</li>
         <li>K fold cross validation</li>
         <li>Stratified K Fold Cross Validation</li>
      </ul>
  </ul>
  <br/>
  <li><b>Advantages of Cross Validation:</b></li>
  <ul>
    <li>More accurate estimate of out-of-sample accuracy.</li>
    <li>More “efficient” use of data as every observation is used for both training and testing.</li>
  </ul><br/>
  <li><b>Disadvantages of Cross Validation</b></li>
  <ul>
    <li>Test Split works very poorly on small data sets.  </li>
    <li>Often leads to the development of the models having high bias when working on small data sets.</li>
    <li>There is a possibility of selecting test data with similar values, i-e, non-random values, resulting in an inaccurate evaluation of model performance.</li>
  </ul><br/>
  <li><B>Conclusion</B></li>
    Cross-Validation is a veritably important tool. It helps us better use our data, and it gives us much further information about our algorithm performance. In complex machine training models, it’s occasionally easy not pay enough attention and use the same data in different way of the channel. This may lead to good but not real performance in utmost cases, or, introduce strange side goods in others. We've to pay attention that we ’re confident in our models. Cross-Validation helps us when we ’re dealing withnon-trivial challenges in our Data Science systems. <br/>
  </ol>
    <small>
  <b>Refrences:</b>  
    <i>geeksforgeeks.com<br/>
      dataaspirant.com</i>
    </small>
