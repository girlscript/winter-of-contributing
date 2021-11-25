# **Balanced Parenthesis Problem For Multiple Parenthesis**

<br>

- This is a very common yet useful feature in text editors
- Balanced Parenthesis algorithm is very handy algorithm to avoid blunders while working with programming languages, JSON files, arithmetics etc

<br>

## **Approach**

<br>

- The problem is a slight modification of the Classic Balanced Parenthesis problem
- This problem is a more general case of the Classic Balanced Parenthesis problem
- The solution is based on the special property which a stack maintains, that is, the LIFO property
- LIFO (Last In First Out) property makes stacks very useful data structures
- In our solution to the problem, we will implement a character stack, which will store the parenthesis for us
- We start with an empty stack
- We start traversing the string by visiting each character one by one
- Whenever we encounter a character that is not a bracket, we just skip it and move to the next element
- Whenever we encounter a Bracket, we do some logic computation that is explained below
  - Check if the bracket is an opening bracket or a closing bracket
  - If it is an opening bracket then just push it into the stack
  - Otherwise, check if the stack is empty or not
  - If the stack turn out to be empty at the moment and we encounter a closing bracket, then return false and the position of the element where the Balanced Parenthesis property is violated
  - However if this is not the case, then we check for the matching opening bracket for the current closing bracket
  - If the element at the top of the stack is not a match then we return false and the position of the element
  - If this is not the case then we just pop the topmost element of the stack(since it must have been a opening bracket match for the current closing bracket)
- We repeat the same procedure all the elements of the string
- In the end we just check if the stack is empty or not, if its empty then its a success and if its not then we display the error location

<br>

## **Space And Time Complexity**

<br>

- Since the algorithm just traverse through the string only once, hence we just visit every element of the file at most once, thus, the overall **TIME COMPLEXITY** of the algorithm is O(N)
- We implement a stack of characters, which in the worst case can end up storing one closing bracket, thus the overall **SPACE COMPLEXITY** is just O(1) or constant

<br>

### **Dry Run Analysis**

<br>

```txt
We will be pushing a pair into our stack : pair <element, position>
********************************************************************************
Example 1 :
String : []
Our Algo will implement the stack as :

First call :
Stack : |'[', 1| pushed '[' into the stack

Second call :
Stack : |Empty| whenever we encounter any closing brace, we check if the top of the stack 
contains the matching opening brace or not, if this is the case then instead of pushing,
we just pop the top most element of the stack.

Since the stack is empty, we return true (No parenthesis errors were found)
********************************************************************************
Example 2 :
String : {}[]

First call :
Stack : |'{', 1| pushed '{' into the stack

Second call :
Stack : |Empty| popped '{' out of the stack because the matching closing brace was encountered

Third call :
Stack : |'[', 3| pushed '[' into the stack

Fourth call :
Stack : |Empty| popped '[' out of the stack because the matching closing brace was encountered

Since the stack is empty, we return true (No parenthesis errors were found)
********************************************************************************
Example 3 :
String : [()]

First call :
Stack : |'[', 1| pushed '[' into the stack

Second call :
Stack : |'(', 2| pushed '(' into the stack
        |'[', 1|

Third call :
Stack : |'[', 1| popped '(' out of the stack because the matching closing brace was encountered

Fourth call :
Stack : |Empty| popped '[' out of the stack because the matching closing brace was encountered

Since the stack is empty, we return true (No parenthesis errors were found)
********************************************************************************
Example 4 :
String : foo(bar[i);

First call :
Stack : |Empty| we will only push the parenthesis into the stack

Second call :
Stack : |Empty|

Third call :
Stack : |Empty| we will only push the parenthesis into the stack

Fourth call :
Stack : |'(', 4| pushed '(' into the stack

Fift call :
Stack : |'(', 4| we will only push the parenthesis into the stack

Sixth call :
Stack : |'(', 4| we will only push the parenthesis into the stack

Seventh call :
Stack : |'(', 4| we will only push the parenthesis into the stack

Eighth call :
Stack : |'[', 8| pushed '[' into the stack
        |'(', 4|

Ninth call :
Stack : |'[', 8| we will only push the parenthesis into the stack
        |'(', 4|

Tenth call :
Stack : |')', 10| The incoming element is : ')' which is not a matching brace 
Stack : |'[', 8| for our topmost element, hence we push element into the stack  
        |'(', 4| and break out of the loop, then we will simply return its index

Since the stack is not empty, we will check the topmost element of the stack, display its position and return false.
********************************************************************************
```

<br>

## **Code**

<br>

