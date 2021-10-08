
<h1 id="heading"> <strong><u>Default, marker annotations, single member annotations</u></strong></h1>

<p>
<h2 id="java-default-annotations">Java Default Annotations</h2>
<p>
Default annotations are also known as predefined annotations.
A set of annotation types are predefined in the Java SE API. Some annotation types are used by the Java compiler, and some apply to other annotations.
<h4>Annotation Types Used by the Java Language :- </h4>

The predefined annotation types defined in `java.lang` are `@Deprecated`, `@Override`, and `@SuppressWarnings`.
<ul>
<li><strong>@override - </strong>This annotation informs the compiler that the element is meant to override an element declared in a superclass.

```Java
	// mark method as a superclass method
	// that has been overridden
   **@Override** 
   int overriddenMethod() { }
```
Example:-
```Java
class Parent
{
	public void Display()
	{
		System.out.println("Parent display()");
	}
	
	public static void main(String args[])
	{
		Parent t1 = new Child();
		t1.Display();
	}	
}
class Child extends Base
{
	@Override
	public void Display()
	{
		System.out.println("Child display()");
	}
}

```
While it is not always required to use this annotation when overriding a method, it helps to prevent errors. If a method marked with `@Override` fails to correctly override a method in one of its superclasses, the compiler generates an error.
</li>

<br>

<li><strong>@Deprecated - </strong>This annotation indicates that the marked element is <em>deprecated</em> and should no longer be used. The compiler generates a warning whenever a program uses a method, class, or field with the <strong><em>@Deprecated</em></strong> annotation. When an element is deprecated, it should also be documented using the Javadoc <strong><em>@Deprecated</em></strong> tag, as shown in the following example. The use of the at sign (@) in both Javadoc comments and in annotations is not coincidental: they are related conceptually. Also, note that the Javadoc tag starts with a lowercase <em>d</em> and the annotation starts with an uppercase <em>D</em>.

```Java
// Javadoc comment follows
    /**
     * _@deprecated_
     * _explanation of why it was deprecated_
     */
    **@Deprecated**
    static void deprecatedMethod() { }
}
```
Example :-
```Java
public class DeprecatedTest
{
	@Deprecated
	public void Display()
	{
		System.out.println("Deprecatedtest display()");
	}

	public static void main(String args[])
	{
		DeprecatedTest d1 = new DeprecatedTest();
		d1.Display();
	}
}

```

</li>

<br>

<li><strong>@SuppressWarnings - </strong> This annotation tells the compiler to suppress specific warnings that it would otherwise generate. In the following example, a deprecated method is used, and the compiler usually generates a warning. In this case, however, the annotation causes the warning to be suppressed.

```Java
	// use a deprecated method and tell 
   // compiler not to generate a warning
   @SuppressWarnings("deprecation")
    void useDeprecatedMethod() {
        // deprecation warning
        // - suppressed
        objectOne.deprecatedMethod();
    }
```
Example :-
```Java
class DeprecatedTest
{
	@Deprecated
	public void Display()
	{
		System.out.println("Deprecatedtest display()");
	}
}

public class SuppressWarningTest
{
	// If we comment below annotation, program generates
	// warning
	@SuppressWarnings({"checked", "deprecation"})
	public static void main(String args[])
	{
		DeprecatedTest d1 = new DeprecatedTest();
		d1.Display();
	}
}
```
</li>
<li><strong>@SafeVarargs - </strong> This annotation, when applied to a method or constructor, asserts that the code does not perform potentially unsafe operations on its <em>varargs</em> parameter. When this annotation type is used, unchecked warnings relating to <em>varargs</em> usage are suppressed.</li>
<br>
<li><strong>@FunctionalInterface - </strong>This annotation, introduced in Java SE 8, indicates that the type declaration is intended to be a functional interface, as defined by the Java Language Specification.</li>
</ul>
</p>

<br>
<br>

<h2 id="java-marker-annotations"><strong>Java Marker Annotations</strong></h2>
<p>
<p>Marker annotations are solely used for the purpose of declaration. They are used to mark declarations in Java. Annotations in Java have a higher priority than comments but a lower priority as compared to source code. Unlike comments, annotations have the power to determine the execution of the compiler for a certain code.</p>
<p>
Marker annotations are special annotations in Java that do not contain any members or data. As marker interfaces do not contain any members, just declaring the annotation in your code is sufficient for it to influence the output in whatever terms you want. If you want to check whether a marker annotation is present or not, you can do so by invoking the <em>isAnnoationPresent()</em> method. This method is part of the annotated element interface.
</p>
<p>
<h4>A Simple Java Marker Annotation Example</h4>
The sample code in this section makes use of a Java annotation marker. As mentioned before, the marker annotation does not contain any member or data. Therefore, it is sufficient to determine whether it is present or absent.

