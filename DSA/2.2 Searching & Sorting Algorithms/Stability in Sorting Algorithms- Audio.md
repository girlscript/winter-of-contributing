# Stability in Sorting Algorithms

Stability is mainly important when we have key value pairs with duplicate keys possible (like people names as keys and their details as values). And we wish to sort these objects by keys.
A sorting algorithm is said to be stable if two objects with equal keys appear in the same order in sorted output as they appear in the input array to be sorted.

## Do we care for simple arrays like array of integers?
When equal elements are indistinguishable, such as with integers, or more generally, any data where the entire element is the key, stability is not an issue. Stability is also not an issue if all keys are different.

## Which sorting algorithms are stable?
Some Sorting Algorithms are stable by nature, such as Bubble Sort, Insertion Sort, Merge Sort, Count Sort etc. Comparison based stable sorts such as Merge Sort and Insertion Sort, maintain stability by ensuring that- Element A[j] comes before A[i] if and only if A[j] < A[i], here i, j are indices and i < j.

## Which sorting algorithms are unstable?
Quick Sort, Heap Sort etc., can be made stable by also taking the position of the elements into consideration. This change may be done in a way which does not compromise a lot on the performance and takes some extra space, possibly \theta(n).

## Can we make any sorting algorithm stable?
Any given sorting algo which is not stable can be modified to be stable. There can be sorting algo specific ways to make it stable, but in general, any comparison based sorting algorithm which is not stable by nature can be modified to be stable by changing the key comparison operation so that the comparison of two keys considers position as a factor for objects with equal keys.

Link for audio :- https://drive.google.com/file/d/1ymaRlL6vs2rsis2UPpZBnOtl1Shb1OO5/view?usp=sharing

"Contributed by Jai Gora"
