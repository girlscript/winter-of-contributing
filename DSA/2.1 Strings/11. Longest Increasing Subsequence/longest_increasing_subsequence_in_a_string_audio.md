# Q. Explain and implement Length of longest increasing subsequence in a string.

## LINK FOR THE AUDIO PRESENTATION FOR ABOVE MENTIONED QUESTIONS:

[ https://drive.google.com/file/d/1d3zA90DrD7l2cvIAkp_trlWk-_RUs5eC/view?usp=sharing ]

# Brief summary on the audio clip :

It contains what is an increasing subsequence , a recursive approach for this question then how to approach an optimised dynamic programming algorithm for this with will give us linear time complexity.

# Concludingly :

    A subsequence is any sequence of an array which need not be continuous but the order of elements in the array remain same. Here we have to find the largest subsequence possible where characters are in increasing order.

    # RECURSIVE APPROACH :
       Consider each index and find the length of subsequence possible with it keeping in mind our needs . The maximum among all will be our answer but this approach would give us an exponential time complexity as each element has a chance to be counted or not.
    # DYNAMIC PROGRAMMING APPROACH:
       Here we will store the length possible considering each index so we need not to calculate for every index again and again we can the value from our stored array.
       ** TIME COMPLEXITY : O(N) where n is the length of input string .**
       ** SPACE COMPLEXITY : O(1) Since we need to store atmax 26 characters of english alphabet so we will create a constant space array to store our dp states . **
