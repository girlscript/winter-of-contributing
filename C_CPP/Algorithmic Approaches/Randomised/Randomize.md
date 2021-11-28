# Randomize Algorithm

- An algorithm is said to be randomized algorithm if it depends upon a random number for its logic.
- An algorithm whose output depend upon a random input.
- In a randomized algorithm , its next step depend upon the random numbers.
- Randomize algorithms are more efficient than other algorithms.

### Importance of Randomize Algorithm
- Randomize algorithm,as discussed earlier are more efficient.
- Concept of randomization is very much important in **number theory**,**computational geometry**, **graph theory** and **distributed computing**.
- In randomize algorithm input is provided in the same way as other algorithm.
- The input consist of a number of random choices from which a choice can be made.
### Advantages of randomize algorithm
- Randomize algorithm are simpler as compared to other algorithm.
- Randomize algorithm are good for problem analysis.
- They are easy to understand.
- As compared to other algorithm randomize algorithm has less space and time complexities. 
**Let's understand it by a question**
## **Shuffle an array**
An array is given to you and you have to shuffle it means you have to arrange the elements  
in a random manner that all the combinations are equally likely.

**Algorithm**  

- Take an array as input    
- Pick random element from the array and swap it with another array element  
- You will get a random shuffled array  
```c++
#include<bits/stdc++.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
//shuffle function will produce the array with a different shuffled combination 
void shuffle (int arr[], int n)
{
  srand (time (NULL));		//srand produces a starting point for the sequence of random number generated   
  for (int i = n - 1; i > 0; i--)
    {
      int j = rand () % (i + 1);	//rand() will generate any random positive number 
      //any positive number modulo i+1 will generate a number from 0 t0 i
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  for (int i = 0; i < n; i++)	//print the elements of shuffled array
    cout << arr[i] << " ";
}

int main ()
{
  int arr[10];
  int n = sizeof (arr) / sizeof (arr[0]);	//number of elements in array
  cout << "Enter elements\n";
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cout << "Elements before shuffle\n";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << "\nElements after shuffle\n";
  shuffle (arr, n);
  return 0;
}

```
**Input**  
> Enter elements   
> 1 2 3 4 5 6 7 8 9 10    

**Output**  
> Elements before shuffle  
> 1 2 3 4 5 6 7 8 9 10  
> Elements after shuffle  
> 7 6 3 4 10 1 9 2 5 8   

**Time Complexity - O(n)**  
**Space Complexity - O(1)**
