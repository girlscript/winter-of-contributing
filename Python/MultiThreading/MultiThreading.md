# MultiThreading in Python  

### Introduction
The thread is finest unit of a program or method performed independently or scheduled by using the operating machine. Inside the computer device, an operating device achieves multitasking with the aid of dividing the method into threads. *A thread is a light-weight method that guarantees the execution of the method separately at the device.* In Python, whilst multiple processors are running on a application, every processor runs concurrently to execute its obligations one by one.  

### MultiThreading
Multithreading is a threading approach in Python programming to run a couple of threads concurrently by using rapidly switching among threads with a CPU help (known as context switching). Besides, it permits sharing of its statistics area with the principle threads interior a technique that proportion data and conversation with different threads easier than individual methods. Multithreading ambitions to carry out more than one duties simultaneously, which increases performance, pace and improves the rendering of the utility.
<p align="center">
   <img src="https://media.geeksforgeeks.org/wp-content/uploads/multithreading-python-21.png" width="450" height="350">
</p>

### Advantages of MultiThreading:  
Following are the advantages to create a multithreaded utility in Python: 
- It guarantees powerful utilization of system assets.
- Multithreaded packages are greater responsive.
- It shares sources and its state with sub-threads which makes it greater within your means.
- It makes the multiprocessor structure more effective because of similarity.
- It saves time by executing multiple threads on the same time.
- The system does no longer require too much memory to store multiple threads.  

### How to achieve multithreading in Python?
There are 2 major modules of multithreading.
1. The thread module
2. The threading module  

### Thread modules
It's began with Python 3, outmoded module, and is accessed only with ```_thread``` that reinforces back compatibility.  
**Syntax:**
~~~
	thread.start_new_thread ( fun_nme, args[, kwargs] )
~~~  
To position into effect the thread module in Python, we need to import a thread module and then define a feature that plays some role through putting the goal with a variable.  
***Example:***
~~~py
	import thread	# importing the thread module  
	import time	# importing the time module  

	def square(nber):	# declare and define square()  
		print(" Calculating squares....")  
		for i in nber:   
			time.sleep(0.3)	#  for every iteration thread waits 0.3 sec
			print('square of',i,': ', i * i)  

	def cube(nber):	# declare and define cube()  
		print(" Calculating cubes....")  
		for j in nber:   
			time.sleep(0.3) 	# for every iteration thread waits 0.3 sec
			print("cube of",j,": ", j * j *j)  

	arr_t = [4, 5, 6, 7, 2]	#Input list to pass as an argument  
	th1 = time.time()	# get total time to execute the functions  
	square(arr_t)	# calling square()  
	cube(arr_t)	# calling cube() 
	
	print(" Total time for execution :", time.time() - t1)	# total time 
~~~
***Output:***
~~~
	Calculating squares....
	square of 5:  25
	square of 4:  16
	square of 6:  36
	square of 2:  4
	square of 7:  49
	Calculating cubes....
	cube of 5:  125
	cube of 4:  64
	cube of 6:  216
	cube of 2:  8
	cube of 7:  343
	Total time for execution : 3.005793809890747
~~~  
### Threading Modules  
The threading module is a excessive-stage implementation of multithreading used to deploy an application in Python. to use multithreading, we want to import the threading module in Python software.  

**Thread Class Methods:**  
- ```start()``` - A start() method is used to initiate the activity of a thread. And it calls handiest as soon as for each thread so that the execution of the thread can start.
- ```run()``` -  The method is used to define a thread's hobby and can be overridden by way of a class that extends the threads class.
- ```join()``` - A join() approach is used to block the execution of every other code until the thread terminates.  

The steps to follow in order to implement the ```threading module``` are:  
#### 1. Import the ```threading module``` :
First, create a thread by importing the module. The ```threading``` module is made up of ```thread``` class.  
**Syntax:**  
```
	import threading
```
#### 2. Declaration of the thread parameters:
It contains the goal function, argument, and kwargs as the parameter in the Thread() class.
- ***Target:*** It defines the function name this is achieved with the aid of the thread.
- ***Args:*** It defines the arguments that are handed to the target function call.  
***Example:***
~~~py
	import threading  
	def func(n):  
		print("Multithreading tutorial ", n)  
	thread1 = threading.Thread( target = func, args =(1, ))  
~~~  
#### 3. Start a new thread:
To begin a thread in Python multithreading, name the thread class's object. The start() approach can be referred to as as soon as for each thread object; in any other case, it throws an exception error.  
**Syntax:**
~~~py
	thread1.start()  
	thread2.start()
~~~
#### 4. Join method: 
It is a approach used in the thread class to halt the principle thread's execution and waits till the entire execution of the thread object. When the thread object is finished, it starts offevolved the execution of the principle thread in Python.  
***Example:***
~~~py
	import threading  
	def func(n):  
		print("Multithreading tutorial", n)  
	Thrd1 = threading.Thread( target = func, args = (2, ))  
	Thrd1.start()  
	Thrd1.join()  
	print("Finished") 
~~~
***Output:***  
~~~ 
	Multithreading tutorial 2
	Finished
~~~  
While the above application is executed, the join() method halts the execution of the principle thread and waits until the thread1 is absolutely completed. Once the thread1 is effectively performed, the primary thread starts offevolved its execution.
#### 5. Synchronizing Threads:
It's a thread synchronization mechanism that ensures no two threads can simultaneously execute a particular phase within the program to access the shared resources. The scenario can be termed as critical sections. We use a race condition to avoid the critical segment situation, wherein two threads do not get right of entry to sources on the same time.

After following all the steps mentioned above, an example of multithreading implementation using threading module:  
**Source Code:**
~~~py
	import time	# importing the module - time  
	import threading	#importing the module - threading
	from threading import *  

	def square(nber):	# declare and define square()  
		print(" Calculating squares....")  
		for i in nber:    
			time.sleep(0.3)	# for every iteration thread waits 0.3 sec 
			print('square of',i,': ', i * i)  

	def cube(nber):	# declare and define cube()  
		print(" Calculating cubes....")  
		for j in nber:  
			time.sleep(0.3)	# for every iteration thread waits 0.3 sec  
			print("cube of",j,": " j * j *j)  

	arr = [5, 2, 4, 6, 7]	# input 
	
	th1 = time.time()	# gives total time taken to run the functions
	thrd1 = threading.Thread(target=square, args=(arr, ))  
	thrd2 = threading.Thread(target=cube, args=(arr, ))  
	thrd1.start()  
	thrd2.start()  
	thrd1.join()  
	thrd2.join()  
	print(" Total time for execution:", time.time() - t)	# displays the total value of time taken  
	print("Executing main thread once more..")  
	print(" Thread 1 and Thread 2 have finished their execution.")  
~~~
**Output:**
~~~
	Calculate squares....
	Calculating cubes....
	square of 5:  25
	cube of 5:  125	
	square of 2:  4
	cube of 2:  8
	square of 4:  16
	cube of 4:  64
	square of 6:  36
	cube of 6:  216
	square of 7:  49
	cube of 7:  343
	Total time for execution: 1.5140972137451172
	Executing main thread once more..
	Thread 1 and Thread 2 have finished their execution.
~~~  

#### References:
For more details, visit the websites below,
- [Geeks for Geeks](https://www.geeksforgeeks.org/multithreading-python-set-1/)
- [javatpoint](https://www.javatpoint.com/multithreading-in-python-3)
- [Tutorialspoint](https://www.tutorialspoint.com/python3/python_multithreading.htm)