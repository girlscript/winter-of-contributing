
# Varargs and Ambiguity

### Varargs





#### Syntax
```
return_type method_name(data_type... variableName){};

```


  
#### Let's understand with some examples.
Let's say you have to add 2 variables a and b.
The function is given below:

```
public class varargs {

static int sum(int a ,int b)  //function to add two variable a and b
{
return a +b;
}
}

public static void main (String []args){

System.out.println(“The sum of 4 and 5 is: “+ sum(5,4));

}

```

Now again you need to add variables but this time you have to add 3 variables that are a,b and c.

So for that also function is given below:
```
static int sum(int a ,int b)  //function to add two-variable a and b

{

return a +b;

}

static int sum(int a ,int b,int c)  //function to add two variable a and b
{

return a +b+c;

}
}

public static void main (String []args){
System.out.println(“The sum of 4 and 5 and 2 is: “+ sum(5,4,2));
}
```

Now again we need to add 4 numbers then again we will create another method (I.e we will again override )
So the function for that is below:

```
static int sum(int a ,int b,int c)  //function to add two-variable a and b
{
return a +b+c+d;
}

```
so there is one simple way to do these sums and not to use the override method again and again.
Here comes the concepts of Vargars.

```
static int add(int ...arr){
        int result = 0;
        for (int a : arr){
            result = result + a;
        }

```        
 So here instead of overloading, we can store in an array as shown above and then traverse and add the result.

  
### Ambiguity

A Java class can implement multiple interfaces and each interface can have some variables with respective name.
Now, suppose a class implements two interfaces but both have one or more variables of same type and same variable name.
Now if the interface variable is us the class implementing the interfaces are confused which . This is the ambiguity problem in java.

Please check the code below:

```
public class MyCarModelClass implements Inreface1, Inreface2 {
public MyCarModelClass() {
System.out.println("name is :: " + carModelName);
}
public static void main(String[] args) {
new MyCarModelClass();
}
}
//Interface1
public interface Inreface1 {
public String carModelName="Name";
}

//Interface2
public interface Inreface2 {
public String carModelName="Name";
}
```

Now, the code is confused which “carModelName” variable to use from which interface and to it is now in a ambiguous situation. And hence if this code runs it will give error like:
**“The field name is ambiguous”**

  
