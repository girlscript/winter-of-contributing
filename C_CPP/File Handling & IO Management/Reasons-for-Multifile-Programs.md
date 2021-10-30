# Reasons for Multifile Programs

A large C++ program should be split/divided into multiple files, which makes each file small enough to edit, modify, print efficiently.

There are several reasons for using the multifile programs like:
- Class Libraries
- Organization and Conceptualization

## Class Libraries

As we all know that Libraries provide inbuilt functions to use for a variety of fields. Since C++ is a organized about classes rather than functions, libraries for C++ 
programs consists of classes. So, it's clear that class library is much better than function library. Classes encapsulates both data and functions, they are more close 
to model objects in real life, the interface between the class libraries and the application that makes use of it can be much cleaner than that of function library.
A class library takes a greater portion of programming burden. Also as more class libraries are created, the chances of finding one that solves your particular 
programming problems continues to increase. Programmers have to combine only these class libraries along with adding their own functionality to achieve desired objectives.

A class library includes mainly 2 components:
- Interface
- Implementation

### Interface

Let's assume, a person who wrote a class library is called the _class developer_ and the person who uses library is called _programmer_.
To use a class library, the programmer requires to access many declarations, including class declarations. These declarations are thought as public part of library 
in a header file with .H extension which is combined with the client's source code using #include statement. The programmer needs to declare objects based on the classes 
and call on member functions from the objects. This declarations are called _interface_ because that's what a user of class sees and interacts with.

### Implementation

The innermost works of the member functions of the various classes doesn't need to be known by the programmer. Member functions except for inline functions are distributed 
in object form as .OBJ files or as library .LIB files.

#### Example:

<div align="center">
 <img src="https://user-images.githubusercontent.com/76544476/138542872-4d47fab0-e6bc-4faf-8e6c-f8fe44869c29.png" width="415" height="700">  <br>
  
 [Image Source](https://classes.mst.edu/compsci1570/multiplefiles.htm) 
  
</div>

## Organization and Conceptualization

Programs are shattered down into multiple files for reasons apart from the accommodation of class libraries. Confining programmer's responsibility to split files helps 
organize the project which defines interface more cleanly among different parts of program. Also a program is divided into separate files due to their functionality like:
One file handles code involved in the graphics display, while the other file handles mathematical analysis and the next one handles the I/O disk. So, it's clear that 
a large program when it's a single file it becomes too large to conveniently handle it. 
