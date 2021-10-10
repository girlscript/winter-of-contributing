# gcc/g++ installation guide for Linux Users

- #### In this documentation you will learn how to install various versions of gcc and g++ in your linux machine.
<br/>

<table>
<tbody>
<tr>
<td width="50%">

## CONTENTS 
| No            | Topics    |  
| ------------- |:-------------| 
| 1             | [Prerequisites](#prerequisites) |
| 2             | [Installing GCC on Linux(Ubuntu)](#installing-gcc) |
| 3             | [Installing G++ on Linux(Ubuntu)](#installing-g++) |
| 4             | [Compiling Our initial Program](#compiling%20our%20first%20program) |
| 5             | [Conclusion](#Conclusion) |

</td>
<td>

![ubuntu](img/gcc.png)

</td>
</tr>
</tbody>
</table>

<br/>

### Prerequisites
- ##### To add new repositories in our linux operating system machine we might ought to be logged in as root user with [sudo privileges](https://en.wikipedia.org/wiki/Sudo)

[![Back to top](https://img.shields.io/badge/Back%20to%20top-blue?style=flat)](#contents)

### Installing-gcc
- ##### Run the subsequent commands to put in gcc in your linux operating system machine

| Command          | Description |
| ------------- | :-----:|
|  ```sudo apt update``` | To update your packages list |
|  ```sudo apt install build-essential``` | To install build-essentials package(if already installed then no need to install) |
| ```sudo apt install gcc``` | To install current stable version of gcc |
| ```gcc --version``` | To see , gcc is installed or not |

[![Back to top](https://img.shields.io/badge/Back%20to%20top-blue?style=flat)](#contents)

### Installing-g++
- ##### Run the subsequent commands to put in g++ in your linux operating system machine

| Command          | Description |
| ------------- | :-----:|
|  ```sudo apt update``` | To update your packages list |
|  ```sudo apt install build-essential``` | To install build-essentials package(if already installed then no need to install) |
| ```sudo apt install g++``` | To install current stable version of g++ |
| ```g++ --version``` | To see , g++ is installed or not |
 
[![Back to top](https://img.shields.io/badge/Back%20to%20top-blue?style=flat)](#contents)

### Compiling our first program

- Make a file named `test.c` put this following code in this file and save it.

```c
#include<stdio.h>
int main(){
    printf("Hello GWOC");
    return 0;
}
```

- Now open the terminal in the directory in which you have created your `test.c` file. and first compile your program with the following command.
```bash
g++ test.c
```
- Now run the `a.out` file with the following command.
```bash
./a.out
```

- You will see the following output.

![cprogram](img/cprogram.PNG)

- same way you can test c++ program.

[![Back to top](https://img.shields.io/badge/Back%20to%20top-blue?style=flat)](#contents)

### Conclusion

- #### You have successfully installed gcc/g++ in your linux machine. you can check [gcc official documentation](https://gcc.gnu.org/onlinedocs/).

[![Back to top](https://img.shields.io/badge/Back%20to%20top-blue?style=flat)](#contents)

### Happy Coding !!!