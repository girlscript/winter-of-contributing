

##INHERITANCE-

Inheritance is one of an important topic in Object Oriented Programming Language .Inheritance is a feature  in which, new classes are created from the existing classes. The new class created is called “derived class” or “child class” and the existing class is known as the “base class” or “parent class”. The derived class now is said to be inherited from the base class.

The concept of using Inheritance is we can create new classes that are built upon existing classes.

#Now, the question is why to use Inheritance ?

1) Code Reusability --> the capacity to repurpose pre-existing code i.e Deriving classes from Baseclass
2) For Method Overriding (so runtime polymorphism can be achieved)

![inheritance](https://user-images.githubusercontent.com/115156321/232258340-c5776aa8-58ad-446e-a66f-f9dc061adb1a.png)


#Types of Inheritance :
There are basically 5 types of Inheritance in Java:

1) Single Inheritance - It is a type of Inheritance in which One Derivedclass inherits all the proprities of a Baseclass , example - class B extends class A.
2) Multilevel Inheritance - It is defined as when a class extends a class that extends another class
 example- class C extends class B, and class B extends class A.
3) Multiple Inheritance - It is a type of Inheritance in which a Derived class acquires the properties of more than one Base classes. example- class C extends class A and class B.
4) Hierarchial Inheritance - the type of inheritance that has a hierarchical structure of classes. A single base class can have multiple derived classes, and other subclasses can further inherit these derived classes, forming a hierarchy of classes ,example - class D, class C, class B extends class A
5) Hybrid Inheritance - It is a combination of all types of Inheritance . example- class B and class C extends class A moreover class D extends  class B and class C.

![types_inheirtance](https://user-images.githubusercontent.com/115156321/232258033-7f0c12c9-eddd-4fb4-9ed7-432544e21242.jpg)


