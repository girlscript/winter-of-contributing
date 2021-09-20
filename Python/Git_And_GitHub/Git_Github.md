# LEARNING VERSION CONTROL AND CONTRIBUTING ON GITHUB 

**Hello Learners**,

* This Documentation will let you know about git and github .

* This is most Important thing you need to know if you work on Projects and are under tech domain.
## Git 
* Git is the Version control system and is most widely used among all developers.Git is a free and open source distributed version control system designed to handle everything from small to very large projects with speed and efficiency.

   Now,
## What is version control system?

* Version control systems are software tools that help software teams manage changes to source code over time. As development environments have accelerated, version control systems help software teams work faster and smarter.

## Git Installation 

* Visit to the below link to direct to the official website to get git in your system 
Git software is available for many Operating Systems.

   https://git-scm.com/downloads

* If you already have Git installed, you can get the latest development version via Git itself.
Copy paste this in your terminal.

  git clone https://github.com/git/git

   ![Image](p1.jpeg)	

* **Git**  tracks your activity in your Project directory in which you have initialized git and take snapshots and remembers everything that you do and helps you get your Project efficiency better.


* This is how your git bash terminal looks in your Windows Operating system.
![Image](p2.png)	

* ONE THING TO KEEP IN MIND IS THAT -

  Git never tracks the empty folders no matter what the no. of empty folders are in the working directory.

* Now that Installation is done , First setup and then you need to initilize git in the folder where your project recides. 

## Files in Git 

* There are 2 types of file Git understands - 

  M - modified file     
  U - untracked file

* In Git version control system,

  There is a 3 stage architecture 

   1. Working directory (modified)
    
   2. Staging area (staged)--- one step preparation before committing the changes.
    
   3. .git repository (Repository) (committed)

   * IMP- git never tracks the empty folders no matter what the no. of empty folders are in the working directory.

- Things to remember -
  
   commiting in git is taking snapshots.

   staging area -- telling git to prepare the files to set them as a  commit 

   .git is the hidden file always present.

   For every change after committing new version is formed if committed further.


## What is Cloning ?
Cloning is done when you want to copy some others code into your local repository and work in it.
In simple words, 

Copying source code rather not creating a new one.


Each file in your working directory can be in one of the two states-  tracked and untracked.


### Tracked files - files that git knows about

### untracked files - the files those where not present in your last snapshot and is not in your staging area 

## Various Useful and Frequent Git Commands
 
1.     git init
   
   Initializes git and creates an empty git hidden folder in the directory
       
2.     git status
     
     displays the status of the git and the folder in the present directory

3.     git  add  <filename>
       
    adds the file in the staging area

4.     git add .

     adds all the files present in the current directory to the staging area

5.     git commit -m  "your commit message"
   
    Commits your changes(takes snapshots) with a message 
    moving files from staged area to git folder is called  **COMMIT** .
making commits , creates version/snapshots of your project.

6.     git log 
     
    Tells about all the commits and their details on the screen.

7.     git log --oneline  
     
     Shows commits in one line.

8.     rm -rf .git
 
    Deletes  the .git folder recursivley forcibly  and you will lose the git repository. Make sure abou this command and use only when needed. You csan lose all your changes you made under Git.

9.     rm <filename>

      Removes the file from the directory and this function is unstaged.

The blow Pictorial representation will let you know more about the Procedure before commit your chenges . **Git handles everything.**


![Image](p3.png)

* **Important** - 
  
  For most of the time you do not create a new file 
so you add or update the existing files that are already staged.
so while those changes you just have to skip the staging stage and directly skip to the commit section by using the syntax -

10.       git add -a -m "message" 


* **Git difference**     
  This command tells about the difference between the changes made in the working directory and the files present in the staged area i.e 
  the files you staged previously and then it list the changes. 

      git diff
  1.  +means added or modified the files
  2.  -means no changes

press q to quit

11.     git diff --staged 
   The above command is used to see what you've staged that will go into your next commit .


### VERY USEFULL FILE

