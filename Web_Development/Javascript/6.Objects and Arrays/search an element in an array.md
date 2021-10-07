# search an element in an array #2495


Searching Algorithms are designed to check for an element or retrieve an element from any data structure where it is stored. 
Searching algorithms is a basic, fundamental step in computing done via step-by-step method to locate a specific data among a collection of data.

All search algorithms make use of a search key in order to complete the procedure. And they are expected to return a success or a failure status ( in boolean true or false value).


<br><br>

### Definition of Search Algorithm:
> Any algorithm which solves the search problem, namely, to retrieve information stored within some data structure, or calculated in the search space of a problem domain, either with discrete or continuous values.
 

In computer science, there are various type of search algorithms available based on the type of search operation, these algorithms are generally classified into two categories:

1. **Sequential Search:** In this, the list or array is traversed sequentially and every element is checked. 
    <br>Also known as `Linear Search`.
2. **Interval Search:**  It is much more efficient than Linear Search algorithm as they repeatedly target the center of the search structure and divide the search space in half. 
    <br>Also known as `Binary Search`.
    > **NOTE-**  <br>
    > These algorithms are specifically designed for searching in sorted data-structures.
    
    
<br><br><br><br>
           
## 1. Linear Search

   - Linear search is a very simple search algorithm. 
   - In this type of search, a sequential search is made over all items one by one. 
   - Every item is checked and if a match is found then that particular item is returned, otherwise the search continues till the end of the data collection.

 
   > **Algorithm:**
   > 
   ```bash
   Linear Search ( Array A, Value x)
   
   Step 1: Set i to 1
   Step 2: if i > n then go to step 7
   Step 3: if A[i] = x then go to step 6
   Step 4: Set i to i + 1
   Step 5: Go to Step 2
   Step 6: Print Element x Found at index i and go to step 8
   Step 7: Print element not found
   Step 8: Exit
   ```    

   <div align="center"><img src="https://user-images.githubusercontent.com/70523057/136211029-e7396a00-f18a-40f3-b8a5-8380d63574e2.gif" width="450" ></div>
     
   **Example:**
   > 
   > _Program:_
   ```bash
   <script>
   function search(arr, n, x){
   	let i;
   	for (i = 0; i < n; i++)
   		if (arr[i] == x)
   			return i;
   	return -1;
   }
   
   // Main code
   	let array = [ 10, 40, 100, 303, 6, 22 ];
   	let search_element = 6;
   	let n = array.length;
   
   	// Function call
   	let result = search(array, n, search_element);
   	(result == -1) ? document.write("Element is not present in array") : document.write("Element is present at index " + result);
   
   </script>
   ```
 
   > _Output:_  <br>
   <img src="https://user-images.githubusercontent.com/70523057/136373552-ba9e0478-a8e3-44b0-bdec-ad5bd40f649d.png" width="600" >
   
   
   **Time Complexity:**  <br>
    1. Best Case - O(1)  <br>
    2. Average Case - O(n/2)  <br>
    3. Worst Case - O(n)  <br>
  
  
  
  
## 2. Binary Search
   - Search a sorted array by repeatedly dividing the search interval in half. 
   - Begin with an interval covering the whole array. 
   - If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. 
   - Otherwise, narrow it to the upper half. 
   - Repeatedly check until the value is found or the interval is empty. 
  
   `NOTE:` 
   :-
   Binary search method is considered as the best searching algorithms. There are other search algorithms such as the depth-first search algorithm, breadth-first algorithm, etc. The efficiency of a search algorithm is measured by the number of times a comparison of the search key is done in the worst case.
 
  
 
   > **Algorithm:**
   > 
   ```bash
   Step 1: It is mandatory for the target array to be sorted. 
   Consider, the following is our sorted array and let us assume that we need to search the location of value 5 using binary search.
   
   Step 2: First, we shall determine half of the array by using this formula −
   **mid = low + (high - low) / 2**
   Here it is, 0 + (9 - 0 ) / 2 = 4 (integer value of 4.5). So, 4 is the mid of the array.
   
   Step 3: Now we compare the value stored at location 4, with the value being searched, i.e. 5. We find that the value at location 4 is 7, which is not a match. As the value is less than 7 and we have a sorted array, so we also know that the target value must be in the lower portion of the array.
   
   Step 4: We change our high to mid - 1 and find the new mid value again.
   high = mid - 1
   mid = low + (high - low) / 2
   
   Step 5: Our new mid is 1 now. We compare the value stored at location 1 with our target value 5.
   
   Step 6: The value stored at location 1 is not a match, rather it is less than what we are looking for. 
   So, the value must be in the greater than this location.
   
   Step 7: Now, we calculate the mid again. This time it is 2.
   
   Step 8: We compare the value stored at location 2 with our target value. We find that it is not a match and it is less than require.
   
   Step 9: Continue the procedure and finally got the value at index 3.
   We conclude that the target value 5 is stored at location 3.
   ```    

   <div align="center"><strong>Binary Search</strong><br><img src="https://user-images.githubusercontent.com/70523057/136377813-e693f37e-552f-4b27-87bb-edd90acce9a6.gif" width="400" ></div>
     
     
   **Example:**
   > 
   > _Program:_  <br>
   ```bash
   <script>
   function binarySearch(arr, l, r, x){
   	if (r >= l) {
   		let mid = l + Math.floor((r - l) / 2);
   		if (arr[mid] == x)
   			return mid;
   		if (arr[mid] > x)
   			return binarySearch(arr, l, mid - 1, x);
   		return binarySearch(arr, mid + 1, r, x);
   	}
   	return -1;
   }
   // Main code
   let array = [ 1, 3, 4, 5, 7, 10, 11, 14, 15, 16 ];
   let search_element = 5;
   let n = array.length
   let result = binarySearch(array, 0, n - 1, search_element);
   (result == -1) ? document.write( "Element is not present in array")
   				: document.write("Element is present at index " +result);
   </script>
   ```
   
   > _Output:_  <br>
   <img src="https://user-images.githubusercontent.com/70523057/136378827-9fc32b4e-257f-43d0-a5c8-f7216da317a1.png" width="600" >
   
   **Time Complexity:**  <br>
    1. Best Case - O(1)  <br>
    2. Average Case - O(log n)  <br>
    3. Worst Case - O(n)  <br>
  
-----
#### Hence, we can conclude that Binary _`Search Algorithm`_ is best for search an element in an array.
