# Python Development and Debugging Software

### 🐛 Debugging software: 
![Debugging](https://user-images.githubusercontent.com/73184612/133916596-832b72af-4835-4e8d-a8ae-d204ec6ff3ad.jpg)

Debugging can be a cumbersome task for many developers. However, it is important to be able to debug your code for detecting the logical or semantic errors that might be giving you an unexpected output. </br>
Using print statements for debugging is a good approach for beginners working on a short codes. As the size of the code becomes larger, this method becomes less feasible and 
one has to use other tools. There are several tools available for debugging your python code, as discussed below: </br>

#### 1. Python Standard Debugger (pdb)
PDB is the default python debugger, which is installed along with all python versions. No separate installation is needed, if you already have python installed on your         machine. It is present in the pdb module. It is a command line debugger which supports setting of breakpoints and running the code in the debugger mode. We can single step at the source line level, inspect stack frames, evaluate arbitrary Python code in the context of any stack frame. To use PDB within the program, simply import the module as
```sh 
import pdb
```
Insert pdb.set_trace() commands wherver needed. Then we can run the program normally and execution will be halted at every breakpoint. We can use the commands 'where', 'next' and 'step' to navigate the code. </br>
To use the debugger from the command line, run the following command in terminal:
```sh
python -m pdb filename.py 
```
---
#### 2. PyCharm IDE
PyCharm is a famous python IDE that provides a visual way to debug and test your code. Code of any size can be debugged easily. We can put breakpoints and step into the code. A dialog box appears for guiding the user through the execution process and offers the choice of several debugging parameters. The window contains dedicated panes for displaying input and output information in the form of frames, variables, watches tab and the console. Inline debugging is an excellect feature of PyCharm- on pressing a breakpoint, PyCharm shows you the value of your variables in the editor itself.
> Download PyCharm from : https://www.jetbrains.com/pycharm/download/
> 
![debugging_console](https://user-images.githubusercontent.com/73184612/133917183-40d798d6-0e5a-4ee9-8fc5-5058470f3062.jpg) 
<h6 style="margin-top:0;"> Image Src: https://www.tutorialspoint.com/pycharm/pycharm_debugging_and_breakpoints.htm </h6>

***

#### 3. Visual Studio Code debugger

#### 4. Komodo

#### 5. Jupyter Visual debugger
