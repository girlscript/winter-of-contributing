# Destructor Concepts

#### What is a destructor ?
  Destructors are basically used for the **deallocation of memory when object goes out of scope** and it is used for class object and it's class members. Destructor has the same name as that of class name but it's preceded with ~(tilde).     There can be only one destructor in a class.    
  There should be no return type and no parameters.

 ### Syntax for using Destructor:
 Suppose if class name is Add(),
 then
 > ~Add()
 
 <br /> 
 A program example to help you understand the concept much better:
 
 ``` 
 #include<iostream>
 using namespace std;
 
 class polygon
 {
  int len,wid,n;
  double area;
  polygon();  //This is declaration for constructor.
  ~polygon(); //This is declaration for destructor.
  void getdata(int, int,int);
  void calculate();
  void putdata();
 }
 polygon::polygon()
 {
   n=0;
   len=0;
   wid=0;
 }
 polygon::~polygon()
 {
  cout<<"Deletion of object takes place";
 }
 void polygon::getdata(int l, int w,int num)
 {
   len=l;
   wid=w;
   n=num;
 }
 void polygon::calculate()
 {
   if(n==3)
    area=(len*wid)/2;
   if(n==4)
    area=len*width;
 }
 void polygon::putdata()
 {
   cout<<"Length : "<<len<<endl;
   cout<<"Width : "<<wid<<endl;
   cout<<"Area :"<<area<<endl;
 }
 int main()
 {
   polygon object;
   object.getdata(6,12,3)
 }
```
 

> ##### Output: <br>
>  Length : 6 <br>
>  Width : 12  <br>
>  Area :36    <br>
>  Deletion of object takes place


 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

  
  
