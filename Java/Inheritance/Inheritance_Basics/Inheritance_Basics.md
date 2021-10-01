# Inheritance
**Inheritance** in Java is a mechanism in which one object acquires all the properties and behaviors of a parent object. It is an important part of OOPs (Object Oriented programming system).

# Why use inheritance in java?
**1.** The most important use of inheritance in Java is `code reusability`. The code that is present in the parent class can be directly used by the child class.

**2.** `Method overriding` is also known as runtime polymorphism. Hence, we can achieve Polymorphism in Java with the help of inheritance.

# Terminology of Inheritance-
**Class:** A class is a group of objects which have common properties. It is a template or blueprint from which objects are created.

**Super Class/Parent Class:** Superclass is the class from where a subclass inherits the features. It is also called a base class or a parent class.

**Sub Class/Child Class:** Subclass is the class that inherits the features of superclass. The subclass can add its own fields and methods in addition to the superclass fields and methods.It is also called a derived class, extended class, or child class.

**Reusability:** Inheritance supports the concept of “reusability”, i.e. when we want to create a new class and there is already a class that includes some of the code that we want, we can derive our new class from the existing class. By doing this, we are reusing the fields and methods of the existing class.

# Syntax of Java Inheritance-
```Java
class Subclass-name extends Superclass-name  
{  
   //methods and fields  
}  
```
The `extends` keyword indicates that we are making a new class that derives from an existing class. 

```Java
class Animal{  
String color="white";  
}  
class Dog extends Animal{  
String color="black";  
void printColor(){  
System.out.println(color);//prints color of Dog class  
System.out.println(super.color);//prints color of Animal class  
}  
}  
class TestSuper1{  
public static void main(String args[]){  
Dog d=new Dog();  
d.printColor();  
}
}  
```
```Java
Output
black
white
```

The `super` keyword is used to differentiate the members of superclass from the members of subclass, if they have the same names. It is used to invoke the superclass constructor from subclass.

# Types of Inheritance-

The different types of Inheritance are:

**_Single Inheritance-_** In single inheritance, a single subclass extends from a single superclass.Example,
<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/java-single-inheritance.png" width="120" height=120" />
</p>
                                                                                                                       
**_Multiple Inheritance-_** In multiple inheritance, a single subclass extends from multiple superclasses.Example,
<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/java-multiple-inheritance.png" width="120" height=120" />
</p>

**_Multi-Level Inheritance-_** In multilevel inheritance, a subclass extends from a superclass and then the same subclass acts as a superclass for another class.Example,
<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/java-multilevel-inheritance.png" width="120" height=120" />
</p>

**_Hierarchical Inheritance-_** In hierarchical inheritance, multiple subclasses extend from a single superclass.Example,
<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/java-hierarchical-inheritance.png" width="120" height=120" />
</p>

**_Hybrid Inheritance-_** Hybrid inheritance is a combination of two or more types of inheritance.Example;
<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/java-hybrid-inheritance.png" width="120" height=120" />
</p>
                                                                                                                             
# References-

[Javatpoint](https://www.javatpoint.com/inheritance-in-java)

[GeeksforGeeks](https://www.geeksforgeeks.org/inheritance-in-java/)

[TutorialsPoint](https://www.tutorialspoint.com/java/java_inheritance.htm)

[Programiz](https://www.programiz.com/java-programming/inheritance)

**Contributed By**: [@anjalikundliya05](https://github.com/anjali-kundliya05)