12.     .gitignore file 
You can write all the files that you want to ignore in your git project.

Writing the names of the files under gitignore or using regular expressions both can work to execute the function.

         *.log   
   example - To ignore all the files who have extension as .log


13.     git rm file.name 
     
   Deletes the filename and this function is always staged i.e. preferable way to delete a file

14.      git mv  from_file  to_file

   moves the file from current directory to current directory with new name and this function is staged so preferable way to move /rename a file.


If you want to untrack a file/folder that was tracked previously use

15.     git rm --cached <filename>


if you want to unstage a file/folder which was staged previously use 

16.     git restore  --staged <filename>

if you want your previous version or wants to get back you previously written code of any file then you can use 

17.      git checkout -- <filename>
      
This above command can destroy all the current changes done in 1 run so use it wisely.

18.       git checkout -f 
    
   The above command will take you to your last commit


If you want to create a short name or abbreviate any command in git you can use The below command 

19.         git config --global alias <shortform>  <command name>

In simple words- 

alias- short name    (to remember)

# GITHUB 

   ![Image](p4.jpeg)

   **GitHub** ,
   
   Inc. is a provider of Internet hosting for software development and version control using Git. It offers the distributed version control and source code management functionality of Git, plus its own features.

## BRANCING 

**Branching** in git is simply a lightweight movable pointer to one of any commits.
The default branchname in git is master(the main branch).

* Branching is diverging from the main branch.


If you want to check how many branches you have use 

20.        git branch
          
If you want to see the current working branch

21.       git branch -v

If you want to create a branch use

22.      git branch <branchname>

**IMPORTANT**- 

Head pointer always points to the working branch .


If you want to switch to another branch use

23.      git checkout <branchname>

If you want to switch to a new branch and the branch does not exist or you have not created that one then you can use the following command to create and switch in 1 go.

24.     git checkout -b <branchname>

If you want to see all the branches made in 1 pictorial go in the form of tree use

25.     git log --oneline --graph --all
   
If you want to delete a branch that has merged 

26.     git branch -d <filename>


If you want delete a branch that is non merged 

 27.       git branch -D <filename>

# Rebasing 

Integrating the changes of 1 branch to another branch is rebasing.

Rebasing has the same output as the merging process just the way to execute it is different.
**Rebase is a linear development.**

After rebasing ,to move the master pointer to the last commit use

28.     git merge <branchname you rebased/last branch>

29.     git rebase --onto <base> <1branch> 

To do rebasing you should present in the working branch and then use 
30.     Git rebase <base name>


31.     git push origin main   
     Pushes the code to the central server i.e. github.


If you want to jump to the previous directory or folder then use 

32.     cd ..


A local Git repository can be connected to one or more remote repositories by using REMOTES.

33.     git remote -v (this cmd shows all the available remotes you have)

if you want to delete any remote use 

34.     git remote remove <remotename>

If you want to copy a code from github in your directory then use 

35.     git clone <code url>

The git fetch command downloads the commits files and refs from the remote repository to your local repository.
use 

36.     git fetch 
   then

37.     git merge origin/master
     
then you will be able to see the file you downloaded in your local system.


## git pull and git fetch

   
Git pull can directly pull the code from the remote directory to you working directory while git fetch fetches the code from the remote directory to the local repository and the we have to use git merge in order to get the code to the working directory.


   ![Image](p6.png)


in short---- 

38.      git pull = git fetch + git merge

39.      git pull <remote name> <branchname>

## Forking - 

**A Fork is a copy of a repository.**

 Forking a repository allows you to freely experiment with changes without affecting the original project.

upstream is that repository from where you are syncing or taking the data.

![Image](p5.png)


### miscellaneous git tools----->

we can see what changes we made in that particular commit by using 

40.      git show <commitid>

### Note: 
commitid is 40 char long string but here writing 4-5 starting chars are sufficient to run the cmd



## Hope this was helpful for you to understand about Git and Github .
## Thank you
## Happy learning
