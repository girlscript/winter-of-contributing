# Graph Neural Network

## Video Link: [Graph Neural Network](https://drive.google.com/file/d/1hiBnRednzQCofe2FqLBM0hZnivXmM17s/view?usp=sharing)

Graph Neural Networks (GNNs) are a class of deep learning methods designed to perform inference on data described by graphs. 

GNNs are neural networks that can be directly applied to graphs, and provide an easy way to do node-level, edge-level, and graph-level prediction tasks.

GNNs can do what Convolutional Neural Networks (CNNs) failed to do.

## Why do Convolutional Neural Networks (CNNs) fail on graphs?
CNNs can be used to make machines visualize things, and perform tasks like image classification, image recognition, or object detection. This is where CNNs are the most popular.

The core concept behind CNNs introduces hidden convolution and pooling layers to identify spatially localized features via a set of receptive fields in kernel form.

## Graph Convolutional Networks
GCNs were first introduced in “Spectral Networks and Deep Locally Connected Networks on Graphs” (Bruna et al, 2014), as a method for applying neural networks to graph-structured data.

The simplest GCN has only three different operators:

- Graph convolution
- Linear layer
- Nonlinear activation
The operations are usually done in this order. Together, they make up one network layer. We can combine one or more layers to form a complete GCN.

In Python, we can easily build a GCN using PyTorch:
```
import torch
from torch import nn

class GCN(nn.Module):
    def __init__(self, *sizes):
        super().__init__()
        self.layers = nn.ModuleList([
            nn.Linear(x, y) for x, y in zip(sizes[:-1], sizes[1:])
        ])
    def forward(self, vertices, edges):
        # ----- Build the adjacency matrix -----
        # Start with self-connections
        adj = torch.eye(len(vertices))
        # edges contain connected vertices: [vertex_0, vertex_1] 
        adj[edges[:, 0], edges[:, 1]] = 1 
        adj[edges[:, 1], edges[:, 0]] = 1
        
        # ----- Forward data pass -----
        for layer in self.layers:
            vertices = torch.sigmoid(layer(adj @ vertices))
 
        return vertices
```

## Applications of GNNs
As promised in the intro, I want to finish up with a few applications of GNNs. 

Graph-structured data is present everywhere. The problems that GNNs resolve can be classified into these categories:

- Node Classification: the task here is to determine the labeling of samples (represented as nodes) by looking at the labels of their neighbors. Usually, problems of this type are trained in a semi-supervised way, with only a part of the graph being labeled.
Graph Classification: the task here is to classify the whole graph into different categories. It’s like image classification, but the target changes into the graph domain. The applications of graph classification are numerous and range from determining whether a protein is an enzyme or not in bioinformatics, to categorizing documents in NLP, or social network analysis.
- Graph visualization: is an area of mathematics and computer science, at the intersection of geometric graph theory and information visualization. It is concerned with the visual representation of graphs that reveals structures and anomalies that may be present in the data and helps the user to understand the graphs.
- Link prediction: here, the algorithm has to understand the relationship between entities in graphs, and it also tries to predict whether there’s a connection between two entities. It’s essential in social networks to infer social interactions or to suggest possible friends to the users. It has also been used in recommender system problems and in predicting criminal associations.
- Graph clustering:  refers to the clustering of data in the form of graphs. There are two distinct forms of clustering performed on graph data. Vertex clustering seeks to cluster the nodes of the graph into groups of densely connected regions based on either edge weights or edge distances. The second form of graph clustering treats the graphs as the objects to be clustered and clusters these objects based on similarity. 

## GNNs in computer vision
Using regular CNNs, machines can distinguish and identify objects in images and videos. Although there is still much development needed for machines to have the visual intuition of a human. Yet, GNN architectures can be applied to image classification problems. 

One of these problems is scene graph generation, in which the model aims to parse an image into a semantic graph that consists of objects and their semantic relationships. Given an image, scene graph generation models detect and recognize objects and predict semantic relationships between pairs of objects.

However, the number of applications of GNNs in computer vision is still growing. It includes human-object interaction, few-shot image classification, and more. 

## GNNs in Natural Language Processing
In NLP, we know that the text is a type of sequential data which can be described by an RNN or an LSTM. However, graphs are heavily used in various NLP tasks, due to their naturalness and ease of representation. 

Recently, there has been a surge of interest in applying GNNs for a large number of NLP problems like text classification, exploiting semantics in machine translation, user geolocation, relation extraction, or question answering.

We know that every node is an entity and edges describe relations between them. In NLP research, the problem of question answering is not recent. But it was limited by the existing database. Although, with techniques like GraphSage (Hamilton et al.), the methods can be generalized to previously unseen nodes.  

## GNNs in traffic
Forecasting traffic speed, volume or the density of roads in traffic networks is fundamentally important in a smart transportation system. We can address the traffic prediction problem by using STGNNs. 

Considering the traffic network as a spatial-temporal graph where the nodes are sensors installed on roads, the edges are measured by the distance between pairs of nodes, and each node has the average traffic speed within a window as dynamic input features.

## GNNs in chemistry
Chemists can use GNNs to research the graph structure of molecules or compounds. In these graphs, nodes are atoms, and edges – chemical bonds.

## GNNs in other domains
The application of GNNs is not limited to the above domains and tasks. There have been attempts to apply GNNs to a variety of problems such as program verification, program reasoning, social influence prediction, recommender systems, electrical health records modeling, brain networks, and adversarial attack prevention.


