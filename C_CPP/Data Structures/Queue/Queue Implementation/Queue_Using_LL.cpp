#include <iostream>
using namespace std;

class Node {
    	public :
    	int data;
    	Node *next;

    	Node(int data) {
        	this->data = data;
        	next = NULL;
    	}
	};
class Queue {

	Node*head;
    Node*tail;
    int size;
   public:
    Queue() {
		head=NULL;
        tail=NULL;
        size=0;
	}

	int getSize() {

        return size;
	}

    bool isEmpty() {

        return size==0;
	}

    void enqueue(int data) {
		Node* newnode=new Node(data);
        if(head==NULL)
        {
           head=newnode;
           tail=newnode;
        }
        tail->next=newnode;
        tail=tail->next;
        size++;

	}

    int dequeue() {

        if (isEmpty())
            return -1;
        int ans=head->data;
        Node*temp=head;
        head=head->next;
        delete temp;
        size--;
        return ans;
    }

    int front() {

        if (isEmpty())
            return -1;
        return head->data;
    }
};

int main() {
    Queue q;

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
