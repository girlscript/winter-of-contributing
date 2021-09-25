# Java Package

 A java package is a group of similar types of classes, interfaces and sub-packages.
 Package in java can be categorized in two form, built-in package and user-defined package.
 There are many built-in packages such as java, lang, awt, javax, swing, net, io, util, sql etc.

Here, we will have the detailed learning of creating and using user-defined packages.

## Advantage of Java Package

1) Java package is used to categorize the classes and interfaces so that they can be easily maintained.

2) Java package provides access protection.

3) Java package removes naming collision.

<p align="center">
   <img src="https://github.com/RahulSoni0/Blockchain/blob/main/Images/package.JPG"  />

  ## Simple example of java package
 ### The package keyword is used to create a package in java.
  
  ```
  //save as Simple.java  
    package mypack;  
    public class Simple{  
    public static void main(String args[]){  
    System.out.println("Welcome to package");  
   }  
}  
  
  
  ```
  <br>
  
  ### How to compile java package 
  
  If you are not using any IDE, you need to follow the syntax given below:
  
  ```
  javac -d directory javafilename  
  ```
  ### For example
  
  ```
  javac -d . Simple.java  
  ```
  
  > ***The -d switch specifies the destination where to put the generated class file. You can use any directory name like /home (in case of Linux), d:/abc (in case of windows) etc. If you want to keep the package within the same directory, you can use . (dot).***
  
 ### How to run java package program
You need to use fully qualified name e.g. mypack.Simple etc to run the class.
  
#### To Compile: javac -d . Simple.java
#### To Run: java mypack.Simple

  ```
  Output:Welcome to package
  ```
  > ***The -d is a switch that tells the compiler where to put the class file i.e. it represents destination. The . represents the current folder.***
  
  
  
  
  
  
  
  
  
