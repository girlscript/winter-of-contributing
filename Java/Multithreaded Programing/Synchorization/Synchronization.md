
<h1 id="synchronization-in-java"> <strong><u>Synchronization in Java</u></strong></h1>

<p>
Synchronization, is a process of handling common shared resource accessibility by multiple thread requests.
</p>
<h2 ><strong>Why we need Synchronization?</strong></h2>
<p>
<p>At times when more than one thread try to access a shared 	resource, we need to ensure that resource will be used by only one thread at a time. The process by which this is achieved is called synchronization. So the main purpose of synchronization is to avoid thread interference. </p>
<p>
Consider an example, Suppose we have two different threads  <strong>T1</strong>  and  <strong>T2</strong>. <strong>T1</strong> starts execution and save certain values in a file  <em>temporary.txt</em>  which will be used to calculate some result when <strong>T1</strong> returns. Meanwhile, <strong>T2</strong> starts and before <strong>T1</strong> returns, <strong>T2</strong> change the values saved by <strong>T1</strong> in the file <em>temporary.txt (temporary.txt is the shared resource)</em>. Now obviously <strong>T1</strong> will return wrong result.
</p>
<p>
To prevent such problems, synchronization was introduced. With synchronization in above case, once <strong>T1</strong> starts using  <em>temporary.txt</em>  file, this file will be  <strong>locked</strong><em>(LOCK mode)</em>, and no other thread will be able to access or modify it until <strong>T1</strong> returns.
</p>
<p>
If we do not use synchronization here, and let two or more threads access a shared resource at the same time, it will lead to distorted results.
</p>
</p>

<h2><strong>Important terms to learn synchronization</strong></h2>
<p>
	<ul>
		<li>
		<a href="#resource-sharing">Resource sharing</a>
		</li>
		<li>
		<a href="#critical-section">Critical section</a>
		</li>
		<li>
		<a href="#mutual-exclusion">Mutual exclusion</a>
		</li>
		<li>
		<a href="#locking">Locking/Mutex</a>
		</li>
		<li>
		<a href="#semaphore">Semaphore</a>
		</li>
		<li>
		<a href="#moniter">Moniter</a>
		</li>
		<li>
		<a href="#inter-thread-communication">Inter-thread communication</a>
		</li>
		<li>
		<a href="#race-condition">Race condition</a>
		</li>
</ul>
</p>
<p>
<p id="resource-sharing">
<h4>Resource sharing</h4>
<ul>
<li>It is like more than one thread accessing same resource like file, network connection, data objects etc.</li>
<li>If there is an object in the heap then it can be accessed by multiple threads. Then object becomes the shared object.</li>
</ul>
</p>
<p id="critical-section">
<h4>Critical Section</h4>
<ul>
<li>The lines of code in a thread which are accessing the shared resource/object is the critical section.</li>
</ul>
</p>
<p id="mutual-exclusion">
<h4>Mutual Exclusion</h4>
<ul>
<li>The mutual exclusion states that <q><em>the accessing of one thread prevents the accessing of other.</em></q></li>
</ul>
</p>
<p id="locking">
<h4>Locking/Mutex</h4>
<ul>
<li>Mutex is the variable which is used to lock the threads.</li>
<li>If the mutex variable is set to <strong><em>ZERO</em></strong> then it is free or it is not occupied.</li>
<li>When the time period of one thread is finished then the another thread can not access the object as the mutex will not remain <strong><em>ZERO</em></strong>.</li>
<li>Thread two can access the object if and only if the mutex is <strong><em>ZERO</em></strong> again.</li>
<li>For every shared resource, there should be a lock which is being applied by the thread itself. </li>
<li>Here the threads are responsible for mutual-exclusion.</li>
<li>Mutex was not useful as the threads would be overlapping each other if the mutex was not being locked by the first one.</li>
</ul>
</p>
<p id="semaphore">
<h4>Semaphore</h4>
<ul>
<li>Semaphore was like an operating system before the introducing java to control the coordination of threads as they should not overlap.</li>
<li>It was supported by <strong><em>UNIX</em></strong> operating system.</li>
<li>The semaphore creates the scenario where the thread which have been occupying the object would signal the other after its work is finished.</li>
<li>It creates a block queue where the upcoming thread is to be in waiting state.</li>
<li>The methods used here are wait() and signal().</li>
<li>Here the operating system will have the mutual exclusion.</li>
</ul>
</p>
<p id="moniter">
<h4>Moniter</h4>
<ul>
<li>Here the object itself takes the responsibility of mutual exclusion.</li>
<li>It can be achieved using object orientation.</li>
<li>The complete mechanism is inside the object itself.</li>
<li>The read and write method, the data and the block queue belongs to the shared object itself as it can be accessed by any one of the threads at a particular time.</li>
<li>Here, <em>JAVA</em> makes sure that one thread is accessed at a time.</li>
</ul>
</p>
<p id="inter-thread-communication">
<h4>Inter thread communication</h4>
<ul>
<li>It is the communication between the synchronized threads.</li>
<li>It is a communication between a single producer thread and a consumer thread, to access the write and read method simultaneously.</li>
<li>To achieve the communication the flag=t and flag=f, are used.</li>
</ul>
</p>
<p id="race-condition">
<h4>Race condition</h4>
<ul>
<li>Here, there is a single producer thread and multiple consumer threads.</li>
<li>Here, all consumers do not execute at once they do in a round robin fashion.</li>
<li>When the count is <strong><em>ZERO</em></strong> then it is producers turn.</li>
<li>and when the count is <strong><em>NOT ZERO</em></strong> then it is the consumers turn.</li>
<li>Since there are more than one consumer any of the consumer can access it.</li>
<li>The notify method can open any thread here as they may not be in an order. </li>
<li>The race condition states that <strong><q><em>if one thread is accessing the shared resource and all other are blocked then once the thread has finished working it will inform the thread and any of the threads may access the object just like in a race.</em></q></strong></li>
<li>So, in the above the count method is used to control the race.</li>
<li>The race condition can be avoided by the inter-thread condition.</li>
</ul>
</p>
</p>
<br>
<p>

