# **Natural Language Processing**

Natural Language Processing (NLP) is a subfield of computer science, artificial intelligence, information engineering, and human-computer interaction. This field focuses on how to program computers to process and analyze large amounts of natural language data. It is difficult to perform as the process of reading and understanding languages is far more complex than it seems at first glance.




# 1] **Tokenization**

- By tokenizing, you can conveniently split up text by word or by sentence.

-  This will allow you to work with smaller pieces of text that are still relatively coherent and meaningful even outside of the context of the rest of the text. 

- It’s the  first step in turning unstructured data into structured data, which is easier to analyze.

- When you’re analyzing text, you’ll be tokenizing by word and tokenizing by sentence. 

Natural Language toolkit has very important module NLTK tokenize sentences which further comprises of sub-modules

- word tokenize
- sentence tokenize


# 1) **Tokenizing by word:**

 - Words are like the atoms of natural language.
 - They’re the smallest unit of meaning that still makes sense on its own.
 - Tokenizing your text by word allows you to identify words that come up particularly often.
 
 

># **word_tokenize module**

word_tokenize module is used for basic word tokenization. 

Following example will use this module to split a sentence into words.

**Example:**




    import nltk

    from nltk.tokenize import word_tokenize

    text="GWOC is one of the best Open Source Community"

    print(word_tokenize(text))

**Output:**


    

    ['GWOC', 'is', 'one', 'of', 'the', 'best', 'Open ', 'Source', 'Community']


**Explanation:** 

1. word_tokenize module is imported from the NLTK library.

2.  A variable “text” is initialized.

3. Text variable is passed in word_tokenize module and printed the result.

4. This module breaks each word with punctuation which you can see in the output.








# 2) **Tokenizing by sentence:**

-  Sub-module available for the above is sent_tokenize. 

- An obvious question in your mind would be why sentence tokenization is needed when we have the option of word tokenization. Imagine you need to count average words per sentence, how you will calculate?

-  For accomplishing such a task, you need both NLTK sentence tokenizer as well as NLTK word tokenizer to calculate the ratio. Such output serves as an important feature for machine training as the answer would be numeric.

># **sentence_tokenize module:**


# **Example:**



    import nltk

    from nltk.tokenize import sent_tokenize

    text = "God is Great! I won a lottery."

    print(sent_tokenize(text))

# **Output:** 

    ['God is Great!', 'I won a lottery ']


# **Explanation:**


1. In a line like the previous program, imported the sent_tokenize module.
2. Further sentence tokenizer in NLTK module parsed that sentences and show output. It is clear that this function breaks each sentence.

Above word tokenizer example is good settings stones to understand the mechanics of the word and sentence tokenization.






# **2] Lemmatization** 

- Lemmatization is the process of grouping together the different inflected forms of a word so they can be analyzed as a single item.

-  Lemmatization is similar to stemming but it brings context to the words. So it links words with similar meanings to one word. 

- Text preprocessing includes both Stemming as well as Lemmatization. Many times people find these two terms confusing. Some treat these two as the same.

- Actually, lemmatization is preferred over Stemming because lemmatization does morphological analysis of the words.

# **Applications of lemmatization are:** 
 
1. Used in comprehensive retrieval systems like search engines.

2. Used in compact indexing
 

# **Examples of lemmatization:**

-> rocks : rock

-> corpora : corpus

-> better : good

One major difference with stemming is that lemmatize takes a part of speech parameter, “pos” If not supplied, the default is “noun.”

# **Below is the implementation of lemmatization words using NLTK:**

    from nltk.stem import WordNetLemmatizer
 
    lemmatizer = WordNetLemmatizer()
 
    print("rocks :", lemmatizer.lemmatize("rocks"))

    print("corpora :", lemmatizer.lemmatize("corpora"))
 
    print("better :", lemmatizer.lemmatize("better", pos ="a"))

#  **Output:**
 
    rocks : rock

    corpora : corpus

    better : good

# **Conclusion:**

I have explained about the Tokenization amd Lemmatization in detail and also added some examples related to it.

# **Summary:**

- Tokenization in NLP is the process by which a large quantity of text is divided into smaller parts called tokens.
- Natural language processing is used for building applications such as Text classification, intelligent chatbot, sentimental analysis, language translation, etc.
- Natural Language toolkit has very important module NLTK tokenize sentence which further comprises of sub-modules.
- We use the method word_tokenize() to split a sentence into words. The output of word tokenizer in NLTK can be converted to Data Frame for better text understanding in machine learning applications.
- Sub-module available for the above is sent_tokenize. Sentence tokenizer in Python NLTK is an important feature for machine training.
- Lemmatization in NLTK is the algorithmic process of finding the lemma of a word depending on its meaning and context. 
- Lemmatization usually refers to the morphological analysis of words, which aims to remove inflectional endings.
-  It helps in returning the base or dictionary form of a word known as the lemma.
















