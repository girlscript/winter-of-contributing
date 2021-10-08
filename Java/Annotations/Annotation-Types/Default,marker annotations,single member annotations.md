
<h1 id="heading"> <strong><u>Default, marker annotations, single member annotations</u></strong></h1>

<p>
<h2 id="java-default-annotations">Java Default Annotations</h2>
<p>
Java defines a set of annotations that are built into the language. These annotations generate or suppress compiler warnings and errors. Applying them consistently is often a good practice since adding them can prevent future programmer error.

<h4>Annotations applied to Java code:</h4>
<ul>
<li><strong>@override - </strong> Checks that the method is an override. Causes a compilation error if the method is not found in one of the parent classes or implemented interfaces</li>
<li><strong>@Deprecated - </strong> Marks the method as obsolete. Causes a compile warning if the method is used.</li>
<li><strong>@Deprecated - </strong> Instructs the compiler to suppress the compile time warnings specified in the annotation parameters.</li>
</ul>
</p>
<br>

```Java
Example and Syntax:

public class Animal {
    public void speak() {
    }

    public String getType() {
        return "Generic animal";
    }
}

public class Cat extends Animal {
    @Override
    public void speak() { // This is a good override.
        System.out.println("Meow.");
    }

    @Override
    public String gettype() { // Compile-time error due to typo: should be getType() not gettype().
        return "Cat";
    }
}
```
<p>
This example demonstrates the use of the <strong><em>@Override</em></strong> annotation. It instructs the compiler to check parent classes for matching methods. In this case, an error is generated because the <em>gettype()</em> method of class Cat doesn't in fact override <em>gettype()</em> of class Animal like is desired, because of the mismatching case. If the <em>@Override</em> annotation were absent, a new method of name <em>gettype()</em> would be created in class Cat.
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
<h4>Summery :</h4>
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
<h4>Summery :</h4>
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