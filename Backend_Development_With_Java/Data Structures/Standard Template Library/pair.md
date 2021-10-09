# Introduction to Pair
- Pair is a container defined in **< utility >** header consisting of two data elements.
- Pair can have same as well different data-types of the two elements.
- Pair have two entities namely **"first"** and **"second"**.
- Order of first and second is fixed.
- To reference the elements, we use variable name followed by dot operator followed by the keyword first or second.

### Syntax  
```c++
 pair (data-type1 , data-type2 ) Pairname;
 ```
### Code
```c++  
 #include < iostream >  
 #include < utility >  
 using namespace std;
 
 int main( )  
{  
    pair<int, string> PAIR1;  
 
    PAIR1.first = 10;
    PAIR1.second = "john";
 
    cout << PAIR1.first << ", ";
    cout << PAIR1.second << endl;
 
    return 0;
   }
   ```

**Output**
>10 , john 

<br/>  

## Methods of Initializing Pair in C++

### Syntax

- pair( data-type1 , data-type2 ) Pair1(value1 , value2 );      

- There are various methods of initializing pair. 
 ```c++
 - pair PAIR1;                //default value 0 will be assigned to first
 - pair PAIR2 ( 1 , 2 );      //initialized,  same data type
 - pair PAIR3 ( PAIR2 );      // copy of PAIR2 is made in PAIR3
```
### make_pair( )
You can initialize pair using **make_pair( )** function.
### Syntax
```c++
 Pair1 = make_pair( value 1, value 2);
```
### Code
```c++
#include< iostream >
#include< utility >
using namespacde std;

int main( )
{
pair <int , char > PAIR1;
PAIR1 = make_pair( 5 , 'A');
cout<<PAIR1.first<<","<<PAIR1.second;
return 0;
}
```
**Output**
> 5 , A

### Swap Function

  - This function is used to swap the content of two pair of same type with each other.  
 
 ### Syntax 
 ```c++
  PAIR1.swap(PAIR2); 
  ```
 
 ### Code
 ```c++
 #include < iostream >  
 #include < utility >  
  using namespace std;   
 int main()    
  {  
    pair<float, int>pair1 = make_pair(2.6, 1);  
    pair<float, int>pair2 = make_pair(5.7, 2);  
 
    cout << "Before swapping:\n " ;  
    cout << pair1.first << " " << pair1.second ;  
    cout << pair2.first << " " << pair2.second ;  
    pair1.swap(pair2);  
 
    cout << "\nAfter swapping:\n ";  
    cout << pair1.first << " " << pair1.second ;  
    cout << pair2.first << " " << pair2.second ;  
 
    return 0;
}  
```
 
**Output** 

>Before swapping:  
>2.6, 1  
>5.7, 2    

>After swapping:  
>5.7, 2  
>2.6, 1 

### Tie Function 
- Tie is another important function used with pair in c++.
- The work of tie is to unpack the values into separate variables.
- **ignore** keyword ignores a particular pair element from getting unpacked.   
### Syntax
```c++
tie(***int &***, ***int &***) = PAIR1; 
```
### Code
```c++
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    pair<int, int> pair1( 1,8);
    int a, b;
    tie(a, b) = pair1;
    cout << a << " " << b << "\n";
 
    pair<int, int> pair2 = { 3, 4 };
    tie(a, ignore) = pair2;
   
    // prints old value of b
    cout << a << " " << b << "\n";
    
}
 ```
**Output**  
> 1 8  
> 3 8
