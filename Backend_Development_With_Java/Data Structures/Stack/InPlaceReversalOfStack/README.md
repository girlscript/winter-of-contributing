# **IN PLACE REVERSAL OF A STACK**

- We will be reversing the stack without creating another stack, and for this purpose, we will be using the heap memory that is present during the program run

<br>

## **Approach :**

- We will create a recursive function reverseStack(), which will take input a stack by reference(because we want the changes to be reflected in the original stack), and another function insertAtBottom() which is again going to be a recursive function and it will insert the element at the bottom of the stack once the stack gets emptied

<br>

- Example : suppose we have the stack :

```
  Original Stack              Output Stack 
   |4|                            |1|
   |3|                            |2|
   |2|                            |3|
   |1|                            |4|
```

<br>

## **Algorithm :**

- we will pop out the element at the top of the stack and make a call on the function insertAtBottom, now what insert at bottom does is : it will check if the stack is empty or not, if the stack is empty() then it will push the popped out element into the stack otherwise it will fetch the topmost element of the current stack and store it, then we will pop this element from the stack and make a recursive call on the function insertAtBottom on the remaining stack

<br>

```
first call on reverseStack() : 

|4| --> TopMost element popped and stored in the call stack 
    |3|       
    |2|       
    |1|  

Second call on reverseStack() : 
|3| --> TopMost element again popped and stored in the call stack       
    |2|       
    |1|   

Third call on reverseStack() : 
|2| --> TopMost element again popped and stored in the call stack        
    |1|   

Fourth call on reverseStack() : 
|1| --> TopMost element again popped and stored in the call stack 
    | | 
```

- **Base Case :** Fifth call on reverseStack() : Now we can see that the stack is empty, this means we have extracted all the elements of the stack can start inserting them at the bottom starting from the TopMost element of the original stack, so we will return from this point and call on the function insertAtBottom()

<br>

- **insertAtBottom()** function will check if the stack is empty or not, if the stack is empty, it will push the element into the stack otherwise it will make a recursive call on the function insertAtBottom() with the TopMost element of the current stack as arguement

<br>

- **Space Complexity :** O(1), however the stackReverse() function will need O(N) call-stack space

<br>

- **Time Complexity :** O(N) for the stackReverse() function and O(N*(N+1)/2) (almost) O(N^2) for insertAtBottom() function

The order of insertion of the elements is going to be :

```
First call : 
New Stack       Call Stack 
 |4|                |3|
                    |2|
                    |1|

Second call : 
New Stack       Call Stack 
 |3|                |2|
 |4|                |1|

Third Call : 
New Stack       Call Stack 
 |2|                |1|
 |3|
 |4|

Fourth Call : 
New Stack       Call Stack (Empty)
 |1|                | |
 |2|
 |3|
 |4|

Fifth Call : return 
```

<br>

## **Code :**

```
#include <iostream>
#include <stack>

using namespace std;

void insertAtBottom(stack<int> &s, int top)
{
	//base case

	if (s.empty())
	{
		s.push(top);
		return;
	}

	//recursive case

	int currTop = s.top();
	s.pop();

	insertAtBottom(s, top);
	s.push(currTop);
}

void reverseStack(stack<int> &s)
{
	//base case

	if (s.empty())
	{
		return;
	}

	//recursive case

	//store the topmost element and make a call on the remaining stack

	int top = s.top();
	s.pop();

	reverseStack(s);

	insertAtBottom(s, top);
}

void printStack(stack<int> s, int n)
{
	for (int i = 0; i < n; i++)
	{
		int top = s.top();
		s.pop();

		cout << top << endl;
	}
	cout << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	int z = 1;
	while (t--)
	{
		cout << "Test case : # " << z++ << endl;

		stack<int> s;

		int n;
		cin >> n;

		for (int i = 0; i < n; i++)
		{
			int num;
			cin >> num;
			s.push(num);
		}

		cout << "The original Stack is :" << endl;
		printStack(s, n);

		reverseStack(s);

		cout << "The reversed stack is :" << endl;
		printStack(s, n);
		cout<<endl;
	}

	return 0;
}
```

## **Output :**

<br />

![Screenshot 2021-10-08 222846](https://user-images.githubusercontent.com/34866732/136595482-46089c83-9aec-4075-bd4d-099610498875.png)

<br />

![Screenshot 2021-10-08 222922](https://user-images.githubusercontent.com/34866732/136595494-16e8f0ec-91b9-4452-8b4c-54e69eff2b5c.png)

<br />

![Screenshot 2021-10-08 222943](https://user-images.githubusercontent.com/34866732/136595503-5d79013b-c86d-4f60-bb45-20350095f324.png)

<br />

![Screenshot 2021-10-08 223013](https://user-images.githubusercontent.com/34866732/136595506-56a5a2d1-37bf-4700-842e-fc5f0b1dc157.png)