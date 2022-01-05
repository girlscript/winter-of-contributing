## Audio Link : [Image Retrieval using CNN](https://drive.google.com/file/d/14x-XP2dNiLcJ9LOjblw6WTG-AGktjGo8/view?usp=sharing)
 
## Purpose of Retrieving Images

Retrieving Images using Machine Learning Algorithms such as Convolutional Neural Networks have been one of the most great development in the technical domain. Image Retrieving models can be widely used to classify and differentiate Images on the basis of color, texture, theme, etc. They are used in apps for finding similiar accesories, dresses, etc. An image retrieval system is a computer system used for browsing, searching and retrieving images from a large database of digital images. 

![](https://user-images.githubusercontent.com/75624735/138871934-108a7933-8384-45f9-aa72-2b36a77ab01f.png)

## Image Retrieval using CNN

We use Convolutional Neural Network to train our model after going through different phases, which are helpul in increasing accuracy of our model. <br>
Feature Detectors and Pooling are used to filter important features and try to capture useful information just like human beings. Then, they are passed to Fully Connected Layers for further processing.<br>
Fully Connected layers are Artificial_Neural_Networks(ANN) which relies on inputs and their weights to classify or retrieve images based on their previous training.

Basically, there are three types of Image Retrieval -
- Text Based Image Retrieval
- Content Based Image Retrieval
- Hybrid Image Retrieval

Also, both Text Based and Content Based Image Retrieval are combined for getting better results while searching or browsing through Internet or whether it is related to Medical Domain. Below is a chart representing use of Image retrieval framework in Medical Domain

![](https://user-images.githubusercontent.com/75624735/138880311-399cf12a-b1ec-42ca-bb30-8c3147c93b7a.png)

Using Convolutional Neural Networks, we have to train our model such that it classifies Images correctly on which it is trained. And also classifies all those Images which are not part of training but part of classification output. This is perfect example of Deep Learning and Unsupervised Approach.

<h2>I have successfully explained the topics in following manner:-</h2>

- <h3>Types of Image Retrieval</h3>

A) __Text Based Image Retrieval__

The Text Rased Image Retrieval(TBIR) is an old approach, can be tracked back to 1970s. In such systems, the images are manually annotated by text descriptors, which are then used by a database management system to perform image retrieval. Many techniques in image retrieval are taken from this domain (sometimes reinvented). But many things are hard to express. Emotions, feelings, situations and exact details in the Image are hard to express just using texts. Annotation is never complete. Many ways to say the same things. Spelling errors, spelling differences (US vs. UK),weird abbreviations. Although, many attempts were made by introducing different methods such as assigning weights to text based on sentiments, stopwords removal, suffix stripping etc.

B) __Content Based Image Retieval__

As time passed scientists developed another method. This method was able to classify, retrieve images more correctly without much labour. This method is known as Content Based Image Retieval(CBIR) since images are indexed by their visual content, such as color, texture, shapes etc. The deep learning has emerged as a dominating alternative of hand-designed feature engineering from a decade. It learns the features automatically from the data. We use Convolutional Features, CNN model for better results.

C) __Hybrid Image Retrieval__

Most advance technique available which has lots of potential to determine images correctly. Hybrid Image Retrieval is basically combining TBIR and CBIR to improve the results and accuracy even more. Text Analysis combined with Trained Model based on different previous image data is something that is really helpful in decreasing loss to retrieve similiar images.

- <h3> Convolutional Neural Networks</h3>

For extracting features, there are lots of options to choose.In this case, we can use a convolutional neural network (CNN) for extracting those features. A Convolutional Neural Network (ConvNet/CNN) is a Deep Learning algorithm which can take in an input image, assign importance (learnable weights and biases) to various aspects/objects in the image and be able to differentiate one from the other. This model has a great capability to capture patterns than any other algorithms thanks to its convolutional layer that captures the neighbor for each instance of the data. Convolutional Neural Network consists of layers, such as convolutional layer for feature extraction, pooling layer for sampling the features, and fully-connected layer for doing prediction. For this case, we ignore most of the fully-connected layer and focus only to the feature extraction result only.

In cases of extremely basic binary images using feed forward neural networks, the method might show an average precision score while performing prediction of classes but would have little to no accuracy when it comes to complex images having pixel dependencies throughout. A ConvNet is able to successfully capture the Spatial and Temporal dependencies in an image through the application of relevant filters. The architecture performs a better fitting to the image dataset due to the reduction in the number of parameters involved and reusability of weights.

