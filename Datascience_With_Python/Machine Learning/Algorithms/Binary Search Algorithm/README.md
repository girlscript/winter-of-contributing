# Data Science with Python : Binary search algorithm #4374

Searching is a process of finding a particular value in a given list of values. Binary Search Algorithm is a technique in which we search for an element( we generally address it as a "key") in a sorted array by dividing the interval in two halves recursivly.That means it follows divide and conquer method. As mentioned earlier, this algorithm can be performed only on a sorted array.

## Steps of Binary Search Algorithm :

### Iterative approach :

Step 1:    middle_index = (begin + end)/2

Step 2:
    if (item == arr[middle_index] ) ,  return middle_index
        
Step 3:
    else if (item < arr[middle_index] ) ,  end = middle_index - 1
    
else    begin = middle_index + 1

run this loop until begin is not equal to end


### Recursive approach :

Step 1:    if begin <= end
middle_index = (begin + end) / 2 
        
Step 2:    if item == arr[middle_index]

return middle_index

else if item > arr[middle_index]

return RecursiveBinarySearch(arr, item, middle_index + 1, end)

else

return RecursiveBinarySearch(arr, item, begin, middle_index - 1)
## Performance :

#### Time Complexity :

In the binary search algorithm, we divide the sorted array by half at every iteration. if n is the size of the array, then the recurrence relations for binary search algorithm -->

T(n) = c             , if n == 1

T(n) = T(n/2) + c    , if n > 1

solving this we get, the time complexity for binary search algorithm is O(log(n)).




#### Space Complexity :


Iterative method: O(1).

Recursive method: O(log n).

## Library used for demonstration of process :

To get the middle index we have to use the floor function. For this we will import floor from math library.

## Advantages of Binary Search Algorithm :

1. Binary search algorithm performs searching to the half of the list ,so it takes less time than other linear time search algorithms.

2. Searching for an element in a large array or large list, binary search algorithm is efficient .

3. Good for balanced trees.

## Disadvantages of Binary Search Algorithm :

1. The algorithm can be applied only if the array or list is sorted.
2. Recursive calls may take more time in case of smaller datasets.
3. Binary search algorithm is more complicated than other linear search algorithm.

## Applications of Binary Search Algorithm :

1. Suppose, I want to go to page number 674 of a book. It's obvious that I will not visit every page from 1 to 674. Rather I will open a random page and check if it is greater or less than 674. If greater then we will go to left, and right otherwise. I will repeat this steps till I find 674.

2. When we search for the meaning of a word in any dictionary , we don't go through all the words and then check. We simply open a page randomly, pick a word and then compare if it is alphabetically smaller or greater than our word. If greater we can ignore tha pages on the right side. In this way we can save our time.



Binary search is one the most used and most popular searching techniques. In the binary search algorithm, we divide the sorted array by half at every iteration and then perform search, so this algorithim is also known as half search method or binary chop. This algorithm is called logarithmic chop,as it has logarithmic time complexity.

## References :

1. [Binary Search Algorithm](https://en.wikipedia.org/wiki/Binary_search_algorithm#:~:text=Visualization%20of%20the%20binary%20search%20algorithm%20where%20...,%20O%20%281%29%20%203%20more%20rows%20)

2. [what is Binary Search](https://www.mygreatlearning.com/blog/binary-search-algorithm/#What%20is%20Binary%20Search?)
