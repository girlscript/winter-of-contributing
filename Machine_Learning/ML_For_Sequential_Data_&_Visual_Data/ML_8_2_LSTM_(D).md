## Title : Bidirectional LSTM
🔴 **Type of Content** : Documentation

🔴 **Domain** : Machine Learning

🔴 **Module** : ML_For_Sequential_Data_&_Visual_Data


*********************************************************************
<p> LSTM stands for Long Short-Term Memory. Bidirectional LSTM are an extension of traitional LSTM's that can improve the model performance on a sequence classification problems.A Bidirectional LSTM network connects two hidden layers of the opposite direction to the same output.They were invented by S. Hochreiter and J. Schmidhuber.</p><br>



<img  align="center" src="https://d1zx6djv3kb1v7.cloudfront.net/wp-content/media/2019/05/Deep-Dive-into-Bidirectional-LSTM-i2tutorials.jpg">



<p> With this form generative deep learning the output layer can get information for the past and future states simultaneously.</p><br><br>

<img src="https://devopedia.org/images/article/239/4042.1573878628.png">


<br><p>Here, rather than encoding the sequence in the forward direction only, we encode it in the backward direction as well and concatenate the results from both the forward and backward LSTM at each timestamp. The encoded representation of each word now understands the words before and after that specific word.</p>


## Bidirectional LSTM VS Unidirectional LSTM:

<br>
<p> LSTM in its core, preserves information from inputs that has already passed through it using the hidden state.

Unidirectional LSTM only preserves information of the past because the only inputs it has seen are from the past.

Using bidirectional will run your inputs in two ways, one from past to future and one from future to past and what differs this approach from unidirectional is that in the LSTM that runs backwards you preserve information from the future and using the two hidden states combined you are able in any point in time to preserve information from both past and future.

What they are suited for is a very complicated question but Bi LSTM's show very good results as they can understand the context better.</p><br>

## Most Popular applications of Bidirectional LSTM's:

<li> Speech composition
<li> non-Markovian control
<li> Music Composition

## Drawbacks of Bidirectional LSTM:

They can only be used for encoding a sequence. Ie. we can use it only during the model training time. We can not use it during the prediction time or the testing time because at that time we do not have the available words to use the backward LSTM.


## How many gates are there in a Bi-directional LSTM?
 There are 3 gates:
1. Input gate
2. Output gate
3. Forget gate

## Resources:
1. https://www.pluralsight.com/guides/introduction-to-lstm-units-in-rnn
2. https://www.machinecurve.com/index.php/2021/01/11/bidirectional-lstms-with-tensorflow-and-keras/



### GirlScript Winter of Contributions 2021