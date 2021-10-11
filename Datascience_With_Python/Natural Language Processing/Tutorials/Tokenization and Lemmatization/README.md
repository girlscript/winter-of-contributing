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
Tokenization can not only be word level, but also sentence level. That is, text can be either tokenized with words as tokens or sentences as tokens. Let’s discuss a few ways to perform tokenization.


- # Regular Expression

Regular Expression (RegEx) is a sequence of characters that are used to match against a pattern of characters. We use RegEx to find certain patterns, words or characters to replace them or do any other operation on them. Python has the module re which is used for working with RegEx. Let’s see how we can tokenize the text using re.

# Word Tokenization

>> Mystr = “This is a tokenization tutorial. We are learning different tokenization methods, and ways? Tokenization is essential in NLP’s tasks.”

>> Tokens = re.findall(“[\w’]+”, Mystr)
 

# Output:
>> [‘This’, ‘is’, ‘a’, ‘tokenization’, ‘tutorial’, ‘We’, ‘are’, ‘learning’, ‘different’, ‘tokenization’, ‘methods’, ‘and’, ‘ways’, ‘Tokenization’, ‘is’, ‘essential’, ‘in’, ‘NLP’, ‘tasks’]

# Explanation:

The re.findall() function matches against all the sequences that match with it and stores them in a list. The expression “[\w]+” means that any character – be it alphabets or numbers or Underscore (“_”). The “+” symbol means all the occurrences of the pattern. So essentially it will scan all the characters and put them in the list as one token when it hits a whitespace or any other special character apart from an underscore.

Please notice that the word “NLP’s” is a single word but our regex expression broke it into “NLP” and “s” because of apostrophe. 

# Sentence Tokenization

>> Mystr = “This is a tokenization tutorial. We are learning different tokenization methods, and ways? Tokenization is essential in NLP’s tasks.”

>> Tokens = re.compile(‘[.!?] ‘).split(Mystr)
 

# Output:

>> [‘This is a tokenization tutorial’, ‘We are learning different tokenization methods, and ways’, ‘Tokenization is essential in NLP tasks.’]

# Explanation:

Now, here we combined multiple splitting characters into one condition and called the re.split function. Therefore, when it hits any of these 3 characters, it will treat it as a separate sentence. This is an advantage of RegEx over the python split function where you cannot pass multiple characters to split at.


- # NLTK Tokenizers:

Natural Language Toolkit (NLTK) is a Python library specifically for handling NLP tasks. NLTK consists of functions and modules built-in which are made for some specific processes of the complete NLP pipeline. Let’s have a look at how NLTK handles tokenization.

# Word Tokenization

NLTK has a separate module, NLTK.tokenize, to handle tokenization tasks. For word tokenization, one of the methods it consists of is word_tokenize.

>> from nltk.tokenize import word_tokenize

>> Mystr = “This is a tokenization tutorial. We are learning different tokenization methods, and ways? Tokenization is essential in NLP’s tasks.”

>> word_tokenize(Mystr)
 

# Output:

>> [‘This’, ‘is’, ‘a’, ‘tokenization’, ‘tutorial’, ‘.’, ‘We’, ‘are’, ‘learning’, ‘different’, ‘tokenization’, ‘methods’, ‘,’, ‘and’, ‘ways’, ‘?’, ‘Tokenization’, ‘is’, ‘essential’, ‘in’, ‘NLP’, ‘tasks’, ‘.’]
 

Please notice that word_tokenize considered the punctuations as separate tokens. To prevent this from happening, we need to remove all the punctuations and special characters before this step itself.

# Sentence Tokenization

 

>> from nltk.tokenize import sent_tokenize

>> Mystr = “This is a tokenization tutorial. We are learning different tokenization methods, and ways? Tokenization is essential in NLP’s tasks.”
sent_tokenize(Mystr)
 

# Output:

