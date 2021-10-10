# **Suspending, resuming and stopping threads**

Core Java provides complete control over multithreaded program. You can develop a multithreaded program which can be suspended, resumed, or stopped completely based on your requirements.

The functions of Suspend, Resume and Stop a thread is performed using Boolean-type flags in a multithreading program. These flags are used to store the current status of the thread.


1. If the suspend flag is set to true then run() will suspend the execution of the currently running thread.
2. If the resume flag is set to true then run() will resume the execution of the suspended thread.
3. If the stop flag is set to true then a thread will get terminated.

**public void suspend() :**

The suspend() method of thread class puts the thread from running to waiting state. This method is used if you want to stop the thread execution and start it again when a certain event occurs. This method allows a thread to temporarily cease execution. The suspended thread can be resumed using the resume() method.

**Return :**
This method does not return any value.

**SecurityException :**
If the current thread cannot modify the thread.




```python
public class JavaSuspendExp extends Thread  
{    
    public void run()  
    {    
        for(int i=1; i<5; i++)  
        {    
            try  
            {  
                // thread to sleep for 500 milliseconds  
                 sleep(500);  
                 System.out.println(Thread.currentThread().getName());    
            }catch(InterruptedException e){System.out.println(e);}    
            System.out.println(i);    
        }    
    }    
    public static void main(String args[])  
    {    
        // creating three threads   
        JavaSuspendExp t1=new JavaSuspendExp ();    
        JavaSuspendExp t2=new JavaSuspendExp ();   
        JavaSuspendExp t3=new JavaSuspendExp ();   
        // call run() method   
        t1.start();  
        t2.start();  
        // suspend t2 thread   
        t2.suspend();   
        // call run() method   
        t3.start();  
    }    
}  
```

**public void resume()**

The resume() method of thread class is only used with suspend() method. This method is used to resume a thread which was suspended using suspend() method. This method allows the suspended thread to start again.

**Return :** This method does not return any value.

**SecurityException :** If the current thread cannot modify the thread.





```python
public class JavaResumeExp extends Thread  
{    
    public void run()  
    {    
        for(int i=1; i<5; i++)  
        {    
            try  
            {  
                // thread to sleep for 500 milliseconds  
                 sleep(500);  
                 System.out.println(Thread.currentThread().getName());    
            }catch(InterruptedException e){System.out.println(e);}    
            System.out.println(i);    
        }    
    }    
    public static void main(String args[])  
    {    
        // creating three threads   
        JavaResumeExp t1=new JavaResumeExp ();    
        JavaResumeExp t2=new JavaResumeExp ();   
        JavaResumeExp t3=new JavaResumeExp ();   
        // call run() method   
        t1.start();  
        t2.start();  
        t2.suspend(); // suspend t2 thread   
        // call run() method   
        t3.start();   
        t2.resume(); // resume t2 thread  
    }    
}  

```





**public void stop()**

The stop() method of thread class terminates the thread execution. Once a thread is stopped, it cannot be restarted by start() method.

**Syntax :**
public final void stop()  
public final void stop(Throwable obj)  

**obj :** The Throwable object to be thrown.


**Return :** 
This method does not return any value.

**SecurityException :** This exception throws if the current thread cannot modify the thread.





```python
public class JavaStopExp extends Thread  
{    
    public void run()  
    {    
        for(int i=1; i<5; i++)  
        {    
            try  
            {  
                // thread to sleep for 500 milliseconds  
                sleep(500);  
                System.out.println(Thread.currentThread().getName());    
            }catch(InterruptedException e){System.out.println(e);}    
            System.out.println(i);    
        }    
    }    
    public static void main(String args[])  
    {    
        // creating three threads   
        JavaStopExp t1=new JavaStopExp ();    
        JavaStopExp t2=new JavaStopExp ();   
        JavaStopExp t3=new JavaStopExp ();   
        // call run() method   
        t1.start();  
        t2.start();  
        // stop t3 thread   
        t3.stop();  
        System.out.println("Thread t3 is stopped");    
    }    
}  
```
