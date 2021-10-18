# Generic Fundamentals and Importance

Generics were introduced by JDK 5. Two major consequences of the feature were, first, it added a new syntactical element to the language. Second, it changed many of the classes and methods in core API. 

## What are Generics?

Going by literal meaning, generics means parameterized types. they enable us to create classes, interfaces and methods in which can work in type-safe manner with various kinds of data. In short we can specify the type of data we are operating upon as a parameter to a generic class, interface or method. 

For example, consider the following program
```
public class stack {
    int[] stack;
    int top = -1;
    int maxSize;

    public stack(int size) {
        maxSize = size;
        stack = new int[size];
    }

    public void push(int a) {
        if (top == maxSize) {
            System.out.println("Overflow");
        } else {
            top += 1;
            stack[top] = a;
        }
    }

    public void pop() {
        if (top == -1) {
            System.out.println("Underflow");
        } else {
            top -= 1;
        }
    }

    public int peek() {
        return stack[top];
    }

    public static void main(String[] args){
        stack s1 = new stack(5);
        s1.push(3);
        System.out.println(s1.peek());
        s1.pop();
    }
}
```

Here we have created a stack data structure of `integer` type with 3 methods `push()`, `pop()` and `peek()`. But what if now we want to implement a stack data structure for `float` type or for `String` type? Writing separate classes for each type creates redundancy and makes code difficult to maintain. 

Generics overcome such shortcomings, let's see how this program can be written using generics. 
```
public class stack<T>{
    T[] stack;
    int top = -1;
    int maxSize;

    public stack(int size) {
        maxSize = size;
        stack = (T[]) new Object[size];
    }

    public void push(T a) {
        if (top == maxSize) {
            System.out.println("Overflow");
        } else {
            top += 1;
            stack[top] = a;
        }
    }

    public void pop() {
        if (top == -1) {
            System.out.println("Underflow");
        } else {
            top -= 1;
        }
    }

    public T peek() {
        return stack[top];
    }

    public static void main(String[] args){
        stack<Integer> s1 = new stack<Integer>(5);
        s1.push(3);
        System.out.println(s1.peek());
        s1.pop();

        stack<Float> s2 = new stack<Float>(5);
        s2.push(3.2f);
        System.out.println(s2.peek());
        s2.pop();

        stack<String> s3 = new stack<String>(5);
        s3.push("Hello");
        System.out.println(s3.peek());
        s3.pop();
    }
}
```

Instead of creating separate classes for each datatype we can easily create a generic class which will handle all datatype. <br />
Here, `stack<T> s = new stack<T>(size);` creates an stack of `T` type. This allows us to use same class for a `Integer`, `Float` and `String` type stack. 

## Syntax for various Generic Types

### Generic Classes

1. Class with single type parameter:
```
class Gen<T>{
    // Data members
    T genericVar;
    T[] genericArray;
    Vector<T> genericVector;

    // Constructor
    <T> Gen(T arg){

    }

    // Methods
    T retSomethingGeneric(T arg1, T arg2){

    }
}
```

2. Class with two type parameeter:

```
class Gen2<T, U>{
    
}
```

### Generic Interfaces

```
interface GenericInterface<T>{
    T doSomethingGeneric();
    void doSomethingNormal();
}
```

### Generic methods

```
class example{

    public <T> void genericMethod(T[] arg){

    }
}
```



## Why are generics important?

1. Generics allow us to reuse the same code for multiple datatypes. 
2. Generics implement type safety, i.e., Errors appear at compile type than at runtime. 
3. Generics exempt user from individual type casting.
4. Generics implements the concept of polymorphism, which is an important aspect of OOPS programming paradigm. 
