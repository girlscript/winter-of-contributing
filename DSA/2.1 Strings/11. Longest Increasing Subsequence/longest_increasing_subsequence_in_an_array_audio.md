# Q. Explain and implement Length of longest increasing subsequence in a array.

## LINK FOR THE AUDIO PRESENTATION FOR ABOVE MENTIONED QUESTIONS:

[ https://drive.google.com/file/d/1hW1908_he00itQ6TRof_1FxmmYUv8Zo7/view?usp=sharing ]

# Brief summary on the audio clip :

It contains what is an increasing subsequence , a recursive approach for this question then how to approach an optimised dynamic programming algorithm for this as well further optimization using binary search.

# Concludingly :

    A subsequence is any sequence of an array which need not be continuous but the order of elements in the array remain same. Here we have to find the largest subsequence possible where elements are in increasing order.

    # RECURSIVE APPROACH :
       Consider each index and find the length of subsequence possible with it keeping in mind our needs . The maximum among all will be our answer but this approach would give us an exponential time complexity as each element has a chance to be counted or not.
    # DYNAMIC PROGRAMMING APPROACH:
       Here we will store the length possible considering each index as the last element so we need not to calculate for every index again and again we can use the value from our stored dp array.
       ** TIME COMPLEXITY : O(N^2) where N is the length of input array.**
       ** SPACE COMPLEXITY : O(N) where N is the length of input array .Since we need to store the dp states for every index . **
    #BINARY SEARCH APPROACH:
       It is an optimization over dp approach where instead of the inner loop iterating over the length,we would use binary search to find the index which stores the value lesser than current.
       ** TIME COMPLEXITY : O(NlogN) where N is the length of input array.**
       ** SPACE COMPLEXITY : O(N) where N is the length of maximum answer possible Since we need to store our current possible answer over which binary search is done . **
