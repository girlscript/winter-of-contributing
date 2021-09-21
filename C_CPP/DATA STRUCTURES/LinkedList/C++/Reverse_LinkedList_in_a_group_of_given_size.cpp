/*
Problem Link:
https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1
Problem Statement:
Given a linked list of size N. The task is to reverse every k nodes
(where k is an input to the function) in the linked list

Example 1:
LinkedList: 1->2->2->4->5->6->7->8
K = 4
Output: 4 2 2 1 8 7 6 5
Explanation:
The first 4 elements 1,2,2,4 are reversed first
and then the next 4 elements 5,6,7,8. Hence, the
resultant linked list is 4->2->2->1->8->7->6->5.

Example 2:
LinkedList: 1->2->3->4->5
K = 3
Output: 3 2 1 5 4
Explanation:
The first 3 elements are 1,2,3 are reversed
first and then elements 4,5 are reversed.Hence,
the resultant linked list is 3->2->1->5->4.

Approach: We will use iterative approach
Note: It can also be solved by recursive approach

Logic to solve the problem:
1:First we create temp_head which point the head not because the head node may be change during
the program
2: Now run a loop till the first k node and track the prev node of the current node
3: Assign Null to the prev->next node means that the first k node separate with the LinkedList and
pointed by the temp_head
4: Assign the address containing by temp_head in prev and temp for use
5: Now reverse the separated node as temp and prev is pointing the address which is contained by temp_head
so the temp_head is secure and will used.
6: Reverse till temp doesn't contain null
7: Now check whether New_head is null if yes then I will point the temp_head and in variable cont assign the
prev which contain the last node and now run the 1 step again until head is not equal to null
8: If new_head not contain null means the 7th step will not be apply then simply assign new_head in cont->next
and in cont assign prev means now the new head last node is pointed by cont after adding the new head in it
now run the first step until head is not equal to null
9: return the new_head as the result
*/
#include<bits/stdc++.h>

using namespace std;

/*
The structure node contain two variable:
Data: Contain the value or element
Next: Point the next node of Linked List
As well as it contain a Constructor which takes data and initialize it
*/
struct node {
  int data;
  struct node * next;

  node(int x) {
    data = x;
    next = NULL;
  }

};

/*
Function to print LinkedList data
It takes one argument head the starting node
It traverse till the node is not equal to null and prints the data inside the node
*/
void printList(struct node * node) {
  while (node != NULL) {
    printf("%d ", node -> data);
    node = node -> next;
  }
  printf("\n");
}
class Solution {
  public:
    /*
    reverse function contain all the code to solve the given problem It takes two agrument
    head: the staring node to LinkedList
    k: size to reverse the LinkedList in a group
    The logic to solve the problem had been discussed above
    */
    struct node * reverse(struct node * head, int k) {
      int i = 1;
      node * temp_head = NULL, * new_head = NULL, * prev = NULL, * temp = NULL, * t = NULL, * before = NULL, * cont = NULL;
      if (k == 1)
        return head;
      while (head) {
        temp_head = head;
        while (i <= k && head != NULL) {
          prev = head;
          head = head -> next;
          i++;
        }
        prev -> next = NULL;
        temp = temp_head;
        prev = temp_head;
        while (temp) {
          t = temp -> next;
          temp -> next = before;
          before = temp;
          temp = t;
        }
        temp_head = before;
        if (new_head == NULL) {
          new_head = temp_head;
          cont = prev;
        } else {
          cont -> next = temp_head;
          cont = prev;
        }
        i = 1;
        temp_head = NULL;
        before = NULL;
      }
      return new_head;
    }
};
/*
Driver code
It's contain all the input and output(UI) code
It return int(0) to show that the code has been successfully run
*/
int main() {
  /*
  t     = number of test cases:
  value = takes data to store in node
  n     = size of the LinkedList
  k     = size to reverse LinkedList in a group
  */
  int t, value, n, k;
  cout << "Enter the number of test case: ";
  cin >> t;

  while (t--) {
    struct node * head = NULL;
    struct node * temp = NULL;
    cout << "Enter the size:";
    cin >> n;

    for (int i = 0; i < n; i++) {
      cin >> value;
      if (i == 0) {
        head = new node(value);
        temp = head;
      } else {
        temp -> next = new node(value);
        temp = temp -> next;
      }
    }

    cout << "Enter the size of a group: ";
    cin >> k;

    Solution ob;
    head = ob.reverse(head, k);
    printList(head);
  }

  return (0);
}
/*
Expected Time Complexity : O(N)
Expected Auxiliary Space : O(1)
Problem Difficulty: Medium
This problem is also known as Reverse List in k nodes.
*/
