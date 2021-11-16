
# Lung Segmentation using Computer Vision

## What is lung segmentation:
     
  Lung segmentation is a process of partitioning an image into lung and non-lung segments. To put it simply, given an image, we want to select only the regions or segments occupied by lungs. Additionally, the lungs can be further segmented into anatomical regions such as bronchi, lobes etc. In the case of an X-Ray, the segments consist of pixels. In Computed Tomography (CT), the regions consist of voxels, as they are three-dimensional.  The process can be either manual, semi-automatic or fully automatic. Before development of algorithms which automated the process, the procedure was performed by radiologists and it could be very time-consuming. With state of the art algorithms, the segmentation can take as little as few seconds, while manual segmentation can take dozens of minutes or even several hours depending on the required precision. Lung segmentation is used mainly as a preliminary step for further analysis. Its applications range from very precise measurement of lung capacity to surgery planning and further segmentation of lesions – i.e., lung cancer.

   The obvious concern is whether the algorithms are also as precise as humans and the answer in most of the cases is yes. Even when the algorithm produces slightly erratic results, their correction is much faster than segmenting the whole scan manually. A fully automatic segmentation without any kind of human supervision is currently impossible because the algorithm cannot make sense out of the data it is processing contrary to a trained physician. In most of the cases however, the results are quite precise, often more detailed than human-produced segmentation. The additional bonus is that algorithms are not susceptible to both inter- and intra-operator error. In other words, when a human is given the same study to segment several times, each segmentation will differ slightly. It is even more evident when several physicians are given the same study to work on. On the other hand, an algorithm will always produce the same results for the same study, regardless of how many times the procedure is repeated.


## Why does it have to be so fast?

When one realizes the already mentioned volume of medical imaging data being stored, it becomes obvious that manual segmentation is no longer an option. Especially when additional constraints are put on costs and the number of trained personnel.  Provided that the high accuracy is maintained, the faster the data can be processed the better. This also means that the patient can get the diagnosis much faster than ever before and humans no longer have to perform very tedious and repetitive tasks – instead, they can focus more on verifying the results and diagnosis. Furthermore, much of the already stored data is analyzed only in terms of the original goal of the examination. In the future, its automatic analysis, thanks to its speed and precision, could lead to new discoveries and reveal phenomena we are currently unaware of.

## How is it achieved?

Lung segmentation algorithms are either based on conventional image processing techniques or machine learning or even a combination of both. Machine learning is often used when lesions have to be segmented or when lung regions contain pathologic changes such as cancer. The main disadvantage of machine learning is that the results strongly depend on the quality of the training set and in the case of medical imaging, it is still hard to obtain large, pre-labelled training sets – mainly due to ethical/legal reasons. For healthy or slightly abnormal regions, very high accuracy can be achieved using conventional image processing such as image morphology, thresholding etc. for segmenting lung surface and bronchial tubes. ECONIB team recently developed an algorithm that segments lungs with high speed and accuracy reaching 11ms/slice processing time and 0.97 F1-Score with respect to human-segmented ground truth. 

![LCS1.png](attachment:LCS1.png)

First the image is thresholded – the white pixels correspond to lung tissue and air filled regions and the black ones cover the remaining regions of the image. Next, in order to discard the thresholded regions which are not lungs, a set of 3d connected components is constructed to check how they connect in space. The large connected region at the bottom is the bed occupied by the patient and it has to be removed. It can be safely assumed that the largest remaining air filled region will be within the patient’s body and it spans the whole lungs. This however is not the end – the region also contains other air filled areas – trachea and upper airways which have to be removed. This is achieved using the trachea extraction step which moves a planar cross section from the top of the patients head to the bottom and when the area grows too rapidly, the region is detached. Such growth occurs for the first time when trachea connects with the lungs and this way, the upper airways, together with the trachea, can be removed. In the last step, using a combination of morphological operations, the lungs which often appear to be connected at sternum due to insufficient image resolution can be separated. This is achieved using a combination of repetitive morphological operations such as erosion and dilatation. Finally, the remaining black and white masks contain only the lungs. Furthermore, they are separated so that they can be automatically labeled as left and right lung.

![steps-segmentation%20%281%29.png](attachment:steps-segmentation%20%281%29.png)

As the result, a very fast and efficient algorithm relying solely on domain knowledge and conventional computer vision techniques was built. The main advantage compared to machine-learning based approaches is that it does not require training at all and it achieves high speed and accuracy. The final result rendered in 3D is presented. Note the high level of details in the segmented image – detailed structures such as bronchial tubes inside the lungs are visible and the segmented surface is visibly deformed by the ribs.


![3d-lungs-segmentation.png](attachment:3d-lungs-segmentation.png)

## Conclusion

Lung cancer is one of the causes of cancer deaths. It is difficult to detect because it arises and shows symptoms in
final stage. However, mortality rate and probability can be reduced by early detection and treatment of the disease.
Best imaging technique CT imaging are reliable for lung cancer diagnosis because it can disclose every suspected
and unsuspected lung cancer nodules. However, variance of intensity in CT scan images and anatomical
structure misjudgment by doctors and radiologists might cause difficulty in marking the cancerous cell.There has been many system developed and research going on detection of lungcancer. However, some systems do not have satisfactory accuracy of detection and some systems still has to beimproved to achieve highest accuracy tending to 100%. Image processing techniques and machine learning techniques has been implemented to detect and classify the lung cancer. We studied recent systems developed for cancer detection based on CT scan images of lungs to choose the recent best systems and analysis was conducted on
them.
