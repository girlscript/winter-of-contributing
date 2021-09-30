//Our aim is to implement stack using queue

#include <bits/stdc++.h>
  
using namespace std;
  
class Stack {
  //here, we are taking two inbuilt queue object using queue library
    queue<int> q1, q2;

    int curr_size;   //this variable gives us the current number of elements
  
public:
//here, we are initializing curr_size to 0 using constructor
    Stack()
    {
        curr_size = 0;
    }
  
    void push(int x)
    {
        curr_size++;

        q2.push(x);    //push x first in empty q2

        while (!q1.empty()) {       //pushing all the remaining element from q1 to q2  so that we can maintain our current element
            q2.push(q1.front());    // at first position and the previously entered element is at last
            q1.pop();               //hence we are able to follow LIFO fashion!
        }

        queue<int> q = q1;          //swap the names of two queues
        q1 = q2;
        q2 = q;
    }
  
    void pop()
    {
        //if no elements are there in q1
        if (q1.empty())
            return;
        q1.pop();
        curr_size--;
    }
  
    int top()
    {
        if (q1.empty())
            return -1;
        return q1.front();
    }
  
    int size()
    {
        return curr_size;
    }
};
  
int main()
{
    Stack s;
    s.push(1);
    s.push(10);
    s.push(21);
    s.push(41);
    s.push(51);
    s.push(61);
    s.push(71);
  
    cout << "current size: " << s.size()
         << endl;
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
     s.pop();
    cout << s.top() << endl;
     s.pop();
    cout << s.top() << endl;
         s.pop();
    cout << s.top() << endl;

         s.pop();
    cout << s.top() << endl;
         s.pop();
    cout << s.top() << endl;
         s.pop();
    cout << s.top() << endl;

  
    cout << "current size: " << s.size()
         << endl;
    return 0;
}


// OUTPUT :  current size: 7 ,71, 61, 51, 41, 21, 10, 1, -1, -1, current size: 0