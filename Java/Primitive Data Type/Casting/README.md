# Type Casting

Type Casting is a method that converts a data type into another data type in both ways manually & automatically.
Or we can say "Convert a value from one data type to another data type is called Type Casting."

## Types of Type Casting:
There are two types of Type Casting
1. Widening Type Casting
2. Narrowing Type Casting

>>> Widening Type Casting : 
Converting a lower data type into a higher one is called widening type casting. It is also known as implicit conversion or casting down. It is done automatically. It is safe because there is no chance to lose data. It takes place when:

 1. Both data types must be compatible with each other.
 2. The target type must be larger than the source type.
 
 byte -> short -> char -> int -> long -> float -> double  
 
Example for Widening Type Casting:

public class WideningTypeCasting {<br>
  &ensp;public static void main(String[] args)  {  
    &emsp;int x = 8;    //automatically converts the integer type into long type  
		&emsp;long y = x;   //automatically converts the long type into float type  
		&emsp;float z = y;  
		&emsp;System.out.println("Before conversion, int value "+x);  
		&emsp;System.out.println("After conversion, long value "+y);  
		&emsp;System.out.println("After conversion, float value "+z);  
	&ensp;}  
}


OUTPUT : <br>
Before conversion, the value is: 8 <br>
After conversion, the long value is: 8 <br>
After conversion, the float value is: 8.0 <br>

>>> Narrowing Type Casting :
Converting a higher data type into a lower one is called narrowing type casting. It is also known as explicit conversion or casting up. It is done manually by the programmer. If we do not perform casting then the compiler reports a compile-time error.

 double -> float -> long -> int -> char -> short -> byte
 
Example for Narrowing Type Casting:

public class NarrowingTypeCasting {  <br>
	&ensp;public static void main(String args[]) {  
		&emsp;double d = 166.66;   //converting double data type into long data type  
		&emsp;long l = (long)d;    //converting long data type into int data type  
		&emsp;int i = (int)l;  
		&emsp;System.out.println("Before conversion: "+d);   //fractional part lost  
		&emsp;System.out.println("After conversion into long type: "+l);   //fractional part lost  
		&emsp;System.out.println("After conversion into int type: "+i);  
	&ensp;}  
}  


OUTPUT :<br>
Before conversion: 166.66 <br>
After conversion into long type: 166 <br>
After conversion into int type: 166
