# Object Oriented Programming Cheat Sheet

### 1. What do you understand by OOP?
OOP stands for **object-oriented programming**. It is a programming paradigm that revolves around the object rather than function and procedure. In other words, it is an approach for developing applications that emphasize on objects. An object is a real word entity that contains data and code. It allows binding data and code together.

### 2. Name widely used OOP languages.
- Python
- Java
- Go
- Dart
- C++
- C#
- Ruby

### 3. What are the four main features of OOPs?
The OOP has the following four features:

- Inheritance
- Encapsulation
- Polymorphism
- Data Abstraction

### 4. What is the purpose of using OOPs concepts?
The aim of OOP is to implement real-world entities like inheritance, hiding, polymorphism in programming. The main purpose of OOP is to bind together the data and the functions that operate on them so that no other part of the code can access this data except that function.

### 5. What are the advantages and disadvantages of OOP?
**Advantages of OOP**

- It follows a bottom-up approach.
- It models the real word well.
- It allows us the reusability of code.
- Avoids unnecessary data exposure to the user by using the abstraction.
- OOP forces the designers to have a long and extensive design phase that results in better design and fewer flaws.
- Decompose a complex problem into smaller chunks.
- Programmer are able to reach their goals faster.
- Minimizes the complexity.
- Easy redesign and extension of code that does not affect the other functionality.

**Disadvantages of OOP**

- Proper planning is required.
- Program design is tricky.
- Programmer should be well skilled.
- Classes tend to be overly generalized.

### 6. What are the differences between object-oriented programming and structural programming?
|Object-oriented Programming	|Structural Programming|
|---|---|
|It follows a bottom-up approach.|	It follows a top-down approach.|
|It provides data hiding.	|Data hiding is not allowed.|
|It is used to solve complex problems.	|It is used to solve moderate problems.|
|It allows reusability of code that reduces redundancy of code.|	Reusability of code is not allowed.|
|It is based on objects rather than functions and procedures.|	It provides a logical structure to a program in which the program is divided into functions.|
|It provides more security as it has a data hiding feature.	|It provides less security as it does not support the data hiding feature.|
|More abstraction more flexibility.|	Less abstraction less flexibility.|
|It focuses on data.	|It focuses on the process or logical structure.|

### 7. What do you understand by pure object-oriented language? Why Java is not a pure object-oriented programming language?
The programming language is called pure object-oriented language that treats everything inside the program as an object. The primitive types are not supported by the pure OOPs language. There are some other features that must satisfy by a pure object-oriented language:

- Encapsulation
- Inheritance
- Polymorphism
- Abstraction
- All predefined types are objects
- All user-defined types are objects
- All operations performed on objects must be only through methods exposed to the objects.
**Java is not a pure object-oriented programming language** because pre-defined data types in Java are not treated as objects. Hence, it is not an object-oriented language.

### 8. What do you understand by class and object?
**Class**: A class is a blueprint or template of an object. It is a user-defined data type. Inside a class, we define variables, constants, member functions, and other functionality. It does not consume memory at run time. Note that classes are not considered as a data structure. It is a logical entity. It is the best example of data binding.

**Object**: An object is a real-world entity that has attributes, behavior, and properties. It is referred to as an instance of the class. It contains member functions, variables that we have defined in the class. It occupies space in the memory. Different objects have different states or attributes, and behaviors.

### 9. What is the concept of access specifiers when should we use these?
In OOPs language, access specifiers are reserved keyword that is used to set the accessibility of the classes, methods and other members of the class. It is also known as access modifiers. It includes public, private, and protected. There is some other access specifier that is language-specific. Such as Java has another access specifier default. These access specifiers play a vital role in achieving one of the major functions of OOP, i.e. encapsulation. 

### 10. What are the manipulators in OOP and how it works?
Manipulators are helping functions. It is used to manipulate or modify the input or output stream. The modification is possible by using the insertion (<<) and extraction (>>) operators. Note that the modification of input or output stream does not mean to change the values of variables. There are two types of manipulators with arguments or without arguments.

The example of manipulators that do not have arguments is endl, ws, flush, etc. Manipulators with arguments are setw(val), setfill(c), setbase(val), setiosflags(flag). Some other manipulators are showpos, fixed, scientific, hex, dec, oct, etc.

### 11. What are the rules for creating a constructor?
- It cannot have a return type.
- It must have the same name as the Class name.
- It cannot be marked as static.
- It cannot be marked as abstract.
- It cannot be overridden.
- It cannot be final.

### 12. What are the differences between the constructor and the method in Java?
|Constructor	|Method|
|---|---|
|Constructor has the same name as the class name.	|The method name and class name are not the same.|
|It is a special type of method that is used to initialize an object of its class.|	It is a set of instructions that can be invoked at any point in a program.|
|It creates an instance of a class.|	It is used to execute Java code.|
|It is invoked implicitly when we create an object of the class.|	It gets executed when we explicitly called it.|
|It cannot be inherited by the subclass.	|It can be inherited by the subclass.|
|It does not have any return type.|	It must have a return type.|
|It cannot be overridden in Java.|	It can be overridden in Java.|
|It cannot be declared as static.	|It can be declared as static.|
|Java compiler automatically provides a default constructor.|	Java compiler does not provide any method by default.|

### 13. How does procedural programming be different from OOP differ?
|Procedural Oriented Programming	|Object-Oriented Programming|
|---|---|
|It is based on functions.	|It is based on real-world objects.|
|It follows a top-down approach.|	It follows a bottom-up approach.|
|It is less secure because there is no proper way to hide data.	|It provides more security.|
|Data is visible to the whole program.|	It encapsulates the data.|
|Reuse of code is not allowed.	|The code can be reused.|
|Modification and extension of code are not easy.	|We can easily modify and extend code.|
|Examples of POP are C, VB, FORTRAN, Pascal, etc.	|Examples of OOPs are C++, Java, C#, .NET, etc.|

### 14. What are the characteristics of an abstract class?
An abstract class is a class that is declared as abstract. It cannot be instantiated and is always used as a base class. The characteristics of an abstract class are as follows:

- Instantiation of an abstract class is not allowed. It must be inherited.
- An abstract class can have both abstract and non-abstract methods.
- An abstract class must have at least one abstract method.
- You must declare at least one abstract method in the abstract class.
- It is always public.
- It is declared using the abstract
- The purpose of an abstract class is to provide a common definition of the base class that multiple derived classes can share.

### 15. Is it possible for a class to inherit the constructor of its base class?
No, a class cannot inherit the constructor of its base class.

### 16. Identify which OOPs concept should be used in the following scenario?
A group of 5 friends, one boy never gives any contribution when the group goes for the outing. Suddenly a beautiful girl joins the same group. The boy who never contributes is now spending a lot of money for the group.

Runtime Polymorphism

### 17. What are the differences between copy constructor and assignment operator?
The copy constructor and the assignment operator (=) both are used to initialize one object using another object. The main difference between the two is that the copy constructor allocates separate memory to both objects i.e. existing object and newly created object while the assignment operator does not allocate new memory for the newly created object. It uses the reference variable that points to the previous memory block (where an old object is located).

**Syntax of Copy Constructor**
~~~ cpp
class_name (const class_name &obj)  
{  
//body  
}  
~~~

**Syntax of Assignment Operator**

~~~ cpp
class_name obj1, obj2;  
obj1=obj2;  
~~~

### 18. What is the difference between Composition and Inheritance?
Inheritance means an object inheriting reusable properties of the base class. Compositions mean that an object holds other objects. In Inheritance, there is only one object in memory (derived object) whereas, in Composition, the parent object holds references of all composed objects. From a design perspective, inheritance is "is a" relationship among objects whereas Composition is "has a" relationship among objects.

### 19. What are the limitations of inheritance?
- The main disadvantage of using inheritance is two classes get tightly coupled. That means one cannot be used independently of the other. If a method or aggregate is deleted in the Super Class, we have to refactor using that method in SubClass.
- Inherited functions work slower compared to normal functions.
- Need careful implementation otherwise leads to improper solutions.

### 20. What are the differences between Inheritance and Polymorphism?
|Inheritance	|Polymorphism|
|---|---|
|Inheritance is one in which a derived class inherits the already existing class's features.|	Polymorphism is one that you can define in different forms.|
|It refers to using the structure and behavior of a superclass in a subclass.|	It refers to changing the behavior of a superclass in the subclass.|
|It is required in order to achieve polymorphism.|	In order to achieve polymorphism, inherence is not required.|
|It is applied to classes.	|It is applied to functions and methods.|
|It can be single, hybrid, multiple, hierarchical, multipath, and multilevel inheritance.|	There are two types of polymorphism compile time and run time.|
|It supports code reusability and reduces lines of code.	|It allows the object to decide which form of the function to be invoked at run-time (overriding) and compile-time (overloading).|

### 21. What is Coupling in OOP and why it is helpful?
In programming, separation of concerns is known as coupling. It means that an object cannot directly change or modify the state or behavior of other objects. It defines how closely two objects are connected together. There are two types of coupling, loose coupling, and tight coupling.

Objects that are independent of one another and do not directly modify the state of other objects is called loosely coupled. Loose coupling makes the code more flexible, changeable, and easier to work with.

Objects that depend on other objects and can modify the states of other objects are called tightly coupled. It creates conditions where modifying the code of one object also requires changing the code of other objects. The reuse of code is difficult in tight coupling because we cannot separate the code.

Since using loose coupling is always a good habit.

### 22. Name the operators that cannot be overload.
- Scope Resolution Operator (::)
- Ternary Operator (? :)
- Member Access or Dot Operator (.)
- Pointer to Member Operator (.*)
- sizeof operator

### 23. What is the difference between new and override?
The new modifier instructs the compiler to use the new implementation instead of the base class function. Whereas, Override modifier helps to override the base class function.

virtual: indicates that a method may be overridden by an inheritor

override: Overrides the functionality of a virtual method in a base class, providing different functionality.

new: Hides the original method (which doesn't have to be virtual), providing different functionality. This should only be used where it is absolutely necessary.

When you hide a method, you can still access the original method by upcasting to the base class. This is useful in some scenarios, but dangerous.

### 24. Explain overloading and overriding with example?
**Overloading**

**Overloading** is a concept in OOP when two or more methods in a class with the same name but the method signature is different. It is also known as compile-time polymorphism. For example, in the following code snippet, the method add() is an overloaded method.

~~~ cpp
public class Sum  
{  
   int a, b, c;  
   public int add();  
   {  
      c=a+b;  
      return c;  
   }  
   add(int a, int b);  
   {  
      //logic  
   }  
   add(int a, int b, int c);  
   {  
      //logic  
   }  
   add(double a, double b, double c);  
   {  
      //logic  
   }  
   //statements  
}
~~~

**Overriding**

If a method with the same method signature is presented in both child and parent class is known as method **overriding**. The methods must have the same number of parameters and the same type of parameter. It overrides the value of the parent class method. It is also known as runtime polymorphism. For example, consider the following program.

~~~ cpp
class Dog  
{  
   public void bark()  
   {  
      System.out.println("woof ");  
   }  
};  
class Hound extends Dog  
{  
   public void sniff()  
   {  
      System.out.println("sniff ");  
   }  
   //overrides the method bark() of the Dog class  
   public void bark()  
   {  
      System.out.println("bowl");  
   }  
 }; 
 public class OverridingExample  
 {  
   public static void main(String args[])  
   {  
      Dog dog = new Hound();  
      //invokes the bark() method of the Hound class  
      dog.bark();  
   }  
 };  
~~~

### 25. What is Cohesion in OOP?
In OOP, cohesion refers to the degree to which the elements inside a module belong together. It measures the strength of the relationship between the module and data. In short, cohesion represents the clarity of the responsibilities of a module. It is often contrasted with coupling.

It focuses on a how single module or class is intended. Higher the cohesiveness of the module or class, better is the object-oriented design.

There are two types of cohesion, i.e. High and Low.

- High cohesion is associated with several required qualities of software including robustness, reliability, and understandability.
- Low cohesion is associated with unwanted qualities such as being difficult to maintain, test, reuse, or even understand.
High cohesion often associates with loose coupling and vice versa.

### 26. Give a real-world example of polymorphism?
The general meaning of Polymorphism is one that has different forms. The best real-world example of polymorphism is a person that plays different roles at different palaces or situations.

- At home a person can play the role of father, husband, and son.
- At the office the same person plays the role of boss or employee.
- In public transport, he plays the role of passenger.
- In the hospital, he can play the role of doctor or patient.
- At the shop, he plays the role of customer.

Hence, the same person possesses different behavior in different situations. It is called polymorphism.

### 27. What is the difference between a base class and a superclass?
The base class is the root class- the most generalized class. At the same time, the superclass is the immediate parent class from which the other class inherits.

### 28. What is data abstraction and how can we achieve data abstraction?
It is one of the most important features of OOP. It allows us to show only essential data or information to the user and hides the implementation details from the user. A real-world example of abstraction is driving a car. When we drive a car, we do not need to know how the engine works (implementation) we only know how ECG works.

There are two ways to achieve data abstraction

- Abstract class
- Abstract method

### 29. What are the levels of data abstraction?
There are three levels of data abstraction:

- Physical Level: It is the lowest level of data abstraction. It shows how the data is actually stored in memory.
- Logical Level: It includes the information that is actually stored in the database in the form of tables. It also stores the relationship among the data entities in relatively simple structures. At this level, the information available to the user at the view level is unknown.
- View Level: It is the highest level of data abstraction. The actual database is visible to the user. It exists to ease the availability of the database by an individual user.

### 30. What are the types of variables in OOP?
There are three types of variables:

**Instance Variable**: It is an object-level variable. It should be declared inside a class but must be outside a method, block, and constructor. It is created when an object is created by using the new keyword. It can be accessed directly by calling the variable name inside the class.

**Static Variable**: It is a class-level variable. It is declared with keyword static inside a class but must be outside of the method, block, and constructor. It stores in static memory. Its visibility is the same as the instance variable. The default value of a static variable is the same as the instance variable. It can be accessed by calling the class_name.variable_name.

**Local Variable**: It is a method-level variable. It can be declared in method, constructor, or block. Note that the use of an access modifier is not allowed with local variables. It is visible only to the method, block, and constructor in which it is declared. Internally, it is implemented at the stack level. It must be declared and initialized before use.

Another type of variable is used in object-oriented programming is the reference variable.

**Reference Variable**: It is a variable that points to an object of the class. It points to the location of the object that is stored in the memory.

### 31. Is it possible to overload a constructor?
Yes, the constructors can be overloaded by changing the number of arguments accepted by the constructor or by changing the data type of the parameters. For example:

~~~ cpp
public class Demo  
{  
   Demo()  
   {  
      //logic  
   }  
   Demo(String str) //overloaded constructor   
   {  
      //logic  
   }  
   Demo(double d) //overloaded constructor  
   {  
      //logic  
   }  
   //statements  
}
~~~

### 32. Can we overload the main() method in Java also give an example?
Yes, we can also overload the main() method in Java. Any number of main() methods can be defined in the class, but the method signature must be different. Consider the following code.

~~~ java
class OverloadMain    
{    
   public static void main(int a)  //overloaded main method    
   {    
      System.out.println(a);    
   }    
   public static void main(String args[])    
   {       
      System.out.println("main method invoked");    
      main(6);    
   }    
}   
~~~

### 33. What is encapsulation?
One can visualize Encapsulation as the method of putting everything that is required to do the job, inside a capsule and presenting that capsule to the user. What it means is that by Encapsulation, all the necessary data and methods are bind together and all the unnecessary details are hidden to the normal user. So Encapsulation is the process of binding data members and methods of a program together to do a specific job, without revealing unnecessary details.

Encapsulation can also be defined in two different ways:

1) **Data hiding**: Encapsulation is the process of hiding unwanted information, such as restricting access to any member of an object.

