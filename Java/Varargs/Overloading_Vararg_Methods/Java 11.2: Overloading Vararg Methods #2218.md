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
	  	fun();
	  }

	  //varargs method with float datatype
	  static void fun(float... x)
	  {
	  	System.out.println("float varargs");
  	}
	
	  //varargs method with int datatype
	  static void fun(int... x)
	  {
	  	System.out.println("int varargs");
	  }
	
	  //varargs method with double datatype
	  static void fun(double... x)
	  {
		  System.out.println("double varargs");
	  }
  
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
     like this
     
    error: reference to fun is ambiguous
		              fun();
     
 **Example:-**

	// A method that takes varargs(here integers).
	static void fun(int ... a)
	{
		System.out.print("fun(int ...): " +
				"Number of args: " + a.length +
				" Contents: ");
		
		// using for each loop to display contents of a
		for(int x : a)
			System.out.print(x + " ");
		
		System.out.println();
	}
	
	// A method that takes varargs(here booleans).
	static void fun(boolean ... a)
	{
		System.out.print("fun(boolean ...) " +
				"Number of args: " + a.length +
				" Contents: ");
		
		// using for each loop to display contents of a
		for(boolean x : a)
			System.out.print(x + " ");
		
		System.out.println();
	}
	
	// A method takes string as a argument followed by varargs(here integers).
	static void fun(String msg, int ... a)
	{
		System.out.print("fun(String, int ...): " +
				msg + a.length +
				" Contents: ");
		
		// using for each loop to display contents of a
		for(int x : a)
			System.out.print(x + " ");
		
		System.out.println();
	}
	
	public static void main(String args[])
	{
		// Calling overloaded fun() with different parameter
		fun(1, 2, 3);
		fun("Testing: ", 10, 20);
		fun(true, false, false);
	}
  

**Output:-**

    fun(int ...): Number of args: 3 Contents: 1 2 3 
    fun(String, int ...): Testing: 2 Contents: 10 20 
    fun(boolean ...) Number of args: 3 Contents: true false false
    

  
  
