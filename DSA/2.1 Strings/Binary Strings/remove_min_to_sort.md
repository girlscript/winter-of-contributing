# **Remove Minimum Characters To Sort Binary String**

## **Problem Description:**
    In this problem we have been given a Binary String and we have to determine,
    that minimum how many characters we can remove from the Binary String inorder to make the Binary String sorted.
    
## **Examples:**

    - Example 01:
    	If we have given a Binary String : "11000101"
    	And if we removed last 2 occurance of 1's them the Binary string will be: "110000", which is sorted.
	
    - Example 02:
    	If we have given a Binary String : "0001111"
    	As the given Binary String is already sorted, therefore we don't have to remove any character from it.

## **Explanation of algorithm:**
    In order to make the Binary String sorted, we can make it sorted in accending oreder or in descending order,
    we will count for which order we need to remove the minimum characters form the Binary String.

    - For sorting in accending order:
        We need to count the occurance of 0's after the first occurance of 1 in a Binary String.
    
    - For sorting in descending order:
        We need to count the occurance of 1's before the last occurance of 0 in a Binary String.

    And the minimum of these two above count will be the mimimun number of count inorder to make the Binary String sorted.

## **Complexity analysis:**
### **Time Complexity:**
    As the count of occurance of 0's after the occurance of 1 is calculated in O(n),
    and also the count of occuranc of 1's before the last occurance of 0 can also be calculated in just O(n),
    therefore the Time Complexity for the whole code will be: O(n)

### **Space Complexity:**
    As no extra space has been used for the computation apart from taking input from the user,
    therefore the Space Complexity of the code will be: O(1), constant space complexity.

## **Input/Output:**
    - Test Case 01:
        Enter Binary String: 11000101
        Minimum characters to be removed: 2

    - Test Case 02:
        Enter Binary String: 0001111
        Minimum characters to be removed: 0

## **Program Code in C++:**
```cpp
// Including header file.
#include<iostream> // for cout and cin.
using namespace std;

// getMinToSort() function,
// that will return the minimum character to be removed,
// to make the Binary String sorted.
int getMinToSort(string str){
	// Declaring variables for computing.
	int count0 = 0, count1 = 0;
	bool flag0 = false, flag1 = false;

	// Counting the number of 0's,
	// after the first occurance of 1.
	for(int i = 0; i < str.length(); i++){
		if(!flag0 and (str[i] == '1'))
			flag0 = true;
		if(flag0 and (str[i] == '0'))
			count0++;
	}

	// Counting the number of 1's,
	// before the last occurance of 0.
	for(int i = str.length()-1; i >= 0; i--){
		if(!flag1 and (str[i] == '0'))
			flag1 = true;
		if(flag1  and (str[i] == '1'))
			count1++;	
	}

	// Returing the minimum of these to count,
	// as the order to sorting is not defined.
	return min(count0, count1);
}

// main() function or the driver function.
int main(){
	// Declaring variable for taking input.
	string str = "";
	// Taking input of Binary String from the user.
	cout<< "\nEnter Binary String: ";
	cin>> str;

	// Calling getMinToSort() function and,
	// printing the minimum character to be removed,
	// to make the string sorted.
	cout<< "\nMinimum characters to be removed: "<< getMinToSort(str)<< endl;

	return 0;
	// End of main function.
}
```

<p align = "center">--- Contributed with 🧡 by <a href = "https://github.com/motasimmakki">Motasim</a> ---</p>
