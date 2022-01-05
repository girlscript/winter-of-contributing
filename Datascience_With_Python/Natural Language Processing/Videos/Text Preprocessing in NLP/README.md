## Topic: Data Science with Python : Text Preprocessing in NLP #392
## Video Link: [Text Preprocessing in NLP](https://drive.google.com/file/d/1KiTenmB_j2W6AjTqboFD0nKfdMOP0DJ_/view?usp=sharing)

### **What is Text Pre-processing?**
* A text, in its original form, may contain non-alphanumeric characters, URLs, stop words, words with mixed cases, short forms etc.
* They sometimes make it difficult for the algorithm to read and analyse the text and might sometimes consider two same words but of a bit different form, as different and not same!
* The removal of such URLs, emojis, stopwords, deciphering short forms, spell check etc is called Text Preprocessing.

### Why is it so important?
* Text preprocessing is a method to clean the text data and make it ready to feed data to the model and hence prevent the model from getting confused with various unrecognizable characters. 

### Where is it used?
* To prepare the text data for the model building we perform text preprocessing.
* The text, before feeding to the Natural Language Processing (NLP) model, is preprocessed...

### **Some main steps in Text Pre-processing**

![image](https://user-images.githubusercontent.com/83827603/134863593-ef5bef88-f769-4dfb-bab2-44b86ff9333f.png)

* Removal of punctuations or speacial characters like . , ! ? $
	Eg: (I love having pizzas in evenings!) becomes (I love having pizzas in evenings)
* Removing Stop words: Removal of the words which do not convey any special
	meaning and the sentence conveys its message without them. 
	Eg: I love having pizzas in evenings: (love pizzas evenings) itself conveys the
	message
* Converting text to lower case 
* Lemmatization: to extract the root word without affecting the meaning of the word
	Eg: 'enjoyed' becomes 'enjoy’
  
Many additional steps maybe carried out based on the type data that is preprocessed!

### **So, let's begin!**
* First, we import he dataset. The dataset used here is downloaded from the below link [Dataset](https://www.kaggle.com/sudalairajkumar/getting-started-with-text-preprocessing/data)
* Pandas library of python is mainly used for data analysis. So, we’ll be using it to define the dataset and make various modifications to the data. The columns function displays the columns in the dataset and head() function displays the first 5 rows in the dataset
* So now, we start with the preprocessing!
* This is the dataset before starting with the text preprocessing.

![image](https://user-images.githubusercontent.com/83827603/134862141-c536fbf9-2933-4699-8d34-c2888f5334dc.png)

**1.	Removal of URL**
The URLs are removed using the regex \S+. \S+ means “a string of non-whitespace characters” and \s+ means “a string of whitespace characters” so here, we replace string of non-whitespace characters starting with http with a “”.

![image](https://user-images.githubusercontent.com/83827603/134862587-36ca5a82-50bb-4010-8d71-331987ef9bfb.png)
The URL gets removed: 

![image](https://user-images.githubusercontent.com/83827603/134862674-555173db-6436-45d4-b70b-f2cf08ef1391.png)

**2. Removal of Non-Alphanumeric characters**
All non-alphanumeric characters are replaced with spaces again using the regex. All characters except lower and upper case alphabets and numers are replaced with " ". By doing so, all the special characters in the dataset get removed in this way: 

![image](https://user-images.githubusercontent.com/83827603/134862923-b127e407-0b90-4fd5-bc93-6143fb87221c.png)

**3. Converting Text to Lower Case**
Convert the text to lower case (using lower() function) to maintain a uniformity in the data and to avoid the algorithm considering the same upper and lower case words different.

![image](https://user-images.githubusercontent.com/83827603/134862969-c3cd548f-0dff-423a-919d-2ea023c7b3c9.png)

**4. Lemmatization**
Now it’s Lemmatization, to obtain the root word. NLTK is a python library which contains Natural Language prcessing tools for English. The stem in nltk package contains WordNetLemmatizer which is used for Lemmatization. averaged_perceptron_tagger, wordnet, punkt are downloaded from the package. We define a function to lemmatize each word with its POS tag. A POS stands for Part of Speech. We add a POS tag with a each word to define its type if its adjective, verb, noun, adverb or none. We have to do this because these words are treated as a noun in the sentence rather than a verb. The sentence is first divided into tokens and added a tag based on the category it belongs. After adding the POS tags, if there is no tag, the token is appended as it is else tag is used to lemmatize the token.
Thus, all the words are converted to the root form:

![image](https://user-images.githubusercontent.com/83827603/134863011-417877db-ae7c-4a00-881a-c482a6873962.png)

**5.Removal of Stopwords**
Stopwords are removed again using the nltk package. The words in each row are checked. If any word is a stopword, its replaced with "" hence removed!
The stopwords after removal, the dataset looks this way... 

![image](https://user-images.githubusercontent.com/83827603/134863244-46bb1b9c-51fe-4657-aaf6-4a351ffe5edb.png)

And have a look at the dataset now, this dataset doesn’t have any tags, URLs, any weird symbols or the stopwords but just text which the NLP algorithm finds it easy to read and analyse!

----
#### References:
* https://www.geeksforgeeks.org/python-lemmatization-approaches-with-examples/
* 1st Image source: https://machinelearningknowledge.ai/11-techniques-of-text-preprocessing-using-nltk-in-python/
