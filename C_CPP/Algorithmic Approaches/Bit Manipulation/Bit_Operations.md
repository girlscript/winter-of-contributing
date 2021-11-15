# Bit Operations
Bit operations are the operations which are performed on a bit , in these operations play with a bit by changing it to 1 or 0 or making a number to another . These operations are also useful in the case of masking the things eg Subset Finding .

## Operations Perfomed on Bit :

### 1. SET BIT : 
Let's take an example if me take a number 13 the binary form is 1101 and we have to change the first bit that is zero to one which the set bit condition , so we have to perform the operation below .
- Take the number that given and perform OR operation while having one left shift operation on the position that we have to change.

```cpp
#include<iostream>
using namespace std;

// Taking left shift and performing AND operation with one for getting the bit.
void print(int bit){
  for(int i=3;i>=0;i--){
        cout<<((num>>i)&1);
    }
    cout<<"\n";
}

int main(){
int a=13;
cout<<"The Binary number after setting bit is : ";
 print(a | (1<<1) ); // Setting bit operation

 return 0;
}
``` 
Output :
```
The Binary number after setting bit is : 1111
```

### 2. UNSET SIT :
This is the operation in which the setted bit is set to unsetted bit on others we can say bit having value one set to zero.
- Take the number that given and perform AND operation while having one left shift operation on the position that we have to change and take not of the left shift operation .

```cpp
#include<iostream>
using namespace std;

// Printing of bit function
void print(int bit){ 
  for(int i=3;i>=0;i--){
        cout<<((num>>i)&1);  // Taking left shift and performing AND operation with one for getting the bit.
    }
    cout<<"\n";
}

int main(){
int a=13;
cout<<"The Binary number after Unsetting the bit is : ";
 print(a | ~(1<<1) ); // Unsetting bit operation

 return 0;
}
```
Output :
```
The Binary number after Unsetting the bit is : 1101
```

### 3. TOGGLE BIT :
This operation menas that if any bit is 1, then change it to 0 and if it is 0 then change it to 1.
- In this we have to perform xor operation with the left shift operation at given position .

```cpp
#include<iostream>
using namespace std;

// Printing of bit function
void print(int bit){ 
  for(int i=3;i>=0;i--){
        cout<<((num>>i)&1);  // Taking left shift and performing AND operation with one for getting the bit.
    }
    cout<<"\n";
}

int main(){
int a=13;
cout<<"The Binary number after Toggling the bit is : ";
 print(a ^ (1<<1) ); // Toggling bit operation

 return 0;
}
```
Output :
```
The Binary number after Toggling the bit is : 1111
```

### 4. COUNT BIT :
This is the operation in which we have count the setted bit in the binary form of a number.
- In this we have to check the condition which tell us that bit is setted or not and that condition is *(a & (1<<i))!=0* .

```cpp
#include<iostream>
using namespace std;

int main(){
int a=13;
cout<<"The count of setted bit is : ";
 int count=0; 
 for(int i=31;i>=0;i--){
     if((a & (1<<i))!=0) // Checking condition of setted bit .   
     count++;
 }
 cout<<count;

 return 0;
}
```
Output :
```
The count of setted bit is : 3
```