The role of the ConvNet is to reduce the images into a form which is easier to process, without losing features which are critical for getting a good prediction. We try to capture the important features which play crucial role in identification of Images further it also provides thematic interpretations. In brief, it's trained on previous huge data observed until its accuracy is improved to best with the help of mathematical tools.

![image](https://user-images.githubusercontent.com/75624735/139678414-4c038b29-e190-4638-9d4d-9f90036e53b0.png)

Above is an image showing CNN and Different Layers which are explained below

  <h4>1.Kernel</h4>

The element involved in carrying out the convolution operation in the first part of a Convolutional Layer is called the Kernel/Filter or Feature Detector.Kernels are usually of small dimensions so that they can train over most of features. The first ConvLayer is responsible for capturing the Low-Level features such as edges, color, gradient orientation, etc. With added layers, the architecture adapts to the High-Level features as well, giving us a network which has the wholesome understanding of images in the dataset, similar to how we would.

The Kernel shifts 9 times because of Stride Length = 1 (Non-Strided), every time performing a matrix multiplication operation between K and the portion P of the image over which the kernel is hovering. Every CNN has many different feature detectors or Kernels to capture different variations of input.

The filter moves to the right with a certain Stride Value till it parses the complete width. Moving on, it hops down to the beginning (left) of the image with the same Stride Value and repeats the process until the entire image is traversed.

  <h4>2.Pooling</h4>

Similar to the Convolutional Layer, the Pooling layer is responsible for reducing the spatial size of the Convolved Feature. This is to decrease the computational power required to process the data through dimensionality reduction. Furthermore, it is useful for extracting dominant features which are rotational and positional invariant, thus maintaining the process of effectively training of the model. There are two types of Pooling: Max Pooling and Average Pooling. Max Pooling returns the maximum value from the portion of the image covered by the Kernel. On the other hand, Average Pooling returns the average of all the values from the portion of the image covered by the Kernel. Max Pooling performs as a Noise Suppressant and Dimensionality Reduction whereas Average Pooling mainly performs Dimensionality Reduction. Max Pooling performs a lot better than Average Pooling.

  <h4>3.Fully Connected Layers & Epochs</h4>

Adding a Fully-Connected layer is a (usually) cheap way of learning non-linear combinations of the high-level features as represented by the output of the convolutional layer. The Fully-Connected layer is learning a possibly non-linear function in that space.
Now that we have converted our input image into a suitable form for our Multi-Level Perceptron, we shall flatten the image into a column vector. The flattened output is fed to a feed-forward neural network and backpropagation applied to every iteration of training. Over a series of epochs, the model is able to distinguish between dominating and certain low-level features in images and classify them using the Softmax Classification technique. Epochs is the process of one complete iteration through CNN, when input is feeded forward and after calculating loss acccuracy backpropogates to improve weights.

- <h3>Flow of Content Based Image Retrieval</h3>

The process of the system will begin by extracting features on all images, whether it’s the query or the image database by using a feature extraction algorithm. Then, the system will calculate similarities between the query with all images on the database. At the end, the system will retrieve all the images that have a great similarity with the query.
![image](https://user-images.githubusercontent.com/75624735/139670050-822aad2e-1864-4d12-b4fc-a7d91bb15165.png)

- <h3>Euclidean Distance</h3>

After we extract features, we calculate the distance between the query and all images. For doing this, we can use the Euclidean distance or l2 norm to measure it. If the number is getting smaller, the pair of image is similar to each other. The formula looks like this,

![image](https://user-images.githubusercontent.com/75624735/139670151-1b327047-4dae-46d2-94dd-55382a57430e.png)

- <h3>Conclusion</h3>

We can conclude after going through the Image Retrieval frameworks that Content Based Image Retrieval are more dominating than TBIR. Convolution Neural Networks are quite impressive for image feature detection and classification. Python as the programming language, Tensorflow for feature extraction, and Numpy for calculating the distance are most suited libraries.If we summarize, here are the steps that we did,

- Download the dataset
- Extract features from image database
- Insert the query image and extract its features
- Calculate the similarities with all images
- Retrieve the most similar result
