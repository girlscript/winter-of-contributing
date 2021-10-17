# **Suspending, resuming and stopping threads**

Java executes multiple threadss simultaneously which is known as multithreading program that could be suspended, resumed, or stopped completely based on your requirements.

1. Suspend() method will suspend the execution of the currently running thread.
2. Resume() method will resume the execution of the suspended thread.
3. Stop() method terminates the thread.

**public void suspend() :**

When we use suspend() method, it puts the thread from running to waiting state temporarily. When we want to cease the execution temporarily, we use suspend() method. It is used to stop the thread execution and start it again when a certain event occurs. And thread can go from waiting to runnable state only when resume() method is called on thread. Suspend method is deprecated method.


**public void resume()**

Resume() method is used to resume a thread which was suspended using suspend() method and allows the suspended thread to start again. Resume() mehod of a thread class is only used with suspend() method.


**Suspend()** and **remove()** are deprecated methods because if not used properly they are deadlock prone.


**Program for suspend() and resume() method :**

public class SuspendResume {
    public static void main(String[] args) throws InterruptedException {
    
           final Thread thread1=new Thread("Thread-1"){
                  public void run() {
                        System.out.println(Thread.currentThread().getName()+" has started.");
                        for(int i=0;i<5;i++){
                               try {
                                      Thread.sleep(100);
                               } catch (InterruptedException e) {
                                      e.printStackTrace();
                               }
                               
                               System.out.println("i="+i+" ,ThreadName="+
                                                           Thread.currentThread().getName());
                        }   
                        System.out.println(Thread.currentThread().getName()+" has ENDED.");
                  }
 
           };
           
           Thread thread2=new Thread("Thread-2"){
                  public void run() {
                        System.out.println(Thread.currentThread().getName()+" has started.");
                        for(int i=0;i<5;i++){
                               try {
                                      Thread.sleep(100);
                               } catch (InterruptedException e) {
                                      e.printStackTrace();
                               }
                               
                               System.out.println("i="+i+" ,ThreadName="+
                                                     Thread.currentThread().getName());
                        }   
                        System.out.println(Thread.currentThread().getName()+" has ENDED.");
                  }
 
           };
           
           thread1.start();
           Thread.sleep(10);//make main thread sleep for 10 millisec, 
                                 //This minor delay will ensure that Thread-1 starts before Thread-2.
           thread2.start();
           thread1.suspend();//suspend the thread.
           Thread.sleep(1000);
           thread1.resume();
    }
    
}
 


**public void stop()**

Whenever we want to terminate thread execution, we call stop() method of thread class. This method stops the execution of a running thread and removes it from the waiting threads pool and garbage collected. A thread will also move to the dead state automatically when it reaches the end of its method.


public final class Container implements Runnable {
  private final Vector<Integer> vector = new Vector<Integer>(1000);
 
  public Vector<Integer> getVector() {
    return vector;
  }
 
  @Override public synchronized void run() {
    Random number = new Random(123L);
    int i = vector.capacity();
    while (i > 0) {
      vector.add(number.nextInt(100));
      i--;
    }
  }
 
  public static void main(String[] args) throws InterruptedException {
    Thread thread = new Thread(new Container());
    thread.start();
    Thread.sleep(5000);
    thread.stop();
  }
}

**Stop()** method may be used to generate exceptions that its target thread is unprepared to handle (including checked exceptions that the thread could not possibly throw, were it not for this method).


    static void sneakyThrow(Throwable t) {
    Thread.currentThread().stop(t);
}
