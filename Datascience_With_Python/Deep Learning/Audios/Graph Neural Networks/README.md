## Graph Neural Networks
## [Click here to listen the audio](https://drive.google.com/file/d/1Ry-Zn-HXqltpuV1aBcGZdZkzyJ4gStHB/view?usp=sharing)

- Graph Neural Networks (GNNs) are a class of deep learning methods designed to perform inference on data described by graphs. 
- GNNs are neural networks that can be directly applied to graphs, and provide an easy way to do node-level, edge-level, and graph-level prediction tasks.
- GNNs can do what Convolutional Neural Networks (CNNs) failed to do.
- CNNs can be used to make machines visualize things, and perform tasks like image classification, image recognition, or object detection. 
- This is where CNNs are the most popular.
- The core concept behind CNNs introduces hidden convolution and pooling layers to identify spatially localized features via a set of receptive fields in kernel form.
- GCNs were first introduced in “Spectral Networks and Deep Locally Connected Networks on Graphs” , as a method for applying neural networks to graph-structured data.
- The simplest GCN has only three different operators:
   - Graph convolution
   - Linear layer
   - Nonlinear activation

![image](https://user-images.githubusercontent.com/79050917/143812404-4871b0da-0fa6-4407-b3f8-9a327b3c07a1.png)

**Applications:** 
- Node Classification
- Graph Classification
- Graph visualization
- Link prediction
- Graph clustering

![image](https://user-images.githubusercontent.com/79050917/143812499-38c54fbd-fbe7-4856-aa7b-2f1ef715b6b2.png)

**Advantages and disadvantages:**
- The representation does affect the way we store the data traditionally. That is why we needed the graph networks in the first place.
- The second thing is the quantity of data. If we think about the overall mechanism of graph data structure and the kind of data it stores, it is huge if we try and convert it into some other form like an array. The sole reason being too much information to be clarified. Such as, which node is connected to which by which edge with what value. But if we directly take graphs like the sample points, it is fairly easy and inexpensive to store and process the data as compared to traditional neural networks.
- Third, the GNNs outperforms many state-of-the-art algorithms when it comes to specialized cases, mentioned above, in the use cases. And this is because of the ability to work easily with graph-based data.
- And lastly, the GNNs have a huge advantage which is directly linked with its structure. Which is that it can adaptively learn the importance of each neighbor.

![image](https://user-images.githubusercontent.com/79050917/143812556-8e799cb5-fe24-4562-8883-a5a6bf17cdf2.png)

**Conclusion:**
- Over the past few years, graph neural networks have become powerful and practical tools for any problem that can be modeled by graphs.
- Graph Neural Networks (GNNs) are a class of deep learning methods designed to perform inference on data described by graphs.
