## Title : Fourier and Discrete Cosine Transformations of Images

🔴 **Type of Content** : Documentation

🔴 **Domain** : Machine Learning

🔴 **Module** : ML for Seqential Data & Visual Data

----

<img src="https://www.spiedigitallibrary.org/ContentImages/Journals/JEIME5/23/6/061110/FigureImages/JEI_23_6_061110_f001.png">


### What is DCT in images?
<p>
A discrete cosine transform (DCT) is a widely used transformation technique in signal processing and data compression which expresses a finite sequence of data points in terms of a sum of cosine functions oscillating at different frequencies.The DCT, first proposed by Nasir Ahmed in 1972.

The discrete cosine transform helps separate the image into parts (or spectral sub-bands) of differing importance (with respect to the image's visual quality). The DCT is similar to the discrete Fourier transform: it transforms a signal or image from the spatial domain to the frequency domain.
</p>

### DFT VS DCT:
<p>
The difference between the two is the type of basis function used by each transform; the DFT uses a set of harmonically-related complex exponential functions, while the DCT uses only (real-valued) cosine functions.

Usually,DCT is preferred over DFT in image compression algorithms like JPEG because DCT is a real transform which results in a single real number per data point. In contrast, a DFT results in a complex number (real and imaginary parts) which requires double the memory for storage.
</p>

### How DCT is performed on images?
<p>
The DCT works by separating images into parts of differing frequencies. During a step called quantization, where part of compression actually occurs, the less important frequencies are discarded, hence the use of the term "lossy". Then, only the most important frequencies that remain are used to retrieve the image in decomposition process. As a result, the reconstructed images contain some distortion but this distortion can be adjusted in the compresssion stage.

### Applications:

  1. Digital image
  2. Digital video
  3. Digital audio
  4. Digital Television
  5. Digital Radio
  6. Speech Coding
  7. Telecommunication networks
  8. Reducing Network bandwith usage
  9. Spectral Methods

### Resources:

- https://www.math.cuhk.edu.hk/~lmlui/dct.pdf

- https://www.youtube.com/watch?v=tW3Hc0Wrgl0