# Throw, throws, finally - Audio

https://drive.google.com/file/d/1pY_XtvUk9Jx47Y0zJ_BHfwqe83b8rtdL/view?usp=sharing

### Contents 

- Introduction 
- Exception Handling 
- Throw keyword 
- Example-1
- Exception object
- Example-2
- Example-3
- Throws keyword 
- Example-4
- Multiple exception 
- Example-5
- Finally keyword 
- Example-6



<br>

### EXAMPLE-1 

```
throw new IOException();

```
<br>

### EXAMPLE-2

```
public class Eligibility{
   public void checkAge(int age){
      if(age<18)
         throw new ArithmeticException("Not Eligible for voting");
      else
         System.out.println("Eligible for voting");
   }
   public static void main(String args[]){
      Eligibility obj = new Eligibility();
      obj.checkAge(13);
   }
}


```

<br>

### EXAMPLE-3

```
public class main {
  public static void main(String[] args)
  {
   try {
    double x=3/0;
    throw new ArithmeticException();
   }
   catch (ArithmeticException e) 
   {
     e.printStackTrace();
   }
  }
}



```
<br>

### EXAMPLE-4

```

public class Divide{
   public int division(int a, int b) throws ArithmeticException{
      int t = a/b;
      return t;
   }
   public static void main(String args[]){
      Divide obj = new Divide();
      try{
         System.out.println(obj.division(15,0));
      }
      catch(ArithmeticException e){
         System.out.println("You shouldn't divide number by zero");
      }
   }
}


```
<br>


### EXAMPLE-5

```
public void myMethod() throws ArithmeticException, NullPointerException
{
  // Statements that might throw an exception 
}

public static void main(String args[]) { 
  try {
    myMethod();
  }
  catch (ArithmeticException e) {
    // Exception handling statements
  }
  catch (NullPointerException e) {
    // Exception handling statements
  }
}



```

<br>

### EXAMPLE-6

```
class Main
{
  public static void main(String[] args)
  {
    int a[] = new int[2];
    try
    {
      System.out.println(a[3]);
      // the above statement will throw ArrayIndexOutOfBoundException 
    }
    catch(ArrayIndexOutOfBoundsException e) {
      System.out.println("Exception caught");
    }
    finally
    {
      System.out.println("finally is always executed.");
    }
  }
}



```


