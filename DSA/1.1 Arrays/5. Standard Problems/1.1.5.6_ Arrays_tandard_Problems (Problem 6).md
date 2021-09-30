## Problem

  Find subarray with equal 1's and 0's in an array containing only 0 and 1 as elements.
  <hr> 

## Approach

--> Treat all 0's, in array  as -1.

--> Create hash map and count the number of times a particular sum is encountered for example:-
      ar[] = {0, 0, 1, 0, 1, 0, 1, 1}
      
      
 ```
 
 index          =       0     1     2    3    4    5    6    7  
 values         =       0     0     1    0    1    0    1    1  
 treating values=      -1    -1     1   -1    1   -1    1    1 
 sum till i     =  0   -1    -2    -1   -2   -1   -2   -1    0
                   ^
                   |
                   |
 initially the sum is 0.
 
 from index 0 to 1 sum is -1 so -1 sum is encountered 1 time so we increment its value by one in hash map.
 similarly from index 0 to 2 sum is -2 so its value is also incremented by one.
 now for the sum from index 0 to 2 sum is -1, now -1 sum is encountered again now we increment its value again.
 
 ```
 
 We are doing this because everytime same sum is encountered we find the subarray with equal number of 0's and 1's.
 
 for example:- 
        The first time we encounter a particular sum say -1 till index 0(i) and the next time we encounter that sum 
        till index 2(j) the subarray from index 0+1(i+1) = 1 to index 2(j), the number of 0's and 1's are equal,
        as their sum canceled out each other and we get the same sum again i.e. -1.
        
And as soon as value of any key of our hash map is greater than 1 we increment the count of subarrays having equal number of 1's and 0's.

--> We keep doing this till the end of the array.

## Implementation

```C++
  
  int arr[] = { 1, 0, 0, 1, 0, 1, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	unordered_map<int, int> m;

	int sum = 0; // sum of array
	int ans = 0; // number of subarrays with equal 0's and 1's

	// intialising sum 0 with 1 in map
	m.insert(pair<int, int>(0, 1));


	for (int val : arr) {
		if (val == 0)
			sum += -1;      //adding -1 if 0 is encountered
		else
			sum += 1;       // adding 1 if 1 is encountered


		if (m.find(sum) != m.end())
			ans += m[sum]++;    //incrementing number of subarray with equal 1's and 0's
		else
			m[sum] = 1;         //initialising value of sum whenever it's encountered first time
	}

	cout << ans << endl;
  
```

**Time Complexity** = O(n)

```

Time complexity is O(n) here n is the size of the array. We only have to traverse the array once.

```

**Auxilary Space** = O(n)

``` 

The auxilary space is taken by the map which stores the number of times a particular sum is encountered.
It is equal to n as the size of map is also equal to n.

```

**Space Complexity** = O(n)

```
Space complexity is the total space taken and here it is space taken by array and map -> O(n) + O(n) == O(n)

```

<hr>

**Reference Link**
https://youtu.be/svMdY6wlQ6I
