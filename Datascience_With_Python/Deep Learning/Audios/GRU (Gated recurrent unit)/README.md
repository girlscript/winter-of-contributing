## GRU (Gated recurrent unit)
## [Click here to listen the audio](https://drive.google.com/file/d/1bU1TgD5TrVRmiz9OVFtCGL1xpqjf3FZU/view?usp=sharing)

- Gated recurrent units (GRUs) are a gating mechanism in recurrent neural networks, introduced in 2014 by Kyunghyun Cho et al.
- The GRU is like a long short-term memory (LSTM) with a forget gate, but has fewer parameters than LSTM, as it lacks an output gate.
- GRU's performance on certain tasks of polyphonic music modeling, speech signal modeling and natural language processing was found to be similar to that of LSTM.
- GRUs have been shown to exhibit better performance on certain smaller and less frequent datasets.

![image](https://user-images.githubusercontent.com/79050917/144060176-e77488af-1b89-43de-9aa3-51908a741d70.png)

**How GRU Works:**
- Now let’s see the functioning of these gates. To find the Hidden state Ht in GRU, it follows a two-step process. The first step is to generate what is known as the candidate hidden state. As shown below
- It takes in the input and the hidden state from the previous timestamp t-1 which is multiplied by the reset gate output rt. Later passed this entire information to the tanh function, the resultant value is the candidate’s hidden state.
- The most important part of this equation is how we are using the value of the reset gate to control how much influence the previous hidden state can have on the candidate state.
- If the value of rt is equal to 1 then it means the entire information from the previous hidden state Ht-1 is being considered. Likewise, if the value of rt is 0 then that means the information from the previous hidden state is completely ignored.
- Once we have the candidate state, it is used to generate the current hidden state Ht. It is where the Update gate comes into the picture. Now, this is a very interesting equation, instead of using a separate gate like in LSTM in GRU we use a single update gate to control both the historical information which is Ht-1 as well as the new information which comes from the candidate state.
- Now assume the value of ut is around 0 then the first term in the equation will vanish which means the new hidden state will not have much information from the previous hidden state. On the other hand, the second part becomes almost one that essentially means the hidden state at the current timestamp will consist of the information from the candidate state only.
- Similarly, if the value of ut is on the second term will become entirely 0 and the current hidden state will entirely depend on the first term i.e the information from the hidden state at the previous timestamp t-1.
- Hence we can conclude that the value of ut is very critical in this equation and it can range from 0 to 1.

![image](https://user-images.githubusercontent.com/79050917/144060305-1cd4111a-fb59-4ec1-b4e6-c577ede3cb65.png)

**Overview:**
- So just to summarize, Let’s see how different GRU is from LSTM.
- LSTM has three gates on the other hand GRU has only two gates. In LSTM they are the Input gate, Forget gate, and Output gate. Whereas in GRU we have a Reset gate and Update gate.
- In LSTM we have two states Cell state or Long term memory and Hidden state also known as Short term memory. In the case of GRU, there is only one state i.e Hidden state (Ht).
