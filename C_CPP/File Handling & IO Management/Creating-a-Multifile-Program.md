# Basics of Creating a Multifile Program

If you have bought a built-in class file like _theirs.obj_, it comes with a header file like _theirs.h_. You have also written your program to use the classes in the library,
with your source file named as _mine.cpp_. Now all you have to do is to combine these 3 files  _theirs.h_, _theirs.obj_, _mine.cpp_ into single executable program.

## Header Files

The header file _their.h_ is included into source file, _mine.cpp_ with include statement.

> #include "theirs.h"

Here quotes instead of angular brackets is used to let the compiler know to look for file in the current directory.

## Directory

It is necessary to make sure that all the file i.e., _theirs.obj_, _theirs.h_, _mine.cpp_ are in the same directory. Each compiler keeps it's own library files 
in a specific directory called INCLUDE and many levels are buried down in compiler's directory structure. You will have to keep some of your header files in such 
a directory where they will be available for several projects. 

## Projects

Mostly compilers manage multiple files using a project metaphor. A project contains every files that is necessary for the application. It also contains manual for combining 
these files often a particular file called _project file_. The extension for this file differs with vendors of compiler like _.bpr_ are borland and _.dsp_ for microsoft.
But modern compilers construct and maintain this file automatically. All you have to do is, is to add _.cpp_, _.obj_, _.lib_ to your project file.
