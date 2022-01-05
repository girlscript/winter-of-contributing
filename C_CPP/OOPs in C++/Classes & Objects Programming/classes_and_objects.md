# **Classes and objects**
## **What is Class ?**

A class is a user defined datatype which has its own data members and member functions. We can access and use their data and functions by creating an instance of that class. We use data members inside their member functions and together they decide properties and behaviour of the objects of that class

For example-Let us assume pet animals as a class. Then dogs, cats are objects of that class.

   In c++ we define class as follows:
   ```
   class className{
         access specifier       
         data member;
         member function() {};
   }
   ```
   
   ## **Access specifier**
   
   An access specifier decides how to access the members of the class. 
   
   There are three keyword for access specifier:-
   
   public -- class members are available outside the class.
   
   Syntax
   ```
	
class className
{
 public:            
 int num;             
 void function();     
}
```
   
   private - class members are not available outside the class. By default class members are private i.e when no any access specifier is mentioned.
   
  Syntax
   ```
	
class className
{
 private:            
 int num;             
 void function();     
}
```
   
   
   protected - class members are available within the subclass of that class only.
   
    
  Syntax
   ```
	
class className
{
 protected:            
 int num;             
 void function();     
}

```
## **What is Object ?**

An object is the instance of that class. we can access members of class using through objects.

syntax
```
className.objectName;
objectName.data_member/function
```

 ### **Implementation of class and object with different access specifiers :**  
 ```cpp
     /* C++ program for implementation of class and object*/
     #include <bits/stdc++.h>
     using namespace std;
       

     /* mainClass is the name of class*/
    class mainClass
    {
    private:
    int num1;     //declaration of variable in private
    protected:
    int num2;     //declaration of variable in protected
    public:
    int num3;   //declaration of variable in public
       void show()        
   {
   num1=4;
   num2=5;
   num3=6;
   // all members can access in same class
   

   cout<<"Value of num1: "<<num1<<endl;
   cout<<"Value of num2: "<<num2<<endl;
   cout<<"Value of num3: "<<num3<<endl;
   }

   
   };

   class subClass:public mainClass           //subclass of mainClass
   {
   public:
   void show()
   {
  
   //we can not access num1 from subclass as it is private member
    // we can access num2 as it is protected member and they can be access from sublass
   num2=1;
  
   //we can access num3 as it is public member
    num3=3;
  
   cout<<"Value of num2: "<<num2<<endl;
   
   cout<<"Value of num3: "<<num3<<endl;
   }
   };

   void main()
   {

   mainClass obj1;       // creating object of mainClass
   obj1.show();

   subClass obj2;        // creating object of subClass
   obj2.show();    
       
   cout<<obj1.num3<<endl;  //only num3 can be access from outside the class
     
     


   }
```
   ## **Output**
   ```
   value of num1: 4
   value of num2: 5
   value of num3: 6


   value of num2: 1
   value of num3: 3

   
   Value of num3: 6
   ```
   
   ## Note:
   - when we create a class no memory will allocated but when we create an object memory will allocate.
   
