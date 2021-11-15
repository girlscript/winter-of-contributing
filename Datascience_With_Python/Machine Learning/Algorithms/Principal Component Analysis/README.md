I've completed the documentation of Principal Component Analysis that comprises of <br/><br/>
<b>
  What is Principal Component Analysis</b><br/>
  Principal Component Analysis comes under the unsupervised learning algorithm that's used for the dimensionality reduction in machine learning(ML). 
  It's a statistical process that converts the compliances of identified features into a set of linearly uncorrelated features with the help of scikit learn library. 
  These new converted features are called the Principal Components. It's one of the popular tools that's used for exploratory data analysis and prophetic modeling.
 PCA generally tries to find the lower-dimensional face to design the high-dimensional data. 
PCA workshop by considering the friction of each trait because the high trait shows the good split between the classes,
  and hence it reduces the dimensionality. Some real- world operations of PCA are image processing, movie recommendation system, 
  optimizing the power allocation in  communication channels.  
  <br/><br/>
  
  <b>Important Terminologies in PCA</b><BR/>
  <b>Dimensionality-</b> It's the number of features or variables present in the given dataset. More fluently, it's the number of columns present in the dataset. 
 <br/><br/><b>Correlation-</b>It signifies that how explosively two variables are related to each other. Similar as if one changes, the other variable also gets changed. The correlation value ranges from-1 to 1. Then,-1 occurs if variables are equally commensurable to each other, and 1 indicates that variables are directly commensurable to each other. 
 <br/><br/><b>Orthogonal-</b> It defines that variables aren't identified to each other, and hence the correlation between the brace of variables is zero. 
 <br/><br/><b>Eigenvectors-</b> If there's a square matrix M, and anon-zero vector v is given. Also v will be eigenvector if Av is the scalar multiple ofv. 
<br/><br/><b>Covariance-</b> Matrix A matrix containing the covariance between the brace of variables is called the Covariance Matrix. <br/>
<i>These terms are explained in detail in .ipynb file</i>

<br/><br/>

<b>Conditions of PCA</b><BR/>

There are some conditions in PCA which has to be followed as they will lead to accurate functioning of this dimensionality reduction in ML. The conditions in PCA are 
 
•  There must be linearity in the data set, i.e. the variables combine in a direct manner to form the dataset. The variables parade connections among themselves. <br/>
• PCA assumes that the top element with high friction must be paid attention and the PCs with lower friction are disregarded as noise. 
Pearson correlation measure frame led to the origin of PCA, and there it was assumed first that the axes with high friction would only be turned into top factors. <br/>
 
 • All variables should be penetrated on the same rate position of dimension. The most favored norm is at least 150 compliances of the sample set with a
 rate dimension of 5:1. <br/>
• Extreme values that diverge from other data points in any dataset, which are also called outliers, should be less.
Further number of outliers will represent experimental errors and will degrade your ML model/ algorithm. <br/>
 
 • The point set must be identified and the reduced point set after applying PCA will represent the original data set but in an effective way with smaller confines. 


<br/><br/>

<b>Uses of Principal Component Analysis</b><br/>
 
 • <b>Neuroscience – </b>Data is generated in numerous sectors, and there's a need to assay data for the growth of any establishment. PCA will help in reducing the confines of the data, therefore making it easier to assay. The operations of PCA are 
 Neuroscientists use PCA to identify any neuron or to collude the brain structure during phase transitions. 

 • <b>Finance – </b>PCA is used in the finance sector for reducing the dimensionality of data to produce fixed income portfolios. Numerous other angles of the finance sector involve PCA like soothsaying returns, making asset allocation algorithms or equity algorithms,etc. 
 
 • <b>Image Technology –</b> PCA is also used for image contraction or digital image processing. Each image can be represented via a matrix by conniving the intensity values of each pixel, and also we can apply PCA on it. 

 • <b>Facial Recognition –</b> PCA in facial recognition leads to the creation of eigenfaces which makes facial recognition more accurate. 
 
 • <b>Medical – </b>PCA is used on a lot of medical data to find the correlation among different variables.
 For instace, PCA is used to show the correlation between cholesterol & low- viscosity lipoprotein. 
 <br/><br/>
 
 <b>Conclusion</b><br/>
PCA is a widely used technique for decreasing the dimensions of a feature set. A simple yet intersting implementation of PCA is present in the given .ipynb file 
that will help you to understand how PCA works. 

Thank You!

<i>Refrence: GeeksforGeeks.org <br/>
datacamp.com</i>

