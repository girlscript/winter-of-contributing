# Input and Output Operations in Files

Input and Ouput Operations can be classified into 4 types:

- Text mode input
- Text mode output
- Binary mode input
- Binary mode output

Let's discuss about these types individually.

<br />

<br />

## *__Text Mode Output using 'insertion'(<<) operator__:*

'<<' operator outputs data into the file in text mode from a program variable i.e. from memory during execution.
Using '<<' operator, we can output all built-in data types to our desired memory, where the program is executing. 

Here's an exmaple below explaining the same:

```C++
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   char c = 'A';
   int i = 25;
   double d = 5.5;
   char a[50] = "Girlscript";
   ofstream fout("gwoc.txt");
   fout << c;
   fout << i;
   fout << d;
   fout << a;
   return 0;
}

```

Now, after executing the program if you open the file 'gwoc.txt', you will find the values of all the variables that we passed into the file. The image below represents the file perfectly.

![image](https://user-images.githubusercontent.com/74541810/135765841-6612c006-0318-4f1c-97f5-0e40bddb1077.png)


<br />
<br />



## *__Text Mode Output using 'put()' function__:*

'put()' is a number function of class 'ostream'. 

The put() function has to be invoked by an object of class 'ostream' or object of its derived class like 'cout'.
The put() function is used to copy the character data passed to it as a parameter to the output file. 


Here's an exmaple below explaining the same:

```C++
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   cout.put('A');   // copies 'A' to the monitor
   ofstream ofile("gwoc.txt");   
   ofile.put('A');    // copies 'A' to 'gwoc.txt'
   return 0;
}

```



Let us assume that the file 'gwoc.txt' was empty before executing the prorgram like the image depicted below.
![image](https://user-images.githubusercontent.com/74541810/135766119-1ba51b0e-397a-4d11-9e74-ad5404a4a942.png)


After executing the program, open the file manually and we can see the character 'A' is written in it. The image below represents the file perfectly.
![image](https://user-images.githubusercontent.com/74541810/135766291-5971f76d-04de-4cc8-a14c-7c7eb9dfe9e1.png)


<br />
<br />



## *__Text Mode Input using 'extraction'(>>) operator__:*


'>>' operator inputs data into the file in text mode from a program variable i.e. from the hard disk drive.
Using '>>' operator, we can input values of all built-in data types to our desired memory, where the program is executing. 

Before the executing the program, let us assume the file 'gwoc.txt' to be present in the hard disk drive as shown in the image below.
![image](https://user-images.githubusercontent.com/74541810/135766488-b673c037-cc38-46f5-baf2-e38bd3aba703.png)


```C++
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   char c;
   int i;
   double d;
   char a[10];
   ifstream fin("gwoc.txt");
   fin >> c;
   fin >> i;
   fin >> d;
   fin >> a;
   cout << c << endl;
   cout << i << endl;
   cout << d << endl;
   cout << a << endl;
   return 0;
}

```
 
### Output

> A  
> 25  
> 5.5  
> Girlscript


<br />
<br />



## *__Text Mode Input using 'get()' function__:*

'get()' is a number function of class 'istream'. 

There are two versions of 'get()' functions. One of them is used to extract one character from a specified file to a character variable which is used to extract one character from a specified file to a character variable which is passed as a paramter to it.
The other version of 'get()' just returns the character read from the file. 


We will perform a program for both the versions separately.


```C++
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   char c;
   ifstream fin("gwoc.txt");
   fin.get(c);   // copies from file 'gwoc.txt' to variable 'c'
   cout << c;
   return 0;
}

```

### Output:

> A

<br />





```C++
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   char c;
   ifstream fin("gwoc.txt");
   c = fin.get();
   cout << c;
   return 0;
}

```

### Output:

> A




<br />
<br />


## *__Binary Mode Output using 'write()' function__:*

'write()' function is the member function of 'ostream' class. 

'write()' function copies the value of the variable from an executing program into a specified file in binary mode. While copying the value from memory to a file, there is no conversion taking place which means, the data in binary format is copied as it is in the hard disk drive.

Here's a program below explaining the same:

```C++
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   ofstream fout("gwoc.dat");
   char c = 'A';
   int i = 25;
   double d = 5.5;
   
   fout.write(&c, sizeof(c));     //copies 'A' to 'gwoc.dat'
   fout.write((char *)&i, sizeof(i));    // copies 25 to 'gwoc.dat'
   fout.write((char *)&d, sizeof(d));    // copies 5.5 to 'gwoc.dat'
   return 0;
}

```

Now, open the file 'gwoc.dat' and try reading. You can only read the character value, but the integer and double value are as it is represented in binary format.

<br />
<br />





## *__Binary Mode Input using 'read()' function__:*

'read()' function is a member funciton of 'istream' class. 

The 'read()' function reads the data from a specified file and stores it in the variable of an executing program. The first parameter in the 'read()' function is the address of the variable which has to be copied in the file.

Here's an example below explaining the same:

```C++
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   char c;
   int i;
   ifstream fin("gwoc.dat");
   fin.read(&c, sizeof(c));
   fin.read((char *)&i, sizeof(i));
   fin.read((char *)&d, sizeof(d));
   cout << c << "\n" << i << "\n" << d << "\n" << endl;
   return 0;
}

```

### Output:

> A  
> 25  
> 5.5

<br />


---
