<!--
1. Every major folder, for example, Frontend Web Development, Backend Web Development, Data Structures and Algorithm, etc, will have an index page.
2. Every index page should have a title, index with a link to all the language/topic folders, and a Learning path.
3. The learning path should act as a roadmap to the learners. The learners should not be clueless after coming to the repository.
  -->





# Virtual environment
<!--
- [HTML](./html)
- [CSS](./css)
- [JavaScript](./javascript)
-->

# <a name="vir-envi"></a>

## What is it?
### A cooperatively isolated runtime environment that allows Python users and applications to install and upgrade Python distribution packages without interfering with the behaviour of other Python applications running on the same system.
----
## Python Virtual environment
### Python applications may often use packages and modules that don’t come as part of the standard library. This might require the installation of the packages and modules needed.
### On installation, the older versions of the packages/modules get deleted.In order to prevent this, a Virtual environment is created  that contains a Python installation for a particular version of Python, plus a number of additional packages.
<img src="https://github.com/Yashesvinee/winter-of-contributing/blob/Python/Python/Virtual_Environment/img/venv.jpeg" width="400"><br>
----
## Creating a Virtual environment
### The module used to create and manage virtual environments is called *venv*. *venv* will usually install the most recent version of Python available. If you have multiple versions on your system, you can select a specific Python version by running the version you want.<br>To create a virtual environment, decide upon a directory where you want to place it, and run the venv module as a script with the directory path:
```
python3 -m venv project-env
```
### This creates the *project-env* directory if it doesn’t exist, along with the directories containing a copy of the Python interpreter, the standard library, and various supporting files. A common directory location for a virtual environment is *.venv*.<br><br>Once you’ve created a virtual environment, you may activate it.<br> On Windows:
```
project-env\Scripts\activate.bat
```
### On Unix/MacOS:
```
source project-env/bin/activate
``` 

---
### A virtual environment can be extremely useful when developing multiple projects that require different dependencies, developing across multiple computers, and making it easier to collaborate with others on projects.<br> There is no limit to the number of environments you can have since they’re just directories containing a few scripts.


