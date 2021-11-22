# Importing packages in java

The classes and interfaces of a package are accessible in another program. We can access the classes,interfaces,methods and data members of a package in another program in 3 ways:

1)Using packagename.*

2)Using packagename.classname

3)Using fully qualified name

## Using packagename.*
The import keyword is used to make the classes and interfaces accessible in current package which are written in another package.
By this method we can’t access the sub-packages and classes and interfaces written in those sub-packages.

Eg:

*Gwoc.java*
```java
package p1;
public class Gwoc
{
	public void abc(){
	System.out.println(“Hello!Welcome to GWOC”);
	}
}
```
*using package p1 in Test.java file:*
```java
import p1.*;
class Test{
	public static void main(String args[]){
	Gwoc g=new Gwoc();
	g.abc();
	}
}
```
**Output:Hello!Welcome to GWOC**

## Using packagename.classname
By importing packagename.classname , we can only access that particular class and the data members and methods within it. Other classes present in that package are not accessible.

Eg:

*Gwoc.java*
```java
 package p1;
public class Gwoc
{
	public void abc(){
	System.out.println(“Hello!Welcome to GWOC”);
	}
}
public class Gwoc_new
{
	public void xyz(){
	System.out.println(“Hello!Welcome to GWOC_new”);
	}
} 
```
*using package p1 in Test.java file*
```java
import p1.Gwoc;
class Test{
	Public static void main(String args[]){
	Gwoc g=new Gwoc();
	g.abc();
	}
}
```
**Output:Hello!Welcome to GWOC**

***Note:here,Gwoc_new class is not accessible in this program. If we try to use xyz function then it will raise an error.***

## Using fully qualified name

The import keyword is not needed. Everytime you want to access the class then you have to write fully qualified name 

Eg:

*Gwoc.java file*
```java
package p1;
public class Gwoc
{
	public void abc(){
	System.out.println(“Hello!Welcome to GWOC”);
	}
}
```
*using package p1 in Test.java file*
```java
class Test{
	public static void main(String args[]){
	p1.Gwoc g=new p1.Gwoc();         //fully qualified name
	g.abc();
	}
}
```
**Output:Hello!Welcome to GWOC**

So this is how we can import the packages in another package.
