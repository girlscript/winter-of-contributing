
**Introduction to Pair**
- Pair is a container defined in **< utility >** header consisting of two data elements.
- Pair can have same as well different data-types of the two elements.
- Pair have two entities namely **"first"** and **"second"**.
- Order of first and second is fixed.
- To reference the elements, we use variable name followed by dot operator followed by the keyword first or second.

**Syntax**
> pair (data-type1 , data-type2 ) Pairname;
 
**Code**

 **// CPP program of pair**  
 #include <iostream>  
 #include <utility>  
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
   

**Output**
>10 , john 

**Methods of Initializing Pair in C++**

**Syntax**

> pair( data-type1 , data-type2 ) Pair1(value1 , value2 );      

 There are various methods of initializing pair.  
> - pair PAIR1;                //default value 0 will be assigned to first
> - pair PAIR2 ( 1 , 2 );      //initialized,  same data type
> - pair PAIR3 ( PAIR2 );      // copy of PAIR2 is made in PAIR3
> - PAIR4 = **make_pair** ( 1 , 'a' );  //using make_pair function






