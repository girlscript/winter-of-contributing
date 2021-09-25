## Topic: Data Science with Python : Text Preprocessing in NLP #392
## Video Link: [Text Preprocessing in NLP](https://drive.google.com/file/d/1KiTenmB_j2W6AjTqboFD0nKfdMOP0DJ_/view?usp=sharing)

### **What is Text Pre-processing?**
* A text, in its original form, may contain non-alphanumeric characters, URLs, stop words, words with mixed cases, short forms etc.
* They sometimes make it difficult for the algorithm to analyse text.
* To make it easy to analyze different texts and sentences, for Natural Language Processing, the text is always preprocessed.

### **Some main steps in Text Pre-processing**
* Removal of punctuations or speacial characters like . , ! ? $
	Eg: (I love having pizzas in evenings!) becomes (I love having pizzas in evenings)
* Removing Stop words: Removal of the words which do not convey any special
	meaning and the sentence conveys its message without them. 
	Eg: I love having pizzas in evenings: (love pizzas evenings) itself conveys the
	message
* Converting text to lower case 
* Lemmatization: to extract the root word without affecting the meaning of the word
	Eg: 'enjoyed' becomes 'enjoy’
  
Many additional steps maybe carried out based on the type data that is preprocessed

### **So, let's begin!**
* First, we import he dataset. The dataset used here is downloaded from the below link [Dataset](https://www.kaggle.com/sudalairajkumar/getting-started-with-text-preprocessing/data)
* Pandas library of python is mainly used for data analysis. So, we’ll be using it to define the dataset and make various modifications to the data. The columns function displays the columns in the dataset and head() function displays the first 5 rows in the dataset
* So now, we start with the preprocessing!

**1.	Removal of URL**
The URLs are removed using the regex \S+. \S+ means “a string of non-whitespace characters” and \s+ means “a string of whitespace characters” so here, we replace string of non-whitespace characters starting with http with a “”.

**2. Removal of Non-Alphanumeric characters**
All non-alphanumeric characters are replaced with spaces again using the regex. All characters except lower and upper case alphabets and numers are replaced with " " 

**3. Converting Text to Lower Case**
Convert the text to lower case (using lower() function) to maintain a uniformity in the data and to avoid the algorithm considering the same upper and lower case words different.

**4. Lemmatization**
Now it’s Lemmatization, to obtain the root word. NLTK is a python library which contains Natural Language prcessing tools for English. The stem in nltk package contains WordNetLemmatizer which is used for Lemmatization. averaged_perceptron_tagger, wordnet, punkt are downloaded from the package. We define a function to lemmatize each word with its POS tag. A POS stands for Part of Speech. We add a POS tag with a each word to define its type if its adjective, verb, noun, adverb or none. We have to do this because these words are treated as a noun in the sentence rather than a verb. The sentence is first divided into tokens and added a tag based on the category it belongs. After adding the POS tags, if there is no tag, the token is appended as it is else tag is used to lemmatize the token.

**5.Removal of Stopwords**
Stopwords are removed again using the nltk package. The words in each row are checked. If any word is a stopword, its replaced with "" hence removed!

And have a look at the dataset now, this dataset doesn’t have any tags, URLs, any weird symbols or the stopwords but just text which the NLP algorithm finds it easy to read and analyse!

----
#### References:
* https://www.geeksforgeeks.org/python-lemmatization-approaches-with-examples/
