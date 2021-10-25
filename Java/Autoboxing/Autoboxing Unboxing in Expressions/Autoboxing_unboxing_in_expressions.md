# Autoboxing/Unboxing in Expressions

Autoboxing and unboxing takes place wherever there is a conversion from/to an object. In case of expressions, a numeric object is automatically unboxed and the result of the expression is reboxed (if required).

## Autoboxing and Unboxing in expressions involving same datatype
Consider the following program, 

```
class ExpressionBoxing{
    public static void main(String[] args){

        Integer object1, object2;  //Wrapper class objects.
        int i;                     //Primitive datatype.
        
        object1= 500;

        //Expression 1
        ++object1;

        //Expression 2
        object2 = object2 + (object1/5);

        //Expression 3
        i = object1 + object2;

    }
}
```

### **Expression 1**
`++object1` <br/>
Here `object1` is automatically unboxed then an increment operation is performed and then the result is reboxed into `object1`. 

### **Expression 2**
`object2 = object1 + (object1/5)` <br/>
Here `object1` is unboxed, following which the expression is evaluated and then the result is autoboxed and assigned to `object2`.

### **Expression 3**
`i = object1 + object2` <br/>
Here `object1` and `object2` are unboxed and the result is evaluated. But since `i` is a primitive datatype the result is not autoboxed before assigning to `i`. 

<br/>
<br/>

## Autoboxing and Unboxing in expressions involving different datatype

Consider the following program, 

```
class ExpressionBoxing{
    public static void main(String[] args){

        Integer integerObject = 10; 
        Double doubleObject = 2.5;

        doubleObject = doubleObject + integerObject;
    }
}
```

Notice in the expression `doubleObject = doubleObject + integerObject`, we have two types of object. Here, both doubleObject and integerObject are unboxed and the result is evalutated to `12.5`. Following this the result it autoboxed to `doubleObject`. 

## Auto-unboxing expressions in switch cases

Since, Integer objects can be automatically unboxed to primitive int type, we can use Integer numeric objects to control switch statements. 
```
Integer choice = 2;

switch(choice){
    case 1: 
        System.out.println("Case 1 was selected");
        break;
    case 2: 
        System.out.println("Case 2 was selected");
        break;
    default:
        System.out.println("Choose a valid option");
}
```
During the runtime the `choice` object is unboxed and its `int` value is obtained. Which is further used to control switch statements.

