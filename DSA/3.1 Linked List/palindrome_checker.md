# Palindrome Checker in singly Linked List

### What is Singly Linked List (SLL)? 
    Single linked list is a sequence of elements in which every element is linked to its next element in the sequence.
    It can be traversed in only one direction from head to the last node (tail).

   ![SLL](https://media.geeksforgeeks.org/wp-content/uploads/singly-linkedlist.png "Singly Linked List")

### What is Palindrome?
    A palindrome is a sequence of characters that reads the same from backward and forward.
    Example- 12321, 565, racecar, madam, etc are palindromes.

### Algorithm to Check Linked List is Palindrome or Not (By reversing the list)

   In this algorithm, we reverse half of the linked list. Following 4 operations are needed for implementing the algorithm:
   1. Find the middle element of the linked list
   2. Reverse the second half of the linked list
   3. Then, we check if the first half and second half are same by comparing node by node
   4. Then, we Construct the original linked list by reversing the second half again and attaching it back to the first half

   Here, we divide linked list into two halves. 
   If number of nodes are even, then first and second half contain exactly half nodes.
   If number of nodes are odd, we don't need to compare the middle element. So, we take a separate variable 'midnode' for middle element. Rest list is compared node by node.

### C++ Code for Palindrome Checker of Singly linked list

    #include<iostream>
    using namespace std;
 
    struct Node {
        int val;
        Node *next;
        Node() : val(0), next(nullptr) {}
        Node(int x) : val(x), next(nullptr) {}
        Node(int x, Node *next) : val(x), next(next) {}
    };

    // Function to Reverse the List
    Node* rev_list(Node* head)
    {
        Node *previous=NULL;
        Node *current=head;
        Node *next=NULL;
        while(current!=NULL)
        {
            next=current->next;
            current->next=previous;
            previous=current;
            current=next;
        }
        return previous;
    }

    // Function to find the mid of linked-list
    Node* find_mid(Node* head,int n)
    {
        Node *first=head,*second=head;

        while(second!=NULL && second->next!=NULL)
        {
            first=first->next;
            second=second->next->next;
        } 
        if(n&1)
            return first->next;
        else
            return first;
    }

    // Return if the Linked List is palindrome  
    bool check_palindrome(Node* head) {
        if(head==NULL || head->next==NULL)
            return true;

        Node *tmp=head;
        int n=0;
        while(tmp!=NULL)
        {
            tmp=tmp->next;
            n++;
        }
        tmp=head;
        Node *middle_of_head=find_mid(tmp,n);
        Node *reverse_of_head=rev_list(middle_of_head);
        while(reverse_of_head!=NULL)
        { 

            if(head->val!=reverse_of_head->val)
                return false;

            reverse_of_head=reverse_of_head->next;
            head=head->next;
        }
        return true;
    }

    // Function to take input of Linked List
    void insert_in_linked_list(struct Node** head, int value)
    {
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

        new_node->val = value;
        new_node->next = *head;
        *head = new_node;
    }


    int main(){

        string s;
        cout<<"Enter the string: ";
        cin>>s;

        struct Node* head = NULL;
        for (int i = s.size()-1; i >= 0; i--) {
            insert_in_linked_list(&head, s[i]);
        }

        int answer = check_palindrome(head);

        if(answer == 1)
                cout<<"The given string is Palindrome";
        else
            cout<<"The given string is not Palindrome";

    return 0;
    }


### Time Complexity:
    O(N) because we iterate through each of the elements in the linked list at least half the time (N/2).
    O(N/2)=O(N)
### Space Complexity:
    O(1) as we don't use any extra space to find the outcome.

### Examples:
    1. Input: aba
    Output: Given string is palindrome
    2. Input: caba
    Output: Given string is not palindrome
    3. Input: 12321
    Output: Given string is palindrome
    4. Input: 2331
    Output: Given string is not palindrome
    
