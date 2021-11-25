#include <iostream>
using namespace std;

class Queue{
    int *data;
    int nextIndex,firstIndex;
public:
    int size,capacity;
    Queue(int c)
    {
        data=new int[c];
        nextIndex=0;
        firstIndex=-1;
        size=0;
        capacity=c;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size==0;
    }

    void enqueue(int element)
    {
        if(size==capacity)
        {
            cout<<"Queue is full";
            return;

        }
        data[nextIndex]=element;
        nextIndex=(nextIndex+1)%capacity;
        if(firstIndex==-1)
            firstIndex=0;
        size++;

    }

    int front()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty";
            return 0;
        }
        return data[firstIndex];
    }

    int dequeue()
    {
        if(isEmpty())
        {
            "Queue is empty";
            return 0;
        }
        int ele=data[firstIndex];
        firstIndex=(firstIndex+1)%capacity;
        size--;
        if(size==0)
        {
            firstIndex=-1;
            nextIndex=0;
        }
        return ele;

    }
};
int main()
{
     Queue q(5);

    int t;
    cout<<"Enter number of operations on queue";
    cin >> t;

    while (t--) {
        int choice, input;
        cin >> choice;
        switch (choice) {
            case 1:
                cout<<"Enter element to be inserted: ";
                cin >> input;
                q.enqueue(input);
                break;
            case 2:
                cout << "Deleted element: "<<q.dequeue() << "\n";
                break;
            case 3:
                cout <<"Front element of queue: "<<q.front() << "\n";
                break;
            case 4:
                cout <<"Size of queue is "<< q.getSize() << "\n";
                break;
            default:
                cout << ((q.isEmpty()) ? "true\n" : "false\n");
                break;
        }
    }
    return 0;


}

