# **Bit Manipulation** :octocat:

---
Bit manipulation is the act of algorithmically manipulating bits or other pieces of data shorter than a word. Computer programming tasks that
require bit manipulation include low-level device control, error detection and correction algorithms, data compression, encryption algorithms,
and optimization. For most other tasks, modern programming languages allow the programmer to work directly with abstractions instead of bits that
represent those abstractions. Source code that does bit manipulation makes use of the bitwise operations: `AND`, `OR`, `XOR`, `NOT`, and `bit shifts`.
Bit manipulation, in some cases, can obviate or reduce the need to loop over a data structure and can give many-fold speed-ups, as bit 
manipulations are processed in parallel, but the code can become more difficult to write and maintain.

# Bit Hacks – Part 1 (Basic)

Problem 1. The expression n&1 return value 1 or 0 depending upon whether n is odd or even.

> Following is the C++, Java, Python program that demonstrate it:
>> **C++ code:-**
---
```C++
#include <iostream>
using namespace std;
 
int main()
{
    int n = 5;
 
    if (n & 1) {
        cout << n << " is odd";
    }
    else {
        cout << n << " is even";
    }
 
    return 0;
}
```
> **Java code:-**
---
```Java
class Main
{
    public static void main(String[] args)
    {
        int n = 5;
 
        if ((n & 1) != 0) {
            System.out.println(n + " is odd");
        }
        else {
            System.out.println(n + " is even");
        }
    }
}
```
> **Python code:-**
---
```Python

if __name__ == '__main__':
 
    n = 5
 
    if (n & 1) != 0:
        print(n, "is odd")
    else:
        print(n, "is even")
 ```
 
 > **Output**
 `5 is odd`


Problem 2. Detect if two integers have opposite signs or not
The expression output `x^y` is negative if `c` and `y` have opposite signs. We know that for a positive number, the leftmost bit is `0`, and for a negative number,it is `1`. Now for
sign integers, the `XOR` operator will set the leftmost bit of output as `0`, and for opposite sign integers, it will set the leftmost bit as `1`.

> **C++ code:-**
---
```C++
#include <iostream>
#include <bitset>
using namespace std;
 
int main()
{
    int x = 4;
    int y = -8;
 
    cout << x << " in binary is " << bitset<32>(x) << endl;
    cout << y << " in binary is " << bitset<32>(y) << endl;
 
    // true if `x` and `y` have opposite signs
    bool isOpposite = ((x ^ y) < 0);
 
    if (isOpposite) {
        cout << x << " and " << y << " have opposite signs";
    }
    else {
        cout << x << " and " << y << " don't have opposite signs";
    }
 
    return 0;
}
```
> **Java code:-**
```Java
class Main
{
    public static String toBinaryString(int n)
    {
        return String.format("%32s", Integer.toBinaryString(n))
                    .replaceAll(" ", "0");
    }
 
    public static void main(String[] args)
    {
        int x = 4;
        int y = -8;
 
        System.out.println(x + " in binary is " + toBinaryString(x));
        System.out.println(y + " in binary is " + toBinaryString(y));
 
        // true if `x` and `y` have opposite signs
        boolean isOpposite = ((x ^ y) < 0);
 
        if (isOpposite) {
            System.out.println(x + " and " + y + " have opposite signs");
        }
        else {
            System.out.println(x + " and " + y + " don't have opposite signs");
        }
    }
}
```
> **Python code:-**
```Python
if __name__ == '__main__':
 
    x = 4
    y = -8
 
    print(x, "in binary is", bin(x))
    print(y, "in binary is", bin(y))
 
    # true if `x` and `y` have opposite signs
    isOpposite = ((x ^ y) < 0)
 
    if isOpposite:
        print(f"{x} and {y} have opposite signs")
    else:
        print(f"{x} and {y} don't have opposite signs")
```

Output: <br>
`4 in binary is 0b100` <br>
`-8 in binary is -0b100` <br>
`4 and -8 have opposite signs` <br>

# Bit Hacks – Part 2 (Playing with k’th bit)
Problem 1. Turn off k'th bit in a number
The idea is to use bitwise << , & , and ~ operators. Using the expression `~ (1 << (k - 1))`, we get a number with all its bits set, except
the `k'th` bit. If we do a bitwise `AND` of this expression with `n`, i.e., `n & ~(1 << (k -1))`, we get a number which has all bits the same as `n` except
the k'th bit which will be set to `0`.

