// PROGRAM TO IMPLEMENT CEIL FUNCTION AND IT'S PROTOTYPES.

#include<iostream>
#include<cmath>  //header file for ceil() function
using namespace std;

int main(){
    float a=3.06f;  //declaring and assigning float variable
    double b=465.7;   //declaring and assigning double variable
    long double c=7.2908796856453542342132135656758553452522332906875; //declaring and assigning long double variable
    cout<<"WITH FLOAT,OUTPUT: "<<ceil(a)<<endl;
    cout<<"WITH DOUBLE,OUTPUT: "<<ceil(b)<<endl;
    cout<<"WITH LONG DOUBLE,OUTPUT: "<<ceil(c)<<endl;
return 0;
}


//OUTPUT:
//WITH FLOAT,OUTPUT: 4
//WITH DOUBLE,OUTPUT: 466
//WITH LONG DOUBLE,OUTPUT: 8


// PROGRAM TO IMPLEMENT FLOOR FUNCTION AND IT'S PROTOTYPES.

#include<iostream>
#include<cmath>  //header file for floor() function
using namespace std;

int main(){
    float a=6.01f;  //declaring and assigning float variable
    double b=89.2;   //declaring and assigning double variable
    long double c=534.2908796856453542342132135656758553452522332906875; //declaring and assigning long double variable
    cout<<"WITH FLOAT,TOTAL: "<<floor(a)<<endl;
    cout<<"WITH DOUBLE,TOTAL: "<<floor(b)<<endl;
    cout<<"WITH LONG DOUBLE,TOTAL: "<<floor(c)<<endl;
return 0;
}


//OUTPUT
//WITH FLOAT,TOTAL: 6
//WITH DOUBLE,TOTAL: 89
//WITH LONG DOUBLE,TOTAL: 534


// PROGRAM TO SHOW DIFFERENCE IN FLOOR(), CEIL() & ROUND() FUNCTIONS

#include<iostream>
#include<cmath>  //header file for these functions
using namespace std;

int main(){
    double x=9.536;  //declaring and assigning float variable
    cout<<"On using ceil() function: "<<ceil(x)<<endl;
    cout<<"On using floor() function: "<<floor(x)<<endl;
    cout<<"On using round() function: "<<round(x)<<endl;
return 0;
}

//OUTPUTS:
//On using ceil() function: 10
//On using floor() function: 9
//On using round() function: 10


