
# **What is Circular Queue ?**

- The arrangement of the elements Q[0], Q[1], Q[2],.....Q[n] in a circular fashion with Q[1] following Q[n] is called Circular Queue.

- The last node is connected to first node to make a circle.

- It is controlled by two operations: insertion and deletion.

- These two operations implement the FIFO (First In First Out) method.

- Initially, both Front and Rear pointers points to the beginning of the array. It is also known as “Ring Buffer”.

<br />

<p align= "center">
<img src="assets\img-1.png" />
</p>

<br />

## **Why Circular queue is needed?**
---
- Problem : Wastage of memory in standard queue.

<br />

<p align= "center">
<img src="assets\img-2.jpg" />
</p>

<br />

## **Operations on Circular Queue**
---
1. Insertion 

   - Algorithm :

   ```
   STEP 1: If FRONT = 0 and REAR = MAX - 1 Then write "Overflow", Goto STEP 4.


   STEP 2: If FRONT = REAR = -1 Then SET FRONT = REAR = 0
           ELSE IF REAR = MAX - 1 AND FRONT != 0 
                SET REAR = 0
           ELSE 
                SET REAR = REAR + 1
           [END OF IF]


   STEP 3: SET QUEUE [REAR] = VAL 


   STEP 4: EXIT

   ```

   <br />

   > Condition: Queue is full (OVERFLOW)
   <p align= "center">
        <img src="assets\img-3.png" />
   </p>

   <br />
   
   > Condition: If F = R = -1 then F = R = 0
   <p align= "center">
        <img src="assets\img-4.png" />
   </p>

   <br />
   
   > Condition: If REAR = MAX - 1 and FRONT != 0
   <p align= "center">
        <img src="assets\img-5.png" />
   </p>

   <br />
   
   > Condition: REAR = REAR + 1
   <p align= "center">
        <img src="assets\img-6.png" />
   </p>

<br />

2. Deletion

     - Algorithm :

     ```
     STEP 1: If FRONT = -1 Then write "Circular Queue Underflow", Goto STEP 4.


     STEP 2: SET VAL = QUEUE [FRONT]


     STEP 3:  IF FRONT = REAR Then
                    SET FRONT = REAR = -1

              ELSE IF FRONT = MAX - 1
                   SET FRONT = 0

              ELSE
                   SET FRONT = FRONT + 1
              [END OF IF]

     STEP 4: EXIT

     ```

<br />

   > Condition: Queue is Empty (UNDERFLOW)
   <p align= "center">
        <img src="assets\img-7.png" />
   </p>

   <br />

   > Condition: If F = R = 0 then F = R = -1
   <p align= "center">
        <img src="assets\img-8.png" />
   </p>

   <br />

   > Condition: If FRONT = MAX - 1 then FRONT = 0
   <p align= "center">
        <img src="assets\img-9.png" />
   </p>

   <br />

   > Condition: FRONT = FRONT + 1
   <p align= "center">
        <img src="assets\img-10.png" />
   </p>

<br /><br />

## **Implementation of circular queue using array and performing following operations-**

1. **Insertion (Enqueue)**
2. **Deletion (Dequeue)**
3. **Display (forward & reverse)**

  

```
   #include <iostream>
   using namespace std;

   int cqueue[5];
   int front = -1, rear = -1, n=5;

   void insertCQ(int val) {
          if ((front == 0 && rear == n-1) || (front == rear+1)) {
          cout<<"Queue Overflow \n";
          return;
     }
     if (front == -1) {
          front = 0;
          rear = 0;
     } else {
          if (rear == n - 1)
          rear = 0;
          else
          rear = rear + 1;
     }
     cqueue[rear] = val ;
   }

   void deleteCQ() {
   if (front == -1) {
          cout<<"Queue Underflow\n";
          return ;
     }
     cout<<"Element deleted from queue is : "<<cqueue[front]<<endl;

     if (front == rear) {
          front = -1;
          rear = -1;
     } else {
          if (front == n - 1)
          front = 0;
     else
     front = front + 1;
   }
  }

    void displayCQ_forward(){
    int f=front , r=rear;
     if(front == -1){
        cout<<"Queue is empty"<<endl;
        return;
     }
     cout<<"Queue elements are:\n";
     if(f<=r){
          while(f<=r){
          cout<<cqueue[f]<<" ";
          f++;
          }
     }else{
          while(f <= n-1){
          cout<<cqueue[f]<<" ";
          f++;
          }
          f=0;
          while(f <= r){
          cout<<cqueue[f]<<" ";
          f++;
          }
     }
     cout<<endl;
    }


    void displayCQ_reverse(){
    int f=front , r=rear;
     if(front == -1){
          cout<<"Queue is empty"<<endl;
          return;
     }

     cout<<"Queue elements(in reverse order) are:\n";
     if(f<=r){
          while(f<=r){
               cout<<cqueue[r]<<" ";
               r--;
          }
     }else{
          while(r>=0){
               cout<<cqueue[r]<<" ";
               r--;
          }

          r=n-1;
          while(r>=f){
               cout<<cqueue[r]<<" ";
               r--;
          }
     }
     cout<<endl;
    } 
   
```

<br />

## **Output-**

<br />

<p align= "center">
     <img src="assets\img-11.png" />
</p>

<p align= "center">
     <img src="assets\img-12.png" />
</p>


<br /><br />


*Thanks for reading !!*

**Contributor :** [@ Palak Tiwari](https://github.com/palak1101) 











