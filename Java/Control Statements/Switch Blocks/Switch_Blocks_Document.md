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

>A _conditional expression_ passed to _switch block_ as a parameter where the expression is checked with each conditional _case statement_ if the condition satisfies to `true` it executes its respective code block and exit out of switch block or else if it is unsatisfied to `false` it go to another case statement and check the condition and so on. If none of the case statements satisfies the condition it goto _default statement_ and execute the default block and exit out of switch block

**Syntax:**
```java
switch(expression){   //switch statement

    case value1:     //case statement
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

**Example of Switch Case with break staement:**    
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
    default: System.out.println("Not Found");  
    }  
  }  
}  
```
**Output:**  
``` 
20  
30  
Not Found
```

**Finding Day of the Week Example:**
```java
public class WeekDays{
    public static void main(String[] args){
        int dayNumber=4;
        String day="";
        //switch block
        switch(dayNumber)
        {
            //case statements within the switch block
            case 1:
                day="Sunday";
                System.out.println(day);
                break;
            case 2:
                day="Monday";
                System.out.println(day);
                break;
            case 3: 
                day="Tuesday";
                System.out.println(day);
                break;
            case 4: 
                day="Wednesday";
                System.out.println(day);
                break;
            case 5: 
                day="Thursday";
                System.out.println(day);
                break;
            case 6: 
                day="Friday";
                System.out.println(day);
                break;
            case 7: 
                day="Sunday";
                System.out.println(day);
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
