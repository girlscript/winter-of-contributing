# String Comparison

When you are dealing with a sequence of characters, string comparison plays an important role. We can compare strings in 4 different ways in JAVA. Depending on the input strings and the result we require we can opt for any one of them. The four ways of comparing strings in JAVA are:

- Using equals() method
- Using compareTo() method
- Using equalsIgnoreCase() method
- Using compareToIgnoreCase() method

## The equals() method

It compares two given strings and returns a Boolean value- *true/false*. It is case sensitive and returns *false* if the cases of the two strings are different despite having the same letters.

Syntax: ` string1.equals(string2); `

```java
public class StringCompare {
      public static void main(String[] args) {
            String str1 = "Earth";
			      String str2 = "Earth";
            String str3 = "EARTH";
            String str4 = "earth";
			      //string comparison using equals method
			      System.out.println(str1.equals(str2));		//returns true
            System.out.println(str1.equals(str3));		//returns false
            System.out.println(str1.equals(str4));		//returns false
            System.out.println(str3.equals(str4));		//returns false
      }
}      
```
String str1 and str2 are exactly the same with only 'E' being in upper case and the rest in lower case. Hence, the equals() method returned *true*. On the other hand, strings str2, str3, str4 have the same letters but do not have the same casing. So, their comparison returns *false*.

## The compareTo() method

The compareTo() method compares two given strings lexicographically and returns a value of integer data type. This method extracts the first non-equal character in the two strings if any and compares their ASCII value. Three types of results can be obtained from this method.

For two strings str1 and str2: ` str1.compareTo(str2); 	`

- if str1 == str2, result is 0
- if str1 > str2, result is +ve
- if str1 < str2, result is -ve
 
```java
public class StringCompare {
      public static void main(String[] args) {
            String str1 = "Earth";
			      String str2 = "Earth";
            String str3 = "life";
            String str4 = "Life";
			      //string comparison using equals method
			      System.out.println(str1.compareTo(str2));		
            System.out.println(str1.compareTo(str3));		
            System.out.println(str1.compareTo(str4));		
            System.out.println(str3.compareTo(str4));		
      }
}      
```
On running the above code we obtain the following output:
```
0
-39
-7
32
```
The difference of the ASCII values of the corresponding characters is returned accordingly.

## The equalsIgnoreCase() method
This method compares two strings without considering whether the string's characters are in upper case or lower case.

```java
public class StringCompare {
      public static void main(String[] args) {
            String str1 = "Earth";
			      String str2 = "earth";
            String str3 = "life";
            String str4 = "LIFE";
            String str5 = "live";
			      //string comparison using equals method
			      System.out.println(str1.equalsIgnoreCase()(str2));		//returns true
            System.out.println(str3.equalsIgnoreCase()(str4));		//returns true
            System.out.println(str3.equalsIgnoreCase()(str5));		//returns false
      }
}    
```
The casing of the string is ignored and is compared only based on the letters in the string.

## The compareToIgnoreCase() method

This method is very much similar to the compareTo() method, where strings are compared lexicographically. The only difference is that the comparison is'nt affected based on whether the strings are in upper case or lower case.

```java
public class StringCompare {
      public static void main(String[] args) {
            String str1 = "Earth";
		      	String str2 = "earth";
            String str3 = "life";
            String str4 = "Life";
			      //string comparison using equals method
			      System.out.println(str1.compareToIgnoreCase(str2));		
            System.out.println(str1.compareToIgnoreCase(str3));		
            System.out.println(str4.compareToIgnoreCase(str2));		
            System.out.println(str3.compareToIgnoreCase(str4));		
      }
}    
```
The above code yields the following output:
```
0
-7
7
0
```

Learn more about String Comparison in JAVA [here](https://docs.oracle.com/javase/tutorial/java/data/comparestrings.html).