>> [‘This is a tokenization tutorial.’, ‘We are learning different tokenization methods, and ways?’, ‘Tokenization is essential in NLP tasks.’]

- # SpaCy Tokenizers:

SpaCy is probably one of the most advanced libraries for NLP tasks. It consists of support for almost 50 languages. Therefore the first step is to download the core for English language. Next, we need to import the English module which loads the tokenizer, tagger, parser, NER and word vectors.

# Word Tokenization 

>> from spacy.lang.en import English

>> nlp = English()

>> Mystr = “This is a tokenization tutorial. We are learning different tokenization methods, and ways? Tokenization is essential in NLP’s tasks.”


>> my_doc = nlp(Mystr)

>> Tokens = []

>> for token in my_doc:

   >> Tokens.append(token.text)

>> Tokens 
 

# Output:

>> [‘This’, ‘is’, ‘a’, ‘tokenization’, ‘tutorial’, ‘.’, ‘We’, ‘are’, ‘learning’, ‘different’, ‘tokenization’, ‘methods’, ‘,’, ‘and’, ‘ways’, ‘?’, ‘Tokenization’, ‘is’, ‘essential’, ‘in’, ‘NLP’, “‘s”, ‘tasks’, ‘.’]
 
# Explanation:

Here, when we call the function nlp with MyStr passed, it creates the word tokens for it. Then we index through them and store them in a separate list.

# Sentence Tokenization

 

>> from spacy.lang.en import English

>> nlp = English()


>> sent_tokenizer = nlp.create_pipe(‘sentencizer’)


>> nlp.add_pipe(sent_tokenizer)

>> Mystr = “This is a tokenization tutorial. We are learning different tokenization methods, and ways? Tokenization is essential in NLP’s tasks.”

>> my_doc = nlp(Mystr)

>> Sents = []

>> for sent in doc.sents:


   >> Sents.append(sent.text)


>> Sents 
 

# Output:

>> [‘This is a tokenization tutorial.’, ‘We are learning different tokenization methods, and ways?’, “Tokenization is essential in NLP’s tasks.”]


# Explanation:

For sentence tokenization, call the creat_pipe method to create the sentencizer component which creates sentence tokens. We then add the pipeline to the nlp object. When we pass the text string to nlp object, it creates sentence tokens for it this time. Now they can be added to a list in the same way as in the previous example.

- # Keras Tokenization

Keras is one of the most preferred deep learning frameworks currently. Keras also offers a dedicated class for text processing tasks – keras.preprocessing.text. This class has the text_to_word_sequence function which creates word level tokens from the text. Let’s have a quick look.

 

>> from keras.preprocessing.text import text_to_word_sequence

>> Mystr = “This is a tokenization tutorial. We are learning different tokenization methods, and ways? Tokenization is essential in NLP’s tasks.”


>> Tokens = text_to_word_sequence(Mystr)


>>Tokens 
 

# Output:
>> [‘this’, ‘is’, ‘a’, ‘tokenization’, ‘tutorial’, ‘we’, ‘are’, ‘learning’, ‘different’, ‘tokenization’, ‘methods’, ‘and’, ‘ways’, ‘tokenization’, ‘is’, ‘essential’, ‘in’, “nlp’s”, ‘tasks’]

Please notice that it treated the word “NLP’s” as a single token. Plus, this keras tokenizer lowercased all the tokens which is an added bonus.

- # Gensim Tokenizer

Gensim is another popular library for handling NLP based tasks and topic modelling. The class gensim.utils offers a method tokenize, which can be used for our tokenization tasks.


# Word Tokenization

>> from gensim.utils import tokenize

>> Mystr = “This is a tokenization tutorial. We are learning different tokenization methods, and ways? Tokenization is essential in NLP’s tasks.”

>> list(tokenize(Mystr))
 

# Output:

