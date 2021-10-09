# Installation of C/C++ in Windows and Mac OS

 
## C/C++ for Windows

- [x] C/C++ Compiler
Let's get started with downloading and installing the C/C++ Compiler! 
- [MinGW](https://nuwen.net/mingw.html), this is the third party page for downloading the MinGW compiler it consist of self extracting archive for mingw.
- Now click over **mingw-17.1-without-git.exe** which you will see in the referded page.
 - Extract the **mingw** to your preferded directory
  - [x] Environment Path Setup
 -  Add path to the environment variable under 
 *User Variable for Tech Decode* section select *Path* and add the path you copied.
		
    `Ex:- your_directory:\MinGW\bin`

- Check MinGW is working by writing
		
    `g++ --version` no error is generated then it's perfectly installed.
	
  ![image](https://user-images.githubusercontent.com/66905426/134203023-90d766f1-78a5-4126-b156-3a7c670091aa.png)
  
- [x] Download and setup VS Code
**Note:- You can use your own preferded code editor.**
 - Download [VS Code](https://code.visualstudio.com/)
- Install the needed extensions in the VS Code
	1. Code Runner (Helps to run code snippet or code files)
[.run overview](https://github.com/formulahendry/vscode-code-runner)
	2. C/C++ (Debugger)
[C/C++ overview](https://code.visualstudio.com/docs/languages/cpp)
---
## C/C++ for Mac

Lets configure Visual Studio Code to run C/C++ programs on Mac OS
- [x] C/C++ Compiler
	- Open terminal use this code snipet to download and install homebrew
			
      1. Apple M1 Chip Mac
			
      `arch -x86_64 /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install.sh)"`
			
      2. Intel Chip Mac
			
      `/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install.sh)"`
	- Inside the terminal use the code snipet to install MinGW compiler 
			
      1. Apple M1 Chip Mac
			
      `arch -x86_64 brew install mingw-w64`
			
      2. Intel Chip Mac
			
      `brew install mingw-w64`

- [x] Download and setup VS Code
 - Download [VS Code](https://code.visualstudio.com/)
- Install the needed extensions in the VS Code
	1. Code Runner (Helps to run code snippet or code files)
[.run overview](https://github.com/formulahendry/vscode-code-runner)
	2. C/C++ (Debugger)
[C/C++ overview](https://code.visualstudio.com/docs/languages/cpp)

---
### Exception solved - Cannot edit in read-only editor

Unable to write or give the input in the **VS Code terminal** for an input taking C/C++ programs.

-  Go to **File** in windows or **Code** in Mac.
-  Select **Preferences**.
-  Select **Settings**.
-  Search for **run in terminal** in the search pannel.
-  Now in the search result search for **Code-runner: Run in Terminal** and check the check box.
-  Close the settings, run the code again it will work fine.

**Note :- If the terminal didn't allow tyou to edit still then restart the VS Code. It will work fine.**   
