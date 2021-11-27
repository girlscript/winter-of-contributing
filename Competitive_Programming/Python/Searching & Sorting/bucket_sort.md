# Bucket Sort With Implementation In Python

## Problem Statement:

We are given an input array of N-elements which needs to be sorted.

## Basic Approach:

Firstly, we will create n-buckets indexed from 0 to n-1.

Then we will assign each bucket some elements based on its range.

Now, we will apply insertion sort on each bucket individually so that all the buckets are sorted internally.

And at the end, we will concatenate all the buckets into an output list of sorted array.

## Working with the help of an Example:

Consider the following input list of 12 elements, thus N = 12. Let the input list be denoted ny A.

<img src='https://user-images.githubusercontent.com/65852362/141989892-792ae99e-5869-49a8-886e-253c911bb565.png'>

Our goal is to sort them in ascending order. So, firstly we will create a list of 10 buckets indexed from 0 to 9. Thus n = 10. Let the bucket list be denoted by B.

<img src='https://user-images.githubusercontent.com/65852362/141989936-49d34a66-fb9c-4512-84d0-f96b89e13f36.png' >

For assigning elements to each bucket we need to calculate a divider value which can be obtained by the below mentioned formula:

```
divider = ceil((max + 1)/n)
```
Here, <b>max</b> and <b>min</b> denotes the maximum and minimum elements among the input array respectively. Here max = 81 and min = 6 and n = 10.
So,

``` 
divider = ceil((81+1)/10)
divider = ceil(8.2)
divider = 9
```

Now, each element of the input array will be assigned to the <b>floor(A[i]/divider)</b> index of the B, where i runs from 0 to N-1.

For example, for the first input element i.e. A[0] = 22, index of B will be floor(22/9) = floor(2.44) which is 2. Thus 22 will be placed at the second index of the bucket. Same formula will be repeated for the elements of input array and gradually the bucket list will get filled and will look something like these,

<img src='https://user-images.githubusercontent.com/65852362/141989978-3703ade4-1f4b-4a94-8d97-b9b9b86eeaed.png'>

As you can see in the above image, though all the elements are placed into the bucket list but still each bucket needs to be sorted individually using insertion sort. So, we will apply insertion sort on each bucket and the final bucket list will be:

<img src='https://user-images.githubusercontent.com/65852362/141990182-606eedea-fc66-4f45-8342-89c7870ec9e3.png'>

Now, all the buckets are sorted so they can be merged into an output list of sorted array. Thus, the list of sorted elements will be:

<img src='https://user-images.githubusercontent.com/65852362/141990236-b64f302e-9039-4001-9098-e3a329ffa1b6.png'>

So, this was an example of bucket sort. Now, let's have a look at its alogrithm.

## Algorithm

```
(1) Create an empty list B of n-buckets.
(2) Find the maximum and minimum elements from the input array and store them in variables 'max' and 'min' respectively.
(3) Calculate the divider value using the following equation:
divider = ceil((max + 1)/n)
(4) for i = 0 to N-1:
        B[ ⌊ A[i]/divider ⌋ ] = A[i]
(5) for i = 0 to n-1:
    sort bucket B[i] using insertion sort
(6) Conatenate the buckets B[0], B[1], B[2], ..., B[n-1] together in order.
```

## Implementation in Python:

```Python
def bucketSort(arr, n):
	max_ele = max(arr)
	min_ele = min(arr)

	# range(for buckets)
	rnge = (max_ele - min_ele) / n

	temp = []

	# create empty buckets
	for i in range(n):
		temp.append([])

	# scatter the array elements
	# into the correct bucket
	for i in range(len(arr)):
		diff = (arr[i] - min_ele) / rnge - int((arr[i] - min_ele) / rnge)

		# append the boundary elements to the lower array
		if(diff == 0 and arr[i] != min_ele):
			temp[int((arr[i] - min_ele) / rnge) - 1].append(arr[i])

		else:
			temp[int((arr[i] - min_ele) / rnge)].append(arr[i])

	# Sort each bucket individually
	for i in range(len(temp)):
		if len(temp[i]) != 0:
			temp[i].sort()

	# Concatenate all the sorted buckets into a list.
	k = 0
	for lst in temp:
		if lst:
			for i in lst:
				arr[k] = i
				k = k+1


# Input List of Unsorted Elements:
arr = [22, 45, 12, 8, 10, 6, 72, 81, 33, 18, 50, 14]
# Here, n is the number of buckets.
n = 10
bucketSort(arr, n)
# Output List of Sorted Elements: 
print("Sorted array: ", arr)
```

### Output:

```
Sorted array:  [6, 8, 10, 12, 14, 18, 22, 33, 45, 50, 72, 81]
```

## Time Complexity:

Here, <b>O(n<sup>2</sup>)</b> is the time-complexity for worst case and <b>O(n+k)</b> is the time-complexity for the best case.

Worst case occurs when elements are in a close range and they get placed in the same bucket. Now, this will simply become a case of insertion sort whose complexity is <b>O(n<sup>2</sup>)</b>. Thus, the overall complexity will also be <b>O(n<sup>2</sup>)</b>.

Best case occurs when the elements are uniformly distributed among all the buckets and it becomes even better when the elements inside the bucket are already sorted. In this case, <b>O(n)</b> is the complexity for making the buckets and <b>O(k)</b> is the complexity for sorting the elements of the bucket using insertion sort in best case. 
So the overall complexity for bucket sort in the best case will be <b>O(n+k)</b>.

## Bucket Sort Applications:

It is used when input is uniformly distributed over a range.

It is mainly used for floating point values.

## Thank You! I hope you understood the implementation and working of bucket sort.
