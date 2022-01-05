## Elastic Net Regression
## [Click here to listen the audio](https://drive.google.com/file/d/1WR0s_oO2C2rIvGxgWpQzpSse0k_mlZ2V/view?usp=sharing)
- It is a supervised machine learning model
- It is used when the output is numeric in nature
- It uses the penalties from both lasso and ridge regressions to regularize the models.
- It learns the shortcomings of lasso and ridge regressions to improve the regularization of statistical models.
- To avoid the limitations in lasso, the elastic net introduces a quadratic expression in the penalty, which then becomes ridge regression. 

![image](https://user-images.githubusercontent.com/79050917/143614103-290cfb4a-7bb2-4500-a90c-88f4d275a9b7.png)

**Elastic Net Regularization:**

The third type of regularization,(you may have guessed by now) uses both L1 and L2 regularizations to produce most optimized output.
In addition to setting and choosing a lambda value elastic net also allows us to tune the alpha parameter where 𝞪 = 0 corresponds to ridge and 𝞪 = 1 to lasso. Simply put, if you plug in 0 for alpha, the penalty function reduces to the L1 (ridge) term and if we set alpha to 1 we get the L2 (lasso) term.

![image](https://user-images.githubusercontent.com/79050917/143669299-4954c964-4dd7-4b98-86e3-c3f2492a43b6.png)


**Advantages and disadvantages:**
- It is like a regularization
- It helps in improving the model by combing lasso and ridge 
- The computational burden is high and costly.
![image](https://user-images.githubusercontent.com/79050917/143614137-de110c9d-cc4c-4459-951b-57e1cabb9d6b.png)

**Conclusion:**
- It performs both variable selection and regularization simultaneously.
- This method is more suitable where the dimensional data is greater than the number of samples used.
- Groupings and variable selection are the key aspects of this technique.
