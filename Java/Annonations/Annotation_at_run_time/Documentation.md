# Annotations at runtime
Annotations are tags representing metadata that provide additional information about a program to the java compiler and JVM. This tag is attached with classes, methods or fields of the program. If the retention policy of any annotation is specified to be RUNTIME, then those annotations can be queried at runtime by any java program. This is possible with the help of Java reflection. 
Here is an example of a class annotation.

```java
import java.lang.annotation.*;
import java.lang.reflect.*;

@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.TYPE)

public @interface MyAnnotation {
    public String name();
    public String value();
}
@MyAnnotation(name="someName",  value = "Hello World")
public class Test {
}
```

The first few lines constitute the definition of MyAnnotation. @Retention(RetentionPolicy.RUNTIME) and @Target(ElementType.TYPE), specifies how the annotation is to be used. Retention(RetentionPolicy.RUNTIME) allows annotation to be accessed via reflection. Not setting this directive will not preserve the annotation at runtime.<br>
Class, field, method and parameter annotations can be accessed at runtime. Following are a few examples to show the same.
- Class annotations: 

```java
 Class TestA = Test.class;
 Annotation[] annotations = TestA.getAnnotations();     // TestA.getAnnotations(MyAnnotation.class) to access specific class annotation

 for(Annotation annotation : annotations){      // remove for loop to access specific class annotation
     if(annotation instanceof MyAnnotation){
         MyAnnotation myAnnotation = (MyAnnotation) annotation;
         System.out.println("name: " + myAnnotation.name());
         System.out.println("value: " + myAnnotation.value());
    }
}
```
- Method annotations:

``` java
Method method = ... //obtain method object
Annotation[] annotations = method.getDeclaredAnnotations();

for(Annotation annotation : annotations){
    if(annotation instanceof MyAnnotation){
        MyAnnotation myAnnotation = (MyAnnotation) annotation;
        System.out.println("name: " + myAnnotation.name());
        System.out.println("value: " + myAnnotation.value());
    }
}
```
- Parameter annotations

```java
Method method = ... //obtain method object
Annotation[][] parameterAnnotations = method.getParameterAnnotations();
Class[] parameterTypes = method.getParameterTypes();

int i=0;
for(Annotation[] annotations : parameterAnnotations){
  Class parameterType = parameterTypes[i++];

  for(Annotation annotation : annotations){
    if(annotation instanceof MyAnnotation){
        MyAnnotation myAnnotation = (MyAnnotation) annotation;
        System.out.println("param: " + parameterType.getName());
        System.out.println("name : " + myAnnotation.name());
        System.out.println("value: " + myAnnotation.value());
    }
  }
}
```
- Field annotations:

```java
Field field = ... //obtain field object
Annotation[] annotations = field.getDeclaredAnnotations();

for(Annotation annotation : annotations){
    if(annotation instanceof MyAnnotation){
        MyAnnotation myAnnotation = (MyAnnotation) annotation;
        System.out.println("name: " + myAnnotation.name());
        System.out.println("value: " + myAnnotation.value());
    }
}
```
You can not remove an annotation at runtime. Reflection only inspects code.
