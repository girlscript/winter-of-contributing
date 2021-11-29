# Text Analytics

## Video Link: [Text Analytics](https://drive.google.com/file/d/1Y-f82V69eyB5QBzs8lnZ_yNzvwYJkDPb/view?usp=sharing)

## What is Text Analytics?

- Text Analytics involves the use of unstructured text data, processing them into usable structured data. Text Analytics is an interesting application of Natural Language Processing. Text Analytics has various processes including cleaning of text, removing stopwords, word frequency calculation, and much more.

- Text Analytics has gained much importance these days. As millions of people engage in online platforms and communicate with each other, a large amount of text data is generated. Text data can be blogs, social media posts, tweets, product reviews, surveys, forum discussions, and much more. 
- Such huge amounts of data create huge text data for organizations to use. Most of the text data available are unstructured and scattered. Text analytics is used to gather and process this vast amount of information to gain insights.
- Text Analytics serves as the foundation of many advanced NLP tasks like Classification, Categorization, Sentiment Analysis, and much more. Text Analytics is used to understand patterns and trends in text data. Keywords, topics, and important features of Text are found using Text Analytics.

## Some Important uses of Text Analytics:
Some of the most important and interesting uses of Text Analytics is-

1. Scientific Discovery

2. Records Management and Analytics

3. Social Media Monitoring

4. Resume Filtering

5. Competitive Intelligence

## Example 

### Resume Text Analytics is often used by recruiters to understand the profile of applicants and filter applications. 

### Getting Started with the code:

```
import numpy as np
import pandas as pd
import nltk
from nltk.corpus import stopwords
import string
from wordcloud import WordCloud
import seaborn as sns
import matplotlib.pyplot as plt
%matplotlib inline
```

Reading the data

```
#reading the data
df = pd.read_csv('Resume_Data.csv' ,encoding='utf-8')
df['Cleaned_Resume'] = ''
df.head()
```

![image](https://user-images.githubusercontent.com/63282184/143733542-b316c831-e6dd-4661-8410-2e393b7a7154.png)

```
print ("Resume Categories")
print (df['Category'].value_counts())
```

```
Resume Categories
Java Developer               84
Testing                      70
DevOps Engineer              55
Python Developer             48
Web Designing                45
HR                           44
Hadoop                       42
Sales                        40
Data Science                 40
ETL Developer                40
Mechanical Engineer          40
Operations Manager           40
Blockchain                   40
Arts                         36
Database                     33
Health and fitness           30
PMO                          30
Electrical Engineering       30
DotNet Developer             28
Business Analyst             28
Automation Testing           26
Network Security Engineer    25
Civil Engineer               24
SAP Developer                24
Advocate                     20
```

```
plt.figure(figsize=(15,15))
plt.xticks(rotation=90)
sns.countplot(y="Category", data=df)
```

![39726ta2](https://user-images.githubusercontent.com/63282184/143775139-4ee6c76c-221d-4c51-9bc2-2c92650c8d62.jpg)


### Data Cleaning

```
import re
def cleanResume(resumeText):
    resumeText = re.sub('httpS+s*', ' ', resumeText)  # remove URLs
    resumeText = re.sub('RT|cc', ' ', resumeText)  # remove RT and cc
    resumeText = re.sub('#S+', '', resumeText)  # remove hashtags
    resumeText = re.sub('@S+', '  ', resumeText)  # remove mentions
    resumeText = re.sub('[%s]' % re.escape("""!"#$%&'()*+,-./:;<=>?@[]^_`{|}~"""), ' ', resumeText)  # remove punctuations
    resumeText = re.sub(r'[^x00-x7f]',r' ', resumeText) 
    resumeText = re.sub('s+', ' ', resumeText)  # remove extra whitespace
    return resumeText
df['Cleaned_Resume'] = df.Resume.apply(lambda x: cleanResume(x))
```

![image](https://user-images.githubusercontent.com/63282184/143733604-545b1988-7274-47b8-9cb7-068b78e2af6c.png)


### Tokenization

```
tokenizer = nltk.tokenize.RegexpTokenizer('w+')
#Tokenizing the text
tokens = tokenizer.tokenize(corpus)
len(tokens)
Output: 411913

#now we shall make everything lowercase for uniformity
#to hold the new lower case words
words = []
# Looping through the tokens and make them lower case
for word in tokens:
    words.append(word.lower())
```

StopWords

```
#Stop words are generally the most common words in a language.
#English stop words from nltk.
stopwords = nltk.corpus.stopwords.words('english')
words_new = []
#Now we need to remove the stop words from the words variable
#Appending to words_new all words that are in words but not in sw
for word in words:
    if word not in stopwords:
        words_new.append(word)
        
```

![image](https://user-images.githubusercontent.com/63282184/143733637-39fbe511-d9e5-41d8-a96a-1e59348f5f40.png)


### Wordcloud

![image](https://user-images.githubusercontent.com/63282184/143733715-31efaa95-aa15-4d89-88b0-98f74e742ced.png)


## Conclusion

Text Analytics is an interesting area and needs a lot more work and research. With good Text Analytics, we are able to process a lot of text data and understand many things. In the above example, with text analytics, we are able to clean the text and gather valuable information regarding the resume texts.
