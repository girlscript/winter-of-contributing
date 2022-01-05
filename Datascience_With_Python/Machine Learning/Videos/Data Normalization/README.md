## Data Normalizatin

## [Click here to view the video](https://drive.google.com/file/d/1-ISdOLO7Ic8_arebYQtTYqgWD6mnUIij/view?usp=sharing)

**What is normalization?**

Normalization is a technique that  updates the values and distributes the values in the same range 
through out the dataset.

**Why normalization?**

Lets us imagine a dataset that have the columns age and their income.

![Capture_44](https://user-images.githubusercontent.com/79050917/135712969-32ed6c1c-75e1-4e43-a012-d8522529718a.PNG)


When we apply model it becomes a bias estimation.

Hence, we need to convert the distribution of values to the values which has the same range.

One of the famous techniques is normalization.

**Types of normalization:**

min-max normalization 

Formula: 

![Capture_11](https://user-images.githubusercontent.com/79050917/135712975-acc4a104-770a-4740-b9fa-cf0b73f4a6ee.PNG)


Mean normalization

Formula:

![Capture_22](https://user-images.githubusercontent.com/79050917/135712981-1bebb70e-95a2-4245-9412-6575d55fa192.PNG)


Z-score normalization

Formula

![Capture_33](https://user-images.githubusercontent.com/79050917/135712985-11c02c54-582c-4df8-bf6d-50426f820289.PNG)


**Advantages:**

- It coverts the values in the dataset to the same distribution.
- It helps to avoid the bias estimation.

**Disadvantages:**

- It also coverts the outliers to the same distribution which might impact the model performance


![Capture_55](https://user-images.githubusercontent.com/79050917/135713011-485db494-c6f0-452d-877c-91ac17e6fb4a.PNG)

