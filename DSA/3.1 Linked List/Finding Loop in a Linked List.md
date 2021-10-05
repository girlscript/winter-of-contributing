# **Finding Loop (Cycle) in a Linked List**



In this tutorial we are gonna look at one of the most famous questions of Linked List i.e. **How to detect a loop in a Linked List  ?**



This question comes under Easy category and you are gonna see soon why ? 😉

Let's get Started !



### Understanding the problem

As we know a basic linked list node consists of mainly two parts : 

1. Value, and 
2. a pointer to the next node.

The first node of the Linked List is commonly referred as head. In a normal Linked List (with no loop) the first node's next pointer point to second, second node's next pointer point to third, third node's next pointer to fourth and so on. As there is no loop the last node's next pointer points to NULL.



![See the source image](https://3.bp.blogspot.com/-sXOQBd_OCR8/WBBn3QNhOiI/AAAAAAAAALQ/ysaUNOhKMoY59zw2cRxcHioHzdvn8HdNgCLcB/s1600/simpleLinkedList.png)

*Reference* : https://3.bp.blogspot.com/

While in case of a loop in a Linked List everything is same **except the fact that last node's next pointer doesn't points to NULL,** instead it points to some other node present in the Linked List

![img](https://www.includehelp.com/icp/Images/linked-list-loop-1.jpg)

*Reference :* https://www.includehelp.com/

Now our problem of determining loop in a Linked List reduces to the problem of finding whether the last node of our Linked list points to NULL or not. 



### Approaching the Problem

As we have to check whether the last node's next pointer points to NULL or not, the first approach that comes to our mind is to take a temp pointer starting from head and travel the linked list one node at a time, if we encounter NULL means no loop present else loop is there. 

The above approach seems fines but there is on major issue in this approach. If there is no loop in the linked list i.e. if our temp pointer becomes null at any moment, we stop and we can say loop is not present. But what if the loop is present ?  How do we stop ? Our temp pointer will continue to traverse and will stuck in an infinitely loop. We definitely need a condition to come out of the loop if the loop is present. 

How do we solve this problem ? Using a single pointer it is not possible to determine loop because of infinite looping problem !



### Two Pointer Approach 

As we seen above using only one pointer doesn't works, so instead we will use the two pointer approach.

Basically we will be using two pointers **slow pointer** and a **fast pointer**. As we are are using a fast and a slow pointer, this approach is also known as **hare - tortoise approach**. So what basically will be doing in this approach.

Initially we will assign both the slow and fast pointer to our first node i.e. head node. Then staring from the head node we will move slow pointer one node at a time **slow = slow->next** and the fast pointer two nodes at a time **fast = fast->next->next**  (that's what their names slow and fast signifies).  

```c++
Node *slow = head, *fast = head;
while (some condition)
         slow = slow->next;
		fast = fast->next->next;
```



Now let' see what the condition is to break from the loop. Suppose if our Linked List doesn't contains a loop then at some point our fast pointer or the fast->next pointer will become NULL, and we will use it as a breaking condition when the loop is not present.

```c++
while(fast != NULL && fast->next != NULL)
		// if any of the condition becomes true means Loop not present so while loop breaks 
		if(loop present condition)
					// we break out of the while loop as we found the loop	
```



Now what will happen if the loop is present,  both slow and fast pointer will be in the loop forever, the same problem we faced with single pointer approach. We need a condition to break out of the loop in case the loop is present. Here we got a solution as we are using two pointers. As our both slow and fast pointers are moving with different speed ( fast pointer has double speed to that of slow pointer), so in the loop the both pointers will be moving round and round repeating their path.

 Now we know that whenever  two objects are moving in a circular track with different speeds they will definitely meet after some point of time. Yeah you got it right . Same is the case here, after some point of time ( here we refer to number of rotations) the fast and slow pointer will coincide. This will happen only and only if there is a loop present inside the linked list. BINGO,, we got our final condition to break out of the loop and we are almost done here.

```c++
if(fast == slow)
	//Loop present, we break here
```



### Final Complete Code



**Here is the final code in CPP**
        

```cpp
bool hasCycle(Node *head) {
     if (head == NULL) 
        return false;
         
    Node *slow = head, *fast = head->next;
    
    while(fast != NULL && fast->next != NULL){
            if (slow == fast)
                return true; // Loop found
                
            slow = slow->next;
            fast = fast->next->next;
            }
        return false;  // No loop present
}`
```





*Reference*s : 

https://www.geeksforgeeks.org/ <br>
https://iq.opengenus.org/ <br>
https://www.codesdope.com/ <br>







