## Multitasking in computers can be achieved in two ways:
1)  Multiprocessing -> this is based on multiple processes being performed at the same time. 
2)  Multithreading -> this is based on multiple threads executed at the same time.

Here, we will be talking about multithreading. 

# Multithreading

Multithreading, as the name suggests, helps perform multitasking in java. It is a process of executing multiple threads concurrently. 

Multithreading is quite famous for reasons like it operates on shared memory, i.e., threads do not allocate separate memory which helps in saving memory and thread shifting takes less time. Hence, it is both memory and time efficient. 

Multithreading is also execution efficient, meaning as multiple threads can operate at the same time; it doesn’t block the execution of the program which is a great feature. The main motive of multithreading is the proper utilization of the CPU. Today multi-core processors are available and multithreading makes it possible to take advantage of such processors.

Now, we are quite convinced of why multithreading is needed. So, let’s dig deeper. 

## What are threads? 

The **orderly flow of control** of a program, the **path** followed in the execution of the program or the **sequential flow of a part of a program** is known as thread. One process can have multiple threads. Threads can also be understood as a **sub-process** or **unit of a process**.

 Even though Java supports multithreading, it should not be confused with the fact that at a time only one thread is being executed.

# Java Thread Class
In Java, multithreading is achieved with the help of thread class (in-built class in java), which in turn provides us with constructors and methods for processing and achieving the desired result using them.
Some of the methods and their types are provided below as it won’t be feasible to list each and every method over here.
1)  start()  [void] -> to start the execution of a program
2)  run()  [void] ->  to perform an action for a thread
3)  getPriority() [int] -> returns the priority of a thread
4)  setPriority()  [void] -> to impose the priority of a thread
5)  currentThread()  [static thread] -> reference to the currently executing thread

## Now, how do we achieve threads?
As thread is an in-built class in java, they can be inherited using the keyword extends:

```Java
class Multithreading extends Thread
{
    public void run() //over-riding the run method of  thread class
    {
        for(int i=0; i<3; ++i )
        System.out.println("we are learning multihreading");
    }
}

class ThreadsAndMultithreading()
{
        public static void main(String[] args) 
            {
            
            Multithreading object= new Multithreading();
            object.start(); //start will automatically call run()
            }
}
```

Here, we will also be having our main() method which is another thread,  we will be calling this function from the main() to execute the run() method, but we will not call run() method directly, rather we will call the start(), [that we saw above] which in turn will automatically call the run() method.

Well, this is not the best way to use the thread class, reason being that the class multithreading might want to extend some other class and since **multiple inheritance** is **not** allowed in java, the class multithreading can only either inherit thread class or the other class that it desires to inherit. 

# Java Runnable Interface
To overcome the problem we faced above due to multiple inheritance in java we use the Runnable interface. Runnable interface is a functional interface and it has only one method i.e., run().

![](img/runnable.jpg)
 
This picture makes it clear that Thread is a class and Runnable is an interface, both are used for multithreading. Thread class has one of the methods as run() while Runnable has only one method i.e., run().

So as per this our code will also be modified. Lets, have a look at that also.

```java
class Multithreading implements Runnable  
{ 
    public void run() { 
        for (int i = 0; i < 3; ++i)
            System.out.println("we are learning multihreading");
    }
}
class ThreadsAndMultithreading()
{
        public static void main(String[] args) 
            {
            
            Multithreading object= new Multithreading();
            object.start(); // Now this will give error because runnable doesn't have any method called start()
            Thread obj= new Thread();
            obj.start(); // this will not give error but it will also not do anything because it will call the start method of the thread class as it is called by an object of thread class
            Thread obj2 =new Thread(object); //you can pass the object of runnable 
            obj.start(); //this will successfully call the method run() of our class multithreading
         
   }
}
```

This way of using the thread class with help of Runnable interface is much efficient as it also lets us inherit the class of our choice.

That's all.
## Happy learning :)

