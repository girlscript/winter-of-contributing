### Java Annotations

---

##### Introduction:

- Annotations are used to provide supplement information about a program.
- Annotations usually start with a '@'
- Annotations help to associate metadata (information or data about data) to the program elements i.e. instance variables, constructors, methods, classes, etc.
- Annotations are not pure comments as they can change the way a program is treated by compiler.

##### Built-In Java Annotations:

Java defines a set of annotations that are built into the language. Of the seven standard annotations, three are part of java.lang, and the remaining four are imported from java.lang.annotation.

Annotations applied to Java code:

- `@Override` - Checks that the method is an override. Causes a compilation error if the method is not found in one of the parent classes or implemented interfaces.
- `@Deprecated` - Marks the method as obsolete. Causes a compile warning if the method is used.
- `@SuppressWarnings` - Instructs the compiler to suppress the compile time warnings specified in the annotation parameters.

Annotations applied to Meta Annotations:

- `@Retention` - Specifies how the marked annotation is stored, whether in code only, compiled into the class, or available at runtime through reflection.
- `@Documented` - Marks another annotation for inclusion in the documentation.
- `@Target` - Marks another annotation to restrict what kind of Java elements the annotation may be applied to.
- `@Inherited` - Marks another annotation to be inherited to subclasses of annotated class (by default annotations are not inherited by subclasses).

Since Java 7, three additional annotations have been added to the language.

- `@SafeVarargs` - Suppress warnings for all callers of a method or constructor with a generics varargs parameter, since Java 7.
- `@FunctionalInterface` - Specifies that the type declaration is intended to be a functional interface, since Java 8.
- `@Repeatable` - Specifies that the annotation can be applied more than once to the same declaration, since Java 8.

Some Examples of Built-In Annotations:

```
public class MyParentClass {

    public void randomMethod() {
        System.out.println("Parent class method");
    }
}


public class MyChildClass extends MyParentClass {

    @Override
    public void randomMethod() {
        System.out.println("Child class method");
    }
}
```

```
import java.util.*;

class TestAnnotation2{
    @SuppressWarnings("unchecked")
    public static void main(String args[]){
        ArrayList list=new ArrayList();
        list.add("sonoo");
        list.add("vimal");
        list.add("ratan");

        for(Object obj:list){
            System.out.println(obj);
        }
    }
}
```

```
class A{
void m(){System.out.println("hello m");}

@Deprecated
void n(){System.out.println("hello n");}
}

class TestAnnotation3{
public static void main(String args[]){

A a=new A();
a.n();
}}
```

##### Custom Annotations:

Annotation type declarations are similar to normal interface declarations. An at-sign (@) precedes the interface keyword. Each method declaration defines an element of the annotation type. Method declarations must not have any parameters or a throws clause. Return types are restricted to primitives, String, Class, enums, annotations, and arrays of the preceding types. Methods can have default values.

ex:

```
  // @Twizzle is an annotation to method toggle().
  @Twizzle
  public void toggle() {
  }

  // Declares the annotation Twizzle.
  public @interface Twizzle {
  }
```

Some key points to remember while using Custom Annotations:

1. Method should not have any throws clauses
2. Method should return one of the following: primitive data types, String, Class, enum or array of these data types.
3. Method should not have any parameter.
4. We should attach @ just before interface keyword to define annotation.
5. It may assign a default value to the method.

##### Types of Annotations:

1. Marker Annotation
2. Single-Value Annotation
3. Multi-Value Annotation

- Marker Annotation: An annotation that has no method, is called marker annotation. The @Override and @Deprecated are marker annotations.
  ex:

```
@interface MyAnnotation{}
```

- Single-Value Annotation: An annotation that has one method, is called single-value annotation.
  ex:

```
@interface MyAnnotation{
int value();
}
```

- Multi-Value Annotation: An annotation that has more than one method, is called Multi-Value annotation.
  ex:

```
@interface MyAnnotation{
int value1();
String value2();
String value3();
}
```

##### Built-In Annotations used in custom annotations in Java:

- `@Target`
- `@Retention`
- `@Inherited`
- `@Documented`

@Target tag is used to specify at which type, the annotation is used.
The java.lang.annotation.ElementType enum declares many constants to specify the type of element where annotation is to be applied such as TYPE, METHOD, FIELD etc.
ex:

```
@Target(ElementType.TYPE)
@interface MyAnnotation{
int value1();
String value2();
}
```

@Retention annotation is used to specify to what level annotation will be available.
ex:

```
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.TYPE)
@interface MyAnnotation{
int value1();
String value2();
}
```

@Inherited By default, annotations are not inherited to subclasses. The @Inherited annotation marks the annotation to be inherited to subclasses.
ex:

```
@Inherited
@interface ForEveryone { }
//Now it will be available to subclass also

@interface ForEveryone { }
class Superclass{}

class Subclass extends Superclass{}
```

The @Documented Marks the annotation for inclusion in the documentation.

---

Credits: GeeksforGeeks, javaTpoint, Wikipedia