2) **Data binding**: Encapsulation is the process of binding the data members and the methods together as a whole, as a class.

### 34. What is Polymorphism?
Polymorphism is composed of two words - “poly” which means “many”, and “morph” which means “shapes”. Therefore Polymorphism refers to something that has many shapes.

In OOPs, Polymorphism refers to the process by which some code, data, method, or object behaves differently under different circumstances or contexts. Compile-time polymorphism and Run time polymorphism are the two types of polymorphisms in OOPs languages.

### 35. What is Compile time Polymorphism and how is it different from Runtime Polymorphism?
**Compile Time Polymorphism**: Compile time polymorphism, also known as Static Polymorphism, refers to the type of Polymorphism that happens at compile time. What it means is that the compiler decides what shape or value has to be taken by the entity in the picture.

Example:

~~~ cpp
// In this program, we will see how multiple functions are created with the same name, 
// but the compiler decides which function to call easily at the compile time itself.

class CompileTimePolymorphism{
   // 1st method with name add
   public int add(int x, int y){ 
      return x+y;
   }
   // 2nd method with name add
   public int add(int x, int y, int z){
      return x+y+z;
   }
   // 3rd method with name add
   public int add(double x, int y){ 
      return (int)x+y;
   }
   // 4th method with name add
   public int add(int x, double y){ 
      return x+(int)y;
   }
}
class Test{
   public static void main(String[] args){
      CompileTimePolymorphism demo=new CompileTimePolymorphism();
      // In the below statement, the Compiler looks at the argument types and decides to call method 1
      System.out.println(demo.add(2,3));
      // Similarly, in the below statement, the compiler calls method 2
      System.out.println(demo.add(2,3,4));
      // Similarly, in the below statement, the compiler calls method 4
      System.out.println(demo.add(2,3.4));
      // Similarly, in the below statement, the compiler calls method 3
      System.out.println(demo.add(2.5,3)); 
   }
}
~~~
In the above example, there are four versions of add methods. The first method takes two parameters while the second one takes three. For the third and fourth methods, there is a change of order of parameters. The compiler looks at the method signature and decides which method to invoke for a particular method call at compile time.

