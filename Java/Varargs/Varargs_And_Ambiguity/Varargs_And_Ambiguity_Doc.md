
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
public class varargs 
{
    static int sum(int a ,int b)  //function to add two variable a and b
        {
            return a +b;
        }


    public static void main (String []args)
        {
            System.out.println(“The sum of 4 and 5 is: “+ sum(5,4));
        }
}                                      

```

Now again you need to add variables but this time you have to add 3 variables that are a,b and c.

So for that also function is given below:
```
public class varargs 
{
    static int sum(int a ,int b,int c)  //function to add three variable a and b and c
    {
        return a+b+c;
    }


    public static void main (String []args)
    {
        System.out.println(“The sum of 4 and 5 and 6 is: “+ sum(5,4,6));
    }
}  
```

Now again we need to add 4 numbers then again we will create another method (I.e we will again override )
So the function for that is below:

```
    static int sum(int a ,int b,int c,int d)  //function to add four-variable a,b,c and d
    {
        return a+b+c+d;
    }

```
so there is one simple way to do these sums and not to use the override method again and again.
Here comes the concepts of Vargars.

```
    static int add(int ...arr)
    {
        int result = 0;
    for (int a : arr)
    {
        result = result + a;
    }

```        
 So here instead of overloading, we can store in an array as shown above and then traverse and add the result.

  
### Ambiguity

unexpected errors can be result when overloading a method that takes a variable length argument. These errors involve ambiguity because both the methods are valid candidates for invocation. The compiler cannot decide onto which method to bind the method call

```
class SomeClass 
{
    void foo(int... num) 
    {}

    void foo(boolean... isTrue) {} 

    public static void main(String[] args)
    {
        foo(); // ambiguous
    }
}
``` 
In above program, the overloading of fun() is correct but this program will not compile and it will give as error like fun(); // Error: Ambiguous!.


Also in the code mentioned below ambiguity can arise:

```
void foo(int num1, int... num2) {}

void foo(int.... num1) {}

```
This call may resolve to fun(int … a) or fun(int n, int … a) method, thus creating ambiguity. To solve these ambiguity errors like above, we will need to forego overloading and simply use two different method names.




Reference :Youtube Channels,JavaPoints and Quora and Geeks for Geeks.
  
