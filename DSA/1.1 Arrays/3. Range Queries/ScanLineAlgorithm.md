# **ScanLine Algorithm**

- You are given an array of N integers and Q queries, and in each queries you are given three values L, R and, X such that from L to R indices in the array you are required to increment the elements of the array by the value of X.

<br>

## **Approach**

- We will be implementing a function to perform this task, this function will be of the form : void address_queries(int arr[], int n, int q).
- We start by running a for loop Q times, during each iteration of this for loop we will address 1 query, since in C++ by default arrays are passed by reference, the changes will actually reflect back in the array.

<br>

## **Dry Running the Algorithm**

<br>

- Suppose we have the array : [1 2 3 4 5 6 7]
- Here N is 7 and let's suppose Q to be 3
- Each time we address a query, we will be dealing with 3 numbers : L, R and, X
- Let's suppose the input is of the form : 

<br>

```txt
N
Array Elements
Q
L1 R1 X1
L2 R2 X2
.
.
.
Lq Rq Xq
```

<br>

```txt
7
1 2 3 4 5 6 7
3
1 3 7
2 5 -1
0 6 7
```

- Let's find out a solution for this sample input
  
<br>

```txt
1st iteration of the loop :
Array : [1 2 3 4 5 6 7]
L = 1
R = 3
X = 7
We run another loop from int j = L to j = R
We will visit all the elements of the array which are in the range L to R and increment them by X
After this call
Array = [1 (2 + 7) (3 + 7) (4 + 7) 5 6 7]
Array = [1 9 10 11 5 6 7]

2nd iteration of the loop
Array = [1 9 10 11 5 6 7]
L = 2
R = 5
X = -1

After this call
Array = [1 9 (10 - 1) (11 - 1) (5 - 1) (6 - 1) 7]
Array = [1 9 9 10 4 5 7]

3rd iteration of the loop
Array = [1 9 9 10 4 5 7]
L = 0
R = 6
X = 7

After this call
Array = [(1 + 7) (9 + 7) (9 + 7) (10 + 7) (4 + 7) (5 + 7) (7 + 7)]
Array = [8 16 16 17 11 12 14]

Finally after all the calls, the array is : [8 16 17 11 12 14]
The original array was : [1 2 3 4 5 6 7]
```

<br>

## **Time and Space Complexity**

- We are using 2 nested for loops
- The outer loop runs from Q times to address each and every query
- The inner loop's iterations are dependent on the values of L and R, however in the worst case, L can have the value 0 and R can have the value (N - 1), i.e. we would need to traverse the whole array
- Hence the overall complexity of this approach is going to be : O(N*Q)

<br>

## **Code**

<br>

```C++
#include <iostream>

using namespace std;

class Query
{
public :
    int l;
    int r;
    int x;

    void set_values(int l, int r, int x)
    {
        this->l = l;
        this->r = r;
        this->x = x;
    }
};

void print_array(int arr[], int n)
{
    cout << "The array is :\n";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\n";
}

void print_query(Query q)
{
    cout << "For this query :\n";
    cout << "L is : " << q.l << "\n";
    cout << "R is : " << q.r << "\n";
    cout << "X is : " << q.x << "\n\n";
}


void address_queries(int arr[], Query arr_queries[], int n, int q)
{
    for (int i = 0; i < q; i++)
    {
        for (int j = arr_queries[i].l; j <= arr_queries[i].r; j++)
        {
            arr[j] += arr_queries[i].x;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    print_array(arr, n);

    int q;
    cin >> q;
    Query arr_query[q];

    for (int i = 0; i < q; i ++)
    {
        int l, r, x;
        cin >> l >> r >> x;

        arr_query[i].set_values(l, r, x);
        print_query(arr_query[i]);
    }

    cout << "After addressing all the queries :\n";
    address_queries(arr, arr_query, n, q);
    print_array(arr, n);

    return 0;
}
```

<br>

## **Output**

<br>

![image](https://user-images.githubusercontent.com/34866732/140977223-1ef6cd4f-4fe5-4197-a5d0-277374191fab.png)

<br>