# Exception Types

In Java programming language an exception in a event. During execution of a program it disrupe the normal flow of program it's call an exception.Bugs or errors that we don't want to restrict and continue our  program's normal execution of code are referred to as exceptions.

Example of using Exception in the code-

```Java
public class Example1 {
  public static void main(String[ ] args) {
    int[] Numbers = {100, 101, 111};
    System.out.println(Numbers[34]);
  }
}
```

``` j
output : Exception in thread "main" java.lang.ArrayIndexOutOfBoundsException: Index 34 out of bounds for length 3
```

There are several types of exception in java devide into two sub groups *User Defined Exception* or *custom exception* and *Built-in exceptions*.

[Built-in-exceptions](#Built-in-exceptions)

# Built in exceptions

*Exceptions* that are already defined  in *Java libraries* are referred to as ***built-in-exception***. These exceptions are able to define the error situation so we can understand the specific reasson for this error .

Example of using Built in Exception in the code-

```Java
class Example2 {
  
} class herClass {
  
} class MyClass {
public static void main(String[] args)
    {
        Object obj = class.forName(args[0]).newInstance();
        System.out.println("Class is for" + obj.getClass().getName());
    }
}
```

``` j
output :ClassNotFoundException
```

***Built in exceptions*** can be categorized into two broad categories *checked exceptions* & *unchecked exception*.

**checked exceptions**:-

In Java some expection are  checked at compile time  not in the run time by the compiler.In compile time the compiler ensure the smooth flow of program by ensured whether the programmer handles the exception or not.

Types of **checked exception** are :-
*ClassNotFoundException*
*InterruptedException*
*InstantiationException*
*IOException*
*SQLException*
*IllegalAccessException*
*FileNotFoundException*

- **ClassNotFoundException**:-

*ClassNotFoundException* occurs when we try to load a class at runtime using ```Class.forName()``` or ```loadClass()``` methods and *JVM* can't match path name with requested path name .This exception mainly occure when we forgot to specify class path or specify other class path insted of desired class.*ClassNotFoundException* is a ***checked Exception** derived from ```java.lang.Exception class``` and you need to provide exact class path for this checked exception . This exception also occurs when we have multiple  class loaders and if a ClassLoader tries to access a class which is loaded by another classloader in Java.

Example of using Built in  ClassNotFoundExceptionException in the code-

```Java
package com.First;
class Demo{
    int c=Integer.MAX_VALUE;
    boolean isEx(int num){
        return true;
    }
}
public class Example3{
public static void main(String[] args) {
    try {
        Demo obj = new Demo();
        int number = 8;
        boolean ans = obj.isEx(number);
        
     System.out.println("This should throw exception "+ans);   
    } catch (Exception e) {
        System.out.println(e);
    }
}
}
```

``` j
output :Error: Could not find or load main class Example3
Caused by: java.lang.NoClassDefFoundError: com/First/Example3
```

- **InterruptedException**:-

***InterruptedException*** exception is thrown when a thread is interrupted,The thread could be in either waiting, sleeping or running state and this exception can be thrown deruring any time on or before  a thread’s activity.

Example of using InterruptedException in the code-

```Java
class Example5 {
  public static void main(String args[])
      {
        Thread obj = new Thread();
        obj.sleep(67); 
  
      }
  }


```

``` j
output :Exception in thread "main" java.lang.Error: Unresolved compilation problem: 
        Unhandled exception type InterruptedException
```

- **InstantiationException**:-
*InstantiationException* Thrown when an application tries to create an instance of a class using the ```newInstance method``` in class `Class`, but the specified class object cannot be instantiated. The instantiation can fail for many reason  including including class object represents an abstract class, an interface, an array class, a primitive type, or void and last but not the least ```the class has no nullary constructor```.

- **IOException**:-

Java IOExceptions are ```Input , output (I/O)``` exception .Java throw this exception when a input or output  is failed to responce .It besically means whenever a input or output file missing , failed to load or referece to wrong file.

Example of using IOException in the code-

```Java
import java.util.*;  
public class Example6 {    
    public static void main(String[] args) { 
          Scanner sc = new Scanner("Hello GWOC");
          System.out.println("" + sc.nextLine());  
          System.out.println("Exception Output: " + sc.ioException());  
          sc.close();   
    }  
} 


```

``` j
output :Hello GWOC
Exception Output: null
```

- **SQLException**:-

```SQLException``` exception is a Exception that provides information on a database access error or other errors.

- **IllegalAccessException**:-

IllegalAccessException Thrown when an application tries to load in a class, but the currently executing method does not have access to the definition of the specified class, because the class is protected , private or not public and in another package name .

Example of using IllegalAccessException in the code-

```Java
public class Example6{
  public static void main(String[] args) {
    try {
      Thread obj = new Thread();
      obj.setPriority(7);
      Thread ob = new Thread();
      ob.setPriority(74);
    } catch (Exception e) {
      System.out.println(e);
    }
  }
}


```

``` j
output :java.lang.IllegalArgumentException
```

- **FileNotFoundException**:-

Java *FileNotFounException* is a  Exception that Throw  at run time when we specified wrong classpath of the file or the File does not exist.

Example of using FileNotFoundException in the code-

```Java
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
class Example7 {
  
public static void main(String args[])
    {
        try {
            File file = new File("D:name.txt");
  
            FileReader obj = new FileReader(file);
        }
        catch (FileNotFoundException e) {
            System.out.println(e);
        }
    }
}

```

``` j
output :java.io.FileNotFoundException: D:name.txt (The system cannot find the file specified)
```

**unchecked exception**:-
Unchecked Exception in Java is those Exception which are not handle in compile time. These exceptions occurs duo to bad programming and wicked code.

Example of using unchecked exception in the code-

```Java
public class Example8{  
  public static void main(String args[]){  
   try{  
      int num=345/0; 
      System.out.println(num); 
   }catch(Exception e){System.out.println(e);}     
  }  
}

```

``` j
output :java.lang.ArithmeticException: / by zero
```

Types of **Unchecked Exeption** are :-
*ArithmeticException*
*NullPointerException*
*ArrayIndexOutOfBoundsException*
*NumberFormatException*
*InputMismatchException*
*IllegalStateException*
*Missing Resource Exception*
*No Such Element Exception*
*Empty Stack Exception*
*StringIndexOutOfBoundsException*
*StackOverflowException*

- **ArithmeticException**:-

```ArithmeticException``` present in thye build in Java class ***Java.lang.ArithmeticException***. This Exception Thorw when a *integer* is divisible by zero(0).

Example of using ArithmeticException in the code-

```Java
public class Example9{  
  public static void main(String args[]){  
   try{  
      int num=129,div=0; 
      int ans =num/div;
      System.out.println(ans); 
   }catch(Exception e){System.out.println(e);} 
   System.out.println("we can't devide number by zero");    
  }  
}  

```

``` j
output :java.lang.ArithmeticException: / by zero
we can't devide number by zero
```

- *NullPointerException*:-

NullPointerException is a  Java ***RuntimeException***. In Java, we can assigne null value to object reference. NullPointerException is thrown when an a application try to use that reference that has null value.

Example of using NullPointerException in the code-

```Java
public class Example10{  
  public static void main(String args[]){  
   try{  
      Object cc =null;
      System.out.println(cc.getClass());
   }catch(Exception e){System.out.println(e);} 
   System.out.println("we can't devide number by zero");    
  }  
}  

```

``` j
output :Exception in thread "main" java.lang.NullPointerException: Cannot invoke "Object.getClass()" because "cc" is null
        at Example10.main(Example10.java:6)
```

- **ArrayIndexOutOfBoundsException**:-

ArrayIndexOutOfBoundsException present at *java.lang.ArrayIndexOutOfBoundsException* .It occures whenever we try to access of an element in Array at index which is not present in the Array.Like we define a *String* Array size of 19 and we trying to access the elemet `police` which is not present in the Array then Java throws ***ArrayIndexOutOfBoundsException*** at runtime.

Example of using ArrayIndexOutOfBoundsException in the code-

```Java
public class Example11{  
  public static void main(String args[]){  
   try{  
    String [] arr = {"WE","She","GWOC","87"};
    System.out.println(arr[8]);
   }catch(Exception e){System.out.println(e);}    
  }  
}

```

``` j
output :Exception in thread "main" java.lang.ArrayIndexOutOfBoundsException: Index 8 out of bounds for length 4
```

- *NumberFormatException*:-

The ***NumberFormatException*** is thrown when we try to convert a string into a numeric value like *int*, *float*,*double*,*long* etc.It is an ```unchecked exception```. It is a subclass of *IllegalArgumentException*.

Example of using NumberFormatException in the code-

```Java
public class Example12{  
  public static void main(String args[]){  
   try{  
    String event = "GWOC";
    int num = Integer.parseInt(event);
    System.out.println(num);
   }catch(Exception e){System.out.println(e);}   
  }  
}  

```

``` j
output :Exception in thread "main" java.lang.NumberFormatException: For input string: "GWOC"
```

- *InputMismatchException*:-

***InputMismatchException*** occures when we trying to  take inputs from the user using a Scanner class. If the inputs passed doesn't match the method  *InputMisMatchException* occured. For example, if you reading an Long data using ```nextLone()``` but pass String as input then *InputMismatchException* occures.

Example of using InputMismatchException in the code-

```Java
import java.util.Scanner;

public class Example13{  
  public static void main(String args[]){  
   try{  
    Scanner sc= new Scanner(System.in);
    Long v = sc.nextLong();
    System.out.println(v);
    sc.close();
   }catch(Exception e){System.out.println(e);}   
  }  
}  
```

``` j
Scanner input : GWOC
output :Exception in thread "main" java.util.InputMismatchException
```

- **IllegalStateException**:-

***IllegalStateException*** define  that a method has been invoked at an illegal or inappropriate time. That means  the Java environment or Java application is not in an appropriate state for the requested operation.

Example of using IllegalStateException in the code-

```Java
import java.util.*;

public class Example14 {
  public static void main(String args[]) {
    try {
      LinkedList<String> mylist = new LinkedList<>();
      mylist.add("GWOC");
      ListIterator<String> herlist = mylist.listIterator();
      herlist.remove();
    } catch (Exception e) {
      System.out.println(e);
    }
  }
}  
```

``` j
output :java.lang.IllegalStateException
```

- **Missing Resource Exception**-

***MissingResourceException***  is usually thrown when the resource required by the application is not found. That occures when the desired Resources File not their or not present in the path .

- **No Such Element Exception**:-

No Such Element Exception Thrown by various accessor methods to indicate that the element being requested does not exist.

Example of using No Such Element Exception in the code-

```Java
import java.util.*;

public class Example16 {
  public static void main(String args[]) {
    try {
      LinkedList<String> mylist = new LinkedList<>();
      mylist.removeFirst();
      mylist.add("GWOC");
    } catch (Exception e) {
      System.out.println(e);
    }
  }
}
```

``` j
output :java.util.NoSuchElementException

```

- **Empty Stack Exception**:-

***Empty Stack Exception***  handle the empty stack exception by using  ```s.empty()```, ```s.pop()``` methods of Stack class and *System.currentTimeMillis()* method of Date class . It helps to handle all the empty stack exception related to Java.

Example of using Empty Stack Exception in the code-

```Java
import java.util.Stack;

public class Example17 extends Thread {

  public static void main(String[] args) {
try{
  Stack s = new Stack();
  s.pop();
  }catch(Exception e){System.out.println(e);}
}
}
```

``` j
output :java.util.EmptyStackException

```

- **StringIndexOutOfBoundsException**:-

The ***StringIndexOutOfBoundsException*** is a unchecked exceptions in Java. A string is kind of an ensemble of ```characters```. String has a length of ```0 to length of string define by``` .length()``` method. When someone tries to access the characters with limits exceeding the range of actual string value, this *StringIndexOutOfBoundsException* occurs.

Example of using StringIndexOutOfBoundsException in the code-

```Java
public class Example17 extends Thread {

  public static void main(String[] args) {
try{
  String name = "GWOC";
  System.out.println(name.charAt(7));
  }catch(Exception e){System.out.println(e);}
}
}

```

``` j
output :java.lang.StringIndexOutOfBoundsException: String index out of range: 7

```

- **StackOverflowException**:-

In Java ***StackOverflowException*** is thrown for execution stack overflow errors, typically in case of a very deep or unbounded recursion or infinity loop.stack overflow error usually happens when your function calls nest too deeply.We have to make sure to provide termination condition to stop stackoverflow.

Example of using StackOverflowException in the code-

```Java
class s{
  String over(String name){
    return name + over(name);
  }
}
public class Example18 extends Thread {

  public static void main(String[] args) {
try{
  String name = "GWOC";
  s obj = new s();
  String ans = obj.over(name);
  System.out.println(ans);
  }catch(Exception e){System.out.println(e);}
}
}

```

``` j
output :Exception in thread “main” java.lang.StackOverflowError

```

[User-Defined-Exception](#User-Defined-Exception)

# User Defined Exception

User Defined Exception or Custom Exception is our own exception class and throws that exception using ```throw```  keyword. This can be done by extending the class Exception.Java ***Use Defined  Exceptions** are used to customize the Excetion according to user's choice.

Example of using  User Defined Exception in the code-

```Java
class MyCustomException extends Exception  
{  
    
}  
public class Example19  {  
    public static void main(String args[])  
    {  
        try  
        {    
            throw new MyCustomException();  
        }  
        catch (Exception e)  
        {  
            System.out.println(e);  
        }     
    }  
}

```

``` j
output :MyCustomException
```

# Conclusion

Exception is an event that disrupts the normal flow of the program . Exception Handling in Java is one of the gratest resources in Java to handle Exception and to maintain flow of the program.It can help to learn about how to handle exception and to avoid ```runtime error``` from the program execution time.

Thank you. :sunglasses:
Happy learning  :wave:

[Back to top](#Built-in-exceptions)
