# Reversal of Array
Example: Input  : arr[ ] = {1, 2, 3}  
Output : arr[ ] = {3, 2, 1}  

Algorithm:   
1. Initialize start and end indexes as start = 0, end = i-2.   
2. In a loop, swap arr[start] with arr[end] and change start and end as follows :   
 start = start +1, end = end – 1.  
3. Store array elements in dynamic memory using malloc(). 
4. In a loop, input numbers till -1 is entered at the (i-1)th index. Use realloc() to change the size of the array after that copy previous array to another array. Note the pointer previously points to 1st index i.e i=1.
5. Call the function to reverse the array and print the output.  
![arra34](https://user-images.githubusercontent.com/80315864/134810417-f59bb8cf-617b-458b-a385-266e8fbac28a.jpg)

**Time complexity: O(n)**  
**Definition**:  
Realloc(): realloc deallocates the object pointed to by ptr and returns a pointer to a new object that has the size specified by size. If the memory is not dynamically allocated, then behavior is undefined. 
The new object is identical to the previous one but up to the lesser or more sizes. Any bytes in the new object beyond the size of the old object have indeterminate values.  


/* Iterative C++ program to reverse an array */  
   #include <bits/stdc++.h>  
   using std::cout;  

/* Function to reverse array from start to end */  
void reverseArray (int arr[], int start, int end)  
{
	while (start < end)  
	{  
		int temp = arr[start];  
		arr[start] = arr[end];  
		arr[end] = temp;  
		start++;  
		end--;  }  
}  	

/* Utility function to print an array */  
void printArray(int arr[], int size)    
{  
   for (int i = 0; i < size; i++)  
   cout << arr[i] << " ";  

   //cout << endl;  
}  

/* Driver function to test above functions */  
int main()  
{  
    int *a,*b,i=1,p;  //b for storing address of 1st number
    
	cout << "Enter Array elements (-1 to stop reading) : " ;
 
    a=(int*)malloc(sizeof(int));
    using namespace std;
    cin>>a[0];
 
    while(a[i-1]!=-1) //read until -1 is entered
    {
        i++;
        a=(int*)realloc(a,sizeof(int)*i);
        b=a;
        cin>>a[i-1];
    }
    cout << "\n" << "The Array Stored in the memory (Now) :" ;
    
	for (p=0;p<i-1;++p) 
    {
        cout << " " << a[p] ;
    }
	cout << "\n\n" << "The Size of the Dynamic Array is : " << i-1 ;
	
	// Function calling
	reverseArray (a, 0, i-2) ;   
	
	cout << "\n\n" << "The Reversed Array : " ;
	
	// To print the reversed array
	printArray (a, i-1) ;
	return 0 ;}  
[Output on my IDE](https://user-images.githubusercontent.com/80315864/134650734-286f8d88-ed7b-48eb-88cd-3680e4d54abf.jpg)  
###### Reference taken from https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
