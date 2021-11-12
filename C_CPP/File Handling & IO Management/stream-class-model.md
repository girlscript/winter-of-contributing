# Streams Class Model in C++

<br />

## _Introduction_

<br />
Whatever you have learnt in C++ as of now, there you might have come across input and output concepts while executing any program. But the fact is, In C++, the input and output are not built into the language i.e. the input and output are not part of C++ language syntax.

<br />
<br />

The input and output in C++ are built as a separate package or libraries. This package or library consists of classes that are defined in "fstream.h" and "iostream.h" header files.
The following image might help you to conceive the concept of streams more steadily:

<br />
<div align = 'center'>
  
<img src = "https://examradar.com/wp-content/uploads/2016/10/Figure-6.1-File-Input-and-output-stream.png">

</div>

<br />


## _Stream Class Model of C++_
<br />
So, what we have understood from the Introduction is the input and output concepts in C++ aren't built-in rather they are made up of several classes packed together in the form of a package.

Here's an image which might help you to visualise these classes better:

<br />
<div align = 'center'>
<img src = "https://examradar.com/wp-content/uploads/2016/10/Figure-5.1-Stream-classes-for-console-IO-operations.png">
</div>

<br />

Let's look closer into all these classes by breaking them down:
<br />
### _ios_: 

- This is the base class for other classes shown in the second image.
- This class also contains all the necessary resource needed by the derived classes for carrying out input and output functioning.


### _istream_:

- This is derived from the 'ios' class.
- This class maintains input streams.
- The >> operator is excessed into this classes to maintain the input streams.
- Example: cin >> x;
- This class handles the in-built functions such as 'read()','get()' and 'getline()'.


### _istream_withassign_:

- This is derived from 'istream' class.
- 'cin' is an object of this class which is used as standard input command.
- Example: cin >> x;


### _ifstream_:

- This is also derived from 'istream' class.
- This class maintains the input streams from the files stored in hard disk to program variable.
- Example: 
```C++ 
ifstream fin("girlscript.txt");
fin >> x;
```
- The statement 'ifstream fin("girlscript.txt");' creates an object named 'fin' which opens the file 'girlscript.txt' and connect the file 'girlscript.txt' with the object 'fin'. All this is tendered by the 'ifstream' class.
- The statement 'fin >> x;' exclaims that the input stream from the 'fin' object represents the file "girlscript.txt" and inputs the value in 'x'.
- <ins>__Note__</ins>: 'fin' and 'girlscript.txt' can be of any name like 'f_in', 'name.txt' and many more.


### _ostream_:

- This is derived from the 'ios' class.
- This class maintains the output streams.
- The << operator is excessed into this classes to maintain the output streams.
- Example: cout << x;
- This class handles the in-built functions such as 'put()' and 'write()'.


### _ostream_withassign_:

- This is derived from 'ostream' class.
- 'cout' is an object of this class which is used as standard output command.
- Example: cout << x;


### _ofstream_:

- This class is also derived from 'ostream' class.
- This class maintains the output streams from program variable to the files stored in hard disk.
- Example:
```C++
ofstream fout("girlscript.txt");
fout << x;
```
- The statement 'ofstream fout("girlscript.txt");' creates an object named 'fout' which opens the file 'girlscript.txt' and connect the file 'girlscript.txt' with the object 'fout'. All this is tendered by the 'ofstream' class.
- The statement 'fout << x;' exclaims insert the output stream into the object 'fout' while representing the file "girlscript.txt" from the value in 'x'.
- <ins>__Note__</ins>: 'fout' and 'girlscript.txt' can be of any name like 'f_out', 'name.txt' and many more.


###  _iostream_:

- This is derived from both 'ostream' and 'istream' classes by the method of multple inheritance.
- This class handles all the input and output operations.


### _fstream_:

- This is derived from 'iostream' class.
- This class maintains all the input and output functions from and to the files present in the hard disk.
- Example:
```C++
fstream f_in_out("girlscript.txt")
f_in_out >> x;
f_in_out << y;
```

###  _streambuf_: 

- This class has a pointer which points to a buffer which is used to maintain the inputs and outputs.




---



