# Threading in Python

## ***Introduction***
It is important to know about the working of processor to underatand what a thread is and why we create them in our programs. The idea is that the number of cores we have in our processor is the amount of parallel tasks/operations that can be handled by our processor at the exact same time and the speed depends on the clock speed of the core(s). This idea of runing mutliple different tasks simultaneously is called parallelism.

Now, threads are the way we schedule different tasks to be handled by a core. Threading never involves running on multiple cores. Also we are not necessarily doing multiple things in paralle;l, we are just changing the order in which we do different operations.

The important enhancement threading brings in is the concurrent programming. It is not that we are doing things at the same time, but doing things in different timing sequences. We can have multiple threads running at the same time and the CPU on which the threads are running on, can switch between the threads.

## ***What is a Thread?***
A ***thread*** is a separate flow of execution. This means that our program will have two things happening at once. But it should be noted that for most Python 3 implementations the different threads do not actually execute at the same time, rather they merely appear to.

## ***What is Threading?***
It likely to think of ***threading*** as having two (or more) different processors running on your program, each one doing an independent task at the same time. Or, more precisly, the threads may be running on different processors, but they will only be running one at a time.


## ***Why We Use Threading?***
Threading are mainly meant for handling asynchronous event by switching between different flows of executions. Sometimes it may end spped up our taks, but, because of the way ***CPython*** implementation of how Python works, threading may not speed up all tasks. This is due to interactions with the GIL that essentially limit one Python thread to run at a time.

Sometimes architecting our program to use threading can also provide gains in design clarity of our program. Often we run into examples when threading is not necessarily going to make our program run faster because they use threads, rather using threading in them helps to make the design cleaner and easier to reason about.


## ***When Should We Use Threading?***
Tasks that spend much of their time waiting for external events are generally good candidates for threading. Problems that require heavy CPU computation and spend little time waiting for external events might not run faster at all.

