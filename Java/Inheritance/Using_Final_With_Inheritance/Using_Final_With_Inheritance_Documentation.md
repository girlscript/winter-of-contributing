# ```final``` in Java

The ```final``` keyword in Java is an non-access modifier that is used to restrict the user. It is only applicable for __variable__, __method__, __class__.

## ```final``` variable

When you define a variable as ```final``` in Java, it indicates you can't alter its value, it'll always be a constant. With the help of an example, you will get clarity.

__Syntax:__
```java
final  dataType variable_name;
```
__Example:__
```java
class Sample
    {
        public static void main(String arg[])
        {
            final int finVariable = 10; // final variable
            finVariable = 20; // cannot modify it
            System.out.println(finVariable);
```
__Explanation:__

When you declare a variable as final, then it will give __compile-time error__. And when you try to run it, you will see the following output.

__Output:__
```
cannot assign a value to final variable finVariable
            finVariable = 20;
            ^
```
## ```final``` reference variable

Considering __reference variable__, if you declare them as ```final``` that means you can't reassign it to another __object__ or __reference__. But however that value of data members of that __object__ can be changed

## ```final``` method

Before learning about ```final``` method, make sure you do know about __method overriding__ and __inheritance__. So, when you declare any method as ```final``` that means, you cannot override it. You will get clear with an example.

__Syntax:__
```java
modifier final returnType methodName(){
    // statements
}
```
__Example:__

```java
class Parent 
{
    public final void code() // final method
    {
        System.out.println("You're learning JAVA perfectly");
    }
}

class Child extends Parent
{
    public final void code() // cannot be overriden
    {
        System.out.println("You're not learning JAVA perfectly");
    }
    public static void main(String arg[])
    {
        Child obj = new Child();
        obj.code();
    }
}
```

__Explanation:__

You cannot override a method declared ```final```, if you do so you will get __compile-time error__ and will see the following output.

__Output:__
```
 code() in Child cannot override code() in Parent
    public final void code()
                      ^
  overridden method is final
```

## ```final``` class

When you declare or make a class as ```final``` that means, your ```final``` class cannot be inherited by any other class.

__Syntax:__
```java
final class ClassName
{

}
```

__Example:__
```java
final class Parent 
{
    public void code()
    {
        System.out.println("You're learning JAVA perfectly");
    }
}

class Child extends Parent 
{
    public void code()
    {
        System.out.println("You're not learning JAVA perfectly");
    }
    public static void main(String arg[])
    {
        Child obj = new Child();
        obj.code();
    }
}
```

__Explanation:__
You cannot inherited any ```final``` class and if you try to do so you will get __compile-time error__ and will see the following output.

__Output:__
```
cannot inherit from final Parent
class Child extends Parent
                    ^
```
__NOTE :__ A class declared as ```final``` does not mean that the value of data members of object of this ```final``` class cannot be changed.

# Can a __final__ variable be inherited?

The answer to your question is "Yes", but you cannot modify the value of that __final__ variable. You will get clear with an example.

__Example:__
```java

class Parent 
{
   final String sup = "Hey, This is an variable from parent class";
}

class Child extends Parent
{
    String sub = "Hey, This is an variable from child class";
    
}
class Sample
{
    public static void main(String arg[])
    {
        Child obj = new Child();
        System.out.println(obj.sup);
        System.out.println(obj.sub);
    }
}

```

__Output:__
```
Hey, This is an variable from parent class
Hey, This is an variable from child class
```

# Can a __final__ method be inherited?

The answer to your question is "Yes", but you cannot override it. You will get clear with an example.

__Example:__

```java
class Parent 
{
   final void ParMeth()
   {
       System.out.println("final method from Parent class");
   }
}

class Child extends Parent
{
    void ChiMeth()
    {
        System.out.println("method from Child Class");
    }
    
}
class Sample
{
    public static void main(String arg[])
    {
        Child obj = new Child();
        obj.ParMeth();
        obj.ChiMeth();
    }
}
```

__Output:__

```
final method from Parent class
method from Child Class
```

# Conclusion

Congratulations! You've successfully learned about ```final``` keyword and using ```final``` with inheritance.

Keep exploring Java :wave:

Contributor : [Abhinandan Adhikari](https://github.com/AbhinandanAdhikari) :heart:
