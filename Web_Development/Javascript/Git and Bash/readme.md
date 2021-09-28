### Git and Bash
Git and Bash are fairly different things but windows version of `git` comes preconfigured with bash shell. This is why you can even execute the bash commands there. But you can not perform low level tasks with git-bash in windows.
Lets just understand the difference in between them one by one and how they create a development workflow together.

####  What is Git
- Git is an free and open sources version control command line tool which can manage the commits and branches of your source code. 
- Git can also push your codes to remote server . Where you can handle your codes , commits ,  and branches remotely using just Git on your local machine.
- Using Git you can even shift to different branches and commits and even tracks all the commit logs.
- Git gives and easy and flexible environment way to record all of logs and codes.
- Git gives you an environment for multiple developers to work together on a projects.

#### How to install Git

- `Windows` users can go to their official [website](https://git-scm.com/) and download git bash.
- For `Mac` users , Git already comes installed with their `MacOS`. you can check whether it is installed or not by opening up your terminal and type.
```shell
git -version
```
- In maximum `Linux` distro git comes with already installed but you can install it easily but it is depend upon which linux distro and package manager you are using.

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
- Check whether a new changes are occured or not
```shell
git status
```
- make a new commit but first track all the changes then commit using below two commands. 
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
    commit_id is an alphanumeric number which you get while doing `git log`.
	
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
Bash also known <b>Bourne Again Shell</b> is a standard shell which available in Unix based system as a default shell. Nowadays it is comes as a standard shell in all GNU/LINUX system. Here term `shell` is outmost layer of kernal. so shell do the task of interacting with kernal by user commands.

### Features of Bash
- You can perform not only just one line commands but even multiline commands so basically you can use it as programming language.
- Bash is suitable for using scripting related tasks.
- Bash gives you interactive environment for executing any commands..
- Bash is very customisable and flexible You can even make your configuration in `.bashrc` file which is situated in user `$HOME` directory.
- Bash is more secure than any other shell . You can not perform any execution of any type of file untill user does not give permission to make that file executable.

These are some basic features of Bash . 

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

- you can pipe symbol to treat output of a some commands as an input for some different command.
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
bash can also be used as a executable file even many programs uses bash script for their installation.
<hr>

### WSL
- WSL stands for windows subsystem for linux which is based on virtualization. Which gives seperate space in your windows system for linux kernal.
- It uses orginal linux kernal which is actually little modified by microsoft.
- WSL 2 also supported `virtual machine platform` which means you can even run gui apps in wsl2.
- You can download any linux distro such as ubuntu from windows store after [setting up wsl](https://docs.microsoft.com/en-us/windows/wsl/install) then just search ubuntu in windows store and click install.
- WSL does not give real linux environment and lack many linux features like it does not have systemd.
- WSL is very handy and flexible for development related purposes in linux like environment.

### Final verdict

- Both git and bash gives your powerful and flexible environment for anykind of workflow and development.
- Windows version of git comes with bash shell . but you can only perform the basic tasks with that version of shell .
- I would prefer you all to use wsl with git which gives you seperate linux environment for your development where you can use all of the features of bash as well as git too.


### Contributed By [Prachi Singh]("https://github.com/prachi610/)
