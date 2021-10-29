# Text Preprocessing in NLP

### Data Science with Python
### Issue number: #329

The notebook file contains the documentation of the concepts of 'Text Preprocessing in NLP'. 

### Purpose:
Natural Language Processing is a subfield of data science concerned with interactions between computers and human (natural) languages. Nowadays, companies have large amounts of data, a lot of which is text data. This text data carries a lot of data that can be analyzed and used for different purposes. The topic we choose, order of words, our tone, and a lot of other factors need to be considered in order to understand the text and intention. This data which is very messy and hard to manipulate is called unstructured data. To preprocess your text simply means to bring your text into a form that is predictable and analyzable for your task. 

### Applications and Usage: 
The techniques that you use to preprocess your data heavily depends on what kind of data is being analyzed and what model you want to build with it. It's not a one-size-fits-all approach. Which techniques you use need to be properly thought through and relevant. This structured data can get used in machine learning models directly, it is essentially the first step in NLP projects.


### Techniques covered:
- Lowercasing: This step is used to covert all the data to lowercase. It is used to bring some uniformity to the data, hence making it easier to analyse.
- Remove punctuations: Punctuations barely ever add any value during analysis.
- Remove words that contain numbers: No words contain numbers and so these are most probably typos, this step is used to clean the data.
- Tokenization: Converting sentences to tokens/words is called tokenization. Each word becomes an element of a list.
- Spelling correction: This step is used to spell check, especially when there are too many spelling mistakes.
- Remove stop words: Stop words are words that do not add any value to the sentence during analysis. Examples of stop words may be, I, an, the, etc. In case you would like to define your own list of stop words, you can do that too!
- Lemmatization: This step is used to convert words to their base form, it is another way of standardizing the data. Example: 'runs', 'ran' and 'run' all reduce to run.
- Stemming:  This step is used to convert words to their base forms too but here, the word may lose its meaning. Due to this, lemmatization is preferred over stemming.
- Removing words with only one letter: Words with only one letter will barely ever add any meaning to the sentence and hence, could be removed during text preprocessing.
- Regex: Regex refers to regular expressions, it is used to filter out certain types/patterns of data such as an email ID, URL, etc. 
- Joining the remaining words: This step is simply used to join all the preprocessed, structured data. 

The notebook contains sample code to guide you on how to use different techniques and relevant links have been provided. 


Text preprocessing is a crucial step which is used to standardize data before using it for any machine learning model or any sort of analysis.

Dataset used: https://www.kaggle.com/nicapotato/womens-ecommerce-clothing-reviews

This dataset contains over 23,000 reviews of a women's clothing store.

Libraries used:
- pandas
- nltk
- string

### Conclusion:
In this documentation, we discussed how the preprocessing of text is necessary for model building and some of the important steps involved.
