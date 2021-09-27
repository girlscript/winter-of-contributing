# PYTHON FILE I/O
## INTRODUCTION
Python File I/O refers to file operations executed using Python.
Files are named locations on a disk which can permanently store data.
Basic file operations include-
1.	Opening a file
2.	Reading a file
3.	Writing in a file
4.	Closing a file

## OPENING A FILE
Python has an inbuilt function called open() used to open a file.
file = open(‘file path’, ‘mode’, ‘encoding’) 

Following is a list of arguments that can be passed in the open function-

ARGUMENT TYPE	FUNCTION

file path	    The path of the file that is to be opened is passed as an argument. If file is present in the same 
                directory, only the name can suffice. Otherwise, full path of file is to be specified.

mode	        In this we specify if we want to open a file in read only mode, or as a writeable file, or both. 

encoding	    The name of the encoding used to decode or encode the file. This should only be used in text mode. The default 
                encoding is platform dependent, but any encoding supported by Python can be passed.



### Example: Opening a file

 

The available modes are:

Character	               Meaning
    'r'	               open for reading (default)
    'w'	               open for writing, truncating the file first. If file doesn’t exist, creates a new file 
    'x'	               create a new file and open it for writing. Operation fails if file already exists
    'a'	               open for appending to the end of the file if it exists, creates new file if it doesn’t
    'b'	               binary mode
    't'	               text mode (default)
    '+'	               open a disk file for updating (reading and writing)

**NOTE**:
It is recommended that the open function includes the type of encoding as an argument. This is because when encoding is not specified, the default encoding is used, which is platform dependent and thus our code behaves differently in different platforms.

Example- Recommended format of open function
 

## WRITING IN A FILE
In order to write in a file, we need to open it in the following modes-
1.	Write mode or ‘w’ mode
2.	Append mode or ‘a’ mode
3.	Exclusive creation or ‘x’ mode
(Refer to list of available modes in section- ‘OPENING A FILE’ for further detail)
After opening the file, we use the write() function to write into a file. The content to be written is passed as an argument in the write functions.

### Example- Writing in a file using write() function
Code:
 

Output:
 

## READING A FILE
In order to read a file we need to open it in the read only or ‘r’ mode.
Methods of reading a file-
1.	Using the read(size) function:
The read function is used to read bytes of data. The size of data to be read is passed as an argument. If size is not specified, then bytes are read from current position to the end of file. If the file ends, we obtain an empty string.



### Example-
Code:
 

Output:
 

2.	Using the readline( ) function:
The readline() function is used to print one line of a file at a time.
Example-
Code:
 

Output:
 

3.	Using a for loop:
4.	A for loop can be used to print a line in one iteration, and the loop iterates until it reaches the end of the file i.e until the last line is printed.

Code:
 

Output:
 

5.	Using the readlines( ) function:
The readlines() function is used to print all the lines in a file in the form of a list. It includes newline characters like \n to signify start of a new line.
Code:
 

Output:
 

## CLOSING A FILE
Our final file operation is closing the file. After necessary file operations are performed, the file must be properly closed in order to free the resources engaged in this process. 
Python has an inbuilt close() function for this purpose. 
 
However this method of directly calling the function is not recommended. This is because, in case an error occurs while performing file operations, the program will crash and the file will not be able to close properly.
Thus we need to ensure that the file always closes even if an exception is raised. Thus we use the concept of ‘Python Exception Handling’ using a try… finally block.
The try statement is used to catch an exception or error. Opening a file and other file operations that may give error are included under the try statement. 
The finally statement contains code that need to be executed no matter what.
   
In the above example, the file operations under try statement are first executed. If no error is encountered, the interpreter moves on to the code under finally statement and closes the modified file. In case exception is raised, the try statement is exited, and the file operation under the ‘finally’ statement is executed i.e the file is closed.
A better method is to use a ‘with’ statement. 
 
In this case, the file operation of closing the modified file is done internally and there is no need for the close function to be called explicitly as the block is automatically exited after all file operations are completed.