

##INHERITANCE-

Inheritance is one of an important topic in Object Oriented Programming Language .Inheritance is a feature  in which, new classes are created from the existing classes. The new class created is called “derived class” or “child class” and the existing class is known as the “base class” or “parent class”. The derived class now is said to be inherited from the base class.

The concept of using Inheritance is we can create new classes that are built upon existing classes.

#Now, the question is why to use Inheritance ?

1) Code Reusability --> the capacity to repurpose pre-existing code i.e Deriving classes from Baseclass
2) For Method Overriding (so runtime polymorphism can be achieved)

#Types of Inheritance :
There are basically 5 types of Inheritance in Java:

 Single Inheritance - It is a type of Inheritance in which One Derivedclass inherits all the proprities of a Baseclass , example - class B extends class A.
 
![2](https://user-images.githubusercontent.com/115156321/232258576-438f59ef-cd1b-4d47-a300-f8395600c13a.png)
 
 Multilevel Inheritance - It is defined as when a class extends a class that extends another class
 example- class C extends class B, and class B extends class A.
 
![1](https://user-images.githubusercontent.com/115156321/232258567-dc2b7d76-ad20-41ca-b519-5f48a00cea0a.png)

Multiple Inheritance - It is a type of Inheritance in which a Derived class acquires the properties of more than one Base classes. example- class C extends class A and class B.

![5](https://user-images.githubusercontent.com/115156321/232258593-ce610ebd-7a4c-4d91-8d11-4658458d54fc.png)

Hierarchial Inheritance - the type of inheritance that has a hierarchical structure of classes. A single base class can have multiple derived classes, and other subclasses can further inherit these derived classes, forming a hierarchy of classes ,example - class D, class C, class B extends class A
 
![3](https://user-images.githubusercontent.com/115156321/232258586-4e02ef2e-b9e0-41f5-9893-e9b0c1ce1853.png)

Hybrid Inheritance - It is a combination of all types of Inheritance . example- class B and class C extends class A moreover class D extends  class B and class C.

![4](https://user-images.githubusercontent.com/115156321/232258590-3d40b66d-6a1b-4b9f-8cc5-fb915da8efda.png)


