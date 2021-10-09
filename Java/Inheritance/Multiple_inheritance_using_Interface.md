# Multiple inheritance in Java

-Java doesn’t supports multiple inheritance. But the concept of java can be implemented using Interface.

-class C extends A		 //**Single inheritance in java**

-class C extends A,B    //**IT IS NOT POSSIBLE IN JAVA**

-But the concept of multiple inheritance can be achieved using **java interface**.

Eg:

```java
interface A
{  
	void m1();  
}  
interface B
{  
	void m2();  
}  
class Test_Mulpl_Inherit implements A , B
{  
	public void m1()
	{
		System.out.println("I am inside method m1 of interface A");
	}  
	public void m2()
	{
		System.out.println("I am inside method m2 of interface B");
	}  
	public static void main(String args[])
	{  
		Test_Mulpl_Inherit obj = new Test_Mulpl_Inherit();  
		obj.m1();  
		obj.m2();  
 	} 
}
```
***Output:***

***I am inside method m1 of interface A***

***I am inside method m2 of interface B***

Here we have implemented interfaces A and B in class Test_Mulpl_Inherit, and we can see that we have accessed their methods in class Test_Mulpl_Inherit. So this is how we can achieve multiple inheritance using Interface.
