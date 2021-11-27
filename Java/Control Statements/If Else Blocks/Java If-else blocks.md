#  **Java If-else Blocks**
If-else blocks are *conditional statements* that are used to check if a condition is being fulfilled or not and execute a particular set of code based on the conditions. It checks boolean condition: true or false. There are various types of if statement in Java.

* if statement
* if-else statement
* if-else-if ladder
* nested if statement

### **Few Important Points** 

* There can be *only one* if condition and else condition in an expression.

* There can be *multiple* else if statements in an if-else block.


### **Flowchart**  

 ![alt text](https://api.codewithharry.com/media/videoSeriesFiles/courseFiles/java-tutorials-for-beginners-16/IfElse_flowchart.png)     

### **If Statement**
**Syntax:**
```java
if(condition){  
//code to be executed  
} 
```
**Example:**    
```java
public class IfExample {
    public static void main(String[] args) {
        // defining an 'age' variable
        int age = 20;
        // checking the age
        if (age > 18) {
            System.out.print("Age is greater than 18");
        }
    }
}
```
**Output:** Age is greater than 18

### **If-else Statement**
**Syntax:**
```java
if(condition){  
//code if condition is true  
}else{  
//code if condition is false  
}  
```
**Example:**    
```java
public class IfElseExample {
    public static void main(String[] args) {
        // defining a variable
        int number = 13;
        // Check if the number is divisible by 2 or not
        if (number % 2 == 0) {
            System.out.println("even number");
        } else {
            System.out.println("odd number");
        }
    }
}
```
**Output:** odd number

### **If-else-if ladder**
**Syntax:**
```java
if(condition1){  
//code to be executed if condition1 is true  
}else if(condition2){  
//code to be executed if condition2 is true  
}  
else if(condition3){  
//code to be executed if condition3 is true  
}  
...  
else{  
//code to be executed if all the conditions are false  
}  
```
**Example:**    
```java
public class IfElseIfExample {
    public static void main(String[] args) {
        int marks = 65;

        if (marks < 50) {
            System.out.println("fail");
        } else if (marks >= 50 && marks < 60) {
            System.out.println("D grade");
        } else if (marks >= 60 && marks < 70) {
            System.out.println("C grade");
        } else if (marks >= 70 && marks < 80) {
            System.out.println("B grade");
        } else if (marks >= 80 && marks < 90) {
            System.out.println("A grade");
        } else if (marks >= 90 && marks < 100) {
            System.out.println("A+ grade");
        } else {
            System.out.println("Invalid!");
        }
    }
}
```
**Output:** C grade

### **Nested If Statement**
**Syntax:**
```java
if(condition){    
     //code to be executed    
          if(condition){  
             //code to be executed    
    }    
}  
```
**Example:**    
```java
public class JavaNestedIfExample {
    public static void main(String[] args) {
        // Creating two variables for age and weight
        int age = 20;
        int weight = 80;
        // applying condition on age and weight
        if (age >= 18) {
            if (weight > 50) {
                System.out.println("You are eligible to donate blood");
            }
        }
    }
}
```
**Output:** You are eligible to donate blood

### **Reference:** Javatpoint