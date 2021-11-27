# JOIN()

The join() method is provided by **java.lang.Thread** class. Join() method puts all the currently running threads on wait(stop their execution) until the thread it joins with completes all its task. It throws InterruptedException if the thread is interrupted .

There are three overloaded join functions.

1. **join():** This method when called will put the current thread on wait until the thread on which it is called has completed its execution(is dead).
  
    **Syntax:**
    >public final void join()

2. **join(long milliseconds):** This method when called makes the current thread stop its execution until the thread on which it is called is dead or wait for specified time (milliseconds).

    **Syntax:**
    > public final synchronized void join(long milliseconds)

3. **join(long milliseconds, int nanoseconds):** This method when called makes the current thread stop its execution until the thread on which it is called is dead or wait for specified time (milliseconds + nanoseconds).

    **Syntax:**
    > public final synchronized void join(long milliseconds, int nanoseconds)

We can specify a waiting period in join() method. But doesn't guarantee that the current threads will wait only for given amount of time since thread execution depends on the implementation of OS.

## Why we use join() method?
Most of the times, we generally have more than one thread. Thread scheduler schedules the threads but it does not guarantee the order of execution of threads.

## When join() method is not used
```java
class TestJoin extends Thread{
    @Override
    public void run(){
        for(int i=0;i<=1;i++){
            try{
                Thread.sleep(500);
                System.out.println("Current Thread: "+Thread.currentThread().getName()+" "+i);
            }
            catch(Exception e){
                System.out.println(e);
            }
        }
    }
}
public class Demo{
    public static void main(String[] args){
        TestJoin t1=new TestJoin();
        TestJoin t2=new TestJoin();
        TestJoin t3=new TestJoin();
        t1.start();
        t2.start();
        t3.start();
    }
}  
```

### Output:
```
Current Thread: Thread-0 0
Current Thread: Thread-2 0
Current Thread: Thread-1 0
Current Thread: Thread-2 1
Current Thread: Thread-0 1
Current Thread: Thread-1 1
```

## When join() method is used 

```java
class TestJoin extends Thread{
    @Override
    public void run(){
        for(int i=0;i<=1;i++){
            try{
                Thread.sleep(500);
                System.out.println("Current Thread: "+Thread.currentThread().getName()+" "+i);
            }
            catch(Exception e){
                System.out.println(e);
            }
        }
    }
}
public class Demo{
    public static void main(String[] args){
        TestJoin t1=new TestJoin();
        TestJoin t2=new TestJoin();
        TestJoin t3=new TestJoin();
        t1.start();
        try{
            t1.join();
        }
        catch(Exception e){System.out.println("Caught exception "+e);}
        t2.start();
        try{
            t2.join();
        }
        catch(Exception e){System.out.println("Caught exception "+e);}
        t3.start();
    }
}  
```

### Output:
```
Current Thread: Thread-0 0
Current Thread: Thread-0 1
Current Thread: Thread-1 0
Current Thread: Thread-1 1
Current Thread: Thread-2 0
Current Thread: Thread-2 1
```


### References :

* [www.journaldev.com](https://www.journaldev.com/1024/java-thread-join-example)
* [www.javatpoint.com](https://www.javatpoint.com/join()-method)
* [www.geeksforgeeks.org](https://www.geeksforgeeks.org/joining-threads-in-java/)
