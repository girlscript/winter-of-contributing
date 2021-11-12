## cin and cout in C++

C++ works with Input and Output using header files. There are three different kind of header files that are used for varying type of input and output. These header files are listed below:
- **iostream**: works mainly with input and output provided in the IO window without any kind of formatting.
- **iomanip**: works with input and output provided in the IO window and also provides functions to format the IO.
- **fstream**: works with files

#### iostream

iostream is a header file which is used in most of the C++ programs for obtaining input or printing an output. It provides four different types of streams namely **cin(Standard input stream), cout(Standard output stream), cerr(Standard error stream), clog(Standard log stream)**

#### -cin
This stream is used with two closing angular brackets for taking input from a user.
Let a be a variable declared before taking input, then to take an input and store it in a, the syntax would be:
```
cin>>a;
```
To ensure proper working of the above code snippet, the coder must be sure that the datatype of variable a and that of input data is same or else, the datatype of input data must be type-castable to the datatype of variable in which it is to be stored (here a).
There is also one important thing to keep in mind, if the source code doesn't contain a snippet like:
```
using namespace std;
```
right after importing the header files, then the code snippet of cin changes to:
```
std::cin>>a;
```
It is considered as a good practice to state the namespace std to make the code cleaner and more understandable.

#### -cout
This stream is used with two opening angular brackets to print an output to be displayed to the user. Syntax:
```
cout<<a;
```
Here, the cout stream will print the value that is stored in variable a. The namespace std point works here the same way as in cin (explained above). The cout can be used to print a string output as well.
```
cout<<"I am reading a document of Girlscript repository and their documentation makes coding much easier.";
```
This will print the entire text present in double inverted coma without the inverted coma.
In case one wants to print special characters like double inverted coma, a new line, a tab space, or anything which the compiler can consider as a syntax for the cout stream, then they can precede it with a backslash symbol (same goes when we wish to print a backslash symbol).

Following code snippets can explain the above point:

```
cout<<"This is my first code";
```
Output: This is my first code
```
cout<<"\"This is my first code\"";
```
Output: "This is my first code"
```
cout<<"This is a code snippet indicating\t tab space";
```
Output: This is a code snippet indicating&emsp; tab space

Note: The cin and cout can contain multiple pairs of angular brackets for taking multiple input and printing multiple output using a single line.

```
cin>>a>>b>>c;
cout<<a<<"\n"<<b+c;
```
Input: <br>
3 4 5 <br>
Output: <br>
3 <br>
9
<br>
Note here that "\n" means new line.
All important and useful topics about cin and cout streams have been covered up in the above documentation.
