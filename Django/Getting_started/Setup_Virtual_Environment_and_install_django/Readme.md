# Setup Virtual Environment For Django

## What is Virtual Environment ?

As the name suggest virtual environment is a python environment in which all the python scripts and binary file are isolated from main system Python.

Benefit of virtual environment is we can use different packages and library for different project.

<hr/>

## Step 1 : Create env directory

Python provides us a `venv` tool by which we can easily create environment.

Open terminal or cmd and type `python -m venv "path"` (Make sure you have python installed on your system) 

Give the path where you want to create virtual environment.

Let's say you have created a directory for a new project and want to create a virtual environment for that directory then type the following command.

```python
python -m venv env
```

After running this command python will create a env folder in which all the python file will reside.
<hr/>

## Step 2 : Activating Virtual Environment

Now, we have to activate this environment for that just type the following command in terminal or cmd where you have created the environment.

``` 
.\env\Scripts\activate
```

Now, you can see `(env)` at the left of terminal.

## Step 3 : Installing Django

<hr/>

Let's install Django

```
pip install Django
```
This will install Django in this virtual environment

Let's say you want to install different version of Django then specify the version as shown below 

```
pip install Django==2.2.24
```

You can check all the installed packages by `pip freeze` command .

Now Django is installed in our Virtual Environment
