# Creating Thread in Java

In Java, there are two ways to create a thread:
1. Either by extending __Thread__ class.
2. Or by implementing __Runnable__ interface.

# Thread Class

Multithreading is possible using Java's __Thread__ class. The __Thread__ class contains constructors and methods that helps for creating and performing operations on thread. __Thread__ is a class that extends from __Object__ class and implements the __Runnable__ interface.

Commonly used methods are:

```public void run()``` :

It is used to perform thread-specific actions. It is the entry point of program for achieving __multithreading__.

```start()``` :

A newly created thread is started using ```start()``` method of __Thread__ class. It's function are as follows:
1. A newly created thread starts.
2. Thread moves from new state to the running state.
3. The ```run()``` method will be called when a thread gets a chance to execute.

# Creating thread by Extending Thread class
__Code:__
```java
class MyThread extends Thread{
    public void run()
    {
        int i = 1;
        while(i<=5)
        {
            System.out.println(i+" hello");
            i++;
        }
    }
}
class Test{
    public static void main(String arg[])
    {
        MyThread obj = new MyThread();
        obj.start();
        int i = 1;
        while(i<=5)
        {
            System.out.println(i+" world");
            i++;
        }
    }
}

```

__Output:__
```
1 world
2 world
3 world
4 world
5 world
1 hello
2 hello
3 hello
4 hello
5 hello
```

__Explanation:__

In this program, MyThread class extends Thread class and the ```run()``` method is overrided. The object of MyThread class is created and it calls the ```start()``` method which will directly call the ```run()``` method and will give the above output.

# Runnable Interface

Any class whose objects are intended to be executed by a thread should implement the ```Runnable``` interface 

# Creating Thread by implementing Runnable interface

__Code:__
```java
class MyThread implements Runnable{
    public void run()
    {
        int i = 1;
        while(i<=5)
        {
            System.out.println(i+" hello");
            i++;
        }
    }
}

class Test{
    public static void main(String arg[])
    {
        MyThread obj = new MyThread();
        Thread t = new Thread(obj);
        t.start();
        int i = 1;
        while(i<=5)
        {
            System.out.println(i+" world");
            i++;
        }
    }
}
```

__Output:__
```
1 world
2 world
3 world
4 world
5 world
1 hello
2 hello
3 hello
4 hello
5 hello
```

__Explanation:__

In this program, MyThread class implements the ```Runnable``` interface and the ```run()``` method is overrided.

__Note:__ When you're not extending ```Thread``` class, your class's object will not be recognized as a ```Thread``` class object. As a result, you've to create the ```Thread``` class object explicitly. And pass the object of your class to implement ```Runnable``` interface and the ```run()``` method can be executed.

# Conclusion

Congratulations! You've successfully learned to create threads in Java.

Keep exploring Java :wave:

Contributor : [Abhinandan Adhikari](https://github.com/AbhinandanAdhikari) :heart: