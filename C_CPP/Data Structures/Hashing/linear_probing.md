## Implementation of Hash Tables with Linear Probing

### Linear probing  
* Linear probing is a technique to resolve collisions in an open addressed hash table. 
* In linear probing each cell of the hash table contains only a single key pair value.
* If collisions occur then the element is inserted in the next space available.

 Let us first create a hash table of size s .
 ```C
 int table[s];//size is s
 ```
and initialize every index with -1.

### **The different operations are**

Let "key" be the element to be inserted and "s" be the size of the hash, then the element is inserted using the following hash function  
```C++
int hash1(int key){
    return (key%s);//returns the position where element has be inserted
}
```
### 1. Insertion
Let us see the steps to insert an element in a hash table  
**Step 1** : We use the hash function to find the position where element has to inserted.
* If the position is empty we simply insert the element
```C++
int index=hash1(key);
    if(table[index]<0){//to check if position is empty like -1 will indicate empty space
        table[index]=key;//if empty we insert the element
        return;
    }
```
* If the position is already occupied by any other element then we search for the next space available
    * If position ***hash[key]%s*** is full then we look for position ***(hash[key]+1)%s***.
    * If position ***(hash[key]+1)%s*** is also full then we look for position ***(hash[key]+2)%s***.
    * If position ***(hash[key]+2)%s*** is also full then we look for position ***(hash[key]+3)%s***.

Likewise, the process continues till we encounter an empty position.

```C++
for(int i=1;i<size;i++){
    int newIndex=(index+i)%size;//we linearly iterate to find next empty space available
    if(table[newIndex]<0){//to check if position is empty like -1 will indicate empty space
        table[newIndex]=key;//if empty we insert the element
        return;
        }
    }
```
> Time complexity in the best case is O (1) and in the worst case is O (size of the hash table)

### 2. **Searching**  
**Step 1**: We use the hash function to find out where the element should be present.  
**Step 2**: If the element is not there then we linearly iterate to the next slots.  
**Step 3**: If we encounter an empty place, it indicates that the element is not present and we simply return.

```C++
void search(int key){
    int index=hash1(key);//hash function to find pos of key
    int i;
    for(i=0;i<size;i++){
        int newIndex=(index+i)%size;//searching for next slots
        if(table[newIndex]==key){
            cout<<"Key found at position "<<newIndex<<endl;
            return;
        }
        if(table[newIndex]==-1){//idicates empty slot
            cout<<"NOT FOUND!!!"<<endl;
            return;
        }
    }
    cout<<"Element is not present!!!";
    return;
}
```

> Time complexity in the best case is O (1) and in the worst case is O (size of the hash table).

### 3. **Deletion**  
**Step 1**: We use the hash function to find out where the element should be present.  
**Step 2**: If the element is not there then we linearly iterate to the next slots.  
**Step 3**: If we encounter an element then we simply replace it with INT_MIN to indicate it as an empty position.  
**Step 4**: If we encounter an empty place, it indicates that the element is not present and we simply return.

```C++
void del(int key){
    int index=hash1(key);//hash function
    int i;
    for(i=0;i<size;i++){
        int newIndex=(index+i)%size;
        if(table[newIndex]==key){
            cout<<"Element deleted"<<endl;
            table[newIndex]=INT_MIN;//replace it with INT_MIN to indicate empty slot
            return;
        }
        if(table[newIndex]==-1){//if empty slot found then simply return
            cout<<"NOT FOUND!!!"<<endl;
            return;
        }
    }
    cout<<"Element is not present!!!";
    return;
}
```

> Time complexity in the best case is O (1) and in the worst case is O (size of the hash table).


## **C++ code**  
```C++
#include<iostream>
using namespace std;
#define size 10

int hash1(int key){
    return (key%size);//returns the position where element has be inserted
}

int table[size];

void insert(int key){
    int index=hash1(key);
    if(table[index]<0){//to check if position is empty like -1 will indicate empty space
        table[index]=key;//if empty we insert the element
        return;
    }
    int i;
    for(i=1;i<size;i++){//we linearly iterate to find next empty space available
        int newIndex=(index+i)%size;
        if(table[newIndex]<0){
            table[newIndex]=key;//if empty we insert the element
            return;
        }
    }
    cout<<"Hash table is full "<<endl;
}

void search(int key){
    int index=hash1(key);//hash function to find pos of key
    int i;
    for(i=0;i<size;i++){
        int newIndex=(index+i)%size;//searching for next slots
        if(table[newIndex]==key){
            cout<<"Key found at position "<<newIndex<<endl;
            return;
        }
        if(table[newIndex]==-1){//idicates empty slot
            cout<<"NOT FOUND!!!"<<endl;
            return;
        }
    }
    cout<<"Element is not present!!!";
    return;
}

void del(int key){
    int index=hash1(key);//hash function
    int i;
    for(i=0;i<size;i++){
        int newIndex=(index+i)%size;
        if(table[newIndex]==key){
            cout<<"Element deleted"<<endl;
            table[newIndex]=INT_MIN;//replace it with INT_MIN to indicate empty slot
            return;
        }
        if(table[newIndex]==-1){//if empty slot found then simply return
            cout<<"NOT FOUND!!!"<<endl;
            return;
        }
    }
    cout<<"Element is not present!!!";
    return;
}

void display(){
    for(int i=0;i<size;i++){
        cout<<"Hash index: "<<i<<"--->";
        if(table[i]>0){
            cout<<table[i];
        }
        cout<<endl;
    }
}

int main(){
    for(int i=0;i<size;i++)
        table[i]=-1;//-1 indicates that the particular index is empty
    int ch;
    while(1){
        cout<<"**************************************************************"<<endl;
        cout<<" 1: Insert an element in hash table\n 2: Search an element\n 3: Display\n 4: Delete\n 5: Exit\n";
        cout<<"**************************************************************"<<endl;
        cout<<"Enter your choice>>>> ";
        cin>>ch;
        switch(ch){
            case 1:
                int num;
                cout<<"enter an element: ";
                cin>>num;
                insert(num);
                cout<<endl;
                break;
            case 2:
                int s;
                cout<<"enter an element to serach: ";
                cin>>s;
                search(s);
                cout<<endl;
                break;
            case 3:
                display();
                cout<<endl;
                break;
            case 4:
                int d;
                cout<<"Enter an element to delete: ";
                cin>>d;
                del(d);
                cout<<endl;
                break;
            case 5:
                exit(0);
            default:
                cout<<"Enter appropriate option!!!!";
                cout<<endl;
                break;
        }
    }
    return 0;
}

```
**Output**

```
**************************************************************
 1: Insert an element in hash table
 2: Search an element
 3: Display
 4: Delete
 5: Exit
**************************************************************
Enter your choice>>>> 1
enter an element: 42

**************************************************************
 1: Insert an element in hash table
 2: Search an element
 3: Display
 4: Delete
 5: Exit
**************************************************************
Enter your choice>>>> 1
enter an element: 22

**************************************************************
 1: Insert an element in hash table
 2: Search an element
 3: Display
 4: Delete
 5: Exit
**************************************************************
Enter your choice>>>> 1
enter an element: 93

**************************************************************
 1: Insert an element in hash table
 2: Search an element
 3: Display
 4: Delete
 5: Exit
**************************************************************
Enter your choice>>>> 1
enter an element: 73

**************************************************************
 1: Insert an element in hash table
 2: Search an element
 3: Display
 4: Delete
 5: Exit
**************************************************************
Enter your choice>>>> 3
Hash index: 0--->
Hash index: 1--->
Hash index: 2--->42
Hash index: 3--->22
Hash index: 4--->93
Hash index: 5--->73
Hash index: 6--->
Hash index: 7--->
Hash index: 8--->
Hash index: 9--->

**************************************************************
 1: Insert an element in hash table
 2: Search an element
 3: Display
 4: Delete
 5: Exit
**************************************************************
Enter your choice>>>> 3
Hash index: 0--->
Hash index: 1--->
Hash index: 2--->42
Hash index: 3--->22
Hash index: 4--->93
Hash index: 5--->73
Hash index: 6--->
Hash index: 7--->
Hash index: 8--->
Hash index: 9--->

**************************************************************
 1: Insert an element in hash table
 2: Search an element
 3: Display
 4: Delete
 5: Exit
**************************************************************
Enter your choice>>>> 2
enter an element to serach: 5
NOT FOUND!!!

**************************************************************
 1: Insert an element in hash table
 2: Search an element
 3: Display
 4: Delete
 5: Exit
**************************************************************
Enter your choice>>>> 2
enter an element to serach: 22
Key found at position 3

**************************************************************
 1: Insert an element in hash table
 2: Search an element
 3: Display
 4: Delete
 5: Exit
**************************************************************
Enter your choice>>>> 4
Enter an element to delete: 22
Element deleted

**************************************************************
 1: Insert an element in hash table
 2: Search an element
 3: Display
 4: Delete
 5: Exit
**************************************************************
Enter your choice>>>> 3
Hash index: 0--->
Hash index: 1--->
Hash index: 2--->42
Hash index: 3--->
Hash index: 4--->93
Hash index: 5--->73
Hash index: 6--->
Hash index: 7--->
Hash index: 8--->
Hash index: 9--->

**************************************************************
 1: Insert an element in hash table
 2: Search an element
 3: Display
 4: Delete
 5: Exit
**************************************************************
Enter your choice>>>> 5
```
