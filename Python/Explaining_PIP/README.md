# PIP in Python

![PIP](https://i1.wp.com/petamind.com/wp-content/uploads/2020/03/python_package.png?fit=506%2C294&ssl=1)<br>

**PIP** is the standard package manager for Python. It allows you to install and manage additional packages that are not part of the Python standard library.

## Getting Started With Pip

- So, what is pip? pip is a package manager for Python. That means it’s a tool that allows you to install and manage additional libraries and dependencies that are not distributed as part of the standard library.

- Package management is so important that pip has been included with the Python installer since versions 3.4 for Python 3 and 2.7.9 for Python 2, and it’s used by many Python projects, which makes it an essential tool for every Pythonista.

- The concept of a package manager might be familiar to you if you are coming from other languages. JavaScript uses npm for package management, Ruby uses gem, and .NET use NuGet. In Python, pip has become the standard package manager.

- The Python installer installs pip, so it should be ready for you to use, unless you installed an old version of Python. You can verify that pip is available by running the following command in your console:

```console
$ pip --version

pip 18.1 from C:\Python37\lib\site-packages\pip (python 3.7)
```

## Installing Pip on Windows / Mac / Linux

### Windows

1. Check if Pip is Already Installed

```console
$ pip help
```

_If Pip is installed, you will receive a message explaining how to use the program. If Pip is not installed, you will get an error message stating that the program is not found._

2. Confirm that Python is installed.

_The simplest way to test for a Python installation on your Windows server is to open a command prompt. Once a command prompt window opens, type `python` and press `Enter`. If Python is installed correctly, you should see output similar to what is shown below._

```console
Python 3.7.0 (v3.7.0:1bf9cc5093, Jun 27 2018, 04:59:51) [MSC v.1914 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license" for more information.
```

_If you receive a message like:_

```console
Python is not recognized as an internal or external command, operable program or batch file.
```

_Python is either not installed or the system variable path has not been set. You will need to either launch Python from the folder in which it is installed or adjust your system variables to allow Python to be launched from any location._

3. Installing Pip on Windows

_Once you have confirmed that Python is installed correctly, we can proceed with installing Pip._

- Download [get-pip.py](https://bootstrap.pypa.io/get-pip.py) to a folder on your computer.
- Open a command prompt and navigate to the folder containing the [get-pip.py](https://bootstrap.pypa.io/get-pip.py) installer.
- Run the following command:

```console
$ python get-pip.py
```

_Pip should now be installed successfully. If we receive a “file not found” error, double check the directory path to the file. You can use the dir command to view the entire contents of a directory. It should be noted that Pip is installed by default with Python versions Python 2.7.9+ and Python 3.4+. As a side note, Pip also sets up both the `virtualenv` and `pyvenv` virtual environments when installed._

### Mac

---

#### - Method 1 ( get-pip )

Using the same method as described in `Windows` installation section with `get-pip.py`

#### - Method 2 ( Homebrew )

1. Make sure you have Homebrew installed by running the following command :

```console
$ which brew
/usr/local/bin/brew
```

_if homebrew is not installed on mac install it using this guide [link](https://www.digitalocean.com/community/tutorials/how-to-install-and-use-homebrew-on-macos)_

2. Run the following command to install the latest Python, pip and setuptools .

```console
$ brew install python
```

_Since macOS already comes with Python preinstalled, the command installs a separate copy of Python. Having a separate installation has several benefits:_

- The Python2 version shipped with macOS is out of date compared to the latest official Python3 release.

- Having a separate Python version adds a layer of protection to your system.

**NOTE**

If pip is still not in your path after installing via brew, the solution is to re-link, run :

```console
brew unlink python && brew link python.
```

### Linux

---

1. Make sure Python is installed on your system / linux distribution .

2. Installing the pip on your linux distribution by running the following command .

#### Arch Linux , Manjaro , Garuda , Arco Linux

```console
$ sudo pacman -S python-pip   #command for Python 3
$ sudo pacman -S python2-pip  #command for Python 2
```

#### Gentoo

```console
$ emerge --ask dev-python/pip
```

#### OpenSUSE

```console
$ sudo zypper install python3-pip  #command for Python 3
$ sudo zypper install python-pip   #command for Python 2
```

#### Ubuntu , Debian , Linux Mint

```console
$ sudo apt install python3-pip	#command for Python 3
$ sudo apt install python-pip 	#command for Python 2
```

#### CentOS 8 (and newer) , Fedora , Red Hat

```console
$ sudo dnf install python3     #command for Python 3
$ sudo dnf install python-pip  #command for Python 2
```

#### CentOS 6 and 7 , Old versions of Red Hat

```console
$ sudo yum install epel-release
$ sudo yum install python-pip
```

## Basic Usage

### Pip List

**List installed packages:**

```console
$ pip freeze
```

**Show version of the particular package:**

```console
$ pip freeze | grep <PACKAGE>
```

**Search for a package:**

```console
$ pip search "<PACKAGE>"
```

**List all available versions of a package:**

```console
$ pip install <PACKAGE>==
```

### Pip Install

**Install the latest version of a package:**

```console
$ pip install <PACKAGE>
```

**Install the specific version of a package:**

```console
$ pip install <PACKAGE>==<VERSION>
```

**Install packages from `requirements.txt` file:**

```console
$ pip install -r requirements.txt
```

**Install local package:**

```console
$ pip install <DIRECTORY>
```

**Install local package in editable mode:**

```console
$ pip install -e <DIRECTORY>
```

> Setup,py : The `<DIRECTORY>` must have a `setup.py` file in it.

### Pip Upgrade

**Upgrade a package to the latest version:**

```console
$ pip install --upgrade <PACKAGE>
```

**Upgrade/downgrade a package to the specific version:**

```console
$ pip install --upgrade <PACKAGE>==<VERSION>
```

**Upgrade `pip` itself:**

```console
$ pip install --upgrade pip
```

**Upgrade/downgrade `pip` itself to the specific version:**

```console
$ pip install --upgrade pip==<VERSION>
```

> Cool Tip : Create isolated Python enviornmensts using `virtualenv`

### Pip Uninstall

**Uninstall a package:**

```console
$ pip uninstall <PACKAGE>
```

**Uninstall all packages:**

```console
$ pip freeze | xargs pip uninstall -y
```

## Alternatives to Pip

- [Conda](https://docs.conda.io/en/latest/) is the package and environment manager that comes bundled with Anaconda. Conda has its own package repository that can be used to install Python packages into a Conda virtual environment.

- [Poetry](https://python-poetry.org/) is a tool for dependency management and packaging in Python. It allows you to declare the libraries your project depends on and it will manage (install/update) them for you.

- [Pipenv](https://pipenv.pypa.io/en/latest/) is a tool that aims to bring the best of all packaging worlds (bundler, composer, npm, cargo, yarn, etc.) to the Python world. Windows is a first-class citizen, in our world. It automatically creates and manages a virtualenv for your projects, as well as adds/removes packages from your Pipfile as you install/uninstall packages. It also generates the ever-important Pipfile.lock, which is used to produce deterministic builds.

## References

- https://realpython.com/what-is-pip/
- https://www.liquidweb.com/kb/install-pip-windows/
- https://www.digitalocean.com/community/tutorials/how-to-install-and-use-homebrew-on-macos
- https://linuxconfig.org/install-pip-on-linux
- https://wiki.gentoo.org/wiki/Pip
- https://www.shellhacks.com/python-how-to-use-pip-basic-commands/
