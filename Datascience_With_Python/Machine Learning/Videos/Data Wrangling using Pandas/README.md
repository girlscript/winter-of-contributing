## Data Wrangling using Pandas
## [Click here to see the video](https://drive.google.com/file/d/1kK53N5_u0IDBZ4gAN5FwWmbbPJoW4O_F/view?usp=sharing)

- It is most importing step in data science.
- It helps in reducing the complexity of the dataset and makes easy for the model.
- Improves the model performance.
- Pandas is the open-source library which is used in data science field for data analsysis.

## Import Data:
- Its the basic for the data science project to load the dataset.
- pd.read_csv() : is widely used for loading the dataset.

![image](https://user-images.githubusercontent.com/79050917/143427957-804eb315-1e81-4c57-a851-6df70fb8f6ab.png)

## Merge the dataset:
- It is important in data science project to merge the data set when two or more data set is available when doing the project
- pd.merge() : is used to merge the datasets

![image](https://user-images.githubusercontent.com/79050917/143428229-3b07d9aa-6d23-439e-b9e0-a09e2a74fc23.png)

## Concatenation:
- It is importing in the project to concat the data sets after encoding.
- pd.concat(): is used to concatination of datasets.

## Data Cleaning:
- For droping the duplicates
- drop_duplicates() : is used to drop the duplicates
- For treating the missing values:
- df.isnull().sum(): is used to know the count of missing values
- fillna(): is used to fill the missing values.

![image](https://user-images.githubusercontent.com/79050917/143428101-3acb5e5f-4406-4606-af6f-a10aa4fb0677.png)
![image](https://user-images.githubusercontent.com/79050917/143428144-a9f9c4da-4438-404a-91fe-ebd9775ee72b.png)

## Data Analysis:
- It is important to do data analysis.
- This helps in increasing the model performance and also improves the flexibility within the data set.
- describe() : is used to draw some if the statastical information.

![image](https://user-images.githubusercontent.com/79050917/143428013-61967cc9-8236-4aea-9da0-7b0467c39a16.png)

## Export:
- It very important to store the output after building the model for thre test data.
- df.to_csv(): is widely used to export the dataset.

## Advantages:
- Reduces time
- Better Decision making
- Increases the model performance.
- Reduces the complexity.

## Diadvantage:
- Original data is lost.

## Conclusion:
- Data Wrangling is the process of gathering, collecting, and transforming Raw data into another format for better understanding, decision-making, accessing, and analysis in less time.