```C++
#include <iostream>
#include <stack>
#include <fstream>
#include <cstring>

using namespace std;

class Bracket
{
public:
  char type;
  int position;
  Bracket(char type, int position)
  {
    this->type = type;
    this->position = position;
  }
  bool Matchc(char c)
  {
    if (type == '[' && c == ']')
      return true;
    if (type == '{' && c == '}')
      return true;
    if (type == '(' && c == ')')
      return true;
    return false;
  }
};

void print_file_contents(char *FILE_NAME)
{
  ifstream input_file;
  input_file.open(FILE_NAME, ios :: in);
  input_file.seekg(0, ios :: beg);
  if(!input_file.is_open())
    cout << "Input File Couldn't be opened" << endl;

  int cnt = 0;
  int lines = 0;

  cout << "\n***********************************************************\n\n";
  cout << "Printing File :" << FILE_NAME << endl;
  cout << "\n***********************************************************\n";
  char ch;
  while(input_file.get(ch))
  {
    if(ch == '\n')
      lines ++;
    cnt ++;
    cout << ch;
  }
  cout << "\n***********************************************************\n\n";
  cout << "Total Lines : " << lines << endl;
  cout << "Total Characters : " << cnt << endl;
  cout << "\n***********************************************************\n\n";
  input_file.close();
}

void check_brackets_from_string(string text)
{
  bool flag = true;
  stack <Bracket> opening_brackets_stack;
  for (int position = 0; position < text.length(); ++position)
  {
    char next = text[position];

    if (next == '(' || next == '[' || next == '{')
    {
      Bracket temp(next, position + 1);
      opening_brackets_stack.push(temp);
    }

    if (next == ')' || next == ']' || next == '}')
    {
      if(opening_brackets_stack.empty())
      {
        flag = false;
        Bracket temp(next, position + 1);
        opening_brackets_stack.push(temp);
        break;
      }
      else if(!opening_brackets_stack.top().Matchc(next))
      {
        flag = false;
        Bracket temp(next, position + 1);
        opening_brackets_stack.push(temp);
        break;
      }
      else
      {
        opening_brackets_stack.pop();
      }
    }
  }
  if(opening_brackets_stack.empty() && flag)
  {
    cout << "Success\n";
  }
  else
  {
    cout << opening_brackets_stack.top().position << "\n";
  }
}

void check_brackets_from_file(char *FILE_NAME)
{
  ifstream input_file;
  input_file.open(FILE_NAME, ios :: in);
  input_file.seekg(0, ios :: beg);
  if(!input_file.is_open())
    cout << "Input File Couldn't be opened" << endl;

  stack <Bracket> opening_brackets_stack;
  bool flag = true;
  int position = 0;

  char ch;
  while(input_file.get(ch))
  {
    char next = ch;

    if (next == '(' || next == '[' || next == '{')
    {
      Bracket temp(next, position + 1);
      opening_brackets_stack.push(temp);
    }

    if (next == ')' || next == ']' || next == '}')
    {
      if(opening_brackets_stack.empty())
      {
        flag = false;
        Bracket temp(next, position + 1);
        opening_brackets_stack.push(temp);
        break;
      }
      else if(!opening_brackets_stack.top().Matchc(next))
      {
        flag = false;
        Bracket temp(next, position + 1);
        opening_brackets_stack.push(temp);
        break;
      }
      else
      {
        opening_brackets_stack.pop();
      }
    }
    position ++;
  }
  
  if(opening_brackets_stack.empty() && flag)
  {
    cout << "Success, No Parenthesis Errors were found\n";
  }
  else
  {
    cout << "Error Found At Charater Position : ";
    cout << opening_brackets_stack.top().position << "\n";
  }

  input_file.close();
}

int main(int argc, char *argv[])
{
  if(argc < 2)
  {
    string s;
    getline(cin, s);
    cout << "String is : " << s << endl;
    check_brackets_from_string(s);
  }
  else
  {
    char *input_file_array[argc - 1];
    for(int i = 0; i < argc - 1; i++)
    {
      cout << "***************************************************" << endl << endl;
      input_file_array[i] = argv[i + 1];
      print_file_contents(input_file_array[i]);
      check_brackets_from_file(input_file_array[i]);
      cout << "***************************************************" << endl << endl;
    }
  }

  return 0;
}
```

<br>

## **Output**

<br>

![Successful Test](https://user-images.githubusercontent.com/34866732/143494477-9e904e57-d567-4eb8-904d-6e1728ec44c4.png)

<br>

![Unsuccessful Test](https://user-images.githubusercontent.com/34866732/143494560-2810bf75-01ad-452d-9d02-ad2c74d990ce.png)

<br>

![String Test](https://user-images.githubusercontent.com/34866732/143494784-683086d1-783e-41dd-b35f-857697f106ca.png)