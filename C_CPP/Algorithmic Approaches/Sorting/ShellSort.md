# Shell Sort

Shellsort, also known as Shell's method, is an in-place comparison sort. It can be seen as either a generalization of sorting by exchange or sorting by insertion. The method starts by sorting pairs of elements far apart from each other, then progressively reducing the gap between elements to be compared.

# Algorithm

Shell_Sort(Arr, n)

- SET FLAG = 1, GAP_SIZE = N
- Repeat Steps 3 to 6 while FLAG = 1 OR GAP_SIZE > 1
- SET FLAG = 0
- SET GAP_SIZE = (GAP_SIZE + 1) / 25)
- Repeat Step 6 for I = 0 to I < (N -GAP_SIZE)
- IF Arr[I + GAP_SIZE] > Arr[I]
     SWAP Arr[I + GAP_SIZE], Arr[I]
     SET FLAG = 0
- END

# Code

```c++
// Shell Sort in C++ programming

#include <iostream>
using namespace std;

// Shell sort
void shellSort(int arr[], int n) {
  // Rearrange elements at each n/2, n/4, n/8, ... intervals
  for (int interval = n / 2; interval > 0; interval /= 2) {
    for (int i = interval; i < n; i += 1) {
      int temp = arr[i];
      for (int j = i; j >= interval && arr[j - interval] > temp; j -= interval) {
        arr[j] = arr[j - interval];
      }
      arr[j] = temp;
    }
  }
}

// Print an array
void print(int arr[], int n) {
  for (int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

// Driver code
int main() {
  int arr[] = {9, 8, 3, 7, 5, 6, 4, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  shellSort(arr, n);
  cout << "Sorted array: \n";
  print(arr, n);
}
```

# Output

```
Array before sorting:
9 8 3 7 5 6 4 1

Array after sorting:
1 3 4 5 6 7 8 9
```

# Shell Sort Complexity

- Time Complexity

  Best O(nlog n)

  Worst O(n2)

  Average O(nlog n)

- Space Complexity

  O(1)

- Stability

  No
