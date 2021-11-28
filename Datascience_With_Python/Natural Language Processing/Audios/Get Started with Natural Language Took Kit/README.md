## Get Started with Natural Language Took Kit 
## [Click here to listen the audio](https://drive.google.com/file/d/1y92ZMeHrCixEyXOm4qEvNqNI9v7HQACF/view?usp=sharing)

- The basics of natural language processing including data cleaning, normalization, encoding, sentiment analysis and a simple text classifier using basic yet powerful Python libraries
- It helps in the following steps:
- Removing punctuation: 
     - When trying to train a machine learning model, it helps to reduce overfitting by removing punctuation (like !,* etc.). 
- Removing emojis: 
     - Sometimes people attach emojis to words without spaces making it difficult to interpret such words. 
     - Removing emojis can help with such cases. 
     - Again, be careful while removing these as emojis might actually be really useful for tasks like sentiment analysis and topic classification.
- Removing stop words: 
     - For tasks like data exploration and trend analysis, it might not be very useful to see common words like ‘the’, ‘and’ , ‘of’ etc. 
     - The sklearn package actually has a collection of commonly used English stop words that we can use to remove these.
- Making all text lowercase: 
     - This is the simplest way to normalize text. (after all, BeTTer and better do have the same semantic implication)
- Stemming words: 
     - Another way of normalizing is by replacing derived words with their root form (eg: ‘posting’, ‘posted’, ‘posts’ are all replaced by ‘post’). 
     - To stem words we use the PorterStemmer util provided by nltk.
- Extracting/Removing hashtags and mentions: 
     - Hashtags and mentions can be very useful in identifying trends in your data. 
     - It helps to extract them out of your text and analyze them separately

![image](https://user-images.githubusercontent.com/79050917/143732649-248d3849-4ad4-4878-b035-7c6f25be5c7e.png)

**Overview:**
- Companies must understand AI requirements. 
- If NLP is to be successful, it needs volumes of data that it can process. 
- Businesses have to consider the resources required to deliver the necessary data before starting an NLP project.
- Once the foundation is in place, organizations can experience the advantages of NLP. 
- Customer and employee experiences improve, making for an increased customer base. 

![image](https://user-images.githubusercontent.com/79050917/143733207-a37956db-2d77-4420-aca6-aa280a0e27e2.png)
