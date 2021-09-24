#  **JAVA SWITCH BLOCKS**
Switch blocks in Java are *conditional statements* that execute one statement from multiple conditions. The switch statement works with byte, short, int, long, enum types, String(since java 7). Some wrapper types like Byte, Short, Int and Long can also be used in *switch statements*.

In a nutshell, the switch statement compares a variable with multiple values.

### **Some Important Points** 

* There can be *more than one* case value for a switch expression.

* Datatype of case values must be equal to that of switch expression. The case value must not be a *variable*.

* Duplicate case values give compile-time error.

* Each case statement can have a *break statement* (it is optional). When control reaches to the *break staement*, it jumps the control after the switch expression. If a break statement is not found, next case statement is executed.

* There can be a default statement which is optional.

### **Flowchart of Switch Block**  

 ![alt text](https://iq.opengenus.org/content/images/2019/06/switchcase-1.png)     


**Syntax:**
```java
switch(expression){    
case value1:    
 //code to be executed;    
 break;  //optional  
case value2:    
 //code to be executed;    
 break;  //optional  
......    
    
default:     
 // code to be executed if all cases are not matched;  
}
```
**Example:**    
```java
public class SwitchExample1 {  
public static void main(String[] args) {  
    //Declaring a variable for switch expression  
    int num=10;  
    //Switch expression  
    switch(number)
    {  
    //Case statements  
    case 10: System.out.println("10");  
    break;  
    case 20: System.out.println("20");  
    break;  
    case 30: System.out.println("30");  
    break;  
    //Default case statement  
    default:System.out.println("Not Found");  
    }  
}  
}  
```
**Output:** 
```
10
```

**Example of Switch Case without break statement:**

```java
public class SwitchExample2 {  
public static void main(String[] args) {  
    //Declaring a variable for switch expression  
    int number=20;  
    //Switch expression  
    switch(number){  
    //Case statements  
    case 10: System.out.println("10");  
  
    case 20: System.out.println("20");  
   
    case 30: System.out.println("30");  
      
    //Default case statement  
    default:System.out.println("Not Found");  
    }  
}  
}  
```
**Output:**  
```
10  
20  
30  
Not Found
```

**Finding Week Day Example:**
```java
public class WeekDays{
    public static void main(String[] args){
        int dayNumber=4;
        String day="";
        //switch block
        switch(dayNumber)
        {
            //case statements within the switch block
            case 1: day="Sunday";
            break;
            case 2: day="Monday";
            break;
            case 3: day="Tuesday";
            break;
            case 4: day="Wednesday";
            break;
            case 5: day="Thursday";
            break;
            case 6: day="Friday";
            break;
            case 7: day="Sunday";
            break;
            default:
            System.out.println("Invalid day number");
        }
    }
}
```
**Output:**  
```
Wednesday
```
### **Reference:** Javatpoint
