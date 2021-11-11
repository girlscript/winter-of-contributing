# Binary Search In 2D Array
---
---

We all know there are *two* types of searching technique - linear *and* binary. Among which *binary search* is the one which we can use in any *sorted* array, let it be 1D array or 2D array. Here, we will deal with 2D array and implementing binary search in it.

## Brief of Binary Search:
* *Binary Search* is one of the searching technique.
* For implementation of *binary search* in an array, the array have to be in *sorted* manner.
* Binary search uses *Divide & Conquer* approach, where the whole array get divided into half successively until we get our target or the whole array is traversed.

## How memory management works for 2D array:
* Since an array is an object & when object gets created, it gets stored in the heap memory and the reference of the array object gets stored in stack memory. So it somewhat look like this:

int *arr* **[** m **]** **[** n **]** ;  **//** object get allocated with memory

where **,**

**m** **->** number of rows

**n** **->** number of columns

**arr** **-->** reference to array object

>
>          |               |
>          |               |                       _
>          |               |                     /   \
>          |               |                   /       \
>          |      arr -----|---------------> / [[]...[]] \
>          |               |               /               \
>          |               |             /                   \ 
>           _______________     
>                stack                            heap

* Number of rows **(** m **)** *implies* number of elements in the array object. And these elements are arrays themselves and so we say *2D array means array of arrays*. 
* Number of columns **(** n **)** *implies* number of elements in each of the element of array object respectively. For eg., 

**-->** If we have *arr* **[** 2 **]** **[** 3 **]** , here all the elements of *arr* object will have same length of **3** and it will look like :   

>     [
>       [  ,  ,  ],
>       [  ,  ,  ]
>                  ]

**-->** We can even have an array like this :

>     [
>       [  ,  ,  ,  ],
>       [  ,  ],
>       [  ,  ,  ],
>       [  ,  ,  ,  ]
>                     ]    

here, every element of array is having their own length or there own value of number of column ie., **n** .

* For acessing the elements **:**
      
    * for accessing the elements of *arr* which are array themselves , we can do **:** *arr* **[** i **]** , where **i** **-->** index of row **/** number of row.
    * for accessing the elements of nth row of *arr*, we should know that the reference will be *arr* **[** n **]** always and we can use index of columns for accesing columns values as *arr* **[** n **]** **[** i **]** , i **-->** column number.

---

As we now know, how 2D array looks like and works so now let us see how we implement binary search on it.

And for implementing binary search on 2D array, the array have to be in sorted manner.

**Question:**

Let us consider a 2D array whose value will be sorted in row wise and in column wise as:

*arr* **[** 3 **]** **[** 3 **]** 

*target* = 28

>    
>     {
>      { 10 , 20 , 30 },
>      { 15 , 25 , 35 },
>      { 28 , 29 , 38 }
>                       }

As in 1D array we try to reduce the elements by shifting the lower bound & upper bound after comparing middle element with the target, the same approach will be used here too with a little modification. *We will be following below steps:*

* our first element of first row will be the lower bound element. i.e., *arr* **[** 0 **]** **[** 0 **]** ---> *lb element* & *lb* will be controlling the *number of rows*.
* our last element of first row will be the upper bound element. i.e., *arr* **[** 0 **]** **[** 2 **]** ---> *ub element* & *ub* will be controlling the *number of columns*.
* Initially we will be on the *ub element* as *current* element.
* We will keep on *comparing* the element of *current* index with the *target* element and accordingly, will be either removing the rows or the columns by shifting the *lb* & *ub* as:
    
    * If target **==** current element **/** ub element **,** then
     
     **return** the index  *( Since we got our target element )*   

    * If target **>** current element **/** ub element **,** then

    *lb* will be **shift** to the immediate lower row *( Since we have an array which is sorted in both direction, so it means if the target > ub element then it will be automatically greater than all the elements of current row/ lb row, so we can move our lb to immediate lower row by making the search space smaller, and this is what binary search says )*

    * if target **<** current element **/** ub element **,** then

    *ub* will be **shift** to the immediate left column *( Since the target < current element that means target will be automatically smaller than all the elements of ub column/ current column and so we can shift the ub to make the search space smaller )*

    *We need to **repeat** these steps of loop with conditions until either we get our target or we end up searching the whole array.*

Lets see how above question will get solved.

**Solution:**    

*firstly :*

>                       ub
>        {    _ _ _ _ _ _| _ 
>     lb-->{ | 10 , 20 , 30 | },
>          { | 15 , 25 , 35 | },
>          { | 28 , 29 , 38 | }
>            | _ _ _ _ _ _ _|    }

*current element =* 30

--> here **,** 30 **(** current element **)** **!=** 28 **(** target element **)**
 
