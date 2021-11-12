#include <iostream>
#include<climits>
using namespace std;
class StackUsingArray
{
    int *data;
    int nextIndex;
    int capacity;
public:
    StackUsingArray(int totSize)
    {
        data=new int[totSize];
        nextIndex=0;
        capacity=totSize;
    }
    int getSize()
    {
        return nextIndex;

    }

    bool isEmpty()
    {
        return nextIndex==0;
    }
    void push(int element)
    {
       if(nextIndex==capacity)
       {
           cout<<"Stack is empty";
           return;
       }
       data[nextIndex]=element;
       nextIndex++;
    }
    int pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty";
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];

    }
    int top()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty";
            return INT_MIN;
        }
        return data[nextIndex-1];
    }



};

int main()
{
    StackUsingArray st(8);
    int q;
    cin >> q;
    while (q--) {
        int choice, input;
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                st.push(input);
                break;
            case 2:
                cout << "The popped element is "<<st.pop() << "\n";
                break;
            case 3:
                cout << "Topmost element of stack is "<<st.top() << "\n";
                break;
            case 4:
                cout << "Size of stack is "<<st.getSize() << "\n";
                break;
            default:
                cout << ((st.isEmpty()) ? "true\n" : "false\n");
                break;
        }
    }
    return 0;
}
