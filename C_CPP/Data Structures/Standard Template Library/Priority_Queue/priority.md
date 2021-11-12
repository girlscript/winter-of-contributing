# Priority Queue 
We can say a priority is a data structure in which each element is given a priority.We can say a priority of the element will be used to decide the order in which the elements will be treated first.We can say a Priority Queue is known as an ascending - priority queue,if the item with the smallest key has the highest priority(that means,delete the smallest element always).Similary,a priority queue is said to be a decending - priority queue if the item with the largest key has the highest priority (delete the maximum element always). Since these two types are symmetric we will concentrating on one of them ascending -priority queue.
Following are the principal methods of a Priority Queue.
### Main Priority Queues  Operations
 - **Insert(key,element)** − Inserts an element with key to the priority queue.Elements are ordered based on key.
 - **DeletionMin/DeleteMax** − Remove and return the element with he smallest/key.
 ## Implementation of a Priority Queue
There are two route to implement a priority queue. We can use any type of it.First one is a sorted list and another one is unsorted list for storing the elements.In sorted list when an element has to be taken out, the queue will not have to be searched for the element with the highest priority(smallest key) or In unsorted list that insertions are always done at the end of the list.Every time when an element has to be removed from the list, the element with the highest priority(smallest key) will be searched and removed. we know  in sorted list there has takes O(n) time to insert an element in the list and for deletion it takes  only O(1) for an element.On the other side,an unsorted list will take O(1) time to insert an element and for deletion O(n) time for an element from the list.
Practically, both these actions are influence.
beacuse it is takes roughly O(log n) time or less.
 ## Priority Queue Representation

![image](https://user-images.githubusercontent.com/63473496/134657811-39221427-9e08-4386-9fd4-21960a4df30f.png)

 We're going to implement Queue using array.There is few more operations supported by queue which are following :-

**Peek** − get the element at front of the queue.

**Display** - To display all element

**IsFull** − check if queue is full.

**IsEmpty** − check if queue is empty.
### Insert / Enqueue Operation
Whenever an element is inserted into queue, priority queue inserts the item according to its order(lower number is treated as more priority).so,we insert first high priority element and so on.

### Deletion / Dequeue Operation
To delete an element, we find the first nonempty
queue and then process the front element of
the first non-empty queue.Whenever an element is to be removed from queue, queue get the element using item count. Once element is removed. Item count is reduced by one.

# Demo Program
    #include<stdio.h>
    #define max 5 	/* insert maximum 5 items */
    int PQ[2][max];
    int F=-1; //Front   /* we are declare rear and front is -1 because there is no element we can say empty queue */
    int R=-1; //Rear
    int item,priority;
    void insertion();
    void arrange();
    void deletion();
    int isfull();
    int isempty();
    int size_PQ();
    void display();
    void peek();
    int main()
    {
    	int ch,x,y;
    	do{
    	printf("\n1.insert\t2.arrange\t3.delete\t4.checkfull\t5.check empty\t6.peek\t7.size\t8.display\t9.exit\n");
    	printf("enter your choice:\t");
    	scanf("%d",&ch);
     		switch(ch){
            		case 1:insertion();
            		break;
            		case 2:arrange();
            		break;
            		case 3:deletion();
            		break;
            		case 4:x=isfull();
            		if(x==1)
	           		printf("\nqueue is full");
	           		else
	           		printf("\nnot full");
            		break;
            		case 5:x=isempty();
            		if(x==1)
	           		printf("\nqueue is empty");
	           		else
	           		printf("\nnot empty");
	           		break;
            		case 6: peek();
            		break;
            		case 7:y=size_PQ();
                    		printf("%d",y);
            		break;
            		case 8:display();
            		}
    	}while(ch!=9);
    }
## Function to insert an element into the queue
    void insertion()
    {
        if(isfull()==1){
        // As queue is full,then elements will not be inserted
        printf("\nqueue is full");
        }
        else
        {
	// if queue is empty,then insert the element
        printf("\nenter the element to insert:\n");
        scanf("%d %d",&item,&priority);
        if(R==-1)
        {
            F=R=0;
        }
        else{
           R=R+1;
        }
        // insert the data 
        PQ[0][R]=item;
        PQ[1][R]=priority;
        }
    }
## Function to arrange an element in the queue
    void arrange()
    {
        int i,j;
#### Swap and continue if condition is not False
        if(size_PQ()>1)
        {
            for(int i=F;i<=R;i++)
            {
                for(j=i+1;j<=R;j++)
                {
                    if(PQ[1][i]>PQ[1][j])
                    {
                        int temp=PQ[1][j];
                        PQ[1][j]=PQ[1][i];
                        PQ[1][i]=temp;
                        int swap=PQ[0][j];
                        PQ[0][j]=PQ[0][i];
                        PQ[0][i]=swap;
                    }
                }
            }
        }
    }
## Function to delete an element from the queue
    void deletion(){
        int a,b;
	// As queue is empty,then elements will be deleted
        if(isempty()==1){
        printf("queue is empty");
        }
        else
        {    
	// remove one item
        a=PQ[0][F];
        b=PQ[1][F];
        printf("\ndeleted element is:%d and priority is %d",a,b);
        if(F==R){
            F=R=-1;
        }
        else{
            F++;
        }
        }
    }
## Function to check queue is full or not 
    int isfull(){
        if(R==max-1)      /* when our queue size is gone to max,that is the condition when queue is full */
	{
            return 1;
        }
        else{
            return 0;
        }
    }
## Function to check queue is empty or not 
    int isempty(){
        if(F==-1 && R==-1){	/* this is the condition when queue is empty */
            return 1;
        }
        else{
            return 0;
        }
    }
## Function to get the element at front of the queue
    void peek(){
        if(!isempty())
        {
            printf("front element is:%d",PQ[F]);
        }
    }
    int size_PQ(){
        int size=R-F+1;
            return size;
    }
 ## Function to display all element
    void display()
    {
        printf("\ndispaly element is:");
        for(int i=F;i<=R;i++)
        printf("%d %d\t",PQ[0][i],PQ[1][i]);
    }

*If we compile and run the above program then it would produce following result −*

![image](https://user-images.githubusercontent.com/63473496/134657950-d4835334-541d-49bd-82bb-8955925f16d9.png)
![image](https://user-images.githubusercontent.com/63473496/134658013-89b0aa8f-f65e-4731-b393-eabe42ebbc90.png)

**Contributor**: [Shalini Kumari](https://github.com/Raghavshalu)
