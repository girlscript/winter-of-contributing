# Creating a Multifile Program

If you have bought a built-in class file like _theirs.obj_, it comes with a header file like _theirs.h_. You have also written your program to use the classes in the library,
with your source file named as _mine.cpp_. Now all you have to do is to combine these 3 files  _theirs.h_, _theirs.obj_, _mine.cpp_ into single executable program.

## Header Files

The header file _their.h_ is included into source file, MINE.CPP with include statement.

> #include "theirs.h"

Here quotes instead of angular brackets is used to let the compiler know to look for file in the current directory.

## Directory