This is true for code written in Python and running on the standard CPython implementation. If our threads are written in C they have the ability to release the [GIL](https://wiki.python.org/moin/GlobalInterpreterLock) and run concurrently. We can run on a different Python implementation, then it depends on the way it handles thread.

If we are running a standard Python implementation, writing in only Python, and have a CPU-bound problem, we should check out the multiprocessing module instead.

## ***Implementing Threads***

### ***Starting a Thread***

The Python standard library provides ***threading***, thread, in this module, nicely encapsulates threads, providing a clean interface to work with them.

In the example below the code is running synchronously, in order, and we see the amount of time to complete the execution is about 3 s.

```
  import time                        # importing the time module 
  t1 = time.perf_counter()           # starting the time counter
  print(1)
  time.sleep(3)                      # sleeping for 3 seconds
  print(2)
  t2 = time.perf_counter()           
  print(f'Time taken : {round(t2 - t1, 2)} s')   # printing the time taken to run the script above
```
Output :
```
  1
  2
  Time taken : 3.0 s
```
But we can use threads to put up with different task to speed up the process as below:
```
  import threading                     # importing the threading module
  import time                          # importing the time module

  t1 = time.perf_counter()             
  def task1():
    print(1)
    time.sleep(3)                    # sleeping for 3 seconds

  x1 = threading.Thread(target= task1)   # creating a thread,  passing the func. task1
  x2 = threading.Thread(print(2))        # craeting another thread to pass the print function

  x1.start()                    #starting the threads
  x2.start()                    
  t2 = time.perf_counter()
  print(f'Time taken : {round(t2 - t1, 2)} s')  # printing the time taken to run the script above
```
Output :
```
  2
  1
  Time taken : 0.0 s
```
Now that clarifies how the tasks of running the function `task1()` and the print statement ar executed concurrently, and thus sppeds up the process.

### ***Some examples***
Let us take another example to understand the working of the methods in threading module.

```
  import time                              # importing the time module
  import threading                          # importing the threading module

  def func(y):
    print('ran')
    time.sleep(y)                              # sleeping for y second(s)
    print('done')
  
  x = threading.Thread(target= func, args=(4,))   # creating the thread x,  passing the func. func, argument to the function
  x.start()                       # starting the thread x

  print(threading.activeCount())   # printing the no. of active threads running
```
Output:
```
  ran
  2
  done
```
Here, the function `func` prints 1, sleeps for 1 second then prints done. 
we pass the function into a thread `x` with the argument as a tuple. The `start()` method runs or activates the thread `x` along with the main thread that is already running. Notice there are two threads running the main thread and the thread we defined `x`. So, when the thread `x` starts with printing `ran` and as soon as it encounters the sleep statements, it passes the control to the main thread which prints the number of active threads running on currently, that is `2`. Then, when the sleep is done, it switches back to the thread `x` to print `run`.

We can make it a bit more complicated to understand it better:
```
  def func():
    print('ran')
    time.sleep(1)                  # sleeping for 1 second
    print('done')
    time.sleep(0.8)     # sleeping for .8 seconds
    print("now done")

  x = threading.Thread(target= func)  # creation of a thread,  passing the func. func 
  x.start()

  print(threading.activeCount())
  time.sleep(0.8)         # sleeping for .8 seconds
  print("finally")
```
Output:
```
  ran2

  finally
  done
  now done
```
But if we change the sleep time a bit as follows:
```
 def func():
    print('ran')
    time.sleep(1)
    print('done')
    time.sleep(0.8)
    print("now done")

  x = threading.Thread(target= func)  # creating a thread, passing the func. func 
  x.start()

  print(threading.activeCount())
  time.sleep(1.2)
  print("finally")
```
Output:
```
  ran2

  done
  finally
  now done
```
Clearly, it is like switching between the threads according to the sleep time.

Now, we are going to define two different threads:
```
  def count(n):
  for i in range(1, n+1):
    print(i)               # function will print 1 to n
    time.sleep(.01)
    
  for _ in range(2):    # the _ just means throwaway variables
    x = threading.Thread(target= count, args=(5,))  # creating two different threads for the function count, pass in function and the arguments to the function
    x.start()                                 

  print("Done")
```
Output:
```
  1
  1Done

  2
  2
  3
  3
  4
  4
  5
  5
```
Here, we get 1 1 from the two threads, and the done after it as the sleep state in both the threads brings us back to the main thread. Then, it switches between the threads to give the output as above.

### ***Synchronizing threads***
Sometimes while using global variables inside threads, we can get unexpected results. Take the example below:
```
  ls = []    # global list variable

  def count(n):     # function to append 1 to n to the list ls
    for i in range(1, n+1):  
      ls.append(i)      
      time.sleep(0.5)
      
  def count2(n):
    for i in range(1, n+1):
      ls.append(i)
      time.sleep(0.5)

  x = threading.Thread(target=count, args=(5,))   # creating a thread, passing the func. count and arguments to the function
  x.start()
  y = threading.Thread(target=count2, args=(5,))   # creating a thread, passing the func. count2 and arguments to the function
  y.start()

  print(ls)  # printing the ls
```
Output:
```
  [1, 1]
```
The output can be explained as when the threads encounters the sleep state, it hits the line `print(ls)` and prints it anding the script.

However, we can control this behaviour using `join()` mathod on the threads.
```
  ls = []

  def count(n):
    for i in range(1, n+1):
      ls.append(i)
      time.sleep(0.5)
      
  def count2(n):
    for i in range(1, n+1):
      ls.append(i)
      time.sleep(0.5)

  x = threading.Thread(target=count, args=(5,))  # creating a thread, passing the func. count and arguments to the function
  x.start()
  y = threading.Thread(target=count2, args=(5,))  # creating a thread, passing the func. count2 and arguments to the function
  y.start()

  x.join()  # calling the join method on the thread x, to prevent execution of the next line till the thread is completed
  y.join()   # calling the join method on the thread y, to prevent execution of the next line till the thread is completed

  print(ls)
```
It takes a little longer to run and gives the output as:
```
  [1, 1, 2, 2, 3, 3, 4, 4, 5, 5]
```
Basically, the `join()` method prevents the execution of the next line till the entire thread operation finishes.

```
  ls = []

  def count(n):
    for i in range(1, n+1):
      ls.append(i)
      time.sleep(0.5)
  def count2(n):
    for i in range(1, n+1):
      ls.append(i)
      time.sleep(0.5)

  x = threading.Thread(target=count, args=(5,))
  x.start()
  x.join()

  y = threading.Thread(target=count2, args=(5,))
  y.start()
  y.join()

  print(ls)
```
Output:
```
  [1, 2, 3, 4, 5, 1, 2, 3, 4, 5]
```
Yes, this example makes it more clear. When the program hits upon `x.join()`, it waits till the thread `x` completes its operation. Then switches to thread `y` and finally prints `ls` after the `y` thread has been completed. So it did not even started running thread `y` till it finishes `x`.
That is the idea of synchronizing threads in our program. 

This pretty much sums up the idea of threading and threads. Some vivid and good examples can be found on this [notebook](https://colab.research.google.com/drive/12w9fIOazmPSkHB2luFtuI-5ZFrto-fBp?usp=sharing). We can refer to [this](https://docs.python.org/3/library/threading.html) for more details.

