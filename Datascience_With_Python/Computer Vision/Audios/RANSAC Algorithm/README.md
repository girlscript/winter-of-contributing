## RANSAC Algorithm
## [Click here to listen the audio](https://drive.google.com/file/d/10iaAmFJdOjpQ5KDHH6VAB2Yjb8It8Noo/view?usp=sharing)
- The RANSAC algorithm is a learning technique to estimate parameters of a model by random sampling of observed data. 
- Given a dataset whose data elements contain both inliers and outliers, RANSAC uses the voting scheme to find the optimal fitting result.
- RANSAC is an iterative algorithm for the robust estimation of parameters from a subset of inliers from the complete data set.

![image](https://user-images.githubusercontent.com/79050917/143802592-8ec53fb4-ccf5-4562-aaa9-0bc84bb5cb60.png)

**Algorithm:** 
- Select randomly the minimum number of points required to determine the model
parameters.
- Solve for the parameters of the model.
- Determine how many points from the set of all points fit with a predefined tolerance.
- If the fraction of the number of inliers over the total number points in the set
exceeds a predefined threshold τ , re-estimate the model parameters using all the
identified inliers and terminate.
- Otherwise, repeat steps 1 through 4 (maximum of N times).

![image](https://user-images.githubusercontent.com/79050917/143802477-86faccad-a10e-4fd5-a15d-3af16d18d753.png)

**Advantages and disadvantages:**
- An advantage of RANSAC is its ability to do robust estimation of the model parameters, i.e., it can estimate the parameters with a high degree of accuracy even when a significant number of outliers are present in the data set. 
- A disadvantage of RANSAC is that there is no upper bound on the time it takes to compute these parameters (except exhaustion). 
- When the number of iterations computed is limited the solution obtained may not be optimal, and it may not even be one that fits the data in a good way. 
- In this way RANSAC offers a trade-off; by computing a greater number of iterations the probability of a reasonable model being produced is increased. 
- Moreover, RANSAC is not always able to find the optimal set even for moderately contaminated sets and it usually performs badly when the number of inliers is less than 50%.
- Optimal RANSAC was proposed to handle both these problems and is capable of finding the optimal set for heavily contaminated sets, even for an inlier ratio under 5%. Another disadvantage of RANSAC is that it requires the setting of problem-specific thresholds.
- RANSAC can only estimate one model for a particular data set. As for any one-model approach when two (or more) model instances exist, RANSAC may fail to find either one. 
- The Hough transform is one alternative robust estimation technique that may be useful when more than one model instance is present. 
- Another approach for multi model fitting is known as PEARL, which combines model sampling from data points as in RANSAC with iterative re-estimation of inliers and the multi-model fitting being formulated as an optimization problem with a global energy function describing the quality of the overall solution.

![image](https://user-images.githubusercontent.com/79050917/143802621-8f3284b2-3590-4829-b26b-899a0c8fe041.png)

**Applications:**
- The RANSAC algorithm is often used in computer vision, e.g., to simultaneously solve the correspondence problem and estimate the fundamental matrix related to a pair of stereo cameras; see also: Structure from motion, scale-invariant feature transform, image stitching, rigid motion segmentation.

**Overview:**
- RANSAC uses repeated random sub-sampling.
- A basic assumption is that the data consists of "inliers", i.e., data whose distribution can be explained by some set of model parameters, though may be subject to noise, and "outliers" which are data that do not fit the model. 
- The outliers can come, for example, from extreme values of the noise or from erroneous measurements or incorrect hypotheses about the interpretation of data. 
- RANSAC also assumes that, given a (usually small) set of inliers, there exists a procedure which can estimate the parameters of a model that optimally explains or fits this data.
