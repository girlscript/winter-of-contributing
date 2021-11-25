# **Reversing String Using Stack**

- We will be using stack data structure to reverse a given string, and this will be done using the characteristic property of the stack : LIFO (Last In First Out)

<br>

## **Approach**

- We will push all the characters of the string in the stack
- We then pop out the characters one by one and this is where LIFO is used
- The character of the string which will be push at the end will be the first to pop out and this way we can reverse the given string

<br>

## **Dry Run Analysis**

- Let us apply this algorithm on the string : "ABACF"

<br>

```txt
Initially the stack is empty : | Empty |
String : |A|B|A|C|F|

Let's start filling the element of the string into the stack

First insertion : 'A'
Stack : |A| <-- Top

Second insertion : 'B'
Stack : |B| <-- Top
        |A|

Third insertion : 'A'
Stack : |A| <-- Top
        |B|
        |A|

Fourth insertion : 'C'
Stack : |C| <-- Top
        |A|
        |B|
        |A|

Fifth Insertion : 'F'
Stack : |F| <-- Top
        |C|
        |A|
        |B|
        |A|

Now we have inserted all the elements of the string into the stack, and next we will be popping all the elements out one by one and adding them to new string

First pop : 'F'
New string : |F|
Stack : |C| <-- Top
        |A|
        |B|
        |A|

Second pop : 'C'
New string : |F||C|
Stack : |A| <-- Top
        |B|
        |A|

Third pop : 'A'
New string : |F|C|A|
Stack : |B| <-- Top
        |A|

Fourth Pop : 'B'
New string : |F|C|A|B|
Stack : |A| <-- Top

Fifth pop : 'A'
New string : |F|C|A|B|A|
Stack : | Empty |
```

<br>

## **Space and Time Complexity Analysis**

- **Time Complexity**
  - Inserting elements into the stack : O(Length of the string)
  - Popping out all the elements of the stack : O(Length of the string)

<br>

- **Space Complexity**
  - Space required for the stack : O(Length of the string)
  - Space required to store the characters of the reversed string into a new string : O(Length of the string)

<br>

## **Code**

<br>

```C++
#include <iostream>
#include <stack>

using namespace std;

void print_stack(stack <char> stk)
{
    cout << "The stack is :\n";
    while(!stk.empty())
    {
        cout << stk.top() << "\n";
        stk.pop();
    }
}

string reverse_string_using_stack(string s)
{
    stack<char> stk;
    int i = 0;

    while(s[i] != '\0')
    {
        stk.push(s[i]);
        print_stack(stk);
        i++;
    }

    cout << "Now popping elements out of the stack\n";
    string s_new;

    while(!stk.empty())
    {
        s_new += stk.top();
        cout << "The string is : " << s_new << "\n";
        stk.pop();
        print_stack(stk);
    }

    return s_new;
}

int main()
{
    string s;
    stack<char> stk;
    cout << "Enter a string\n";
    cin >> s;

    string new_string = reverse_string_using_stack(s);
    cout << "The reversed string is : " << new_string << "\n";

    return 0;
}
```

<br>

## **Output**

<br>

![image](https://user-images.githubusercontent.com/34866732/141255748-7595ce2e-d022-4213-8d93-01f51be03b79.png)

<br>

![image](https://user-images.githubusercontent.com/34866732/141255877-1f9b39a2-bcd1-4f14-b0d2-740aaec2ce08.png)

<br>

![image](https://user-images.githubusercontent.com/34866732/141255979-430b73cc-f917-4b09-8568-241e525a804a.png)
