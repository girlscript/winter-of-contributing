# JOIN()

The join() method is provided by **java.lang.Thread** class. It causes the currently running threads to stop executing until the thread it joins with completes its task.

There are three overloaded join functions.

1. **join():** It will put the current thread on wait until the thread on which it is called is dead. If thread is interrupted then it will throw InterruptedException.
  
    **Syntax:**
    >public final void join()

2. **join(long millis):** It will put the current thread on wait until the thread on which it is called is dead or wait for specified time (milliseconds).

    **Syntax:**
    > public final synchronized void join(long millis)

3. **join(long millis, int nanos):** It will put the current thread on wait until the thread on which it is called is dead or wait for specified time (milliseconds + nanos).

    **Syntax:**
    > public final synchronized void join(long millis, int nanos)

join() allows the programmer to specify a waiting period. Since thread execution depends on OS implementation, it doesn't guarantee that the current thread will wait only for given time.

## Why we use join() method?
In normal circumstances we generally have more than one thread, thread scheduler schedules the threads, which does not guarantee the order of execution of threads.

## Without using join()
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

## With join()

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
