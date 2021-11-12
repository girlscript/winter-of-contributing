# File Pointer Manipulation Functions

Refer [Input and Output Operations](input-and-output-operations.md) before starting with this file.


## 1. For 'put' pointer:

- seekp()
   - This function moves the 'put' pointer to a location to do a write operation.

- tellp()
   - This function tells the current position of the 'put' pointer in the file.


## 2. For 'get' pointer:

- seekg()
   - This function moves the 'get' pointer to a desired location to do read operation.

- tellg()
   - This function tells the current position of the 'get' pointer in the file.

<br />

## *Below are all the file pointer manipulation funciton explained individually:*

### (i) *seekp()*

- The 'seekp()' function is defined in the 'ostream' class.
- It operates on the 'put' pointer.

Here's an example below explaning the same:


```C++
//Example-1
ofstream fout("gwoc.txt");
fout.seekp(2, ios::beg);

```

In the above example, 'seekp()' function makes the 'put' pointer to move forward by two bytes from the beginning of the file and now 'put' pointer points to third byte.

```C++
//Example-2
ofstream fout("gwoc.txt");
fout.seekp(-2,ios::cur);

```

In the above example, 'seekp()' function makes the 'put' pointer to move backward by two bytes from its current position in the file.

<br />

### (ii) *tellp()*

- The 'tellp()' function is defined in the 'ofstream' class. 
- It operates on the 'put' pointer.

Here's an example below explaining the same:

```C++

ofstream fout("gwoc.txt");
p = fout.tellp();

```

In the above example, 'tellp()' function returns the number of bytes after which the 'put' pointer is positioned.

<br />

### (iii) *seekg()*

- The 'seekg()' function is defined in the 'istream' class.
- It operates on the 'get' picture.
- The explanation and example of 'seekg()' is same as 'seekp()' function. The ony difference is 'seekg()' operates on 'get' pointer and 'seekp()' operates on 'put' pointer.

<br />

### (iv) *tellg()*

- The 'tellg()' function is defined in the 'istream' class.
- It operates on the 'get' pointer.
- The explanation and example of 'tellg()' is same as 'tellp()' function. The ony difference is 'tellg()' operates on 'get' pointer and 'tellp()' operates on 'put' pointer.

<br />

---

