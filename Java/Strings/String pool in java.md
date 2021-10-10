# 🤔 What is the string pool?<br />
***String pool is nothing but a storage area in Java heap***
where string literals stores. It is also known as String Intern Pool or String Constant Pool. It is just like object allocation.
By default, it is empty and privately maintained by the Java String class.
Whenever we create a string the string object occupies some space in the heap memory.
Creating a number of strings may increase the cost and memory too which may reduce the performance also.<br />
*The JVM performs some steps during the initialization of string literals that increase the performance and decrease the memory load.
To decrease the number of String objects created in the JVM the String class keeps a pool of strings.*
#### When we create a string literal, the JVM first check that literal in the String pool.
---
If the literal is already present in the pool, it returns a reference to the pooled instance.
If the literal is not present in the pool, a new String object takes place in the String pool.
**Creating String in Java**
*There are two ways to create a string in Java:*<br />
### Using String Literal
- String str1 = "Java";
- String str2 = "C++";
- String str3 = "Java";
### Using new Keyword
*In Java, a new keyword
is also used to create String, as follows:*
- String str1 = new String ("Java");
- String str2 = new String ("C++");
- String str3 = new String ("Data Science");

First, we have created a `string literal` Java and it takes place in the pool. After that, the `string C++` is created, it also takes place in the `pool`. 
At last, again we have created the string Java. But at this time, `JVM` checks for the string and found that string literal is already present. 
Instead of taking a new instance in the String pool, it `returns` the reference of the pooled instance i.e. `str1`.<br />
***Similarly***
when we use the new keyword to create the string literals, it also takes place in the String pool
We have created `three strings literals Java, C++, and Data Science.`
We see that the string literals Data Science is the new ones. But the Java and C++ literals are already existing in the pool.
At this time, `JVM allocates` space for the literals Java and C++ in Java Heap.<br /> 
***Remember that all the String literals created with the new keyword take place in the Java heap, not in the String pool.***

---
### CODE EXAMPLE:
```java
// Program 1: Comparing two references to objects
// created using literals.
import java.util.*;
  
class Gwoc {
    public static void main(String[] args)
    {
        String s1 = "Java";
        String s2 = "Java";
  
        // Note that this == compares whether
        // s1 and s2 refer to same object or not
        if (s1 == s2)
           System.out.println("Yes");
        else
           System.out.println("No");
    }
}
```
#### 🚀 Output:
```
Yes
```
```java
// Program 2: Comparing two references to objects
// created using new operator.
import java.util.*;

class Gwoc {
	public static void main(String[] args)
	{
		String s1 = new String("Java");
		String s2 = new String("Java");

		// Note that this == compares whether
		// s1 and s2 refer to same object or not
		if (s1 == s2)
		System.out.println("Yes");
		else
		System.out.println("No");
	}
}
```
#### 🚀 Output:
```
No
```
## 🛎 Conclusion:-
I briefly talked about the essential concepts in String pool such as what is it and *how to create a String using String literals and new keyword*.  I hope this article helps you learn more about String Pool 😃.
# Thanks for Reading! ✨