For example, consider `n = 20` and `k = 3`.
> **C++ code:-**
```C++
#include <iostream>
#include <bitset>
using namespace std;
 
// Function to turn off k'th bit in `n`
int turnOffKthBit(int n, int k) {
    return n & ~(1 << (k - 1));
}
 
int main()
{
    int n = 20;
    int k = 3;
 
    cout << n << " in binary is " << bitset<8>(n) << endl;
    cout << "Turning k'th bit off\n";
    n = turnOffKthBit(n, k);
    cout << n << " in binary is " << bitset<8>(n) << endl;
 
    return 0;
}
```
> **Java code:-**
```Java
class Main
{
    // Function to turn off k'th bit in `n`
    public static int turnOffKthBit(int n, int k) {
        return n & ~(1 << (k - 1));
    }
 
    public static void main(String[] args)
    {
        int n = 20;
        int k = 3;
 
        System.out.println(n + " in binary is " + Integer.toBinaryString(n));
        System.out.println("Turning k'th bit off…");
        n = turnOffKthBit(n, k);
        System.out.println(n + " in binary is " + Integer.toBinaryString(n));
    }
}
```
> **Python code:-**
```Python
# Function to turn off k'th bit in `n`
def turnOffKthBit(n, k):
    return n & ~(1 << (k - 1))
 
 
if __name__ == '__main__':
 
    n = 20
    k = 3
 
    print(n, "in binary is " + bin(n))
    print("Turning k'th bit off…")
    n = turnOffKthBit(n, k)
    print(n, "in binary is " + bin(n))
 ```
 Output: <br>
 20 in binary is 0b10100 <br>
 Turning k'th bit off... <br>
 16 in binary is 0b10000 <br>
 Problem 4. Toggle the k’th bit
 The idea is to use bitwise `^` and `<<` operators. By using the expression `1 << (k-1)`, we get a number with all bitss 0, except the `k'th` bit. If we do 
 bitwise `XOR` of this expression with `n`, i.e., `n ^ (1 << k)` , we can easily toggle its `k'th` bit as `0 ^ 1 = 1` and `1 ^ 1 =0`.
 
 > **C++ code:-**
 ```C++
#include <iostream>
#include <bitset>
using namespace std;
 
// Function to toggle k'th bit of `n`
int toggleKthBit(int n, int k) {
    return n ^ (1 << (k - 1));
}
 
int main()
{
    int n = 20;
    int k = 3;
 
    cout << n << " in binary is " << bitset<8>(n) << endl;
    cout << "Toggling k'th bit of n\n";
    n = toggleKthBit(n, k);
 
    cout << n << " in binary is " << bitset<8>(n) << endl;
 
    return 0;
}
```
> **Java code:-
```Java
class Main
{
    // Function to toggle k'th bit of `n`
    public static int toggleKthBit(int n, int k) {
        return n ^ (1 << (k - 1));
    }
 
    public static void main(String[] args)
    {
        int n = 20;
        int k = 3;
 
        System.out.println(n + " in binary is " + Integer.toBinaryString(n));
        System.out.println("Toggling k'th bit of n…");
        n = toggleKthBit(n, k);
 
        System.out.println(n + " in binary is " + Integer.toBinaryString(n));
    }
}
```
> **Python code:-
```Python
# Function to toggle k'th bit of `n`
def toggleKthBit(n, k):
    return n ^ (1 << (k - 1))
 
 
if __name__ == '__main__':
 
    n = 20
    k = 3
 
    print(n, "in binary is " + bin(n))
    print("Toggling k'th bit of n…")
    n = toggleKthBit(n, k)
 
    print(n, "in binary is " + bin(n))
 ```
 Output:
 `20 in binary is 0b10100` <br>
 `Toggling k'th bit of n...` <br>
 `16 in binary is 0b10000` <br>
 
 # Bit hacks part 2
 XOR Linked List – Overview and Implementation in C/C++
 We know that each node of a double linked list require two pointer fields to store its previous and next node's addresses. On the other hand, each node 
 of the `XOR` linked list requires only a single pointer field, which doesn't store the actual memory addresses but stores the bitwise `XOR` of address for 
 its previous and next node.
 
 To illustrate, let's consider the following double linked list:
 
 ![Doubly-Linked-List-1](https://user-images.githubusercontent.com/66662965/136825453-50a862ac-554c-4190-9ced-3ff4b15f0c55.png)
Here the link field for an equivalent `XOR` linked;ist stores the following values:
`link(A) = NULL ^ adde(B)` //bitwise XOR of NULL with address of node B <br>
`link(B) = addr(A) ^ addr(C)` //bitwise XOR between the address of node A and C <br>
`link(C) = addr(B) ^ addr(D)` //bitwise XOR between the address of node B and D <br>
`link(D) = addr(C) ^ NULL` //bitwise XOR of the address of node A with NULL <br>

---
How this helps?
 We know that `XOR` has the following properties:
 `X^X =0` <br>
 `X^0 = X` <br>
 `X^Y = Y^X` <br>
 ---
 We can easily traverse the XOR linked list in either dorection using the above properties:
 # 1. Traversing the list from left to right:
 Since we are traversing the list from left to right, say we store he previous node's address in some variable. As the previous node information is available, we can get
 the next node's address by `XOR`ing the value in the link field with the previous node's address.
 
 # For example, suppose we are at node `C`, we can get the address of noode `D`, as shown below:
 `addr(B) ^ link(C)` <br>
 `= addr(B) ^ (addr(B) ^ addr(D))` <br>
 `= 0 ^ addr(D)` <br>
 `= addr(D)` <br>
 
 The `XOR` operation cancels `addr(B)` appearing twice in the equation, and all we are left with is the `addr(D)`.
 Similarly, to gett the addredd of the first node A in the list , we can `XOR` the value in the link field with `NULL`.
 
`NULL ^ link(A)`
`= NULL ^ (NULL ^ addr(B))`
`= 0 ^ addr(B)`
`= addr(B)`

# 2. Traversing the list from right to left:
Following a similar logic, to get address of the last node `D` in the list, XOR the `D's` link field value with `NULL`:
`NULL ^ link(D)` <br>
` = NULL ^ (addr(C) ^ NULL)` <br>
`= 0 ^ addr(C)` <br>
`= addr(C)`

For any middle node, say node `C` we can get the previous node `B` as follows:
`addr(D) ^ link(C)` <br>
`= addr(D) ^ (addr(B) ^ addr(D))` <br>
`= 0 ^ addr(B)` <br>
`= addr(B)`

Consider the following program, which construct an `XOR` linked list and traverses it in a forward it in a forward direction using bitwise `XOR` operator properties.
To traverse the complete list, maintain three-pointers `prev`, `curr` and `next` to store the current node address, the previous node address, and the next node address,
respectively. Each iteration of the loop moves these pointers one position forward or backward depending upon which direction we are traversing the list.
> The implementation can be seen below in C and C++ code:-
>> **C code:-**
```C
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
 
// Data structure to store a XOR linked list node
struct Node
{
    int data;
    struct Node* link;
};
 
// Helper function to return XOR of `x` and `y`
struct Node* XOR(struct Node *x, struct Node *y) {
    return (struct Node*)((uintptr_t)(x) ^ (uintptr_t)(y));
}
 
// Helper function to traverse the list in a forward direction
void traverse(struct Node *head)
{
    struct Node* curr = head;
    struct Node* prev = NULL;
    struct Node *next;
 
    while (curr != NULL)
    {
        printf("%d —> ", curr->data);
 
        // `next` node would be xor of the address of the previous node
        // and current node link
        next = XOR(prev, curr->link);
 
        // update `prev` and `curr` pointers for the next iteration of the loop
        prev = curr;
        curr = next;
    }
 
    printf("NULL");
}
 
// Helper function to insert a node at the beginning of the XOR linked list
void push(struct Node **head, int data)
{
    // allocate a new list node and set its data
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
 
    // The link field of the new node is XOR of the current head and `NULL`
    // since a new node is being inserted at the beginning
    newNode->link = XOR(*head, NULL);
 
    // update link value of the current head node if the linked list is not empty
    if (*head)
    {
        // *(head)->link is XOR of `NULL` and address of the next node.
        // To get the address of the next node, XOR it with `NULL`
        (*head)->link = XOR(newNode, XOR((*head)->link, NULL));
    }
 
    // update the head pointer
    *head = newNode;
}
 
int main(void)
{
    // input keys
    int keys[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(keys)/sizeof(keys[0]);
 
    struct Node* head = NULL;
    for (int i = n - 1; i >=0; i--) {
        push(&head, keys[i]);
    }
 
    traverse(head);
 
    return 0;
}
```
> **C++ code:-**
```C++
#include <iostream>
#include <vector>
#include <cstdint>
using namespace std;
 
// Data structure to store a XOR linked list node
struct Node
{
    int data;
    Node* link;
};
 
// Helper function to return XOR of `x` and `y`
Node* XOR(Node* x, Node* y) {
    return (Node*)((uintptr_t)(x) ^ (uintptr_t)(y));
}
 
// Helper function to traverse the list in a forward direction
void traverse(Node* head)
{
    Node* curr = head;
    Node* prev = nullptr;
    Node *next;
 
    while (curr != nullptr)
    {
        cout << curr->data << " —> ";
 
        // `next` node would be xor of the address of the previous node
        // and current node link
        next = XOR(prev, curr->link);
 
        // update `prev` and `curr` pointers for the next iteration of the loop
        prev = curr;
        curr = next;
    }
 
    cout << "nullptr";
}
 
// Helper function to insert a node at the beginning of the XOR linked list
void push(Node* &headRef, int data)
{
    // allocate a new list node and set its data
    Node* newNode = new Node();
    newNode->data = data;
 
    // The link field of the new node is XOR of the current head and nullptr
    // since a new node is being inserted at the beginning
    newNode->link = XOR(headRef, nullptr);
 
    // update link value of the current head node if the linked list is not empty
    if (headRef)
    {
        // `headRef->link` is XOR of null and address of the next node.
        // To get the address of the next node, XOR it with nullptr
        headRef->link = XOR(newNode, XOR(headRef->link, nullptr));
    }
 
    // update the head pointer
    headRef = newNode;
}
 
int main()
{
    // input keys
    vector<int> keys = { 1, 2, 3, 4, 5 };
 
    Node* head = nullptr;
    for (int i = keys.size() - 1; i >=0; i--) {
        push(head, keys[i]);
    }
 
    traverse(head);
 
    return 0;
}
```
 
 
 
 
 
 
 
 
 

