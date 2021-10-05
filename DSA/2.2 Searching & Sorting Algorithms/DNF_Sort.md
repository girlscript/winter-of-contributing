# Dutch national flag (DNF) problem

### The DNF problem is one of the most popular programming problems. It is based on the flag of the country Netherlands which consists of three different colours :- white , red and blue. The problem consists of arranging the balls of three colours i.e white , red and blue such that balls of the same colour are placed together.

## Relation:- 
### We can relate this problem as an unsorted array consisting of elements as 0,1,2 and the array such that all the zeroes comes first , then all the ones and then at last all the twos.

## Algorithm :- 
 
1. We consider three pointers :- low , mid and high.
2. low and mid point at start of the array and high points at the last element of the array.
3. Do the following steps till (mid<=high)
4. if(array[mid] = 0 ) , then swap array[low] with array[mid] and increment both the pointers i.e low and mid by 1 (low=low+1 and mid=mid+1).
5. if(array[mid] = 1) , then there is no need to swap the elements , just increment mid pointer by 1 (mid=mid+1).
6. if(array[mid] = 2) , then swap array[high] with array[mid] and decrement the high pointer by 1 (high=high-1). 

## Dry Run:-

Let the unsorted array be :- array[5]={0,2,0,1,1}
Now, low=0,mid=0,high=4.  

As , array[mid] = 0 i.e array[0]=0 then , swap(array[low],array[mid]) and low=low+1 , mid=mid+1.  

Array becomes :- {0,2,0,1,1}  

Now, low=1,mid=1,high=4.  

As , array[mid] = 2 i.e array[1] = 2 then , swap(array[high],array[mid]) and high=high-1.  

Array becomes :- {0,1,0,1,2}  

Now, low=1,mid=1,high=3.  

As , array[mid] = 1 i.e array[1] = 1 then , just mid=mid+1.  

Array becomes :- {0,1,0,1,2}  

Now, low=1,mid=2,high=3.  

As , array[mid] = 0 i.e array[2] = 0 then , swap(array[low],array[mid]) and low=low+1 , mid=mid+1.  

Array becomes :- {0,0,1,1,2}  

Now, low=2,mid=3,high=3.  

As , array[mid] = 1 i.e array[3] = 1 then , just mid=mid+1.  

Array becomes :- {0,0,1,1,2}  

Now, low=2,mid=4,high=3.  

As, mid>high so, we will stop here.  



**We have successfully converted our unsorted array into a sorted one.**

**array[5]={0,0,1,1,2};**

## Code:-

```
void DNFsort(int array[], int n) // n is the size of the array  
{  
    int low = 0;    
    int mid = 0;  
    int high = n - 1;
      
      //Iterate till (mid<=high)

    while (mid <= high)  
    {  
        switch (array[mid])  
        {  
              
        case 0:  
            swap(array[low], array[mid]);
            low++;
            mid++;  
            break;  
                
        case 1:  
            mid++;  
            break;  
               
        case 2:  
            swap(array[mid], array[high]);
            high--;  
            break;  
        }  
    }  
}  
  
```

## Time complexity :- O(n)
#### As the array is traversed only once therefore, the time complexity of the algorithm is O(n).

## Space complexity :- O(1)
#### As no extra space is used therefore, the space complexity of the algorithm is O(1).



