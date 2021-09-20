#include<iostream>
using namespace std;

int stack[500];
int n, i, top = -1;

void push()
{
    if(top >= n-1)
    {
        cout << "Stack overflow!" << endl;
    }
    else
    {
        int val;
        static int k = 1;
        cout << "Enter element " << k << ": ";
        cin >> val;
        top += 1;
        stack[top] = val;
    }
}
void pop()
{
    if(top <= -1)
    {
        cout << "Stack underflow!" << endl;
    }
    else
    {
        cout<<"Value :"<<stack[top]<<" at position " << top << " got deleted/popped out"<<endl;
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        cout<<"Elements in the stack are :";
        for(i=top;i>=0;i--)
        {
            cout << stack[i] << " " ;
        }
    }
    else
    {
        cout<<"STACK IS EMPTY."<<endl;
    }
}

int peek()
{
    if (top == -1)
    {
        cout << "Underflow" << endl;
        return 0;
    }
    else
    {
        return stack[top];
    }
}

int main()
{
    int ch;
    cout<<"Enter the number of elements: ";
    cin >> n;
    i=1;
    while(i)
    {
        cout<<"\nEnter your choice: "<<endl;
        cout<<"1.PUSH\n2.POP\n3.DISPLAY\n4.PEEK\n5.EXIT\n";
        cin >> ch;
        switch(ch)
        {
            case 1: push();
                break;
            case 2: pop();
                break;
            case 3: display();
                break;
            case 4: cout << peek();
                break;
            case 5: i = 0;
                break;
            default:cout<<"Wrong Input... Enter again!"<<endl;
                break;
        }
    }
    return 0;
}
