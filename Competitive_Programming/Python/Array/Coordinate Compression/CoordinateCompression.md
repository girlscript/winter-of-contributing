# Coordinate Compression Using Hashing:

Consider an array with n-distinct elements.

Now, we will replace all the n-elements of this array with elements ranging from 0 to n-1 such that their relative indexes are maintained.

Here, we won't change the order while compressing the array i.e. if the largest element is present at the 4th position and the smallest at the 1st position and they will stay at their position only even after compression.

Consider the below example of coordinate compression for better understanding:

```
Array before compression: 

array[] = {50, 20, 100}

Array after compression:

array[] = {1, 0, 2}
```

Here, the first approach that comes to anyone's mind is simple iterative process of finding the minimum element in every iteration and replacing it with 0, 1, 2, ... n-1 elements.

First consider the whole array and find the minimum element from it and replace it with '0'.

Then consider the remaining array, find minimum element from it then replace it with '1' and so on.

But this process requires a time complexity of <b>O(n<sup>2</sup>)</b> as we need to run n-forloops with a nested forloop whose complexity will change in this manner with every iteration n, n-1, n-2, ... 1.

So, we will using the <b>hashing approach</b> to reduce the complexity of the coordinate compression.

## Algorithm: 

We can follow these steps to compress the coordinates of a given array using hashing:

(1) Create a copy_array into which we will copy the elements of the original array.

The time complexity of this step will be <b>O(n)</b>.

(2) Sort the copy_array into ascending order.

This step will have <b>O(nlogn)</b> time complexity.

(3) Create an empty dictionary which will play the role of a hash-table.

This step will have <b>O(1)</b> time complexity.

(4) Do the mapping of elements in the copy_array with their relative indexes and store them in the empty dictionary i.e. the hash table.

This step will have <b>O(n)</b> time complexity.

(5) Now, update the original array with their relative values in the hash table created in the previous step.

The time complexity of this step will be <b>O(n)</b>

## Working: 

Consider the below example which shows the detailed working of each step:

```
Input array = [50, 20, 100]

// Step-1:
copy_array = [50, 20, 100]

// Step-2:
copy_array = [20, 50, 100]

// Step-3:
hash_table = {}

// Step-4:

val = 0
for i in range(n):
    hash_table[copy_array[i]] = val
    val += 1

// Detailed steps
// val = 0
// hash_table[20] = val
// val = 1
// hash_table[50] = val
// val = 2
// hash_table[100] = val
// hash_table = {20:0, 50:1, 100:2}

// Step-5:

for i in range(n):
    array[i] = hash_table[array[i]]

// Detailed steps:
// array[0] = hash_table[array[0]]
// array[0] = hash_table[50]
// array[0] = 1
// array[1] = hash_table[array[1]]
// array[1] = hash_table[20]
// array[1] = 0
// array[2] = hash_table[array[2]]
// array[2] = hash_table[100]
// array[2] = 2

// Output Array with Compressed Coordinates: [1, 0, 2]
```

<b>Note: Here, the relative indexes of the elements are unchanged!</b>

## Implementation in Python:

```Python3
# Coodinate Compression

def coordinate_compression(array, n):
	
	# Step - 1:
	# Create a copy_array into which we will copy the elements of the original array.
	copy_array = [array[i] for i in range (n)]
	
	# step-2:
	# Sort copy_array
	# Here, we are using the in-built sort function.
	copy_array.sort()
	
	# Step-3:
	# Create an empty hash table for mapping.
	hash_table = {}	
	
	# Step-4:
	# Store the mapped values indexing from 0 to n-1 in the hash table
	val = 0
	for i in range (n):
		hash_table[copy_array[i]] = val
		val += 1
	
	# Step-5:
	# Obtain the relative values of elements from the hash table
	# And store them at their relative position in the original array.
	for i in range (n):
		array[i] = hash_table[array[i]]

# Input array:

array = [50, 20, 100]
n = len(array)

print(f'Array before Compression: {array}')

coordinate_compression(array, n)
print(f"Array after Compression: {array}")
```

### Output:

```
Array before Compression: [50, 20, 100]
Array after Compression: [1, 0, 2]
```

## Time Complexity Analysis:

Here, step-2 i.e. sorting step has the highest time complexity
i.e. <b>O(logn)</b> while the other steps has either <b>O(n)</b> or <b>O(1)</b> time-complexity.

```
O(n+nlogn+1+n) = O(nlogn)
```
Thus, the overall time complexity will be <b>O(nlogn)</b>.

As, you can with the help of hashing approach we reduced the time-complexity from <b>O(n<sup>2</sup>)</b> to <b>O(logn)</b>.

### Thank You! I hope now you understood the working and implementation of coordinate compression.
