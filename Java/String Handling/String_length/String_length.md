# Java String length()
The `Java String class length()` method finds the length of a string. It returns the number of characters written in the String and the length of any string which is equal to the number of 16-bit Unicode characters in the string.  
## String "Length" Method Syntax :
```
public int length()
```  
## Java string Length Method Examples:  
In below program, we have two Strings and we will find out the length of a string in Java using _length()_ method.  
```
public class Sample_String {
    public static void main(String[] args) {
        //declare the String as an object S1 S2
        String S1 = "Hello Java String Method";
        String S2 = "RockStar";

        //length() method of String returns the length of a String S1.
        int length = S1.length();
        System.out.println("Length of a String is: " + length);
        //8 Length of a String RockStar
        System.out.println("Length of a String is: " + S2.length());
    }
}
```  
## Output:
  
Length of a String is: 24
   
Length of a String is: 8  
  
## Internal implementation:
```
public int length(){
    return value.length;
}
```  
Java String class uses char[] array internally so length variable can not be exposed outside. Hence, the Java developers created the _length()_ method. This method is also considered as the _getter()_ method that provides a value of the class filed to the user.   

## References:
* [javatpoint](https://www.javatpoint.com/java-string-length)