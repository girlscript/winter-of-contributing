## Data Science with Python : Tokenization & Lemmatization 

## What Is Natural Language Processing?

Natural Language Processing, or NLP for short, is broadly defined as the automatic manipulation of natural language, like speech and text, by software.

The study of natural language processing has been around for more than 50 years and grew out of the field of linguistics with the rise of computers.


## Steps in NLP:

![image](https://user-images.githubusercontent.com/63282184/134771723-0c6e45df-7225-41b5-bf46-e0f9682fe69c.png)


## Types of Tokenization:

![image](https://user-images.githubusercontent.com/63282184/134771763-6714f216-586d-4f2f-aa55-2b220c064574.png)


## **VIDEO LINK :** [Tokenization & Lemmatization ](https://drive.google.com/file/d/1yBBci6pG9uJ_DI4WWavkIyQyukMacN0_/view?usp=sharing)

## What is Tokenization ?
**Tokenization** is essentially splitting a phrase, sentence, paragraph, or an entire text document into smaller units, such as individual words or terms. Each of these smaller units are called tokens

Tokens are important in NLP because, before any real text processing can be done, “text needs to be segmented into linguistic units such as words, punctuation, numbers, alpha-numerics, etc. This process is called tokenization.

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

For example, Lemmatization clearly identifies the base form of 
‘troubled’ to ‘trouble’’ denoting some meaning whereas, 
Stemming will cut out ‘ed’ part and convert it into ‘troubl’ which 
has the wrong meaning and spelling errors

- ‘troubled’ -> **Lemmatization**-> ‘troubled’, and error
- ‘troubled’ -> **Stemming** -> ‘troubl’

## Conclusion:

Tokenization and lemmatization are the main parts of NLP. Using this two techniques we can easily reach out to the best word clouds.
