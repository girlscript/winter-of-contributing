# :dart: Local Convolutional Features with Unsupervised Learning for Image Retrieval

## :star: Objective:
To build an Image Retrieval model using Convulution Neural Network with the help of unsupervised Learning.
## :sparkles: Introduction
Nowadays, it becomes easy to store huge amount of images by using imageprocessing techniques. Since the collection of images and databases is fast and isincreasing day by day, there is a need for new image retrieval techniques that should beeﬃcient and fast.The most common method for retrieving multimedia content from a huge collectionof images consists of using meta-data associated to the images such as the timestamp,the geolocati on, keywords, tags, la bels or short descriptio ns, and performing the retrievaltask through a Text-Based Image Retrieval (TBIR). Even though The TBIR requiresexpensive work and time, it often turns out not to be so eﬀective. This is due to thesubjectivity of the task compared to the meaning of its semantic content. Moreover, the content of an image can be described in two diﬀerent levels: At thedigital level, an image contains colored pixels from which color descriptors, textures,and shapes can be extracted. At the semantic level, an image can be interpreted and canhave, at least, one meaning. Unfortunately, in today’s information systems, images aredescribed digitally while users are interested in their semantic content while it iscurrently diﬃcult to ﬁnd correspondences between the digital and semantic level.CBIR is a system which uses visual contents to retrieve images from an image data‐base. This system has now become indispensable because it can eﬀectively overcomethe problems written above. In CBIR, visual contents are extracted by several techni‐ques: histogram, segmentation. Also are described by multidimensional feature vectors.The retrieval performance of content-based image retrieval (CBIR) system is mainlyinﬂuenced by the feature vectors and similarity measures. 

## :snowflake: What is Image Retrieval?
An image retrieval system is a computer system used for browsing, searching and retrieving images from a large database of digital images. Most traditional and common methods of image retrieval utilize some method of adding metadata such as captioning, keywords, title or descriptions to the images so that retrieval can be performed over the annotation words. Manual image annotation is time-consuming, laborious and expensive; to address this, there has been a large amount of research done on automatic image annotation. Additionally, the increase in social web applications and the semantic web have inspired the development of several web-based image annotation tools.
<p align="center">
  <img width="300" height="200" src="https://www.ssla.co.uk/wp-content/uploads/2020/08/image-retrieval-system.png">
  </p>
  
  Content (QBIC) and content-based visual information retrieval (CBVIR) is the application of computer vision techniques to the image retrieval problem, that is, the problem of searching for digital images in large databases . Content-based means that the search analyzes the contents of the image rather than the metadata such as keywords, tags, or descriptions associated with the image. The term "content" in this context might refer to colors, shapes, textures, or any other information that can be derived from the image
itself. CBIR is desirable because most webbased image search engines rely purely on metadata and this produces a lot of garbage in the results. Also having humans manually enter
keywords for images in a large database can be inefficient, expensive and may not capture every keyword that describes the image. Thus a system that can filter images based on their content would provide better indexing and return more accurate results The images are retrieved only through the Texture, Color, Shape in content based image retrieval.

## :sparkles: what in CNN?
A Convolutional Neural Network (ConvNet/CNN) is a Deep Learning algorithm which can take in an input image, assign importance (learnable weights and biases) to various aspects/objects in the image and be able to differentiate one from the other. The pre-processing required in a ConvNet is much lower as compared to other classification algorithms. While in primitive methods filters are hand-engineered, with enough training, ConvNets have the ability to learn these filters/characteristics.
<p align="center">
  <img width="300" height="200" src="https://lh3.googleusercontent.com/yrHzday2CwSYLkXf9yKSoH-BpjqnnAuyiMvPAS5yS3-lFnl5jwkR6FoT_v2Vbi14s414fJSORuGLRQbHyYp6dtHDItRcSQnRWcd1JRGbZC5VlGTvH80gFZrHw8qg2Tx7ca2HYKFc">
  </p>

## :rocket: Implementation
Convolutional neural network (CNN) is a type of feed-forward artiﬁcial neural network where the individual neurons are tiled in such a way that they respond to over-lappingregions in the visual ﬁeld. They are biologically-inspired invariant of Multi-layerPerceptrons (MLP) which are designed for the purpose of minimal preprocessing. Thesemodels are widely used in image and video recognition.Compared to other feature extraction and classiﬁcation algorithms, convolutionalneural networks use relatively not much pre-processing. This means that the network isresponsible for developing its own ﬁlters (unsupervised learning), which is not the casewith other more traditional algorithms. The lack of initial parameterization and human intervention is a major advantage of CNN.
The main objective of this work is to proﬁt from the performance of CNN
 Convolution Layer (Feature Extraction)A feature is considered as an important part of an image and is used as a starting pointfor computer vision algorithms. An image can be described globally or also locally. Global models use the whole image to represent their aim while in the local approach;the selection of several regions or blocks of the image is utilized to extract the feature.In this case, there are sparse and dense representations. Sparse representation detectsinterest points or regions in the image. Then, this representation is extracted by a feature descriptor from each region.
 :blue_diamond: The characteristics of a good local feature are:
 • Should be highly distinctive: an eﬃcient feature should be capable of correctingobject identiﬁcation with low probability of mismatch.
 • Must be easy to extract
 • A good feature should be tolerant to image noise, to illumination’ changes, to uniformscaling, rotation and to geometric forms.
 • Should be practical and easy to match against a large database of local features.
 
 <p align="center">
  <img width="300" height="200" src="https://ars.els-cdn.com/content/image/1-s2.0-S0925231217308445-gr3.jpg">
  </p>

## :pushpin: Application:
Image retrieval (IR) has become an important research area in computer vision where digital image collections are rapidly being created and made available to multitudes of users through the World Wide Web.
  The Content Based Image Retrieval technology has been used in several applications :
  :stars: fingerprint identification
  :stars: biodiversity information systems
  :stars: digital libraries
  :stars: crime prevention
  :stars: medicine
  :stars: historical research
  
## :sparkles: Conclusion:
The use of pre-learning results in very good results: fast using them as extractors of feature image andclassiﬁcation, better by re-training them speciﬁcally (Fine Tuning). The extraction ofcharacteristics is an excellent initial approach, with a very good compromise betweenperformance and complexity.The results obtained are promising, and open new perspectives; there are sometimesadvantageous to pre-process the images, by cropping them or by normalizing their colorhistograms. The models can also be supplemented by conventional approaches forcreating features.
