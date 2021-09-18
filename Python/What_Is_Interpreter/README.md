#  What is python iterpreter and How it Works.

# **What is an Interpreter?**
Interpreter is a type of computer program which directly executes the set of instructions which are written in a programming or scripting language and it is not requred that the codes would have to be compiled previously in machine language.

# **What is python Interpreter? And how it works?**
Python is an ***interpreter language***.Python interpreter is the software logic between computer and hardware it takes a python program (*.py files)and run it line by line from start to end.It takes an interective command an executes the python script.
 
 * **Working of interpreter**:

let's take an simple code written in python and save it as (demo.py) :

```
print("Hello thanks for reading this !")
```
In command line if we write: ```python demo.py``` (This command tells the interpreter to run the demo.py )


This will show: ```Hello thanks for reading this !```


So if we take a deep look into this:



At first the code is compiled to **"byte code"** and then it is executed by **"Virtual Machine"**.

Byte code is a low level representation/translation of the source which is faster to run which CPU don't understand.

Next these byte codes are go through the **"Python virtual machine(PVM)"**
and executed line by line. 

A  PVM is not a different program. System interpreter also comes with python installion one can use it as base interpreter for **PVM.**

If python interpreter encounters an error it will stop the error for being transleted and remove the errors so the running process will be continued and will not affect the runtime and displays the error so that it is easier to spot the error. 


---