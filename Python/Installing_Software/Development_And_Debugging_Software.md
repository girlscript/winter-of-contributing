# Python Development and Debugging Software

### 👨‍💻 Development Software:
<p align="center">
  <img width="400" height="200" src="https://user-images.githubusercontent.com/73184612/133919228-fdda1956-e3d6-45c7-8611-a788cf15609c.jpg">
</p>

#### 1. IDLE
IDLE is the default IDE that comes along with the installation of any python version. It has a Python shell window(interactive interpreter), features such as auto-completion, syntax highlighting, smart indentation, and a basic integrated debugger. It is light-weight and simple to use, however might not be suitable for large projects.

#### 2. Sublime Text, Vim, Atom
These are a popular code editors that support many programming languages. Sublime text has a built-in support for python. There are packages available for debugging, auto completion, code-linting, etc. which can be installed and used. There are various other packages for development in the fields of web, scientific computation, machine learning, etc. They are highly customisable code editors that can give you a full fledged python development environment as per your need.

> Download Sublime Text from: https://www.sublimetext.com/download </br>
> Download Vim from: https://www.vim.org/download.php </br>
> Download Atom from: https://atom.io/

#### 3. Thonny
Thonny IDE is ddedicated to python and has python 3 version built in. This IDE is best for beginners because of the simple user interface. It supports features like syntax error highlighting, debugger, code completion, step through expression evaluation, etc.
> Download Thonny from: https://thonny.org/

#### 4. Pycharm
PyCharm, created by JetBrains is a suitable IDE for professional developers. It has features like code completion and inspection, error-highlighting, debugging, version control system and code refactoring. PyCharm comes in 2 versions: Community and Profesional. Community version is free and open-source, suitable for students. Professional version is a paid one, as it is a full-featured IDE supporting lots of tools and features for scientific as well as web development.
> Download PyCharm from: https://www.jetbrains.com/pycharm/download/

#### 5. Visual Studio Code
Visual studio code from Microsoft is a powerful open-source IDE. It can easily be used to create a Python development environment by adding the necessary extensions.
It provides several intelligent features: code completion, linting for potential errors, debugging, unit testing, etc.
> Download Visual Studio Code from: https://code.visualstudio.com/download

#### 6. Spyder
Spyder is another opem-source IDE, popularly used for scientific development using python. It is bundled with Anaconda distribution. The Anaconda distribution includes lots of different packages for data science and machine learning applications, like numpy, pandas, scikit-learn, etc. Spyder supports autocompletion, debugging and iPython shell.
> Refer this link to download Spyder: https://docs.spyder-ide.org/current/installation.html#standalone-installers-ref

#### 7. Jupyter Notebook
Jupyter is a free and open source interactive web tool. Using this, developers can combine software code, output, explanatory texts, links and resources in a single document.
It works not only as an IDE, but also as an educational tool.
> Download Jupyter Notebook from: https://jupyter.org/install
***

### 🐛 Debugging software: 
<p align="center">
  <img src="https://user-images.githubusercontent.com/73184612/133916596-832b72af-4835-4e8d-a8ae-d204ec6ff3ad.jpg">
</p>

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
 
![debugging_console](https://user-images.githubusercontent.com/73184612/133917183-40d798d6-0e5a-4ee9-8fc5-5058470f3062.jpg) 
<h6 style="margin-top:0;"> Image Src: https://www.tutorialspoint.com/pycharm/pycharm_debugging_and_breakpoints.htm </h6>

***

#### 3. Visual Studio Code 
Microsoft Visual Studio Code is a light-weight, full featured and multi-language IDE. It has some advanced debugging tools apart from Git control, syntax highlighting, and code refactoring. There are many debugger extensions available in VS Code marketplace to support multiple languages like PHP, Ruby, Go, C#, Python, C++, etc.
We can put breakpoints, conditional breakpoints, can skip steps (into/out/over), put exception breakpoints and break on an unhandled exception. </br>
> Download VS Code from : https://code.visualstudio.com/download
<img src="https://user-images.githubusercontent.com/73184612/133918541-3dcd4bd5-ee7d-4fc5-ba76-73b3ff1074d0.png" height=400, width=700>
<h6 style="margin-top:0;"> Image Src: https://code.visualstudio.com/docs/editor/debugging </h6>

***

#### 4. Komodo
Komodo is a full-featured IDE for mixed-language applications. It is designed and developed by ActiveState with remarkable debugging features.
The Komodo debugger uses dialog boxes to present the user with debugger options. On choosing the default debugger setting, it will run without further prompts. It has built-in debuggers for Python, Perl, Ruby, NodeJS, JavaScript, PHP, etc. </br>
Set breakpoints, run the code upto the breakpoint and inspect the debug window to detect the errors. </br>
Komodo has a sophisticated way to detect different programming languages. It has the ability to handle usage of different languages within the same program file.
Komodo also offers visualization in the debugger mode, allowing the developers to deepen their understanding of the code. Moreover, it can perform unit tests easily, supports live peer viewing and team collaboration too.
> Download Komodo from: https://www.activestate.com/products/komodo-ide/download-ide/
<img src="https://user-images.githubusercontent.com/73184612/133918868-6fa882e9-84d5-475f-aa2b-16e75cf7c224.png" height=300, width=600>
<h6 style="margin-top:0;"> Image Src: https://www.activestate.com/blog/advanced-debugging-komodo-ide/ </h6>

***

#### 5. Jupyter Visual debugger
Jupyter has released a visual debugger that can be used within the Jupyter environment.  Using this debugger, we can set breakpoints in notebook cells, inspect variables and navigate the call stack. That makes debugging in Jupyter notebooks very efficient. The debugger can be installed by running the following command:
```
conda install xeus-python -c conda-forge
```
In this way we can use Jupyter as a full development environment without the need to test and debug the code elsewhere.

<img src="https://user-images.githubusercontent.com/73184612/133919026-5e00fd35-6535-415d-8862-a24b68d74c54.gif" height=400, width=700>
<h6 style="margin-top:0;"> Src: https://blog.jupyter.org/a-visual-debugger-for-jupyter-914e61716559 </h6>

***
</br>
</br>
References: </br>
https://www.programiz.com/python-programming/ide </br>
https://towardsdatascience.com/5-python-debugging-tools-that-are-better-than-print-1aa02eba35

Image sources: </br>
https://www.indiamart.com/proddetail/python-software-development-22386550097.html </br>
https://www.javatpoint.com/debugging
