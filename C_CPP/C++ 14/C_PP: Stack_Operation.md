A C++ stack supports the following basic operations:
1.push – It adds/pushes an item into the stack.
2.pop – It removes/pops an item from the stack.
3.peek – Returns the top item of the stack without removing it.
4.isFull – Checks whether a stack is full.
5.isEmpty – Checks whether a stack is empty.

Stack Implementation:
![image](https://user-images.githubusercontent.com/71644914/143775590-cd1c3252-f56c-43ae-b5d2-8e5c836b103c.png)
Step 1) We initially have an empty stack. The top of an empty stack is set to -1.

Step 2) Next, we have pushed the element 5 into the stack. The top of the stack will points to the element 5.

Step 3) Next, we have pushed the element 50 into the stack. The top of the stack shifts and points to the element 50.

Step 4) We have then performed a pop operation, removing the top element from the stack. The element 50 is popped from the stack. The top of the stack now points to the element 5.

push() and pop()
The stack::push() functions adds new item to the top of stack. The stack size is increased by a 1 after the insertion. The function takes this syntax:

stack.push(value)
The value is the item to insert into the stack.

The stack:: pop() function removes the top element of the stack. This is the newest item of the stack. The stack size is reduced by 1 after the removal. Here is the function syntax:

stack.pop()
The function takes no parameters.

Example 1:
#include <iostream> 
#include <stack> 
using namespace std;
int main() {
	stack<int> st;
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	
         st.pop();
	st.pop();

	while (!st.empty()) {
		cout << ' ' << st.top();
		st.pop();
	}
}
  Code Explanation:

Include the iostream header file in our code to use its functions.
Include the stack header file in our code to use its functions.
Include the std namespace in our code to use its classes without calling it.
Call the main() function. The program logic should be added within this function.
Create a stack st to store integer values.
Use the push() function to insert the value 10 into the stack.
Use the push() function to insert the value 20 into the stack.
Use the push() function to insert the value 30 into the stack.
Use the push() function to insert the value 40 into the stack.
Use the pop() function to remove the top element from the stack, that is, 40. The top element now becomes 30.
Use the pop() function to remove the top element from the stack, that is, 30. The top element now becomes 20.
Use a while loop and empty() function to check whether the stack is NOT empty. The ! is the NOT operator.
Printing the current contents of the stack on the console.
Call the pop() function on the stack.
End of the body of the while loop.
End of the main() function body.
  
  empty(), size(), top()
Stacks have inbuilt functions that you can use to play around with the stack and its values. These include:

empty()- checks whether a stack is empty or not.
size()- returns the size of stack, that is, number of elements in a stack.
top()- accesses stack element at the top.
Example 2:
#include <iostream> 
#include <stack>  
using namespace std;
void createStack(stack <int> mystack)
{
	stack <int> ms = mystack;
	while (!ms.empty())
	{
		cout << '\t' << ms.top();
		ms.pop();
	}
	cout << '\n';
}
int main()
{
	stack <int> st;
	st.push(32);
	st.push(21);
	st.push(39);
	st.push(89);
	st.push(25);

	cout << "The stack st is: ";
	createStack(st);
	cout << "\n st.size() : " << st.size();
	cout << "\n st.top() : " << st.top();
	cout << "\n st.pop() : ";
	st.pop();
	createStack(st);
	return 0;
}
  
  Code Explanation:

Include the iostream header file in our code in order to use its functions.
Include the stack header file in our code in order to use its functions.
Include the std namespace in our program in order to use its classes without calling it.
Create the function createStack that we can use to create the stack mystack. The stack will hold a set of integers.
The beginning of the body of the createStack function.
Create an instance of the mystack datatype and giving it the name ms.
Use the while loop and the empty() function to check whether the stack is empty.
The start of the body of the while loop.
Use the top() function stored at the top of the stack. The \t character will create a new tab.
Use the pop() function to delete the element at the top of the stack.
End of the body of the while loop.
Print a blank line on the console.
End of the body of the createStack function.
Call the main() function. The program logic should be added within the body of the main() function.
The start of the body of function main().
Create a stack object st.
Use the push() function to insert the element 32 into the stack.
Use the push() function to insert the element 21 into the stack.
Use the push() function to insert the element 39 into the stack.
Use the push() function to insert the element 89 into the stack.
Use the push() function to insert the element 25 into the stack.
Print some text on the console.
Call the createStack function to execute the above insert operations into the stack.
Print the size of the stack on the console alongside other text.
Print the element at the top of the stack on the console.
Print some text on the console.
Delete the element at the top of the stack. It will then return the elements remaining in the stack.
Call the createStack function to execute the above operations.
The program must return value upon successful completion.
End of the body of function main().
  
  emplace() and swap()
These are other inbuilt stack functions:

emplace()- constructs then inserts new element to top of stack.
swap()- exchanges stack contents with another stack’s contents.
Example 3:
#include <iostream>    
#include <stack>
#include <cstdlib>
using namespace std;
int main() {
	stack<int> st1;
	stack<int> st2;

	st1.emplace(12);
	st1.emplace(19);

	st2.emplace(20);
	st2.emplace(23);

	st1.swap(st2);

	cout << "st1 = ";
	while (!st1.empty()) {
		cout << st1.top() << " ";
		st1.pop();
	}

	cout << endl << "st2 = ";
	while (!st2.empty()) {
		cout << st2.top() << " ";
		st2.pop();
	}
}
  
  Code Explanation:

Include the iostream header file in our code to use its functions.
Include the stack header file in our code to use its functions.
Include the cstdlib header file in our code to use its functions.
Include the std namespace in our code to use its classes without calling it.
Call the main() function. The program logic will be added within the body of this function.
Declare a stack named st1 to store integer values.
Declare a stack named st2 to store integer values.
Use the emplace() function to insert the integer 12 into the stack named st1.
Use the emplace() function to insert the integer 19 into the stack named st1.
Use the emplace() function to insert the integer 20 into the stack named st2.
Use the emplace() function to insert the integer 23 into the stack named st2.
Use the swap() function to swap the contents of the two stacks, st1 and st2. The contents of the stack st1 should be moved to the stack st2. The contents of the stack st2 should be moved to the stack st1.
Print some text on the console.
Use the while statement and the empty() function to check whether the stack st1 is not empty.
Print the contents of the stack st1 on the console. The ” ” adds space between the stack elements when printing them on the console.
Execute the pop() function on the stack st1 to remove the top element.
End of the body of the while statement.
Print some text on the console. The endl is a C++ keyword for end line. It moves the mouse cursor to the next line to begin printing from there.
Use the while statement and the empty() function to check whether the stack st2 is not empty.
Print the contents of the stack st2 on the console. The ” ” adds space between the stack elements when printing them on the console.
Execute the pop() function on the stack st2 to remove the top element.
End of the body of the while statement.
End of the body of the main() function.
