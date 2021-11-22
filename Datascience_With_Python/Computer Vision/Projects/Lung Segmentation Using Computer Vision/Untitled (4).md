

# Lung segmentation using Computer Vision:

## Abstract:

The computer-based process of identifying the boundaries of lung from surrounding thoracic tissue on computed tomographic (CT) images, which is called segmentation, is a vital first step in radiologic pulmonary image analysis. Many algorithms and software platforms provide image segmentation routines for quantification of lung abnormalities; however, nearly all of the current image segmentation approaches apply well only if the lungs exhibit minimal or no pathologic conditions. When moderate to high amounts of disease or abnormalities with a challenging shape or appearance exist in the lungs, computer-aided detection systems may be highly likely to fail to depict those abnormal regions because of inaccurate segmentation methods. In particular, abnormalities such as pleural effusions, consolidations, and masses often cause inaccurate lung segmentation, which greatly limits the use of image processing methods in clinical and research contexts. In this review, a critical summary of the current methods for lung segmentation on CT images is provided, with special emphasis on the accuracy and performance of the methods in cases with abnormalities and cases with exemplary pathologic findings. The currently available segmentation methods can be divided into five major classes: (a) thresholding-based, (b) region-based, (c) shape-based, (d) neighboring anatomy–guided, and (e) machine learning–based methods. The feasibility of each class and its shortcomings are explained and illustrated with the most common lung abnormalities observed on CT images. In an overview, practical applications and evolving technologies combining the presented approaches for the practicing radiologist are detailed.

## Introduction:

Computed tomography (CT) is a vital diagnostic modality widely used across a broad spectrum of clinical indications for diagnosis and image-guided procedures. Nearly all CT images are now digital, thus allowing increasingly sophisticated image reconstruction techniques as well as image analysis methods within or as a supplement to picture archiving and communication systems (1). The first and fundamental step for pulmonary image analysis is the segmentation of the organ of interest (lungs); in this step, the organ is detected, and its anatomic boundaries are delineated, either automatically or manually (2). Errors in organ segmentation would generate false information with regard to subsequent identification of diseased areas and various other clinical quantifications, so accurate segmentation is a necessity.

The purpose of this article is to review and explain the capabilities and performance of currently available approaches for segmenting lungs with pathologic conditions on chest CT images, with illustrations to provide radiologists with a better understanding of potential choices for decision support in everyday practice. First, object segmentation is defined and explained, followed by summaries of the five major classes of lung segmentation: (a) thresholding-based, (b) region-based, (c) shape-based, (d) neighboring anatomy–guided, and (e) machine learning–based methods. Then hybrid approaches for generic lung segmentation in clinical practice are covered, as well as methods for evaluating the efficacy of segmentation. Finally, the current and future use of segmentation software for clinical diagnosis is discussed.


### What Is Object Segmentation?

The aim of medical image segmentation is to extract quantitative information (eg, volumetric data, morphometric data, textural patterns–related information) with regard to an organ of interest or a lesion within the organ. In general, a segmentation problem can be considered as consisting of two related tasks: object recognition and object delineation. Object recognition is the determination of the target object’s whereabouts on the image or its location, whereas object delineation draws the object’s spatial extent and composition. Although object recognition is known as a high-level process, object delineation refers to a low-level process; and it is well known that humans are superior to computers at performing high-level vision tasks (3–6) such as object recognition. On the other hand, computational methods are better for low-level tasks such as object delineation and finding the exact spatial extent of the object (3,4,7). Image segmentation in this high- to low-level hierarchy is a combination of recognition and delineation steps (8). This hierarchical relation between the object recognition and object delineation steps is illustrated with an example of a pulmonary CT image and its segmentation (Fig 1). Note that in the object recognition step (Fig 1a), the left and right lung fields are identified through user interaction (ie, a high-level task); and in the object delineation step (Fig 1b), user-provided information is processed to find the exact boundary of the lung fields (ie, a low-level task).


![l1.png](attachment:l1.png)

![image.png](attachment:image.png)


```python

```
