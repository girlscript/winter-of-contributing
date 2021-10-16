
# Annotations in Java

## What is a Java Annotation?
Java Annotation is a kind of a tag that represents the metadata or information attached with class, interface, methods, or fields to show some additional information that Java compiler and JVM can use.
Though Annotations are not a part of the Java code they allow us to add metadata information into our source code. Java introduced Annotations from JDK 5.
There is no direct effect of Annotations on the operation of the code they annotate; they do not affect the execution of the program. Annotations provide supplemental information about a program.

### Some points about Annotations are:
<ul>
<li>They start with ‘@’.</li>
<li>They do not change the action or execution of a compiled program.</li>
<li>Annotations help to associate metadata or information to the elements of the program like classes, instance variables, interfaces, constructors, methods, etc.</li>
<li>We cannot consider Annotations as pure comments as they can change the way a compiler treats a program</li>
<ul>

## Types of Java Annotations :
<ul>
<li>Marker Annotations</li>
<li>Single Value Annotations</li>
<li>Full Annotations</li>
<li>Type Annotation</li>
<li>Repeating Annotation</li>
</ul>
  <br>
  
  ## Using Default Values :
<ul>
<li>Annotation default values is used if no value is specified.</li>
<li>A default value is specified by adding a default clause.</li>
<li>Default value must be of a type compatible with type.</li>
  </ul>

Here is @MyAnnotation rewritten to include default values:

@Retention(RetentionPolicy.RUNTIME)<br>
@interface MyAnnotation {<br>
     String stringValue() default "defaultString";<br>
     int intValue() default 101;<br>
}

In this module we more focus on Marker Annotations & Single Value Annotations.

## Marker Annotations :

The only purpose of the Marker Annotation is to mark a declaration. The Marker Annotations do not contain any members and do not consist of any data.

Therefore, the presence of these annotations as an annotation is sufficient. Since the marker interface in java contains no members, simply determining whether it is present or absent is sufficient. @Override is an example of Marker Annotation.

Example: – @TestAnnotation()
  
### Code to demonstrate the use of Marker Annotation :

import java.lang.annotation.*;<br>
import java.lang.reflect.*;<br>

@Retention (RetentionPolicy.RUNTIME)<br>
@interface MyMarker { }<br>

class Marker<br>
{<br>
@MyMarker<br>
public static void myMethod()<br>
{<br>
Marker obj = new Marker ();<br>

try<br>
{<br>
Method m = obj.getClass().getMethod (“myMethod”);<br>

if(m.isAnnotationPresent (MyMarker.class))<br>
System.out.println (“MyMarker is present”);<br>

}<br>

catch(NoSuchMethodException exc)<br>
{<br>
System.out.println (“Method not found !!”);<br>
}<br>
}<br>

public static void main (String args [])<br>
{<br>
myMethod ();<br>
}<br>
}<br>
  
  ### Output
  MyMarker is Present

## Single member Annotations :

"Single member Annotations" are also known as "Single value Annotations".

The Single Value Annotations as the name suggests, contain only one member. They allow a shorthand form of specifying the value of the member.

When we apply this annotation, we only need to specify the value for that member and also do not need to specify the name of the member. However, in order to use this shorthand, there must be a value for the name of the member.

Example: @TestAnnotation(“testing”);
  
### Code to demonstrate the use of Single Member Annotation :

import java.lang.annotation.*;<br>
import java.lang.reflect.*;<br>

@Retention (RetentionPolicy.RUNTIME)<br>
@interface MySingle {<br>
int value ()<br>
 }<br>

class Single<br>
{<br>
@MySingle (10)<br>
public static void myMethod()<br>
{<br>
Single obj = new Single ();<br>

try<br>
{<br>
Method m = obj.getClass().getMethod (“myMethod”);<br>

MySingle anno = m.getAnnotation (MySingle.class);<br>

System.out.println (anno.value ());<br>

}<br>

catch (NoSuchMethodException exc)<br>
{<br>
System.out.println (“Method not found !!”);<br>
}<br>
}<br>

public static void main (String args [])<br>
{<br>
myMethod ();<br>
}<br>
}<br>
  
  ### Output
  10
  
  ### Explanation for the output
  As expected from the program, the output is 10. This is because the @MySingle annotation annotates the myMethod() method using: @MySingle(10).
  As there is only one member, the member’s name has not been specified. Single value annotations can also be used to annotate in cases where there are other members. However,  all the members must have default names.
