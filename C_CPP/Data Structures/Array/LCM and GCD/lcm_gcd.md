## Problem Statement

You have an integer array and q number of queries. Each query contains the (left, right) as a range. The given task is to find out the LCM(left, right), i.e,
LCM of all the number that comes in the range of left and right inclusively.

## Example

### Input

```
arr[] = {3,4,5,7,9,11,13};
Query: {(1, 4), (3, 6), (2,5)}
```

### Output

```
1260 9009 3465
```

## Explanation

```
The given array is
| 3 | 4 | 5 | 7 | 9 | 11 | 13 |
Let's have a look at first query which is (1,4). This means we have to find LCM of elements starting from index 1 to index 4 both inclusive.
| 3 | 4 | 5 | 7 | 9 | 11 | 13 |
      |___________|      - LCM of 4,5,7,9 is 1260.

The next query is (3,6).This means we have to find LCM of elements starting from index 3 to index 6 both inclusive.
| 3 | 4 | 5 | 7 | 9 | 11 | 13 |
               |____________| -LCM of 7,9,11,13 is 9009.
```

## Algorithm

1. Firstly, declare two arrays :
      - One for the numbers.
      - Second one for the queries.
2. Then, make a segment tree.
3. We are interested to find the LCM of two numbers, so divide the product of the left child and right child by their GCD. ( LCM of 2 numbers is the product of 2 numbers divided by the gcd of same to numbers )
4. Now, for all the queries :
      - If the indices are not valid, then return to the main function by returning the value of 1.
      - Else, check if the left index is less than equal to start index of node and the right index is greater than equal to end index of the node ( left<=start && right >=end           ), if it's true then return the current value node of the tree.
5. If both the above checks are not true :
      - Then we call the same function multiple times (known as recursion) to find the left and right node LCM.
      - When we get the left and right node LCM, we call the LCM function to obtain the LCM of both the numbers. 🚀 

## Code

```C++
#include<iostream>
using namespace std;

#define SIZE 1000
int tree[4*SIZE];
int arr[SIZE];

int GCD(int a, int b)  //GCD of 2 numbers
{
    if (a == 0)
        return b;
    return GCD(b%a, a);
}

int LCM(int a, int b) //LCM of 2 numbers is the product of 2 numbers divided by the gcd of same to numbers.
{
    return a*b/GCD(a,b);
}

int solve(int node, int start, int end, int left, int right) //solve queries
{
    if (end < left || start > right) //invalid indices
        return 1;
    if (left<=start && right >=end)
        return tree[node];
    int mid = (start+end)/2; //find mid to divide the array
    int leftChildLCM = solve(2*node, start, mid, left, right); //left child lcm
    int rightChildLCM = solve(2*node+1, mid+1, end, left, right); //right child lcm
    return LCM(leftChildLCM, rightChildLCM); //lcm of left and right child
}

void makeTree(int node, int start, int end)  //make segment tree
{
    if (start==end)
    {
        tree[node] = arr[start];
        return;
    }
    int mid = (start+end)/2;
    makeTree(2*node, start, mid); //left child
    makeTree(2*node+1, mid+1, end); //right child
    int leftChildLCM = tree[2*node];
    int rightChildLCM = tree[2*node+1];
    tree[node] = LCM(leftChildLCM, rightChildLCM);
}

// driver code
int main()
{
    arr[0]=3;
    arr[1]=4;
    arr[2]=5;
    arr[3]=7;
    arr[4]=9;
    arr[5]=11;
    arr[6]=13;
    makeTree(1,0,6);
    cout << solve(1, 0, 6, 1, 4) << endl;
    cout << solve(1, 0, 6, 3, 6) << endl;
    cout << solve(1, 0, 6, 2, 5) << endl;
    return 0;
}
```

## Output

```
1260
9009
3465
```
