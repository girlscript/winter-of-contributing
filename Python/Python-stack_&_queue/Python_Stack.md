# Python Stack :bookmark_tabs:

_________________

## Getting staring with Python Audio

</br>

### :point_right: **Audio link** - [Python Stack](https://drive.google.com/file/d/1cL9rJifP6L--WCjDOyCkUBvgp0F7D9GZ/view?usp=sharing)  

</br>

## Audio Content

_________________

Data structures are the key to organize storage in computers so that we can efficiently access and edit data. </br>

Stacks is one of the earliest data structures defined in computer science. In simple words, Stack is a linear collection of items. It is a collection of objects that supports fast **last-in, first-out (LIFO)** semantics for insertion and deletion .
</br>

It is an array or list structure of function calls and parameters used in modern computer programming and CPU architecture. Similar to a stack of plates at a restaurant, elements in a stack are added or removed from the top of the stack, in a “last in, first out” order.

Unlike lists or arrays, random access is not allowed for the objects contained in the stack.There are two types of operations in Stack.

</br>

### There are two types of operations in Stack

* Push– To add data into the stack.
* Pop– To remove data from the stack.

</br>

### Why and When do we use Stack?

Stacks are simple data structures that allow us to store and retrieve data sequentially.

There are many real-world use cases for stacks, understanding them allows us to solve many data storage problems in an easy and effective way.

Imagine you’re a developer and you are working on a brand new word processor. You need to create an undo feature – allowing users to backtrack their actions until the beginning of the session.</br>

A stack is an ideal fit for this scenario. We can record every action of the user by pushing it to the stack. When the user wants to undo an action they can pop accordingly from the stack.

* **PUSH Operation Push**
   – adds an element at the top of the stack.

   ![Push Operation](../python_stack&_queue/img/image1.png)

</br>

* **POP Operation Pop**
 – removes an element from the top of the stack.

   ![Pop Operation](../python_stack&_queue/img/image2.png)

#### In Python, we can implement python stacks by

* Using the built-in List data structure. Python’s built-in List data structure comes with methods to simulate both stack and queue operations.
* Using the deque library which efficiently provides stack and queue operations in one object.
* Using the queue.LifoQueue Class.

### Applications of Stack Data Structure
Although stack is a simple data structure to implement, it is very powerful. The most common uses of a stack are:

* To reverse a word - Put all the letters in a stack and pop them out. Because of the LIFO order of stack, you will get the letters in reverse order.
* In compilers - Compilers use the stack to calculate the value of expressions like 2 + 4 / 5 * (7 - 9) by converting the expression to prefix or postfix form.
* In browsers - The back button in a browser saves all the URLs you have visited previously in a stack. Each time you visit a new page, it is added on top of the stack. When you press the back button, the current URL is removed from the stack, and the previous URL is accessed.