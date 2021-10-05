### Git and Bash
Git and Bash are fairly different things but the windows version of `git` comes preconfigured with bash shell. This is why you can even execute the bash commands there. But you can not perform low-level tasks with git-bash in windows.
Let's just understand the difference between them one by one and how they create a development workflow together.

####  What is Git
- Git is a free and open sources version control command-line tool that can manage the commits and branches of your source code. 
- Git can also push your codes to the remote server. Where you can handle your codes, commits, and branches remotely using just Git on your local machine.
- Using Git you can even shift to different branches and commits and even tracks all the commit logs.
- Git gives an easy and flexible environment way to record all of logs and codes.
- Git gives you an environment for multiple developers to work together on a project.

#### How to install Git

- `Windows` users can go to their official [website](https://git-scm.com/) and download git bash.
- For `Mac` users, Git already comes installed with their `MacOS`. you can check whether it is installed or not by opening up your terminal and type.
```shell
git -version
```
- In maximum `Linux` distro git comes with already installed but you can install it easily but it depends upon which Linux distro and package manager you are using.

##### For Ubuntu
```shell
sudo apt install git
```
##### For Arch based distros
```shell
sudo pacman -Syu git
```
### Basic commands in git

-  initializing a directory with git.
```shell
git init 
```
- Check logs of commits of current branch
```shell
git log
```
- Check whether new changes have occurred or not
```shell
git status
```
- make a new commit but first track all the changes then commit using the below two commands. 
```shell
git add .
```
```shell
git commit -m "your message"
``` 
> make sure your message will be some meaningful text.
- you can also use a short command for this
```shell
git commit -am "your message"
```
- switch to  a particular commit
```shell
git checkout commit_id
```
    commit_id is an alphanumeric number that you get while doing `git log`.
	
- Making a new branch 
```shell
git branch branch_name
```
- shifting to a particular branch
```shell
git checkout branch_name
```
- deleting a branch
```shell
git branch -d branch_name
```
These are some basic commands which you will use for basic git operations.
<hr>

### Bash
Bash is also known <b>Bourne Again Shell</b> is a standard shell available in Unix-based systems as a default shell. Nowadays it comes as a standard shell in all GNU/LINUX systems. Here term `shell` is the outmost layer of the kernel. so the shell does the task of interacting with the kernel by user commands.

### Features of Bash
- You can perform not only just one-line commands but even multiline commands so basically you can use it as a programming language.
- Bash is suitable for using scripting-related tasks.
- Bash gives you an interactive environment for executing any commands.
- Bash is very customizable and flexible You can even make your configuration in the `.bashrc` file which is situated in the user `$HOME` directory.
- Bash is more secure than any other shell. You can not perform any execution of any type of file until the user does not permit to make that file executable.

These are some basic features of Bash. 

### Basic commands in Bash
- echo or print any text
```shell
echo your_text
```
- listing out all directories and files
```shell
ls
```
- creating a new directory
```shell
mkdir directory_name
```
- creating a file
```shell
touch file_name
```
- finding pattern in a text file
```shell
grep word_to_find
```

- you can pipe a symbol to treat the output of some commands as an input for some different commands.
```shell
echo this is me | grep me
```
- removing file and directory
```shell
#This will only remove file
rm file_name 
```
```shell
#This will remove an empty directory
rm -f directory_name
```
```shell
#This will remove non empty directory
rm -rf directory_name
```
- you can also intialize a variable in bash and use it in your scripts
```shell
#!/bin/bash
#Do not add space 
name="bash"
echo name
```
bash can also be used as an executable file even many programs uses bash script for their installation.
<hr>

### WSL
- WSL stands for windows subsystem for Linux which is based on virtualization. This gives separate space in your windows system for the Linux kernel.
- It uses the original Linux kernel that is a little modified by Microsoft.
- WSL 2 also supported a `virtual machine platform` which means you can even run GUI apps in wsl2.
- You can download any Linux distro such as ubuntu from the windows store after [setting up wsl](https://docs.microsoft.com/en-us/windows/wsl/install) then just search ubuntu in windows store and click install.
- WSL does not give a real Linux environment and lacks many Linux features like it does not have systemd.
- WSL is very handy and flexible for development-related purposes in a Linux-like environment.
### Final verdict

- Both git and bash give you a powerful and flexible environment for any kind of workflow and development.
- Windows version of git comes with a bash shell, but you can only perform the basic tasks with that version of the shell.
- I would prefer you all to use WSL with git which gives you a separate Linux environment for your development where you can use all of the features of bash as well as git too.
