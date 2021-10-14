# Java Generic Methods 
**Generic Methods** and **Generic Classes** enable programmers to introduce their own type parameters, related methods or set of related types. In this, static and non-static generic methods, as well as generic class constructors are allowed.
# Rules or Syntax to define Generic Methods −
**1.** All generic method declarations must includes a list of type parameter section delimited by angle brackets (<  >) that precedes the method's return type.

**2.** Each type parameter section contains one or more type parameters separated by commas. A type parameter, also known as a type variable which is an identifier that specifies a generic type name.

**3.** A generic method's body must be declared like that of any other method.

# Example of Generic Methods-
```Java
public class GenericMethods {
   // generic method printArray
   public static < A > void printArray( A[] inputArray ) {
      // Display array elements
      for(A element : inputArray) {
         System.out.printf("%s ", element);
      }
      System.out.println();
   }

   public static void main(String args[]) {
      // Creating three arrays of Integer, Double and Character
      Integer[] intArray = { 1, 2, 3, 4, 5 };
      Double[] doubleArray = { 1.1, 2.5, 3.7, 4.6 };
      Character[] charArray = { 'C', 'O', 'D', 'I', 'N' 'G' };

      System.out.println("IntegerArray Values:");
      printArray(intArray);   // pass an Integer array

      System.out.println("\nDoubleArray Values:");
      printArray(doubleArray);   // pass a Double array

      System.out.println("\nCharacterArray Values:");
      printArray(charArray);   // pass a Character array
   }
}
```
```
Output
IntegerArray Values:
1 2 3 4 5 

DoubleArray Values:
1.1 2.5 3.7 4.6 

CharacterArray Values:
C O D I N G 
```

# Generic Constructors
Generic Constructors are a constructor that has at least one parameter of generic type.

`Note`- It’s not important for generic constructors to be in generic class also not all constructors in a generic class have to be generic.
# Example of Generic Constructor-
```Java
class Method {
	//Generics constructor with parameters
	public <T, U> Method(T objA, U objB){
	    System.out.println("Value of the objA: " + objA);
		  System.out.println("Type of the objA: " + objA.getClass().getName());
		  System.out.println("Value of the objA: " + objB);
		  System.out.println("Type of the objB: " + objB.getClass().getName());
	 }
}
 
public class MethodTest {	
	public static void main(String args[]){
		//String type method
		Method m = new Method("This is a generic constructor", 100);
	}
}

```
```
Output
Value of the objA: This is a generic constructor
Type of the objA: java.lang.String
Value of the objA: 100
Type of the objB: java.lang.Integer
```