>> [‘This’, ‘is’, ‘a’, ‘tokenization’, ‘tutorial’, ‘We’, ‘are’, ‘learning’, ‘different’, ‘tokenization’, ‘methods’, ‘and’, ‘ways’, ‘Tokenization’, ‘is’, ‘essential’, ‘in’, ‘NLP’, ‘s’, ‘tasks’]


# Sentence Tokenization

For sentence tokenization, we use the split_sentences method from the gensim.summarization.textcleaner class.

 

>> from gensim.summarization.textcleaner import split_sentences

>> Mystr = “This is a tokenization tutorial. We are learning different tokenization methods, and ways? Tokenization is essential in NLP’s tasks.”

>> Tokens = split_sentences(Mystr)


>>Tokens 
 

# Output:

>> [‘This is a tokenization tutorial.’, ‘We are learning different tokenization methods, and ways?’, “Tokenization is essential in NLP’s tasks.”]



- # Impact of Tokenization in NLP

Here, we’ll define all conventional NLP techniques where we can measure the use of tokenization conventionally. That includes

- Text Classification
- Speech Recognition
- Sentiment Analysis
- Information Retrieval
- Language Translation
- Personal (Digital) Assistants
- Chatbots

The ordinary users of the internet and smartphones use the above-discussed domains of computer science. Hence, very few of them are familiar with this advent that “Tokenization” and “NLP” are working in such applications’ backend. Tokens are fundamental elements that help in finding the patterns used in the text. We’re here just talking about the text because speech recognition systems also convert the audio into text in the backend. Moreover, tokenization also assists the famous terms of NLP that are stemming and lemmatization.

As an example of text classification, various problems include spam detection, news filtering, product analysis, stars prediction, etc. Applying deep learning algorithms like Keras and Tensorflow to get robust outcomes.


# Limitations of Tokenization:


1. In general, this task is used for text corpus written in English or French where these languages separate words by using white spaces, or punctuation marks to define the boundary of the sentences. 


2. Unfortunately, this method couldn’t be applicable for other languages like Chinese, Japanese, Korean Thai, Hindi, Urdu, Tamil, and others. This problem creates the need to develop a common tokenization tool that combines all languages.

3. Another limitation is in the tokenization of Arabic texts since Arabic has a complicated morphology as a language. For example, a single Arabic word may contain up to six different tokens like the word “عقد” (eaqad).






# **2] Lemmatization** 

- Lemmatization is the process of grouping together the different inflected forms of a word so they can be analyzed as a single item.

-  Lemmatization is similar to stemming but it brings context to the words. So it links words with similar meanings to one word. 

- Text preprocessing includes both Stemming as well as Lemmatization. Many times people find these two terms confusing. Some treat these two as the same.

- Actually, lemmatization is preferred over Stemming because lemmatization does morphological analysis of the words.


# Why Lemmatization is used?

Since Lemmatization converts words to their base form or lemma by removing affixes from the inflected words, it helps to create better NLP models like Bag of Word, TF-IDF that
depend on the frequency of the words. At the same time, it also increases computational efficiency.



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
    
    
    
    
- # NLTK Lemmatization with WordNetLemmatizer

> Wordnet is a popular lexical database of the English language that is used by NLTK internally.

> WordNetLemmatizer is an NLTK lemmatizer built using the Wordnet database and is quite widely used.

> There is, however, one catch due to which NLTK lemmatization does not work and it troubles beginners a lot.

> The NLTK lemmatizer requires POS tag information to be provided explicitly otherwise it assumes POS to be a noun by default and the lemmatization will not give the right    results.

Let us understand all this with more examples.

# Examples of NLTK Lemmatization:

Here we will show examples of lemmatization using WordNetLemmatizer without POS tags and with POS tags.

# i) WordNetLemmatizer() without POS tag

In the example below, we first tokenize the text and then lemmatizes each token in for loop by using WordNetLemmatizer.lemmatize().

However, we have used the default settings of the WordNetLemmatizer.lemmatize() and do not provide POS. Due to this, it assumes the default tag as noun ‘n’ internally and hence lemmatization does not work properly.


