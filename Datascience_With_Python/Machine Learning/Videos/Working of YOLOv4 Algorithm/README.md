# Working of YOLOv4 Algorithm

## Video Link : [Working of YOLOv4 Algorithm](https://drive.google.com/file/d/1-BoN5OBD18u1OoYUbGw_bhxAUq3Y2nPR/view?usp=sharing)

## What is YOLO?
 
- YOLO, as stated, stands for You Only Look Once, it is an object detection system in real-time that recognizes various objects in a single enclosure. Moreover, it identifies objects more rapidly and more precisely than other recognition systems. 

- It can estimate up to 9000 and even more seen and unseen classes of objects. The real-time recognition system could recognize several objects from a particular image, frame a confined-edge box nearby objects, and quickly trained and implemented in a production system.
- Also, It is an achievement in object detection research that yields in better, quicker, and adaptable computer vision algorithms. 

## How does YOLO work?
 

- As completely based on Convolutional Neural Network(CNN), it isolates a particular image into regions and envisioned the confined-edge box and probabilities of every region. Concurrently, it also anticipates various confined-edge boxes and probabilities of these classes.  

- YOLO observes the intact image through training and test time in order to encode circumstantial information classes and their features quietly. 

## Specifying YOLOv4 
 

- YOLOv4 outruns the existing methods significantly in both terms “detection performance” and “superior speed”. In reference to a paper published, the research team mentions it as a “speedily operating” object detector that can be trained smoothly and used in production systems. 

- The main objective was “to optimize neural networks detector for parallel computations”, the team also introduces various different architectures and architectural selections after attentively analyzing the effects on the performance of numerous detector, features suggested in the previous YOLO models.

## YOLOv4 consists of;

 - Backbone: CSPDarknet53, 

- Neck: Spatial Pyramid Pooling additional module, PANet path-aggregation, and 

- Head: YOLOv3 

## Advancement in YOLOv4 in comparison to prior YOLO models;
 

- It is a proficient and authoritative object detection model that allows individuals with a 1080 Ti or 2080 Ti GPU to training a very fast and accurate object detector.
- The consequences of state-of-the-art “Bag-of-Freebies” and “Bag-of-Specials” object detection procedures all the while detector training was confirmed.
- The converted state-of-the-art methods covering CBN (Cross-iteration batch normalization), PAN (Path aggregation network), that are greater skilled and applicable for single GPU training.

## Comparison of YOLOv4 with other models
 

During the experiments, YOLOv4 achieved an AP value of 43.5% (65.7% of AP50) over he Microsoft COCO dataset, and gained a real-time speed of almost 65 FPS on the Tesla V100, outperforming the swift and highly accurate detectors in the particulars of both “speed and accuracy.” 

![image](https://user-images.githubusercontent.com/63282184/143771497-30037af9-c0b9-433b-9234-bf37c036b48d.png)


## What YOLOv4 deploys?

- Bag of Freebies for backbone
- Bag of Freebies for detector
- Bag of Specials for backbone
- Bag of Specials for detector

## Conclusion:

Compared with the previous YOLOv3, YOLOv4 has the following advantages: It is an efficient and powerful object detection model that enables anyone with a 1080 Ti or 2080 Ti GPU to train a super fast and accurate object detector.