***Runtime Polymorphism***: Runtime polymorphism, also known as Dynamic Polymorphism, refers to the type of Polymorphism that happens at the run time. What it means is it can't be decided by the compiler. Therefore what shape or value has to be taken depends upon the execution. Hence the name Runtime Polymorphism.

Example:

~~~ cpp
class AnyVehicle{
   public void move(){
      System.out.println(“Any vehicle should move!!”);
   }
}
class Bike extends AnyVehicle{
   public void move(){
      System.out.println(“Bike can move too!!”);
   }
}
class Test{
   public static void main(String[] args){
      AnyVehicle vehicle = new Bike();
      // In the above statement, as you can see, the object vehicle is of type AnyVehicle
      // But the output of the below statement will be “Bike can move too!!”, 
      // because the actual implementation of object ‘vehicle’ is decided during runtime vehicle.move();
      vehicle = new AnyVehicle();
      // Now, the output of the below statement will be “Any vehicle should move!!”, 
      vehicle.move();
   }
}
~~~
As the method to call is determined at runtime, as shown in the above code, this is called runtime polymorphism.

### 36. What is meant by Inheritance?
The term “inheritance” means “receiving some quality or behavior from a parent to an offspring.” In object-oriented programming, inheritance is the mechanism by which an object or class (referred to as a child) is created using the definition of another object or class (referred to as a parent). Inheritance not only helps to keep the implementation simpler but also helps to facilitate code reuse.

### 37. What is Abstraction?
If you are a user, and you have a problem statement, you don't want to know how the components of the software work, or how it's made. You only want to know how the software solves your problem. Abstraction is the method of hiding unnecessary details from the necessary ones. It is one of the main features of OOPs. 
For example, consider a car. You only need to know how to run a car, and not how the wires are connected inside it. This is obtained using Abstraction

### 38. How much memory does a class occupy?
Classes do not consume any memory. They are just a blueprint based on which objects are created. Now when objects are created, they actually initialize the class members and methods and therefore consume memory.

### 39. Is it always necessary to create objects from class?
No. An object is necessary to be created if the base class has non-static methods. But if the class has static methods, then objects don’t need to be created. You can call the class method directly in this case, using the class name.

### 40. What is a destructor?
Contrary to constructors, which initialize objects and specify space for them, Destructors are also special methods. But destructors free up the resources and memory occupied by an object. Destructors are automatically called when an object is being destroyed.

### 41. Are class and structure the same? If not, what's the difference between a class and a structure?
No, class and structure are not the same. Though they appear to be similar, they have differences that make them apart. For example, the structure is saved in the stack memory, whereas the class is saved in the heap memory. Also, Data Abstraction cannot be achieved with the help of structure, but with class, Abstraction is majorly used.

### 42. What is meant by Garbage Collection in OOPs world?
Object-oriented programming revolves around entities like objects. Each object consumes memory and there can be multiple objects of a class. So if these objects and their memories are not handled properly, then it might lead to certain memory-related errors and the system might fail.

Garbage collection refers to this mechanism of handling the memory in the program. Through garbage collection, the unwanted memory is freed up by removing the objects that are no longer needed.

