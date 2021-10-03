# Interpreter in Python and How it works

    An interpreter is a kind of program that executes other programs. When you write Python programs , it converts source code written by the developer into intermediate language which is again translated into the native language / machine language that is executed.

    The python code you write is compiled into python byte code, which creates file with extension .pyc . The byte code compilation happened internally, and almost completely hidden from developer. Compilation is simply a translation step, and byte code is a lower-level, and platform-independent , representation of your source code. Roughly, each of your source statements is translated into a group of byte code instructions. This byte code translation is performed to speed execution byte code can be run much quicker than the original source code statements.

    The .pyc file , created in compilation step, is then executed by appropriate virtual machines. The Virtual Machine just a big loop that iterates through your byte code instructions, one by one, to carry out their operations. The Virtual Machine is the runtime engine of Python and it is always present as part of the Python system, and is the component that truly runs the Python scripts . Technically, it’s just the last step of what is called the Python interpreter.


<br>

# How Interpreter works

![alt text](https://github.com/Tiwari007/winter-of-contributing/tree/main/Python/What_Is_Interpreter/Interpreter.png?raw=true)