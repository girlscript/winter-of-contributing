# Detecting Depression using Machine Learning Algorithms

## AUDIO LINK : [Detecting Depression](https://drive.google.com/file/d/1MdLyjevIaKs3Pk1fhUExCW8umxD4MIIA/view?usp=sharing)

### Introduction

What is Depression?

Depression is a state of consciousness where people usually face mental issues retaled to general life problems. Such as mental breakdown, loss of something important, numbness in emotion. They are easily irritated by something which offends them. Depression (major depressive disorder) is a common and serious medical illness that negatively affects how you feel, the way you think and how you act. Fortunately, it is also treatable. Depression causes feelings of sadness and/or a loss of interest in activities you once enjoyed. It can lead to a variety of emotional and physical problems and can decrease your ability to function at work and at home.

Depression is common among living beings and every person at some point of time face it. 

### Symptoms

Depression symptoms can vary from mild to severe and can include:

- Feeling sad or having a depressed mood
- Loss of interest or pleasure in activities once enjoyed
- Changes in appetite — weight loss or gain unrelated to dieting
- Trouble sleeping or sleeping too much
- Loss of energy or increased fatigue
-Increase in purposeless physical activity (e.g., inability to sit still, pacing, handwringing) or slowed movements or speech (these actions must be severe enough to be observable by others)
- Feeling worthless or guilty
- Difficulty thinking, concentrating or making decisions
- Thoughts of death or suicide

### Ways to handle depression 

This is an important section and I have used my time to write it especially for viewers here.<br>

Different ways to handle stress and depression -

1. Depression is a state of mind when we underestimate ourselves and is result of overthinking, to get rid of this always have a goal to motivate yourself and work harder and smarter to achieve it. <br>
2. Whenever you feel too stressed or depressed take a break, small walk, interact with your friends and family members. If you are comfortable then discuss your thoughts and problems with them. <br>
3. You still have to look forward in future. So, stay motivated and appreciate the things or people you have. Be Bold and Strong to deal under any circumstances.

Some useful medical treatment can also be provided to improve the situation :-

- Medication
- Psychotherapy
- Electroconvulsive Therapy (ECT)

### Approach

Here, we are going to use different libraries to extract and analyse data from different social media sites such as twitter, facebook, whatsapp, etc. Then we will find words which are oftenly used to show emotions.<br>
After that, we will label them as good or bad based on the frequency of the word using wordclouds.

![images (1)](https://user-images.githubusercontent.com/75624735/138996108-1357052c-7bf1-4c97-ad84-50b9fc18e487.png)

### ML Libraries involved

- NLTK: Natural Language Toolkit. It is a suite that contains libraries and programs for statistical language processing. It is one of the most powerful NLP libraries, which contains packages to make machines understand human language and reply to it with an appropriate response. It provides easy-to-use interfaces to over 50 corpora and lexical resources such as WordNet, along with a suite of text processing libraries for classification, tokenization, stemming, tagging, parsing, and semantic reasoning<br>
__Installation:__ `pip install nltk`

![image](https://user-images.githubusercontent.com/75624735/139830414-d51f7fb7-e250-410d-8b23-1985f20ad478.png)

- WordCloud: Many times you might have seen a cloud filled with lots of words in different sizes, which represent the frequency or the importance of each word. This is called the Tag Cloud or WordCloud. Word Cloud is a data visualization technique used for representing text data in which the size of each word indicates its frequency or importance. Significant textual data points can be highlighted using a word cloud. Word clouds are widely used for analyzing data from social network websites.<br>
__Installation:__ `pip install wordcloud`

![eichstaedt-johannes-PNAS-Facebook-depression](https://user-images.githubusercontent.com/75624735/138894038-326c99d8-cc2f-4088-80e9-6e2026d53d1a.png)


### Loading Dataset & Dropping Extra Columns

![image](https://user-images.githubusercontent.com/75624735/139836457-ec3f387d-d9fa-4c69-b16a-1fc55a2cfb73.png)

### Visualizing the Data

![image](https://user-images.githubusercontent.com/75624735/139836759-1b0b2ec4-b85b-4862-ac80-ce8896d3dfbc.png)

### Importing NLTK & Wordnet

![image](https://user-images.githubusercontent.com/75624735/139855396-36df63b9-57c6-4a1d-8c28-95a73a5765a8.png)

### Words Initialization

http://localhost:8888/notebooks/Depression%20Detection.ipynb
