Java is a statically-typed programming language. It means, all variables must be declared before its use. That is why we need to declare variable's type and name.

In Java language, primitive data types are the building blocks of data manipulation. These are the most basic data types available in Java language.

There are 8 types of primitive data types:

![Screenshot (257)](https://user-images.githubusercontent.com/87614560/141116195-4a0dc5f4-40db-4d22-9876-6f969506bd34.png)


Here we will discuss **boolean** data type and **Boolean** class in detail. Let's start it.

# Difference between **boolean** and **Boolean**:

---

1. **Definition:**  
     In Java, the boolean keyword is a primitive data type. It is used to store only two possible values, either true or false.

     Boolean is a  class in Java that wraps a value of the primitive type boolean in an object. Its object contains only a single field whose type is boolean.

2. **Values:**

     boolean is the type whose values are either true or false.
  
     We can instantiate the Boolean class. It is an object. So, its values are true, false, and null.

3. **Methods and Fields:**

    Boolean is a class, so it has its own fields and methods.

    Following are the fields of the Boolean class −
      * `static Boolean FALSE` − This is the Boolean object corresponding to the primitive value false.
      * `static Boolean TRUE` − This is the Boolean object corresponding to the primitive value true.
      * `static Class<Boolean> TYPE` − This is the Class object representing the primitive type boolean.

     Following are some of the methods of the Boolean class−
    
    * `boolean booleanValue()`
This method returns the value of this Boolean object as a boolean primitive
    * `int compareTo(Boolean b)`
This method compares this Boolean instance with another.
    * 	`boolean equals(Object obj)`
This method returns true if and only if the argument is not null and is a Boolean object that represents the same boolean value as this object.
    *  	`static boolean parseBoolean(String s)`
      This method parses the string argument as a boolean.
    * 	`String toString()`
This method returns a String object representing this Boolean's value.


     **boolean** is a primitive data type. It does not have any methods or fields.


# Implementation:

---

**Example 1:**

```
public class BooleanExample1 {  
  
    public static void main(String[] args) {
          
        int num1=10;  
        int num2=20;    
    boolean b1=true;  
    boolean b2=false;  
  
if(num1<num2)  
{  
    System.out.println(b1);  
}  
else  
{  
    System.out.println(b2);  
 }  
          
    }         
}
```

**Output:**
```
true
```

**Example 2:**

```
import java.lang.*;
public class Demo {
   public static void main(String[] args){
      Boolean val1, val2;
      val1 = new Boolean(true);
      val2 = new Boolean(true);
      boolean res = val1.equals(val2);
      System.out.println("Are both the Boolean values equal? = "+res);
   }
}
```

**Output:**


```
Are both the Boolean values equal? = true
```
**Example 3:**

```
public class JavaBooleanExample3 {  
    public static void main(String[] args) {  
        Boolean b1= true;  
        boolean b2=false;  
        //assigning boolean value of b1 to b3  
        Boolean b3= b1.booleanValue();  
        String str1 = "Value of boolean object "+b1+" is "+b3+".";  
        System.out.println(str1);  
        //compare b1 and b2  
            int val1 = Boolean.compare(b1,b2);  
        if(val1>0){  
            System.out.println("b1 is true.");  
            }  
            else{   System.out.println("b2 is true");  
        }  
        // logicalAnd() with return the same result as AND operator  
        Boolean val2 = Boolean.logicalAnd(b1,b2);  
        System.out.println("Logical And will return "+val2);  
    }  
}  
```

**Output:**

```
Value of boolean object true is true.
b1 is true.
Logical And will return false
```
