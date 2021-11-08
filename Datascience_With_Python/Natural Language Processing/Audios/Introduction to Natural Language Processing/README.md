# Introduction to Natural Language Processing (NLP)

## [Click here to listen to the audio](https://drive.google.com/file/d/1WDiQehSdyk6PeZZt1X1sPpYIiXapjFGs/view?usp=sharing)

### What is Natural Language Processing (NLP)?

Natural Language Processing (NLP) is the branch of Data Science which is basically a process of teaching the machines to understand and learn from human languages and text. NLP (natural language processing) is an interdisciplinary field dealing with the interactions between computers and natural human languages (e.g., English) – either speech or text. NLP-enabled software assists us in a variety of ways in our daily lives. It contains several different methods and processes which are used to analyze, understand and utilize the text data for solving business needs.

### Need of NLP

There is a lot of natural language data out there in many forms, and understanding and processing that data would be a lot easier if computers could understand and analyse it. We can train the models in a variety of methods to match predicted results. Humans have been writing for thousands of years, and there is a vast amount of literature available, and it would be fantastic if computers could comprehend this. However, in order for the computer to comprehend this, we must first teach it the fundamentals of written language. A computer&#39;s ability to extract the precise meaning of a sentence is extremely tough.

In Machine Learning, solving a difficult problem requires the building of a pipeline. Simply said, it requires breaking down a large problem into a series of smaller problems, creating models for each, and then integrating the models. In NLP, something similar is done. The process of learning English for a model can be broken down into several simple steps.

## Steps - _text preprocessing_

Let&#39;s begin by putting together an NLP pipeline. It consists of several processes that, when completed, will provide us with the necessary outcome.

### Tokenization

Tokenization is the process of separating a written document into tokens, which can be individual words, numbers, symbols, characters and ngrams (combination of n words or characters together). We can tokenize them anytime we come across a space and use them to train a model. Punctuation is treated as a separate token since it has meaning. Most commonly used tokenization is White Space Tokenization or Unigram Tokenization. In this process the entire text is splitted into words splitting them from white spaces. Another type of tokenization is Regular expression tokenization which is used when different expressions like symbols and characters are present in the text.

Natural language toolkit(NLTK) is a popular open source python library used extensively for NLP tasks. Using the NLTK function we can tokenize a sentence easily.

### Normalization

Normalization is a process of converting a token into its base form which is known as morpheme. A structure of a word consists mainly of three parts: prefix, morpheme and suffix.

In the normalization process the inflectional form of the word is removed so that the normalized form of the word is obtained. It helps in data cleaning and data dimensionality.

2 popular methods used for normalization are: Stemming and Lemmatization

### Stemming

