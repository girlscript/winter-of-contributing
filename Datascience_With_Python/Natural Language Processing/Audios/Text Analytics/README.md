# Audio Link : [Text Analytics](https://drive.google.com/file/d/1GhWcqX9-S8EEEKaujHooWAxB3Hv0zClE/view?usp=sharing)

---
# TEXT ANALYTICS
- Text analytics is the process of extracting information and uncovering actionable insights from unstructured text.
- Text analytics allows data scientists and analysts to evaluate content to determine its relevancy to a specific topic. 
- Researchers mine and analyze text by leveraging sophisticated software developed by computer scientists.
- Text Analytics is also known as text mining or text data mining.

---
# <B></B>TEXT ANALYTICS PROCESS
1. Data Gathering
2. Data Preparation
3. Data Analysis
4. Data Visualization

---
## <B>1. DATA GATHERING</B>
---

<p>Text analytics begins with collecting the text to be analyzed -- defining, selecting, acquiring, and storing raw data.<br> 
This data can include text documents, web pages (blogs, news, etc.), and online reviews, among other sources. <br>
Data sources can be internal or external to an organization.<br></p>

- <B>Internal Data</B> - This is the data you generate every day, from emails and chats, to surveys, customer queries, and customer support tickets. You just need to export it from your software or platform as a CSV or Excel file, or connect an API to retrieve it directly.
- <B>External Data</B> - This is text data about your brand or products from all over the web. You can use web scraping tools, APIs, and open datasets to collect external data from social media, news reports, online reviews, forums, and more, and analyze it with machine learning models.

---
## <B>2. DATA PREPARATION</B>
---

<p>Once data is acquired, the enterprise must prepare it for analysis. The data must be in the proper form to work with machine learning models that will be used for data analysis. <br>
Stages in data preparation are :<br></p>

- Text Cleansing
- Tokenization
- Part-of-Speech Tagging
- Parsing
- Stemming and lemmatization 
- Stop word removal

### <B>TEXT CLEANSING :</B>
<p>It removes any unnecessary or unwanted information, such as ads from web pages. Text data is restructured to ensure data can be read the same way across the system and to improve data integrity (also known as "text normalization").</p>

### <B>TOKENIZATION :</B>
<p>It breaks up a sequence of strings into pieces (such as words, keywords, phrases, symbols, and other elements) called tokens. Semantically meaningful pieces (such as words) will be used for analysis.</p>

### <B>PART-OF-SPEECH TAGGING :</B>
<p>It assigns a grammatical category to the identified tokens.</p>

### <B>PARSING :</B>
<p>It creates syntactic structures from the text based on the tokens and PoS models. Parsing algorithms consider the text's grammar for syntactic structuring. Sentences with the same meaning but different grammatical structures will result in different syntactic structures.</p>

### <B>STEMMING AND LEMMATIZATION :</B>
<p>It standardizes words by reducing them to their root forms.</p>

### <B>STOP WORD REMOVAL :</B>
<p>It filters out common words that add little or no unique information, for example, prepositions and articles (at, to, a, the).</p>

---
## <B>3. DATA ANALYSIS</B>
---

<p>Data analysis is the process of analyzing the prepared text data.<br>
Text Analysis Methods & Techniques :<br></p>

- Text Classification
- Text Extraction
- Word Frequency
- Collocation
- Concordance
- Word Sense Disambiguation
- Clustering

### <B>TEXT CLASSIFICATION :</B>
<p>Text classification is the process of assigning predefined tags or categories to unstructured text.<br>
It's considered one of the most useful natural language processing techniques because it's so versatile and can organize, structure, and categorize pretty much any form of text to deliver meaningful data and solve problems.<br>
The most common text classification tasks include :<br></p>

- <B>Sentiment analysis</B> - It uses powerful machine learning algorithms to automatically read and classify for opinion polarity (positive, negative, neutral) and beyond, into the feelings and emotions of the writer, even context and sarcasm.
- <B>Topic modeling</B> - It automatically organizes text by subject or theme.
- <B>Intent detection</B> - It is often used to automatically understand the reason behind a particular feedback.
<p>There are two main algorithms that can be used to solve Text Classification problems:</p>

- <B>Rule-based Systems</B> - It rely on hand-crafted grammatical rules that need to be created by experts in linguistics, or knowledge engineers.
- <B>Machine learning algorithms</B> - Machine learning models, on the other hand, are based on statistical methods and learn to perform tasks after being fed examples (training data). The most frequently used ml algorithms are :<br>
<B>Naive Bayes (NB) family of algorithms<br>
Support Vector Machines (SVM)<br>
Deep learning algorithms<br></B>

