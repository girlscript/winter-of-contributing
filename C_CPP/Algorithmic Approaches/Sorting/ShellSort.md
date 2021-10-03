# Shell Sort

Shellsort, also known as Shell's method, is an in-place comparison sort. It can be seen as either a generalization of sorting by exchange or sorting by insertion. The method starts by sorting pairs of elements far apart from each other, then progressively reducing the gap between elements to be compared.

# Algorithm

ShellSort(array, size)

for interval i <- size/2n down to 1

for each interval "i" in array

sort all the elements at interval "i"

end shellSort

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

```c++
Array before sorting:
9 8 3 7 5 6 4 1

Array after sorting:
1 3 4 5 6 7 8 9
```

## Time Complexity:

Best - O(nlog n)

Worst - O(n2)

Average - O(nlog n)

## Space Complexity:

O(1)

## Stability

Not a stable algorithm.

Stability of a sorting algorithm means that- when two instances with equal values appear in the same order in the sorted output as they appear in the array as given by the user.
