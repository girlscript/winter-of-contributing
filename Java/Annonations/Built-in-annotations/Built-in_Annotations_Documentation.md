# Java Annotations
In Java, __Annotations__ are used to provide attributes or defining the attributes for a class, interface or methods.

Annotations are also useful for representing the __metadata__ for a class, methods or interface.

# Built-in Annotations in Java
There are several Built-in Annotations in Java, they are categorised into two:

## Built-in Annotations applied to Java Code
- [@Override](#override) 
- [@Deprecated](#deprecated)
- [@SuppressWarnings](#supresswarnings)
- [@FunctionalInterface](#functionalinterface)
<br></br>

## Built-in Annotations applied to Other Annotations
- [@Retention](#retention)
- [@Documented](#documented)
- [@Target](#target)
- [@Inherited](#inherited)
<br></br>

# @Override

The ```@Override``` annotation ensures that the subclass method is overriding the parent class method. 

We all make silly mistakes sometimes, such as spelling errors. As a result, it is preferable to use the ```@Override``` annotation, which ensures that the method is overridden.

__Example:__

```java
public class Parent
{
    void method()
    {
        System.out.println("method from parent class");
    }
}
class Child extends Parent
{
    @Override
    void method()
    {
        System.out.println("method from child class");
    }
    
    public static void main(String arg[])
    {
        Child obj = new Child();
        obj.method();
    }
}
```

__Output:__
```
method from child class
```

__Explanation:__
Here the ```Child``` class's ```method()``` is overriding the ```Parent``` class's ```method()```. If in ```Child``` class, the ```method()``` is written as ```Method()```, then it will give __compile time error__.

# @Deprecated

The method is marked as deprecated by the ```@Deprecated``` annotation, which causes the compiler to issue a warning. It warns the users that the method could be deleted in future updates. As a result, such methods should be avoided.

__Example:__

```java
public class Parent
{
    void method()
    {
        System.out.println("method from parent class");
    }
    
    public static void main(String arg[])
    {
        Child obj = new Child();
        obj.method2();
    }
}
class Child extends Parent
{
    
    void method()
    {
        System.out.println("method from child class");
    }
    
    @Deprecated
    void method2()
    {
        System.out.println("method2 from child class");
    }
}
```
__Explanation:__

In this, ```method2()``` of ```Child``` class is marked as deprecated such that at compile time it give the following output and at run time it print body of ```method2()```.

__Output:__

__At Compile time:__
```
Parent.java uses or overrides a deprecated API.
Recompile with -Xlint:deprecation for details.
```

__At Run time:__
```
method2 from child class
```

# @SupressWarnings
It tells the compiler to suppress specific warnings that it would generate.

__Example:__

```java

public class Parent
{
    void method()
    {
        System.out.println("method from parent class");
    }
    @SuppressWarnings("deprecation")
    public static void main(String arg[])
    {
        Child obj = new Child();
        obj.method2();
    }
}
class Child extends Parent
{
    
    void method()
    {
        System.out.println("method from child class");
    }
    
    @Deprecated
    void method2()
    {
        System.out.println("method2 from child class");
    }
}
```

__Explanation:__

This is the same example that you saw for ```@Deprecated```. In this, the ```@SuppressWarnings``` will suppress the warnings you saw in last example. And will give the following output.

__Output:__
```
method2 from child class
```

# @FunctionalInterface

An Interface which have exactly or only one __abstract method__ is called Functional Interface.

@FunctionalInterface ensures that a functional interface can only have one abstract method. 

__Example:__

```java
@FunctionalInterface
interface abs
{
    void tell(String m);
}

public class Parent implements abs
{
    public void tell(String m)
    {
        System.out.println(m);
    }
    
    public static void main(String arg[])
    {
        Parent obj = new Parent();
        obj.tell("hello world");
    }
}
```
__Explanation:__
In this the interface ```abs``` is marked as Function Interface, if it would contain another abstract method then it would give a compile-time error.

__Output:__
```
hello world
```

# @Retention
```@Retention``` specifies how the marked annotations are stored. 

__Example:__
```java
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
@Retention(RetentionPolicy.CLASS)
@interface MyAnno{
    String m();
}
```
Here in the example you've seen ```RetentionPolicy.CLASS``` there are other options available too.

```RetentionPolicy.RUNTIME```: means the annotation should be accessible via Java Reflection at runtime and available to Java Compiler and JVM.

```RetentionPolicy.CLASS```: means the annotation would be stored at .class file but would not be accessible during runtime.

```RetentionPolicy.SOURCE```: The annotation would be in the program's source code, not in a ```.class``` file or during runtime.

# @Documented
The ```@Documented``` annotation specifies that JavaDoc should document components that used it.

__Example:__
```java
import java.lang.annotation.Documented
@Documented
@interface MyAnno{
    //body
}

@MyAnno
class Test{
    //body
}
```
Here, while generating JavaDoc for class Test, MyAnno would be included in it.

# @Target
```@Target``` annotation indicates where you can use the annotations.

__Example:__
```java
import java.lang.annotation.ElementType;
import java.lang.annotation.Target;

@Target({ElementType.METHOD})
@interface MyAnno{
    //body
}

class MyTest{
    @MyAnno
    public static void method(){
        //body
    }
}
```
__Explanation:__

Here, the Target Type is defined as METHOD,that means the annotation can be used on methods only. Apart from METHOD, there are other options too like PACKAGE, TYPE, CONSTRUCTOR.

# @Inherited

The annotation by default cannot be inherited. However, to inherit Annotation you can use ```@Inherited``` annotation so that the subclasses can inherit it.

__Example:__
```java
import java.lang.annotation.Inherited;
@Inherited
@interface MyAnno{
    //body
}

@MyAnno
public class Parent{
    //body
}

public class Child extends Parent{
    //body
}
```

__Explanation:__ Here the ```Child``` class can inherit ```@MyAnno``` annotation.

# Conclusion

Congratulation! You've successfully learned about Built-in Java Annotations.

Keep exploring Java :wave:

Contributor : [Abhinandan Adhikari](https://github.com/AbhinandanAdhikari) :heart: