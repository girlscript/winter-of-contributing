# Inheritance
**Inheritance** in Java is a concept in which one object/class acquires all the properties and behaviors of a parent object/class. It is one of important part of OOPs (Object Oriented Programming system).

# Why use inheritance in java?
**1.** The most important use of inheritance in Java is `code reusability`, i.e. we can create new classes(subclass) that are built upon existing classes(superclass).

**2.** With the help of inheritance `Method overriding` can be achieved(we can implement specific method in subclass that already exists in superclass). It's also known as runtime polymorphism.

# Terminology of Inheritance-
**Class:** A class is a user defined template or blueprint from which _group of objects_ are created, having common properties.

**Super Class/Parent Class:** Superclass is a _base class or a parent class_. It's the class from where a subclass inherits the features.

**Sub Class/Child Class:** Subclass is the _derived class, extended class, or child class_ which inherits the features of superclass. The subclass can also add its own fields and methods in addition to the superclass fields and methods.

**Reusability:** Inheritance supports the concept of “code reusability”, i.e. when we want to create a new class and if there is already a class that includes some of the code that we want, we can derive that code to new class from the existing class. By doing this, we are reusing the fields and methods of the existing class.

# Syntax of Java Inheritance-

The `extends` keyword indicates that child class have inherited or acquires the properties from an existing class.

```Java
class A 
{  
   //methods and fields  
}  
class B extends A
{
   //methods and fields
}
```
The `implements` keyword helps in implementing interface from an existing class to child class.

```Java
interface A {
    public void methodOne();
}
interface B {          // Second interface is defined
    public void methodTwo();
}
class Three implements One, Two {       // Implementation of two interfaces
    public void methodOne()
    {
        // Implementation of the method
    }
    public void methodTwo()
    {
       // Implementation of the method
    }
}
```
The `super` keyword is used to differentiate the members of superclass from the members of subclass, if they have the same names or member functions. It is used to invoke the superclass constructor from subclass.

```Java
class Student{
    String marks="excellent";  
}  
class Boy extends Student{
    String marks="outstanding";
    void printmarks(){
        System.out.println(marks);//prints marks of Boy class
        System.out.println(super.marks);//prints marks of Student class
        }
}  
class TestSuper1{
    public static void main(String args[]){
        Boy b=new Boy();
        b.printmarks();
    }
}  
```
```Java
Output
outstanding
excellent
```

# Types of Inheritance-

The different types of Inheritance are:

**_Single Inheritance-_** In single inheritance, a single subclass can be extends from a single superclass.Example,
<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/java-single-inheritance.png" width="120" height=120" />
</p>
                                                                                                                       
**_Multiple Inheritance-_** In multiple inheritance, a single subclass can be extends from multiple superclasses.Example,
<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/java-multiple-inheritance.png" width="120" height=120" />
</p>

**_Multi-Level Inheritance-_** In multilevel inheritance, a subclass that extends from a superclass can acts as a superclass for another class.Example,
<p align="center">
  <img src="https://cdn.programiz.com/sites/tutorial2program/files/java-multilevel-inheritance.png" width="120" height=120" />
</p>

**_Hierarchical Inheritance-_** In hierarchical inheritance, multiple subclasses can be extends from a single superclass.Example,
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
