# Deque in C++
<p> Let's have a look on the definition : </p>
<p> Double ended queues (Deques) are sequence containers with the feature of expansion and contraction on both the ends. They are similar to vectors, but are more efficient in case of insertion and deletion of elements. </p>
<p> Double Ended Queues are basically an implementation of the data structure double ended queue. </p>

<p> A queue data structure allows insertion only at the end and deletion from the front. </p>

<p> Speciality of Deque : Double ended queues are a special case of queues where insertion and deletion operations are possible at both the ends. </p>
<br>

![Deque](https://user-images.githubusercontent.com/63473496/134736735-b20d023b-599f-4d71-9cbd-bc3bf53c4b95.png)

<br>

## Sample program on Deque in C++ : 

```
#include <iostream>
#include <deque>
using namespace std;
void printg(deque<int> g)
{
    deque<int>::iterator it;
    for (it = g.begin(); it != g.end(); it++)
    {
        cout << '\t' << *it; // printing the elements of deque
    }
    cout << endl;
}
void back(int arr[], int n)
{
    deque<int> gwoc;
    cout << "Pushing From Back : ";
    for (int i = 0; i < n; i++)
    {
        gwoc.push_back(arr[i]); // adding elements from front
    }
    printg(gwoc);
}
void front(int arr[], int n)
{
    deque<int> gwoc;
    cout << "Pushing From Front : ";
    for (int i = 0; i < n; i++)
    {
        gwoc.push_front(arr[i]); // adding elements from back
    }
    printg(gwoc);
}
// driver code
int main()
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // taking input from the user
    }
    front(arr, n); // calling front function
    back(arr, n);  // calling back function
    return 0;
}
```

### Output
```
Enter the number of elements : 5
10 20 30 40 50
Pushing From Front :    50      40      30      20      10
Pushing From Back :     10      20      30      40      50
```
## Basic Functions in Deque
1. push_back() : Add element from the back in Deque.
2. push_front() : Add element from the front in Deque.
3. pop_back() : Remove element from the back in Deque.
4. pop_front() : Remove element from the front in Deque.
5. front() : Prints the first element.
6. back() : Prints the last element.
7. empty() : Checks if the deque container is empty or not.
8. size() : Returns the size of the deque.

## Advanced Functions in Deque
1. rbegin() : Returns a reverse iterator which points to the last element of the deque.
2. rend() : Returns a reverse iterator which points to the position before the beginning of the deque.
3. clear() : Remove all the elements of the deque.
4. remove() : Remove elements from the specified position.
5. swap() : Swap the contents of one deque with another deque of same type and size.
6. emplace_back() : Add element from the back in Deque.
7. emplace_front() : Add element from the front in Deque. 
8. resize() : Changes the size of the deque
