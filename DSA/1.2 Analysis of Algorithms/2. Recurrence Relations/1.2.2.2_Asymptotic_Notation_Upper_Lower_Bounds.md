# Asymptotic  Notation

### Definition Of Asymptotic  Notation
> Asymptotic  Notation in simple may be defined as *"mathematical tools to represent the time complexity of algorithms for asymptotic analysis"*. 


### Use of Asymptotic  Notation

> Asymptotic Notation is used to describe the running time of an algorithm - how much time an algorithm takes with a given input, n. 



### Why do we need to analyse an algorithm?

> There are many things which are taken in consideration while designing an algorithm. A good algorithm must possess user friendliness, modularity, security, maintainability, etc. But *why do we need to worry about performance?* The answer is very simple, if we are comparing any two things, then we would surely prefer performance. A good algorithm not only increases performance but also decreases space required so that it is a win-win offer for us.
> For Example:- Let's say we have to find meaning of a word from a dictionary, so we if we take two methods of finding them, first by traversing all the dictionary or second find the meaning in the same section of alphabet by it starts. Ofcourse, the second condition is easier, and we can proceed more easily that way. This method increases our performance.



### Why it is named as Asymptotic  Notation?
> When doing any complexity analysis we always try to find a fuction g(n) from our given function f(n), which approximates f(n) at higher values of n. That means g(n) is also a curve which approximates f(n) at higher values of n. In mathematics, we call such a curve an *Asymptotic  curve*. And because of that we call it Asymptotic  Notation.




### Benefits of using Asymptotic  Notation

> Using Asympropic Notation, we represent the upper bound or lower bound of run-time in mathematical equations and thus help us perform our task with the best efficiency and fewer efforts.

****



**Now there arises a question, *What are upper and lower bound?***



## Upper Bound
> Upper bound is used to calculate the maximum amount of time, memory, bandwidth, or something else while running a program or solving a problem. It is denoted by O.
> Proving an upper bound means you have proven that the algorithm will use no more than some limit on a resource.



## Lower Bound
> Upper bound is used to calculate the minimum amount of time, memory, bandwidth, or something else while running a program or solving a problem. It is denoted by Ω.
> Proving an upper bound means you have proven that the algorithm will use no less than some limit on a resource.



### Usage of upper and lower bound
> Let us understand this by an example. The very simple example of it could be bubble sort, the easiest sorting algo. If you don't know what it is, then expand the below region...
<details>
  <summary>What is Bubble Sort?</summary>
  
  ### Bubble Sort
  > For every element of arr[], we check if arr[i]>arr[i+1], then we swap them. Bt this method, we are putting the largest element at last. We can improve the best case by maintaining a flag that will return 0, if arr[] is already sorted. Pseudo code for it would be.
  ```
  void bubbleSort(int arr[], int n){
    int pass,i,temp;
    bool swapped=1;
    for(pass>=n-1; pass>=0 && swapped; pass--){
        if(arr[i]>arr[i+1]){
          swap(arr[i],arr[i+1]);
          swapped=1;
        }
    } 
  }

   ```

</details>

> In a particularly bad case where the data are sorted in the opposite to the order you want, the time taken becomes f(n^2). Thus, the time complexity at this case would be O(n^2), which signifies upper bound concept. But if the data is already sorted, then it will only take O(n) time which signifies lower bound concept.

> In that case, the upper and lower bounds are different, even though the big-O complexity remains the same.

> As an aside, the bubble sort is much aligned (usually for good reasons) but it can make sense in certain circumstances. Bubble sort might be used for adding one item, and with a reverse-directional bubble sort, you can guarantee the new list will be sorted in one pass. That illustrates the lower bound concept.
