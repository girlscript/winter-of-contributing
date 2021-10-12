# Majority Element


## Table of Contents
- [Overview](#overview)
- [Example](#example)
- [Solution](#solution)
    - [Iterative Approach](#iterative-approach)
        - [Approach](#approach-iterative)
        - [Implementaion](#implementation-iterative)
        - [Complexity Analysis](#complexity-analysis-iterative)
    - [Efficient Approach](#recursive-approach)
        - [Approach](#approach-recursive)
        - [Implementation](#implementation-recursive)
        - [Complexity Analysis](#complexity-analysis-recursive)


## Overview
    Given pointer to the head node of a linked list, the task is to reverse the linked list. We need to reverse the list by changing the links 
    between nodes.

## Example
    Input:
            N = 5
            1 2 3 4 5
    Output:
            5 4 3 2 1


## Solution
### Iterative-Approach
#### Approach-(Iterative)
    Initialize three pointers prev as NULL, curr as head and next as NULL.
    Iterate through the linked list. In loop,
    Change next of current, store next of curr in next, then change next of current and this is where actual reversal happens. Now,
    Move prev and curr one step forward

#### Implementation-(Iterative)
        void reverse()
        {
            Node* current = head;
            Node *prev = NULL, *next = NULL;
            while (current != NULL) {
                next = current->next;
                current->next = prev;
                prev = current;
                current = next;
            }
            head = prev;
        }

#### Complexity-Analysis-(Iterative)
    Time Complexity : O(n)
    Space Complexity : O(1)

### Recursive-Approach
#### Approach-(Recursive)
    1. Divide the list in two parts - first node and rest of the linked list.
    2. Call reverse for the rest of the linked list.
    3. Link rest to first.
    4. Fix head pointer

#### Implementation-(Recursive)
        Node* reverse(Node* head)
        {
            if (head == NULL || head->next == NULL)
                return head;
            Node* rest = reverse(head->next);
            head->next->next = head;
            head->next = NULL;
            return rest;
        }

#### Complexity-Analysis-(Recursive)
    Time Complexity : O(n)
    Space Complexity : O(1)