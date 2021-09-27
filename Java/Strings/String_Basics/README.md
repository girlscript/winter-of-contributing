# What is String?

>>> Generally, String is a sequence of characters. But in Java, string is an object that represents a sequence of characters.

# How to create a String object in Java?

>>> There are 2 methods for creating a String object
    1. By String Literal
	2. By new keyword
	

>>> 1. By String Literal

	Syntax :

     String string_name = "Your_String";
	 
	Example :
	 
	 String str = "Hello Java";
	 
	 
>>>	2. By new keyword

	Syantax :
	 
	 String string_name = new String("Your_String");
	 
	Example :
	 
	 String str = new String("Hello Java");
   
   
   # Example that shows how to declare String
   
   package gwoc;

public class String_Basics {

	public static void main(String[] args) {
		
		String str1 = "Hello Java 1";    //By String literal method
		
		System.out.println(str1);    //Print the str1
		
		String str2 = new String("Hello Java 2");   //By new keyword method
		
		System.out.println(str2);    //Print the str2

	}

}


Output of this code :

Hello Java 1 <br>
Hello Java 2