```Java
//Code to demonstrate the use of Marker Annotation

import  java.lang.annotation.*;
import  java.lang.reflect.*;

@Retention(RetentionPolicy.RUNTIME)
@interface  MyMarker  {

}

class  Marker  {
	@MyMarker
	public  static  void  myMethod() {
	Marker  obj  =  new  Marker();

	try {

			Method  m  =  obj.getClass().getMethod("myMethod");
	
			if (m.isAnnotationPresent(MyMarker.class))
			System.out.println("MyMarker is present");
		}
	
	catch (NoSuchMethodException  exc) {
		System.out.println("Method not found !!");
	}
}

public  static  void  main(String  args[]) {
		myMethod();
	}
}
```
```
Output:
	MyMarker is present
```
<p>//The output from the program confirms the usage of a Marker Annotation as it prints out an affirmative statement.</p>
</p>
<p>
<h4>Summary :</h4>
<ol>
<li>Marker Annotations are used to mark a declaration.</li>
<li>A marker annotation is a special kind of annotation.</li>
<li>A marker annotation contains no members.</li>
<li>Using isAnnotationPresent( ) to determine if the marker is present.</li>
</ol>
</p>
</p>

<br>
<br>

<h2 id="java-single-member-annotations"><strong>Java Single Member Annotations</strong></h2>
<p>
A <em>single-member</em> annotation contains only one member. It works like a normal annotation except that it allows a shorthand form of specifying the value of the member. When only one member is present, you can simply specify the value for that member when the annotation is applied, you do not need to specify the name of the member. However, in order to use this shorthand, the name of the member must be <strong>value</strong>.
</p>
<p>
<h4>Java Single-Member Annotations Example</h4>
Following is an example program that creates and uses a single-member annotation :

```Java
/* Java Program Example - Java Single-Member Annotation */

import java.lang.annotation.*;
import java.lang.reflect.*;

/* a single-member annotation */
@Retention(RetentionPolicy.RUNTIME)
@interface MySingle {
   int value();       // this variable name must be value
}

class Single {
   
   /* annotate a method using a single-member annotation */
   @MySingle(10)
   public static void myMethod() {
      Single obj = new Single();
      
      try {
         Method m = obj.getClass().getMethod()("myMethod");
         
         MySingle anno = m.getAnnotation(MySingle.class);
         
         System.out.println(anno.value());      // displays 10
         
      } catch(NoSuchMethodException exc) {
         System.out.println("Method not found..!!");
      }
   }
   
   public static void main(String args[])
   {
      myMethod();
   }
}
```
<p>
As expected, this program displays the value 10. In the program, <strong>@MySingle</strong> is used to annotate the <strong>myMethod()</strong>, as shown here :
</p>

```
Output:
	@MySingle(10)	
```
Notice that  **value**  = need not be specified.

You can use single-value syntax when applying an annotation that has other members, but those other members must all have the default values. For example, here the value  **abc**  is added, with a default value of zero :

```Java
@interface SomeAnnotat {
   int value();
   int abc() default 0;
}
```
In cases in which you want to use the default for **abc**, you can apply **@SomeAnnotat**, as shown next, by simply specifying the value of **value** by using the single-member syntax.

```
@SomeAnnotat(88)
```
In this case, **abc** defaults to zero, and **value** gets the value 88. Of course, to specify a different value for **abc** requires that both members be explicitly named, as shown here:

```
@SomeAnnotat(value = 88, abc = 99)
```
Remember, whenever you are using a single-member annotation, the name of that member must be **value**.
</p>
<h4>Summary :</h4>
<ol>
<li>Single-Member Annotations contains only one member.</li>
<li>Single-Member Annotations allow a shorthand form of specifying the value.</li>
<li>The name of the member must be value.</li>
</ol>

<br><br>

&nbsp; &nbsp;
[`↑ Back to Top`](#heading) &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
[`↑ Java Marker Annotations`](#java-marker-annotations) &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
[`↑ Java Single Member Annotations`](#java-single-member-annotations) &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
[`↑ Java Default Annotations`](#java-default-annotations) &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;

<br>
<p>Created by <a href="https://github.com/thejayeshsoni" target="_blank">Jayesh Soni</a></p>
<br><hr><br>