And target < current element so:

> Now, 2nd column is the ub column
>
>                    ub
>        {    _ _ _ _|_
>     lb-->{ | 10 , 20 |, 30 },
>          { | 15 , 25 |, 35 },
>          { | 28 , 29 |, 38 }
>            | _ _ _ _ |       }

*current element =* 20

--> here **,** 20 **(** current element **)** **!=** 28 **(** target element **)**

And target **>** current element so **:**

> Now, 2nd row is the lb row
>
>                  ub
>        {         |
>           { 10 , 20 , 30 },
>             _ _ _ _ _
>     lb-->{ | 15 , 25 |, 35 },
>          { | 28 , 29 |, 38 }
>            |_ _ _ _ _|       }

*current element =* 25

--> here **,** 25 **(** current element **)** **!=** 28 **(** target element **)**

And target **>** current element so **:**

> Now, 3rd row is the lb row
>
>                  ub
>        {         |
>           { 10 , 20 , 30 },
>           { 15 , 25 , 35 },
>             _ _ _ _ _ 
>     lb-->{ | 28 , 29 |, 38 }
>            |_ _ _ _ _|       }

*current element =* 29

--> here **,** 29 **(** current element **)** **!=** 28 **(** target element **)**

And target **<** current element so **:** 

> Now, 1st column is the ub column
>
>             ub
>        {    |
>           { 10 , 20 , 30 },
>           { 15 , 25 , 35 },
>             _ _ _ 
>     lb-->{ | 28  |, 29 , 38 }
>            |_ _ _|            }

*current element =* 28

--> here **,** 28 **(** current element **)** **=** 28 **(** target element **)**

So **,** *therefore* we *got our **target element*** and now we can return the indices i.e., *ith* **and** *jth* value.

*ith* value **(** row value **)** **-->** lb **-->** 2

*jth* value **(** column value **)** **-->** ub **-->** 0

#### Now, what if 28 was not there in the array ?

*Answer :* Then we would have came out of the loop after checking the remaining last value. And that would have mean that the array does not have our target element so we would have returned **{** -1 **,** -1 **}**.

#### Code:
```cpp
>       #include<iostream>
>       using namespace std;
>
>       int main( ){
>
>            cout<<"Size of Matrix : ";
>            int n;  // size of array
>            cin>>n;
>
>            int arr[n][n];
>
>            cout<<"Enter 2D matrix value : ";
>            for(int i = 0; i < n; i++){  // taking elements of array
>                for(int j = 0; j < n; j++){
>                    cin>>arr[i][j];
>                }
>            }
>
>            int target;
>            cout<<"Enter target : ";
>            cin>>target;  // this will store target element
>
>            cout<<"2D matrix is : ";
>            for(int i = 0; i < n; i++){   // displaying our 2D array
>                for(int j = 0; j < n; j++){
>                    cout<<arr[i][j] + " ";
>                }
>                cout<<endl;
>            }
>
>
>            int current = arr[0][n-1];  // this will store the current element & initially stores ub element
>
>            int* indices = search(arr, current, n, target);  // function call of search() function which will return the index of target
>
>            cout<<"The row & column of target element is : ";
>            for(int i =0; i < 2; i++){  // this is for displaying the index of target element in array
>                cout<<indices[i]<<" & ";
>            }
>
>            return 0;
>    }
>
>     int* search(int arr[][], int current, int n, int target){  // the function receives 4 parameter
>
>        int row = 0;  // this is lb which will record the row number
>        int col = n-1;  // this is ub which wil record column number
>        while(row < n && col >= 0){  // this loop will run until we get our target or the whole array is got traversed
>
>            if(target > current){  // for this condition, lb will change and search space will get smaller
>                row++;
>                if(row < n){
>                    current = arr[row][col];
>                }
>            }else if(target < current){  // for this condition, ub will change and search space will get smaller
>                col--;
>                if(col >= 0){
>                    current = arr[row][col];
>                }
>            }else{  // for this condition, we will store the index values in a 1D array and will return the array as pointer 
>
>                int index[2];
>                index[0] = row;
>                index[1] = column;
>
>                return index;
>            }
>        }
>
>        // in case the array does not have the target then only we will reach this part of code & here we will set -1 as row and column index and return the array 
>        int index[2];
>        index[0] = -1;
>        index[1] = -1;
>
>        return index;
>     } 
>    }
```

*Therefore **,** in this way we can search our target element in the 2D array using **Binary Search** method .*

**Time Complexity** - O **(** n **+** n **)** **=** O **(** n **)** *{ first n for traversing the array with lb i.e., in row wise **&** second n for traversing the array with ub i.e., in column wise}.*