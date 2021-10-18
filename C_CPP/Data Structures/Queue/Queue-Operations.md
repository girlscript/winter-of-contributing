# Queue 

## What is Queue ?

A **queue** is basically a linked list where data can be **inserted** into it only from the **rear end** and can be **deleted** from the **front end**.
A queue is a _first in first out_(**FIFO**) structure. The queue implementation needs to keep a track of front and rear ends of the queue.

<div align="center"> 
<img src = "https://user-images.githubusercontent.com/76544476/136729206-69bf88f3-79f9-4c6d-ba8b-13f06be9c904.png" width="500" height="300">
</div>

<p align=center> Fig:1  	

## Queue Operations

There are 4 operations in queue and they are listed below:
- Enqueue
- Dequeue
- Queue front
- Queue rear <br>

### Enqueue

Insertion of data/element into queue is known as **Enqueue**. Once the data have been inserted, the new elements will be in the rear end of queue.
If there is no more of space/room for another element to be inserted, then the queue is in **Overflow** condition.

<div align="center"> 
<img src = "https://user-images.githubusercontent.com/76544476/136730297-db0af07b-c2dd-4efb-92ed-2290de523b24.png" width="400" height="400">
</div>

<p align=center> Fig:2

### Dequeue

Deletion of data/element from queue is known as**Dequeue**. Data at the front of queue can be removed and returned to the user from the queue. 
If there are no data in the queue already and if dequeue is aimed, then the queue is in **Underflow** condition. 
	
<div align="center"> 
<img src = "https://user-images.githubusercontent.com/76544476/136732398-e98a90fe-22a4-4383-af69-6bc27f14e982.png" width="400" height="400">
</div>

<p align=center> Fig:3


### Queue Front 

Retrieval of data from the front of the queue is done with **Queue Front**. 
If there is no data present in the queue and when the queue front is attemped, then the queue is in **Underflow** condition.

<div align="center"> 
<img src = "https://user-images.githubusercontent.com/76544476/136823803-91a956e0-2abc-4115-82a3-85cf59018962.png" width="400" height="400">
</div>

<p align=center> Fig:4

### Queue Rear

Retrieval of data from the rear of the queue is done with **Queue Rear**.
If there is no data present in the rear and when the queue rear is attemped, then the queue is in **Underflow** condition.

<div align="center"> 
<img src = "https://user-images.githubusercontent.com/76544476/136824321-8df1e01c-7e76-494d-a0a5-27190869a6c0.png" width="400" height="300">
</div>

<p align=center> Fig:5

### Program Demonstration:

```Cpp
#include <iostream>
using namespace std;
void enqueue(int [],int &,int &,int,int);
void dequeue(int [],int &,int &);
void queueFront(int [],int &);
void queueRear(int [],int &);
void display(int [],int &,int &);
int main()
{
    int queue[100],front=-1,rear=-1,n,x,key,choice;
    int result;
    char c;
    cout<<"Enter the size of queue :"<<endl;
    cin>>n;
    
    do {
		cout << "MENU:1.Enqueue 2.Dequeue 3.Display queue 4.Display queue front 5. Display queue rear\n";
		cin >> choice;
		switch (choice)
		{
	
        case 1:cout << "Enter the element for insertion: "; 
               cin >> x; 
               enqueue(queue, front, rear,x,n); 
               break;
		case 2:dequeue(queue, front, rear); 
		       break;
		case 3:display(queue, front, rear); 
		       break;
		case 4:queueFront(queue, front); 
		       break;
		case 5:queueRear(queue, rear);
		       break;
		}
		cout << "press 'y' if you want to continue: ";
		cin >> c;
	   } while (c == 'y');
}
void enqueue(int queue[],int &f,int &r,int x,int s)
{
    if(r>=s-1)
     cout<<"Queue Overflow"<<endl;
    else
     {
         r++;
         queue[r]=x;
         if(f==-1)
          {
              f++;
          }
     }
}
void dequeue(int queue[],int &f,int &r)
{
    int x;
    if(f==-1)
     cout<<"Queue Underflow"<<endl;
    else
     {
         x=queue[f];
         if(f==r)
          {
              f=r=-1;
          }
          else
          {
              f++;
          }
     }
     cout<<x<<" Deleted from Queue"<<endl;
}
void queueFront(int queue[],int &f)
{
    cout<<"The front element is "<<queue[f]<<endl;
}
void queueRear(int queue[],int &r)
{
    cout<<"The Rear element is "<<queue[r]<<endl;
}
void display(int queue[],int &f,int &r)
{
    if(f==-1) 
     cout<<"QUEUE IS EMPTY"<<endl;
    else
     {
         for(int i=f;i<=r;i++)
         {
             cout<<queue[i]<<" ";
         }cout<<endl;
     }
}


```

### Output:

> Enter the size of queue : <br>
> 3 <br>
> MENU:1.Enqueue 2.Dequeue 3.Display queue 4.Display queue front 5. Display queue rear <br>
> 1 <br>
> Enter the element for insertion: 10 <br>
> press 'y' if you want to continue: y <br>
> MENU:1.Enqueue 2.Dequeue 3.Display queue 4.Display queue front 5. Display queue rear <br>
> 1 <br>
> Enter the element for insertion: 20 <br>
> press 'y' if you want to continue: y <br>
> MENU:1.Enqueue 2.Dequeue 3.Display queue 4.Display queue front 5. Display queue rear <br>
> 1 <br>
> Enter the element for insertion: 30 <br>
> press 'y' if you want to continue: y <br>
> MENU:1.Enqueue 2.Dequeue 3.Display queue 4.Display queue front 5. Display queue rear <br>
> 3 <br> 
> 10 20 30 <br>
> press 'y' if you want to continue: y <br>
> MENU:1.Enqueue 2.Dequeue 3.Display queue 4.Display queue front 5. Display queue rear <br>
> 4 <br>
> The front element is 10 <br>
> press 'y' if you want to continue: y <br>
> MENU:1.Enqueue 2.Dequeue 3.Display queue 4.Display queue front 5. Display queue rear <br>
> 5 <br>
> The Rear element is 30 <br>
> press 'y' if you want to continue: y <br>
> MENU:1.Enqueue 2.Dequeue 3.Display queue 4.Display queue front 5. Display queue rear <br>
> 2 <br>
> 10 Deleted from Queue <br>
> press 'y' if you want to continue: y <br>
> MENU:1.Enqueue 2.Dequeue 3.Display queue 4.Display queue front 5. Display queue rear <br>
> 3 <br>
> 20 30 <br>
> press 'y' if you want to continue: n <br>
	
	
	
	
	
#### Source:

Fig:1 
[Slidetodoc](https://slidetodoc.com/15-3-stacks-a-stack-is-a-linear/)
<br>
Fig:2
[Programiz](https://www.programiz.com/dsa/circular-queue)
<br>
Fig:3
[Stackexchange](https://tex.stackexchange.com/questions/489987/how-to-draw-stack-and-queue-data-structure)
<br>
Fig:4
[Hackerearth](https://www.hackerearth.com/practice/data-structures/queues/basics-of-queues/tutorial/)
<br>
Fig:5
[Javapoint](https://www.javatpoint.com/array-representation-of-queue)
<br>
