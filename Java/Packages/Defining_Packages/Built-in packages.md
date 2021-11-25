
**Packages** in java are used to avoid naming conflict and to control the access of class, interface, and sub-classes, etc. A package can be defined as a group of similar types of classes, sub-classes, interfaces or enumerations, etc. while using packages it becomes easier to locate or find the related classes and packages provides a good structure or outline of the project with a huge amount of classes and files.


### **Packages are divided into two parts **



* Built-in packages: In java, we already have various pre-defined packages and these packages contain large numbers of classes and interfaces that we used in java are known as Built-in packages.
* User-defined packages: As the name suggests user-defined packages are a package that is defined by the user or programmer.


### **Built-in packages**

Packages that come with JDK or JRD you download are known as built-in packages. The built-in packages have come in the form of JAR files and when we unzip the JAR files we can easily see the packages in JAR files, for example, lang, io, util, SQL, etc. Java provides various built-in packages for example java. awt,  java.io, java.lang, java.net, java.sql, java.uti.



<p id="gdcalert1" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image1.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert2">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image1.jpg "image_tooltip")


types of built-in packages

_Now let's discuss some built-in packages_.


### **Examples of Built-in packages_ _**



* **java.sql**: Provides the classes for accessing and processing data stored in a database. Classes like Connection, DriverManager, PreparedStatement, ResultSet, Statement, etc. are part of this package
* **java.lang**: Contains classes and interfaces that are fundamental to the design of the Java programming language. Classes like String, StringBuffer, System, Math, Integer, etc. are part of this package.
* **java.util**: Contains the collections framework, some internationalization support classes, properties, random number generation classes. Classes like ArrayList, LinkedList, HashMap, Calendar, Date, Time Zone, etc. are part of this package.
* **java.net**: Provides classes for implementing networking applications. Classes like Authenticator, HTTP Cookie, Socket, URL, URLConnection, URLEncoder, URLDecoder, etc. are part of this package.
* **java.io**: Provides classes for system input/output operations. Classes like BufferedReader, BufferedWriter, File, InputStream, OutputStream, PrintStream, Serializable, etc. are part of this package.
* **java.awt**: Contains classes for creating user interfaces and for painting graphics and images. Classes like Button, Color, Event, Font, Graphics, Image, etc are part of this package.

_let's discuss some above-mentioned examples with code_


#### **java.lang package: **

This package contains the core classes of the java language. This package is automatically imported to each program, which means we can directly use classes of this package in our program. Let's have an example of the Math class of lang package which provides various functions or methods for mathematical operation.

Java

import java.lang.*;

 class example_lang {

   public static void main(String args []) {

      int a = 100, b = 200,maxi;

      maxi = Math.max(a,b);

      System.out.printf("Maximum is = "+max+"); 

    }

 }


#### **Output**

Maximum is 200

In the above-mentioned example, we use the lang package and Math class to find the maximum of two-digit using the "max" function. first, we created a three integer variable named "a" and "b" and maxi. where a = 100 and b = 200 and maxi will store the maximum value from a or b. After assigning values to the variable we used the max function to find the maximum and stored it in maxi. so in desired output, we can see a maximum of two numbers and that is 200.  


#### **java.io package:**

This package provides classes and an interface for handling the system(input/output). Using these classes programmer can take the input from the user and do operations on that and then display the output to the user. Other than this we can also perform file handling read or write using classes of this package.

Java

import java.io.Console;

 

 class example_io {

   

   public static void main(String args []) {

      Console cons = System.console();

      System.out.println("Enter your favorite color");

      String colour ;

      colour = cons.readLine();

      System.out.println("Favorite colour is " + color);

    }

 }


#### **Output**

Enter your favorite color

RED

Favorite color is RED

In the above-mentioned example, we use the java.io package and Console class to take input from users to perform some task or operations on it and then finally display the result on the console. as code said first we display the message "Enter your favorite color" which asks a user to enter color. than user system read that line using cons.readLine() and stored it in string type variable then finally display that line.


#### **java.util package**

This package provides the basic necessary things to java programmers. The most common class in this package is Arrays which is generally used by programmers in various cases. we can say that it is the most useful package for java because it helps to achieve different types of requirements easily by using pre-written classes. let's see the example of Arrays class.

Java

import java.util.Arrays;

 

 class arrays {

   public static void main(String args []) {

      int[] arr = {45,36,21,77,88};

      Arrays.sort(arr);

      System.out.println("Sorted array : %s", Arrays.toString(arr)); 

    }

 }


#### **Output**

Sorted array : [21,36,45,77,88]

In the above-mentioned example, we used java.util package and Arrays class to sort the integer array. first, we created an integer type array that consists of elements 45,36,21,77,88 and sort the array using the "sort" function of the Arrays class. After sorting an array we'll print the sorted array you can see it in the desired output.  