Clearly, lemmatization is not working when we are not passing POS tags in the NLTK lemmatizer.

Example :

 
    from nltk.stem import WordNetLemmatizer
    
    from nltk.tokenize import word_tokenize

    text = "She jumped into the river and breathed heavily"
    
    wordnet = WordNetLemmatizer()
    
    tokenizer = word_tokenize(text)

    for token in tokenizer:
    
         print(token,"--->",wordnet.lemmatize(token))
         

 
# Output:

    She ---> She
    
    jumped ---> jumped
    
    into ---> into
    
    the ---> the
    
    river ---> river
    
    and ---> and
    
    breathed ---> breathed
    
    heavily ---> heavily
    
# ii) WordNetLemmatizer() with POS tags

In the below examples, after tokenization, we have first derived the pos tags of each token and then passed both tokens and pos to WordNetLemmatizer.lemmatize().

This time we can see that lemmatization is done properly for “jumped” as “jump”, “breathed” as “breathe” and “running” as “run”.

# Example:

    from nltk.stem import WordNetLemmatizer
    
    from nltk import word_tokenize,pos_tag

    text = "She jumped into the river and breathed heavily"
    
    wordnet = WordNetLemmatizer()

    for token,tag in pos_tag(word_tokenize(text)):
    
         pos=tag[0].lower()
        
    if pos not in ['a', 'r', 'n', 'v']:
    
        pos='n'
    
    print(token,"--->",wordnet.lemmatize(token,pos))
    
# Output:

    She ---> She
    
    jumped ---> jump
    
    into ---> into
    
    the ---> the
    
    river ---> river
    
    and ---> and
    
    breathed ---> breathe
    
    heavily ---> heavily

# **Applications of lemmatization are:** 
 
1. Used in comprehensive retrieval systems like search engines.

2. Used in compact indexing.

3. Used to reduce text redundancy by converting words having the same meaning but different inflected forms to their base form.

4. The reduced word density of redundant text helps to create better NLP models that are efficient and also computationally fast.
 
 
 # Advantages of Lemmatization:
 
1. As you could probably tell by now, the obvious advantage of lemmatization is that it is more accurate.

2. So if you’re dealing with an NLP application such as a chat bot or a virtual assistant where understanding the meaning of the dialogue is crucial, lemmatization would be useful.

# Disadvantages of Lemmatization:

1. The accuracy of Lemmatization comes at a cost.

2. Because lemmatization involves deriving the meaning of a word from something like a dictionary, it’s very time consuming.
 
3. So most lemmatization algorithms are slower compared to their stemming counterparts. 

4. There is also a computation overhead for lemmatization, however, in an ML problem, computational resources are rarely a cause of concern.

# **Conclusion:**

Here, we discussed various ways to tokenize the text data based on applications. This is an essential step of the NLP pipeline, but it is necessary to have the data cleaned before proceeding to tokenization. And also we covered the NLTK tokenizer module WordNetLemmatizer and how to use it properly without running into issues of not working due to missing POS tags.


# **Summary:**

- Tokenization in NLP is the process by which a large quantity of text is divided into smaller parts called tokens.
- Natural language processing is used for building applications such as Text classification, intelligent chatbot, sentimental analysis, language translation, etc.
- Natural Language toolkit has very important module NLTK tokenize sentence which further comprises of sub-modules.
- We use the method word_tokenize() to split a sentence into words. The output of word tokenizer in NLTK can be converted to Data Frame for better text understanding in machine learning applications.
- Sub-module available for the above is sent_tokenize. Sentence tokenizer in Python NLTK is an important feature for machine training.
- Lemmatization in NLTK is the algorithmic process of finding the lemma of a word depending on its meaning and context. 
- Lemmatization usually refers to the morphological analysis of words, which aims to remove inflectional endings.
-  It helps in returning the base or dictionary form of a word known as the lemma.
















