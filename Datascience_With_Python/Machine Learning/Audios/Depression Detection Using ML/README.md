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

Here, we are going to use different libraries to extract and analyse data from different social media sites such as twitter, facebook, whatsapp, etc. Then we will find words which are oftenly used to show emotions. We are going to perform this task using NLTK library. Assign weights to words based on their effectiveness. Get the approx frequency based of the word using wordclouds. <br>
After extracting features, we will perform sampling and then apply Logistic Regresssion Algorithm and MultinomialNB . After preprocessing, we will label output as Depressive or Non Depressive. 

Below is an example where count of tweets per person is given for depressed and non-depressed responses.  
![images (1)](https://user-images.githubusercontent.com/75624735/138996108-1357052c-7bf1-4c97-ad84-50b9fc18e487.png)

### Use Of Depression Detection Algorithms

Depression has a way of silencing its sufferers. Even in today's technology-connected society, people are hesitant to talk about their painful experiences and suffering for fear of being stigmatized. In such cases, Depression Detecting Algorithms perform and provide great results. Internet access and social media usage have increased significantly, providing experts and patients with a means of communication that may contribute to the development of methods to detect mental health issues among social media users. The evaluation follows a time-aware approach that rewards early detections and penalizes late detections. The results show how a dual model performs significantly better than the singleton model and is able to improve current state-of-the-art detection models by more than 10%. Apps like Instagram has become a haven for people making sensitive self-disclosures.

### ML Libraries involved

- NLTK: Natural Language Toolkit. It is a suite that contains libraries and programs for statistical language processing. It is one of the most powerful NLP libraries, which contains packages to make machines understand human language and reply to it with an appropriate response. It provides easy-to-use interfaces to over 50 corpora and lexical resources such as WordNet, along with a suite of text processing libraries for classification, tokenization, stemming, tagging, parsing, and semantic reasoning<br>
__Installation:__ `pip install nltk`

Below, Image represents the step-by-step approach of Natural Language Toolkit (NLTK) which is performed on raw text. 
![image](https://user-images.githubusercontent.com/75624735/139830414-d51f7fb7-e250-410d-8b23-1985f20ad478.png)

- WordCloud: Many times you might have seen a cloud filled with lots of words in different sizes, which represent the frequency or the importance of each word. This is called the Tag Cloud or WordCloud. Word Cloud is a data visualization technique used for representing text data in which the size of each word indicates its frequency or importance. Significant textual data points can be highlighted using a word cloud. Word clouds are widely used for analyzing data from social network websites.<br>
__Installation:__ `pip install wordcloud`

Different wordclouds representing frequency of words in each cloud.
![Wordclouds](https://user-images.githubusercontent.com/75624735/138894038-326c99d8-cc2f-4088-80e9-6e2026d53d1a.png)

### Implementation

Now, we will use different Python libraries to retrieve and analyse our dataset in proper format using Regex library. After this, we will visualise our Dataset. We will now use different libraries to train and implement our model. For implementation, we can create an app using flask, HTML. Every time any statement is provided it will predict whether the statement is depressive or not. Thereby, using this app to predict on different social media platform will be quite beneficial too.

Here's an Implementation using Google Colaboratory below :-
https://colab.research.google.com/drive/1oxaTauml5H1681kwTvNIu5SwG_PPy2c_?usp=sharing

__Dataset__ : [depression_data.csv](https://github.com/kishlayaug15/winter-of-contributing/files/7497289/depression_data.csv)


### Summary

Overall, we can summarize that here I have explained about depression, its causes and ways to handle it. I have also discussed our approach, use of depression detecting algorithms in improving our life and helping the needy ones before they face depression related issues with help of there social media account. Different ML libraries involved and there application in training our model. Finally, I have discussed about implementing the algorithms in brief. As an app it will form an attractive interface which will take different inputs and will correctly predict mental state.

### Conclusion

Hereby, I conclude that it's an end to end project which shows whether a person is depressed or not. If the result is 1 that means you are depressed and if the result is 0 that means you are not depressed. It has a Test section that can be used to self evaluate yourself whether you are depressed or not.
