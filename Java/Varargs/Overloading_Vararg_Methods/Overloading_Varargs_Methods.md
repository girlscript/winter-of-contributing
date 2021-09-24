<h2 align="center"> Overloading Varags Method </h2>
<hr>


Brief explanation of **Method Overloading.**

A method overloading is a technique in which multiple methods with same name but different types and numbers of arguments are used.
e.g. 
    
    int foo(int i);
    
    int foo(int i, float j);
    
    float foo(float i, float j);

**NOTE:- Only changing the return type of method is not method overloading.**

<br/>

**Method Overloading in Varargs**

Here the method overloading is done in two ways:- 
  
  1. Overloading when methods have only varargs
     
    public static void main(String[] args)
	  {
	  	foo();
	  }

	  //varargs method with float datatype
	  static void foo(float... x)
	  {
	  	System.out.println("float varargs");
  	}
	
	  //varargs method with int datatype
	  static void foo(int... x)
	  {
	  	System.out.println("int varargs");
	  }
	
	  //varargs method with double datatype
	  static void foo(double... x)
	  {
		  System.out.println("double varargs");
	  }
	  
   ![Screenshot 2021-09-24 at 2 09 13 PM](https://user-images.githubusercontent.com/70788113/134648966-6eb99a3c-32fc-47c3-b396-d8f6814090a3.png)
	  
  
    Here Java will call the function using the rule that the most specific method is chosen according to type promotion.    
    This means the type of varargs which is more specific according to the rule will be called.    
    The following rules define the direct supertype relation among the primitive types in this case:
    
   <ul>
    
   <li>double > float</li>
    
   <li>float > long</li>
    
   <li>long > int</li>
    
   <li>int > char</li>
    
   <li>int > short</li>
    
   <li>short > byte</li>
   
   </ul>
    
    
   So the output of this code snippet will be **_int varargs_**, because int is more specific than double and float.
    
    For understanding the concept of more specific type parameters :- https://www.geeksforgeeks.org/type-conversion-java-examples/
  
  
  2. Overloading when methods have varargs alongwith other parameters
      
    This type is same as the Normal Method overloading in which Java uses both the number of arguments and 
    the type of the arguments to determine which method to call. Leaving the arguments empty like 
    in the first case is not an option.
     
     If the arguments while function calling is left empty compiler will give run-time error 
     like this:-
   ```  
   error: reference to fun is ambiguous
		              foo();
   ````
	
 **Example:-**

	// A method that takes varargs(here integers).
	static void foo(int ... arr)
	{
		System.out.print("foo(int ...): " +
				"Number of args: " + arr.length +
				" Contents: ");
		
		// using for each loop to display contents of arr
		for(int x : arr)
			System.out.print(x + " ");
		
		System.out.println();
	}
	
	// A method that takes varargs(here booleans).
	static void foo(boolean ... arr)
	{
		System.out.print("foo(boolean ...) " +
				"Number of args: " + arr.length +
				" Contents: ");
		
		// using for each loop to display contents of arr
		for(boolean x : arr)
			System.out.print(x + " ");
		
		System.out.println();
	}
	
	// A method takes string as a argument followed by varargs(here integers).
	static void foo(String msg, int ... arr)
	{
		System.out.print("foo(String, int ...): " +
				msg + arr.length +
				" Contents: ");
		
		// using for each loop to display contents of arr
		for(int x : arr)
			System.out.print(x + " ");
		
		System.out.println();
	}
	
	public static void main(String args[])
	{
		// Calling overloaded foo() with different parameter
		foo(3,2,1);
		foo("Test:- ", 10, 20);
		foo(false, true, false);
	}
	
![Screenshot 2021-09-24 at 2 35 02 PM](https://user-images.githubusercontent.com/70788113/134649136-da1acf5c-7cb8-4246-8954-71ade4753112.png)
  

**Output:-**

    foo(int ...): Number of args: 3 Contents: 3 2 1
    foo(String, int ...): Test: 2 Contents: 10 20 
    foo(boolean ...) Number of args: 3 Contents: false true false
    

 
 Reference Website:- https://www.geeksforgeeks.org