It is an elementary rule based for removing the inflectional form of tokens. The practise of reducing a word to its stem/root word is known as stemming. It lowers inflection in words (e.g.,take play as the root word:&#39; &#39;playing,&#39;played,&#39;playful&#39;&#39;). It strips words of their morphological affixes, leaving only the word stem. But this method is not much useful as it can create some non-meaningful terms (e.g. winning, &#39;winn&#39;, his,&#39;hi&#39;)

### Lemmatization

Lemmatization is a systemic process of converting the token to its lemma. Lemmatization is similar to stemming in that it converts a word to its root form, but the root word in this case belongs to a valid term in the language. In the case of stemming, the word caring would translate to &#39;care&#39; rather than &#39;car.&#39; Lemmatization uses vocabulary, word structure and grammar relations. (e.g. am, are, is can be converted into be)

WordNet is an English-language database of valid words. As we are using NLTK the WordNetLemmatizer() in NLTK uses genuine WordNet words.

### Part of Speech Tagging

Part of Speech (POS) Tagging defines the syntactic context and role of the word in the sentence. POS tags are used in identifying whether a word is a noun, verb, adjective, adverb, pronoun, or another type of word. This will make it easier to comprehend what the statement is about. This is accomplished by passing the tokens (together with the surrounding words) to a pre-trained part-of-speech categorization model. This model was fed a large number of English words with various parts of speech associated with them in order to classify similar words it encounters in the future. Again, the models don&#39;t understand the sense of the words; instead, they classify them based on their prior experience. It&#39;s all about the data.

POS tags are used in text cleaning, feature engineering tasks, word sense disambiguation.

### Dependency Parsing

This means identifying the relationship between the sentences&#39; words and how they are related to one another. In dependency parsing, we create a parse tree with root as the main verb in the phrase. If we consider the first sentence in our example, the main verb is &#39;is,&#39; and the root of the parse tree is &#39;is.&#39; Every phrase has one root word (primary verb) that can be used to build a parse tree. We can also determine the nature of the relationship between the two words. (e.g. &quot;Azure is a Microsoft product&quot;, in this sentence the root word is product.

### Stop words removal

Stop words are popular terms that don&#39;t add much to a text document&#39;s information. Words like &quot;the,&quot; &quot;is,&quot; and &quot;a&quot; have little meaning and add noise to the text data. They will be filtered out during statistical analysis. They are undoubtedly required to comprehend the interdependence of numerous tokens in order to grasp the whole meaning of the sentence.

NLTK has a predefined list of stop words. We can add or remove stopwords from this list or use as it is based on the specific task.

### Named Entity Recognition(NER)

The most crucial portions in a sentence are entities, which can be noun phrases, verb phrases, or both. Named entity recognition is a natural language processing technology that can automatically scan full articles and extract and classify some fundamental elements in the text. In simple terms, it is the process of extracting named entities from text, such as person names, place names, corporate names, and so on. We can extract vital information to interpret the text using named entity recognition, or we can just use it to extract important information to record in a database. The following three blocks make up a typical NER model: Noun Phrase Identification, Phrase Classification, Entity Disambiguation. (e.g. Elon Musk is the CEO of US company Tesla. Here the NER recognizes Elon Musk as a person, US as location and Tesla as company/organization.)

## Steps - _text vectorization_

Text data vectorization is the process of translating text to numbers. Following text preparation, we must numerically represent text data, i.e., encode the data in numbers that algorithms can use.

### Bag of words(BOW):

It&#39;s one of the most basic text vectorization methods. BOW is based on the idea that two sentences are comparable if they include a similar group of words.

(e.g.first sentence: This is my playground.

Second sentence: I am playing in the playground.)

Each text sentence is referred to as a document in NLP tasks, and a collection of similar documents is referred to as a text corpus.

BOW creates a corpus dictionary of d unique words (collection of all the tokens in data).

### TF-IDF (Term Frequency(TF)-Inverse Document Frequency(IDF).)

Term Frequency(TF)-Inverse Document Frequency is what it stands for.

Term Frequency (TF)

The likelihood of discovering a word in a document is defined by Term Frequency.

To find what is the probability of finding a word wi in document dj:

Term Frequency(wi, dj) = Number of times wi occurs in dj/Total number of words in dj

Inverse Document Frequency (IDF)

The idea behind IDF is that a term isn&#39;t really useful if it appears in every document. It specifies how unique a term is in the corpus as a whole.

IDF(wi, Dc) = log(N/ni)

Here, Dc is the total number of documents in the corpus, N is the total number of documents, and ni is the number of documents that include the term (wi).

The IDF value drops as the frequency of wi increases in the corpus.

If wi is not common, ni drops, and so the IDF value rises.

TF(wi, dj) \* IDF(wi, Dc)

The multiplication of TF and IDF values is known as TF-IDF. It provides higher weight to words that appear more frequently in the document and less frequently in the corpus.

###


### Applications of NLP are:

- Machine translation(Google Translate)
- Natural language generation
- Web Search(Google)
- Spam filters(Gmail)
- Sentiment Analysis(IMDb)
- Chatbots
- Personal assistants(Siri, Cortana, and Google Assistant)
