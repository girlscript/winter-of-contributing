# **Minimum/Maximum Stack Implementation**

- We will be implementing a stack which can be used to extract the largest element of the stack at any time efficiently
- We will be creating our custom Stack Class for this purpose
- Minimum stack implementation follows the same concept, we just need to change the equality

<br>

## **Approach**

- We will create our custom Stack class
- This class will contain the following functions
  - Stack() -> Constructor
  - Push()
  - Pop()
  - Print_Stack()
  - Print_Max_Vector
- Implementation : Our class will contains the following data members(All the data members are private)
  - An integer to store current_size
  - A vector of integers v to work as stack of elements
  - A vector of integers maximum to serve the purpose of max stack

<br>

## **Pseudo Code**

<br>

```txt
class Stack
{
  current_size
  vector v
  vector maximum

public:
  Stack()
  {
    current_size <- 0
  }

  void Push(element)
  {
    if current_size == 0
      maximum <- push_back(element)
    else
      maximum <- push_back(max(element, maximum[curren_size - 1]))
    v <- push_back(element)
    current_size = current_size + 1
  }

  void Pop()
  {
    if current_size > 0
      v <- pop_back()
      maximum <- pop_back()
      current_size <- current_size - 1
  }

  void Print_Max_Vector()
  {
    for(i from 1 to current_size)
      print maximum[i - 1]
  }

  void Print_Vector()
  {
    for(i from 1 to current_size - 1)
      print v[i - 1]
  }

  int Max_Element()
  {
    return maximum[current_size - 1]
  }
};
```

<br>

## **Space And Time Complexity Analysis**

- **Space Complexity**
  - Notice that, to maintain the top element at every step, we have used an additional vector
  - Due to this additional vector the overall Space Complexity becomes O(N)
- **Time Complexity**
  - Since we have used a vector, which facilitates random access, and thus anytime we need the maximum element, we can simply access it in constant time
  - Hence it can be seen that the overall Time Complexity boils down to O(1)

<br>

### **Example**

<br>

```txt
Suppose we have a random set of numbers: 12 4 56 3 7 100 
We create a Stack class object, Constructor will initialize the current_size with 0

Stack :
v : [EMPTY]
maximum : [EMPTY]
current_size : 0

Pushing 12 :
v : [12]
maximum : [12]
current_size : 1

Pushing 4 :
v : [12 4]
maximum : [12 12]
current_size : 2

Pushing 56 :
v : [12 4 56]
maximum : [12 12 56]
current_size : 3

Pushing 3 :
v : [12 4 56 3]
maximum : [12 12 56 56]
current_size : 4

Pushing 7 :
v : [12 4 56 3 7]
maximum : [12 12 56 56 56]
current_size : 5

Pushing 100 :
v : [12 4 56 3 7 100]
maximum : [12 12 56 56 56 100]
current_size : 6
```

<br>

## **Code**

<br>

```C++
#include <iostream>
#include <vector>

using namespace std;

class Stack
{
	int current_size;
	vector <int> v;
	vector <int> maximum;
public:
	Stack()
	{
		current_size = 0;
	}

	void push(int element)
	{
		if(current_size == 0)
			maximum.push_back(element);
		else
			maximum.push_back(max(element, maximum[current_size - 1]));
		v.push_back(element);
		
		current_size++;
	}

	void pop()
	{
		if(current_size > 0)
		{
			v.pop_back();
			maximum.pop_back();
			current_size--;
		}
	}

	void print_max_vector()
	{
		cout << "Max stack is :\n";
		for(int i = 0; i < current_size; i++)
			cout << maximum[i] << " ";
		cout << "\n\n";
	}

	void print_stack()
	{	
		cout << "The stack is :\n";
		for(int i = 0; i < current_size - 1; i++)
			cout << v[i] << " ";
		cout << "\n\n";
	}

	int max_element()
	{
		return maximum[current_size - 1];
	}
};

void take_input()
{
	int q;
	cin >> q;
	Stack s;

	while(q--)
	{
		string str;
		cin >> str;

		if(str == "push")
		{
			int num;
			cin >> num;
			s.push(num);
		}
		else if(str== "pop")
			s.pop();
		else if(str == "max")
			cout << s.max_element() << "\n";
	}
}

int main()
{
	take_input();

	return 0;
}
```

<br>

## **Output**

<br>

![image](https://user-images.githubusercontent.com/34866732/142176253-b8ddc9ab-a7e5-4f71-a5a3-3994e5b21662.png)

<br>