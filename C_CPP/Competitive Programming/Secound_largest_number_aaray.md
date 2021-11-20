# SECOUND LARGEST NUMBER IN ARRAY

**Problem** -> In a given array find second largest number.

### 1. Solution :-
```cpp

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int array[] = { 91, 25, 38, 9, 6, 57, 83, -4, 2, 0 ,67,85};

	int n = sizeof(array) / sizeof(array[0]);

	sort(array, array + n);

    cout<<array[n-2];

	return 0;
}
```
Output ->
```
85
```

### Approch :-

- First we calculate the size of a given array using ***sizeof()*** inbuild funtion.  
```cpp
sizeof(array)/sizeof(array[0]);
```
- Sort all number in sorted increasing order using ***sort()*** inbuild function. Time complexity of ***sort()*** funtion **O( nlog n ).**
```cpp
sort(array, array + n);
```
- last print output using **cout**
```cpp
cout<<array[n-2];
```
Print output is **85** ,here array size **n** but array index start from **0** so here we right **( array[n-2] )**.
- Time complexity = **O( nlog n ).**


------------------------------------------------------

### 2. Solution :-

```cpp

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int array[] = { 91, 25, 38, 9, 6, 57, 83, -4, 2, 0 ,67,85};

	int n = sizeof(array) / sizeof(array[0]);

    int min=array[0];
    int max=array[0];
    for(int i=0;i<n;i++){
        if(max<array[i])
            max=array[i];
        if(min>array[i])
            min=array[i];
        }
    
    for(int i=0;i<n;i++){
		if(max>array[i]){
			if(min<array[i])
		    min=array[i];
	        }
      	}	
    cout<<min;
	return 0;
}
```
Output ->
```
85
```
### Approch :-

- First we calculate the size of a given array using ***sizeof()*** inbuild funtion.  
```cpp
sizeof(array)/sizeof(array[0]);
```
- First initialised max , min from first element of an array.
- Itarate 0 to n in array.
- Find maximum value and minimum value from array by **itrating** all element.

```cpp
 int min=array[0];
    int max=array[0];
    for(int i=0;i<n;i++){
        if(max<array[i])
            max=array[i];
        if(min>array[i])
            min=array[i];
        }

```
- Itrate all element pass value which is less than max in also find smax using same for loop.
- Here update value **min** in secound largest value from lowest value in array.
```cpp
 for(int i=0;i<n;i++){
		if(max>array[i]){
			if(min<array[i])
		    min=array[i];
	        }
      	}	
```
- last print output using **cout**
```cpp
cout<<min;  //second largest value
```
Print output here is **85** .
- Time complexity = **O ( n ).**

