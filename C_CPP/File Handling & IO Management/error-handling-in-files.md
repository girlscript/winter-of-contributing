# Error Handling Functions in Files

During file I/O operations, errors can occur due to any reason. Some of the reason are:

- A file on which we are trying to do a read/write operation may not exist.
- No availability of disk space to store data.
- Reading the file beyond the end-of-file.
- The file on which we are attempting a write operation may be protected.

<br />

So to handle these situations C++ provides few functions and flags which are defined in the 'istream' and 'ostream' classes. They are as followe:

- 'eof()' function and 'eofbit()' flag
- 'fail()' funciton and 'failbit()' flag
- bad()' function and 'badbit()' flag
- 'clear()' function
- 'good()' function

<br />

## _(i) 'eof()' funciton and 'eofbit' flag:_

- The 'eof()' function returns true if end-of-file is encountered by the file pointer during a read operation and sets the 'eofbit' to true. Else the 'eof()' function returns false.
- Here's an example below explaining the same:

```C++
while(1)
{
   if(fin.eof())
      break;
   else
   {
      fin.read(&c, sizeof( c ));
      cout << c;
   }
}

```
<br />

## _(ii) 'fail()' funciton and 'failbit' flag:_

- The 'fail()' function returns true and sets the 'failbit' flag to true if a file could not be opened for any of the reasons as mentioned before.
- Here's an exmaple below explaining the same:

```C++
do
{
   if(fin.fail())
   {
      cout << "Cannot open the file" << endl;
      break;
   }
   if(fin.eof())
      break;
   else
   {
      fin.read(&c, sizeof( c ));
   }
}while(1);

```
<br />

## _(iii) The 'bad()' function and 'badbit' flag:_

- The 'bad()' function returns true adn sets the 'ba;bit' flag to true if any serious unrecoverable error has occurred.
<br />

## _(iv) The 'clear()' function:_

- The 'clear()' function clears the bits set by the 'bad' function.
<br />

## _(v) The 'good()' function:_

- The 'good()' function returns true if all the above functions turn false. It means that if 'good()' function returns true, then the file i/o operation has occurred without any error.















