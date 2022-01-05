## Usage of get_dummies to create Dummy Variables with Pandas.

## [Click here to listen audio](https://drive.google.com/file/d/1R6sB7f1tZetS53sHKNWPbqoIj89EOMLi/view?usp=sharing)

**Why to create Dummy Variables?**

- Conversation of categorical data to numeric data.
- Many of the model in data mining treats or computes the dataset when all the datatype is in numeric.

**Methods that are used to convert:**

- *Label encoder:* Label Encoding refers to converting the labels into a numeric form so as to convert them
into the machine-readable form.

- *One- hot encoding:* A one hot encoding is a representation of categorical variables as binary vectors. 
This first requires that the categorical values be mapped to integer values.


![Capture_3](https://user-images.githubusercontent.com/79050917/135574219-fc620048-ac22-471e-8982-2fda64e2b07e.PNG)


**Libraries we used to implement get_dummies:**

- from pandas we get the method get_dummies.

import pandas as pd

pd.get_dummies()

**Adavtages:**
- Converts the categorical data to numeric which makes easily understandable by ml algorithms.

**Disadvantage:**
- Might impact on size if it has more categories in the dataset which results in increasing the complexity.

