# Type Annotations In Java

Annotations in Java are used to provide additional information about a program. In previous Java versions, annotations can be used only while declarations. Type annotation is a new feature of Java SE 8 along with repeating annotation.

Type Annotations can be applied to any type use. It ensures stronger type checking which can help reduce the number of errors in the Java code and improved analysis of Java programs.

**Applying Type Annotations** - They can be applied in many ways, mostly they are placed before the type to which they have been applied.

<br />

## <ins>Use Cases of Type Annotations -</ins>

<br />

- **Simple type definitions with type annotations :**
```
  @NotNull String str = ....
```
- **Class instance creation expression :**
```
  new @Interned FirstObject();
```
- **Type cast :**
```
  MyString = (@NonNull String) str;
```
- **Implement clause :**
```
  class MyForecast<T> implements @NonEmpty List< @ReadOnly T>
```
- **Thrown exception declaration :**
```
  void monitorTemp() throws @Critical TempException
```
<br />

The definition of declaration and type annotations is very similar, the key differentiator is in the `@Target` specification, which indicates 
the type of elements to which a particular annotation can be applied. 


**Declaration annotation can include the following meta-annotation :**
```
  @Target(ElementType.FIELD)
```
**Type annotation should contain the following meta-annotation :**
```
  @Target(ElementType.TYPE_USE)
```
**If the type annotation is to target a type parameter, the annotation should include the following meta-annotation :**
```
  @Target (ElementType.TYPE_PARAMETER)
```
<br />

## <ins>Code for demonstrating Type Annotation -</ins>

>```java
>import java.lang.annotation.ElementType;
>import java.lang.annotation.Target;
> 
>
>@Target(ElementType.TYPE_USE)
>
>@interface TypeAnnotExample{}
>   
>public class Main {
>  public static void main(String[] args) {
>   
>   
>   @TypeAnnotExample String str = "Annotating the type of the string";    
>                                
>         System.out.println(str);
>         Fun();
>     }
>   
>   
>   static @TypeAnnotExample int Fun(){
>         System.out.println("Annotating the function's return type");    
>                               
>    return 0;
>     }
> }
>```

## Output
```
Annotating the type of the string
Annotating the function's return type
```

The Java SE 8 version does not provide a type check framework, but it does allows us to write our own custom annotations for the type check. Type-checking frameworks comprises 
of type annotation definitions and plug-ins modules that may be used for annotation processing.

For example, `@NonNull` annotation which comes under Checker Framework, may be applied to a type so that when it is compiled, it is checked not to be `null`.

Few more examples of annotations available in the Checker Framework: 
- `@GuardedBy`: Indicates a type whose value cannot be accessed unless the lock is kept. 

- `@Tainted`: Specifies a type that may contain values that are not trusted.

- `@Untainted`: Specifies a type that includes only trusted values.

- `@Regex`: Specifies a valid regular statement on strings.

<br />
There are various type-checking frameworks that can be used as a plug-ins in Java compiler to check and implement type that have 
been annotated. 

To make use of the annotations that are part of the Checker framework,  the framework needs to be downloaded, followed by adding the annotations source files into the CLASSPATH.
