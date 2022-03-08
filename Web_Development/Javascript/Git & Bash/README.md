# Git and Bash

## What is Git ?

- Git is a free and open source distributed version control system designed to handle everything from small to very large projects with speed and efficiency. 
<br>
(Version control is a system that records changes to a file, or set of files, over time so that you can recall specific versions later.)

- Git helps keep track of changes made to a code.

## How to install Git ?

- For Mac users, 
<br>
There are several ways to install Git on a Mac. In fact, if you've installed XCode (or it's Command Line Tools), Git may already be installed. To find out, open a terminal and enter git --version.

```
$ git --version
```
- For Linux users,
<br>
Git is available with all the major Linux distributions. Thus, the easiest way to install Git is by using a Linux package manager.

Use the following command to install git on Linux –
```
$ sudo apt-get install git
```

- For Windows users,
<br>
To download the Git installer, visit the Git's official site and go to download page. The link for the download page is https://git-scm.com/downloads. 
<br>

## Git environment setup 

- Git supports a command called git config that lets you get and set configuration variables that control all facets of how Git looks and operates. It is used to set Git configuration values on a global or local project level.

Setting user.name and user.email are the necessary configuration options as your name and email will show up in your commit messages.

- Setting username

```
    $ git config --global user.name "Your name"
```  

- Setting email id

```
    $ git config --global user.email "Your email"
```  

## Basic Commands -

- This command helps to move changes from the working directory to the staging area.

```
git add
```

- This command lets us create isolated development environments within a single repository.

```
git branch
```

- This command lets us create a copy of an existing Git repository. 

```
git clone
```

- This command takes the staged snapshot and commits it to the project history. Combined with git add, this defines the basic workflow for all Git users.

```
git commit
```

- This command initializes a new Git repository.

```
git init
```

- This command fetches downloads a branch from another repository, along with all of its associated commits and files.

```
git fetch
```

- This command integrate changes from divergent branches.

```
git merge
```

- This command downloads a branch from a remote repository, then immediately merges it into the current branch. 

```
git pull
```

- This command lets us move a local branch to another repository, which serves as a convenient way to publish contributions.

```
git push
```
<hr>

## What is Bash ?

- Bash is a command line interpreter that typically runs in a text window where user can interpret commands to carry out various actions. 

- Bash is an acronym for Bourne Again Shell. 

- A shell is a terminal application used to interface with an operating system through written commands. There are different types of shells available in Linux Operating Systems. Some of which are as follows:

    Bourne Shell

    C shell

    Korn Shell

    GNU Bourne Shell


- Bash is a popular default shell on Linux and macOS. 

## Basic commands - 

- ls — List directory contents

- echo — Prints text to the terminal window

- touch — Creates a file

- mkdir — Create a directory

- pwd — Print working directory

- cd — Change directory

- mv — Move or rename directory

- rmdir — Remove directory

- exit — Exit out of a directory

## References - 

https://www.javatpoint.com/git-environment-setup

https://www.atlassian.com/git/glossary

https://www.educative.io/blog/bash-shell-command-cheat-sheet

https://www.javatpoint.com/bash-introduction

## Contributed by - Liza Deka