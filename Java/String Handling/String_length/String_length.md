# Java String length()
This method finds the length of a string. It returns the number of characters written in the String and the length of any string which is equal to the number of 16-bit Unicode characters in the string.  
## String "Length" Method Syntax :
```
public int length()
```  
## Java string Length Method Examples:  
In below program, we have two Strings and we will find out the length of a string in Java using _length()_ method.  
```
public class Example_String {
    public static void main(String[] args) {
        //declare the String as an object Str1 Str2
        String Str1 = "String Length";
        String Str2 = "Gwoc";

         //length() method returns the length of a String Str1.
        int length = Str1.length();
        System.out.println("Length of first string Str1: " + length);
        // Length of a String Gwoc
        System.out.println("Length of now second string Str2: " + Str2.length());
     }
}
```  
## Output:
  
Length of first String Str1: 13
   
Length of now second string Str2: 4  
  
## Internal implementation:
```
public int length(){
    return value.length;
}
```  
Length Variable can not be shown outside so Java String class uses char[] array internally. Thus, Java developers created this method. This method is also considered as the _getter()_ method that provides a value of the class filed to the user.   

## References:
* [javatpoint](https://www.javatpoint.com/java-string-length)
