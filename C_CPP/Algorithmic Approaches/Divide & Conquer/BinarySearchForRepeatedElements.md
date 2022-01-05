# **Binary Search For Repeated Elements**
We will be looking at the concept and the implementation an optimized algorithm which gives the first occurrence of an element of a sorted vector or an array  
## **Approach**

- This algorithm is based on the very basic yet extremely useful **BINARY SEARCH**
- We start by defining the mid element of the container (vector or array)
- We then check if the key element (element to be searched) is greater than, or equal to, or less than the mid
element of the container
- If the element is greater than the mid element of the container then we will start the search in the region :
contained between the elements : mid + 1 to end (both inclusive)
- Else if the element is less than the mid element then we limit the search to the region : start to mid - 1 (both inclusive)
- **Here is the tricky part :** Else if the element is equal to the mid element, then we repeat the search in the region start to mid - 1, so that we end up at the first occurrence of the element in the container
- If the element is present in the vector or array under lookup then, this algorithm will output the index at which the element first occurred in the array or vector
- If the element is not present in the vector or array, then the algorithm will simply return -1

### ***Example***

```txt
Suppose we have the following vector
Vector : [1 2 2 2 4 8 8 9]
Mid : (Start + End)/2

Let us suppose we want to look for the element : 2

First Call :
Start : 0
End : Vector.size() - 1 = 7
Mid : 3
Vector[Mid] : 2
Case : Vector[Mid] == key, hence we make another call on the vector and this time we will limit the area to be searched from Start to Mid - 1
Temp Ans1 : 3

Second Call : 
Start : 0
End : 2
Mid : 1
Vector[Mid] : 2
Case : Vector[Mid] == key, hence we make another call on the vector and this time we will limit the area to be searched from Start to Mid - 1
Temp Ans2 = 1

Third Call :
Start : 0
End : 0
Note that in this call both the start and the end are equal and thus we've hit the base case
In this case we return -1

Hence the final answer is going to be Temp Ans2 since this is the least index at which 2 is present is 1
```

## **Space and Time Complexity Analysis**

- This Algorithm requires no extra space and thus the overall ***SPACE COMPLEXITY*** is going to be ***O(1)***
- The algorithm is a divide and conquer algorithm, at a time it divides the container into 2 halves out of which, one part is discarded straight away, and the  same process happens for the remaining part.
- The worst case ***TIME COMPLEXITY*** of this algorithm is : ***O(log(Size of the Container))*** which is when, if the key is located at either of the ends

## **Code**

```C++
#include <iostream>
#include <vector>

using namespace std;

int binary_search(const vector<int> &a, int x, int s, int e)
{
    //base case
    if(s > e)
    {
        return -1;
    }

    //recursive case
    int ans = -1;
    int mid = (s + e)/2;

    if(x == a[mid])
    {
        ans = mid;
        //check for even lower index
        int temp_ans = binary_search(a, x, s, mid - 1);
        if(temp_ans != -1)
        {
            ans = temp_ans;
        }
    }
    else if(x > a[mid])
    {
        ans = binary_search(a, x, mid + 1, e);
    }
    else
    {
        ans = binary_search(a, x, s, mid - 1);
    }

    return ans;
}

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);

  for (size_t i = 0; i < a.size(); i++)
  {
    cin >> a[i];
  }

  int m;
  cin >> m;
  vector<int> b(m);

  for (int i = 0; i < m; ++i)
  {
    cin >> b[i];
  }

  for (int i = 0; i < m; ++i)
  {
    cout << "Element : " << b[i] << " is found at the index : " << binary_search(a, b[i], 0, n-1) << endl;
  }

  return 0;
}
```

## **Output**

![Output](https://user-images.githubusercontent.com/34866732/143109866-30c910f1-90bd-4039-bbf6-6662a858a890.png)
