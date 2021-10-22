## What is LOOP
When we have to perform some particular task repeatedly for number of times then we use looping concept, so the group of instructions executed 
repeatedly until some condition is true, it is called loop.

 Suppose we need to write a program to print number from 1 to 5 ,
 We can do it just by writing  print statement five time.

_**BUT**_

What if you want to print the first _1 to 1000 number_ .
Its not feasible to just write 1000 lines of code which just do **similar task** here you will use a **loop** for this task
That will also reduces the line of code and increase readbility.

Java provides different types of loops, 
Here study we see about **`For loop`** and **`For-each loop`**, with some few example Java programs.

## `1️⃣.FOR LOOP`
* For Loop is the type of loop in whch we initialize control variable, & check condition .
* This is used when  number of iteration is fixed. 
### SYNTAX:-

```Java
for (initialization;condition;updation)
{
     // body of the loop;
}
```

* `Initialization` initializes a control variable that tell about the number oftimes loop has been executed.
* `Condition` is a boolean expression which test for the final value of the control variable 
  1. Executes the body of the loop when its true. 
  2. It exit the loop if its false.
* `Body of the loop` Its the main block of code ,inside the curly bracket repeated for fixed interval .
* `Updation` is executed after the body of the loop and updates the initialization variable.

### FLOWCHART:-

![for loop](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/fluhib6yud3n2rdiinct.png)

### **EXAMPLE 1:-**
Write a program to print 1 to 1000 number
---
```Java
class For{
  public static void main (String[]args){
    for(Int i =1;i<=10000;i++){
      System.out.print(i);
    }
  }
}
```
**OUTPUT:**
 
1
2
3
4
5
...so on

### **EXAMPLE 2:-**
You are given the Array of students mark you need to find the maximum mark obtained using for loop
---
```Java
class Foreg 
{
    public static void main(String[] args)
    {
            int[] marks = { 400, 790, 600, 895 ,790 ,450, 670, 200,890  };
             
            int max=-1;
            // for each loop
            for (int i=0;i<marks.length();i++)
            {
            if (marks[i] > max)
             {
                max = marks[i];
             }
            }
            System.out.println("The Maximum mark is: " + max) ;
    }
}

```
**OUTPUT:**

The Maximum marks is: 895

____

## `2️⃣.FOR EACH LOOP`
* Java  for-each loop or enhanced  for loop introduced in Java 5.            
* Its  more simpler way to iterate through the elements of a collection or array. 
* Its used when we dont need know the index of the current array and its iterate through the elements in sequentail order 

Note: 

### SYNTAX:-
 
```Java
for (dataType item : collection obj/array) {
	// Body of the loop
}
```

* `DataType` is the type of data our item uses.
* `Item` is a variable which stores each value of the Collection as we iterate through the loop.
* `Collection` is an array or collection variable through which the for loop will iterate.

### HOW ITS WORK:-

* WE declare the `variable(item)` which is of same type as the base type of `array/collection`, followed by a `colon`, which is then followed by the `array/collection name`.
* Now we use the our *item variable* instead of *indexed variable* of array to loop traverses the array  until the last element one by one in increasing order.
* It stores each item in the item variable, then executes the code stored within the loop body.


### FLOWCHART:-
![Image](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/1vjyeeiq52dehanpia2c.png)


### ADVANTAGE:-

* It code is easy to read.
* It reduces the possibilty of bug.

### DRAWBACK:-

* You cant modify the array element because  the object/variable is immutable when enhanced for loop is used.
* It can only move single steps forward.
* Do not keep track of index. So we can not obtain array index using For-Each loop
* It cant traverse in the reverse order 

### **EXAMPLE 1:-**
You are given the Array of students mark you need to find the maximum mark obtained by using Enhanced For Loop
---
```Java
class ForEacheg 
{
    public static void main(String[] arg)
    {
            int[] marks = { 400, 790, 600, 895 ,790 ,450, 670, 200,890  };
             
            int max=-1;
            // for each loop
            for (int num : marks)
            {
            if (num > max)
             {
                max = num;
             }
            }
            System.out.println("The Maximum mark is: " + max);
    }
}

```
**OUTPUT:**

The Maximum marks is: 895

### **EXAMPLE 2:-**

Write a program to print all the menu item of the coffee shop stord in arraylist 
---


```Java
 
public class ForEach_Collection {
 
    public static void main(String[] args) {
 
        ArrayList<String> menu = new ArrayList<String>();
 
        menu.add("Cafe latte");
        menu.add("Cold Coffee");
        menu.add("Cappuccino");
        menu.add("Espresso")
        menu.add("Macchiato")
 
        // for-each loop
        for (String item : menu) {
        System.out.println(item);
        }
    }
}
```

**OUTPUT**
 
Cafe latte

Cold Coffee

Cappuccino

Espresso

Macchiato
***

**REFERENCE**  [1](https://www.geeksforgeeks.org/for-each-loop-in-java/#:~:text=%20For-each%20loop%20in%20Java%20%201%20It,or%20a%20Collections%20class%20%28eg%2C%20ArrayList%29%20More%20)
,
[2](https://careerkarma.com/blog/java-for-each-loops/)
 
 **IMAGE SOURCE** [1](https://www.educba.com/for-each-loop-in-java/)
 ,
 [2](https://www.bing.com/images/search?view=detailV2&ccid=y4XG9mKM&id=1A6E70A63FFBC4EEC118E0FA3148C8F8CE218544&thid=OIP.y4XG9mKM-KSzbYoHuh4_-AHaIu&mediaurl=https%3a%2f%2fwww.journaldev.com%2fwp-content%2fuploads%2f2017%2f10%2fjava-for-loop.png&exph=1080&expw=916&q=FOR+LOOP+&simid=608029964676712723&FORM=IRPRST&ck=83805E12CA6A058B4D5E18B24F79B030&selectedIndex=9&ajaxhist=0&ajaxserp=0)
