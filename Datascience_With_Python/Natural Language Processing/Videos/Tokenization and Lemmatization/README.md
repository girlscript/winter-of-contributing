## Data Science with Python : Tokenization & Lemmatization 

## **VIDEO LINK :** [Tokenization & Lemmatization ](https://drive.google.com/file/d/1yBBci6pG9uJ_DI4WWavkIyQyukMacN0_/view?usp=sharing)

## What is Tokenization ?
**Tokenization** is essentially splitting a phrase, sentence, paragraph, or an entire text document into smaller units, such as individual words or terms. Each of these smaller units are called tokens

**Example**

![image](https://user-images.githubusercontent.com/63282184/134713072-60c05b49-3d78-47ba-9460-6715a0a8283b.png)

**Why is Tokenization required in NLP?**

- Count the number of words in the text
- Count the frequency of the word, that is, the number of times a particular word is present

**Methods to Perform Tokenization in Python ?**
1. Tokenization using Python’s split() function
2. Tokenization using Regular Expressions (RegEx)
3. Tokenization using NLTK
4. Tokenization using the spaCy library


## What is Lemmatization?

- A method that switches any kind of a word to its base root mode is called Lemmatization. 
- In other words, Lemmatization is a method responsible for grouping different inflected forms of words into the root form, having the same meaning. 

**Difference between lemmatization and stemming ?**


- ‘troubled’ -> **Lemmatization**-> ‘troubled’, and error
- ‘troubled’ -> **Stemming** -> ‘troubl’