### <B>TEXT EXTRACTION :</B>
<p>Text extraction extracts pieces of data that already exist within any given text.<br>
You can extract things like keywords, prices, company names, and product specifications from news reports, product reviews, and more.<br>
You can automatically populate spreadsheets with this data or perform extraction in concert with other text analysis techniques to categorize and extract data at the same time.<br>
The most common text extraction tasks include :<br></p>

- <B>Keyword extraction</B> – It can be used to index data to be searched and to generate word clouds (a visual representation of text data).
- <B>Entity Recognition</B> - A named entity recognition (NER) extractor finds entities, which can be people, companies, or locations and exist within text data.

### <B>WORD FREQUENCY :</B>
<p>Word frequency is a text analysis technique that measures the most frequently occurring words or concepts in a given text using the numerical statistic TF-IDF (term frequency-inverse document frequency).<br>
You might apply this technique to analyze the words or expressions customers use most frequently in support conversations.<br></p>

### <B>COLLOCATION :</B>
<p>Collocation helps identify words that commonly co-occur.<br>
Collocation can be helpful to identify hidden semantic structures and improve the granularity of the insights by counting bigrams (two adjacent words) and trigrams (three adjacent words) as one word.<br></p>

### <B>CONCORDANCE :</B>
<p>Concordance helps identify the context and instances of words or a set of words.<br>
It can also be used to decode the ambiguity of the human language to a certain extent, by looking at how words are used in different contexts, as well as being able to analyze more complex phrases.<br></p>

### <B>WORD SENSE DISAMBIGUATION :</B>
<p>It's very common for a word to have more than one meaning, which is why word sense disambiguation is a major challenge of natural language processing.<br>
Smart text analysis with word sense disambiguation can differentiate words that have more than one meaning, but only after training models to do so.<br></p>

### <B>CLUSTERING :</B>
<p>Text clusters are able to understand and group vast quantities of unstructured data. <br>
This is known as unsupervised machine learning.<br>
Google is a great example of how clustering works.<br>
Google's algorithm breaks down unstructured data from web pages and groups pages into clusters around a set of similar words.
So, the pages from the cluster that contain a higher count of words relevant to the search query will appear first within the results.<br></p>

---
## <B>4. DATA VISUALIZATION</B>
---

<p>Visualization is the process of transforming analysis into actionable insights, representing the data in graphs, tables, and other easy-to-understand representations.<br>
Data visualization boosts the value of the text mining results by transforming complex concepts into compelling and easily-to-understand visuals.<br>
Some data visualization tools are:<br></p>

- Tableau
- Looker
- Google Data Studio
- MonkeyLearn Studio

---
# APPLICATIONS OF TEXT ANALYTICS
- Social Media Monitoring
- Brand Monitoring
- Customer Service
- Voice of Customer (VoC) & Customer Feedback
- Business Intelligence
- Sales and Marketing
- Product Analytics

---
# ADVANTAGES OF TEXT ANALYSIS
- Helps identify the root of a problem (or source of satisfaction).
- Enables emerging trends to surface, that many feedback surveys limit or restrict.
- Issues can be prioritized quickly and efficiently.
- Customers’ ideas and suggestions materialize, leading to an enhanced digital experience.

---
# TEXT ANALYSIS TOOLS
### <B>Open Source Libraries :</B>
- NLTK
- SpaCy
- Scikit-learn
- TensorFlow
- PyTorch
- Keras
- CoreNLP
- OpenNLP
### <B>SaaS APIs :</B>
- MonkeyLearn
- Google Cloud NLP
- IBM Watson
- Lexalytics
- MeaningCloud
- Amazon Comprehend
- Aylien
- Clarabridge

---
# RESOURCES
- https://monkeylearn.com/text-analysis/
- https://tdwi.org/articles/2019/06/03/adv-all-introduction-to-using-text-analytics-and-nlp.aspx
- https://www.lexalytics.com/lexablog/text-analytics-functions-explained
- https://mopinion.com/what-is-text-analytics-benefits/
- https://www.geeksforgeeks.org/text-mining-in-data-mining/
- https://www.datacamp.com/community/tutorials/text-analytics-beginners-nltk

---
## <CENTER>THANK YOU</CENTER>