In Java, there are ```two types``` of synchronization -

1. Process Synchronization
2. Thread Synchronization

Here, we will discuss only <strong><em>Thread synchronization</em></strong>.

<br>

<h2 align="center"><em><u>Thread synchronization</u></em></h2>

<p>
It can be achieved by using the following, <em> three ways </em> -

<em>

1. [`By Using Synchronized Method`](#Synchronized-Method)
2. [`By Using Synchronized Block`](#Synchronized-Block)
3. [`By Using Static Synchronization`](#Static-Synchronization)

</em>
<br>
</p><br>

<h2 align="center" id="Synchronized-Method"><em><u>Synchronized Method</u></em></h2>

<p>
Let us consider an example of a SHOP which provides multiple goods to students according to their stocks available.
</p>

```Java
Example and Syntax:

import  java.util.*;

class  SharedProductResource  {

	private  Map<String,  Integer> products  =  new  HashMap<>();
	
	public  SharedProductResource() {
		products.put("PEN",  new  Integer(10));
		products.put("BOOK",  new  Integer(1));
		products.put("CYCLE",  new  Integer(2));
		products.put("CAMERA",  new  Integer(5));
		products.put("COAT",  new  Integer(1));
}

	public  synchronized  String  buyProduct(String  key) {

		if (products.containsKey(key)) {
			Integer  quantity  =  products.get(key);
			if (!quantity.equals(new  Integer(0))) {
				products.put(key, (quantity -  1));
				return  "Processing Successful."  + key +  " is out for delivery to "  +  Thread.currentThread().getName();
			}
		}
	return  "OOPS!! Product got out of Stock. SORRY!"  +  Thread.currentThread().getName();
	}
}

class  BuyPen  implements  Runnable  {
	
	SharedProductResource  sharedResource  =  null;
	
	public  BuyPen(SharedProductResource  sharedResource) {
		this.sharedResource  = sharedResource;
	}
	
	public  void  run() {
		System.out.println("Buy Pen ->"  +  sharedResource.buyProduct("PEN"));
	}
}

  

class  BuyBook  implements  Runnable  {

	SharedProductResource  sharedResource  =  null; 

	public  BuyBook(SharedProductResource  sharedResource) {
		this.sharedResource  = sharedResource;
	}

	public  void  run() {
		System.out.println("Buy Book ->"  +  sharedResource.buyProduct("BOOK"));
	}
}

  

public  class  Main  {
	public  static  void  main(String[] args) {

		SharedProductResource  sharedResource  =  new  SharedProductResource();

		BuyBook  buyBook  =  new  BuyBook(sharedResource);
		BuyPen  buyPen  =  new  BuyPen(sharedResource);
		
		Thread  student1  =  new  Thread(buyBook,  "Student1");
		Thread  student2  =  new  Thread(buyBook,  "Student2");
		Thread  student3  =  new  Thread(buyPen,  "Student3");
		
		student1.start();
		student2.start();
		student3.start();
	}
}
```
```Java
Output: 
	Buy Pen ->Processing Successful.PEN is out for delivery to Student3
	Buy Book ->Processing Successful.BOOK is out for delivery to Student1
	Buy Book ->OOPS!! Product got out of Stock. SORRY!Student2
```
<p>
In this above example, 
<p>
There is only one stock of <em>BOOK</em>. If there are more than one student demand BOOK to purchase and we didn't use <strong><em>synchronized</em></strong> there will be conflict which one to choose to give the BOOK. 
<br>
This issue can be removed by <strong><em>synchronized</em></strong> keyword. So that only one student will get BOOK among many of them. Rest of them will get a <em>SORRY!</em> message.
</p>
</p>

<br><br>

<h2 align="center" id="Synchronized-Block"><em><u>Synchronized Block</u></em></h2>

<p>
Let us consider an example of a <em>VotingCounter class</em> which will count total number of states and return it.
</p>

```Java
Example and Syntax:

class  VotingCounterRunnable  implements  Runnable  {
	
	private  int  counter  =  0;

	public  int  getCounter() {
		return counter;
	}

	public  void  setCounter(int  counter) {
		this.counter  = counter;
	}

	public  void  run() {
		System.out.println(Thread.currentThread().getName() +  " : Before Implementing -- counter : "  +  getCounter());

		synchronized (this) {
			setCounter(getCounter() +  1);
		}

		System.out.println(Thread.currentThread().getName() +  " : After Implementing -- counter : "  +  getCounter());
	}
}

public  class  Main  {
	public  static  void  main(String[] args) {

	VotingCounterRunnable  counterRunnable  =  new  VotingCounterRunnable();

	Thread  state1  =  new  Thread(counterRunnable,  "STATE1");
	Thread  state2  =  new  Thread(counterRunnable,  "STATE2");
	Thread  state3  =  new  Thread(counterRunnable,  "STATE3");
	Thread  state4  =  new  Thread(counterRunnable,  "STATE4");
	Thread  state5  =  new  Thread(counterRunnable,  "STATE5");

	state1.start();
	state2.start();
	state3.start();
	state4.start();
	state5.start();
	}
}
```
```Java
Output: 
	STATE4 : Before Implementing -- counter : 0
	STATE5 : Before Implementing -- counter : 0
	STATE4 : After Implementing -- counter : 1
	STATE2 : Before Implementing -- counter : 0
	STATE2 : After Implementing -- counter : 2
	STATE3 : Before Implementing -- counter : 0
	STATE3 : After Implementing -- counter : 3
	STATE5 : After Implementing -- counter : 4
	STATE1 : Before Implementing -- counter : 0
	STATE1 : After Implementing -- counter : 5
```
<br><br>

<h2 align="center" id="Static-Synchronization"><em><u>Static Synchronization</u></em></h2>

<p>
Let us consider a simple example that displays numbers form 1 to 5 using <em>Runnable interface.</em>
</p>

```Java
class  MyRunnable  implements  Runnable  {
	public  void  run() {
		MyRunnable.print(); // print method is static so it can be directly invoked using class name.
	}

	public  static  synchronized  void  print() {
		for (int  i  =  0; i <  5; i++) {
			System.out.println(Thread.currentThread().getName() +  " Number: "  + i);
		}
	}
}

public  class  Main  {
	public  static  void  main(String[] args) {

	Thread  thread1  =  new  Thread(new  MyRunnable(),  "Thread 1");
	Thread  thread2  =  new  Thread(new  MyRunnable(),  "Thread 2");

	thread1.start();
	thread2.start();
	}
}
```
```
Output:
	Thread 1 Number: 0
	Thread 1 Number: 1
	Thread 1 Number: 2
	Thread 1 Number: 3
	Thread 1 Number: 4
	Thread 2 Number: 0
	Thread 2 Number: 1
	Thread 2 Number: 2
	Thread 2 Number: 3
	Thread 2 Number: 4
```
<br>
<p>
without <strong><em>synchronized</em></strong> keyword the code and output will differ like this -:
</p>

```Java
class  MyRunnable  implements  Runnable  {
	public  void  run() {
		MyRunnable.print(); // print method is static so it can be directly invoked using class name.
	}

	public static void print() {
		for (int  i  =  0; i <  5; i++) {
			System.out.println(Thread.currentThread().getName() +  " Number: "  + i);
		}
	}
}

public  class  Main  {
	public  static  void  main(String[] args) {

	Thread  thread1  =  new  Thread(new  MyRunnable(),  "Thread 1");
	Thread  thread2  =  new  Thread(new  MyRunnable(),  "Thread 2");

	thread1.start();
	thread2.start();
	}
}
```
```
Output: 
	Thread 1 Number: 0
	Thread 1 Number: 1
	Thread 2 Number: 0
	Thread 1 Number: 2
	Thread 1 Number: 3
	Thread 2 Number: 1
	Thread 1 Number: 4
	Thread 2 Number: 2
	Thread 2 Number: 3
	Thread 2 Number: 4
```
<p>
Here, with the help of above example we can clearly see the difference in the output that when we use <em>synchronized</em> keyword, it helps running threads independently. 
</p>
<br><br>

&nbsp; &nbsp;
[`↑ Back to Top`](#synchronization-in-java) &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
[`↑ Synchronized Method`](#Synchronized-Method) &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
[`↑ Synchronized Block`](#Synchronized-Block) &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
[`↑ Static Synchronization`](#Static-Synchronization) &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;

<br>
<p>Created by <a href="https://github.com/thejayeshsoni" target="_blank">Jayesh Soni</a></p>
<br><hr><br>