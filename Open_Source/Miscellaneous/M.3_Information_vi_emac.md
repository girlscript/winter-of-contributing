# Information Regarding Vi/Vim and Emacs

--- 

 | **Table  of   Contents** |
 | ---                  |
  
  -  [Their birth](#org30a2f6f)
  - [Their style of editing documents and ways to customize](#org611a4e7)
  - [Features included in respective editors](#orga688087)
  - [Current status](#org5e43f04)

---

![#f03c15](https://via.placeholder.com/15/f03c15/000000?text=+) **INTRODUCTION**

Vim and Emac are yet other text editors which you may encounter while working with open-source platforms. Just like the use of notepad in Windows, Sublime Text over Mac or Nano in Unix. These are the tools that help in reading, writing, and editing text files.

To brief you, Vim and Emacs both text editors are used in coding, editing files, administering systems, and a whole bunch of other tasks. Emacs are comparatively straightforward, comparable to Notepad. Contrarily, Vim is a power-user's tool. It is known to have a much steeper learning curve than that of Emacs. Nonetheless, it's been stated that embedding in the extra effort is worth it because you will be able to gain a much comfortable and relatively faster user experience with vim.

![ezgif com-gif-maker (2)](https://user-images.githubusercontent.com/71714243/134558103-e202d921-2d64-46c8-91a7-51b343f6531a.gif)


The unpretentious and now middle-aged editors are still a preference among *nix system administrators and users. It remains an essential tool for command-line file creation and editing. Being efficient, extremely hackable, and powerful both the editors have come over at war with each other. Undoubtedly owing to their different features both stand out the other in their own way.  


---

<a id="org30a2f6f"></a>
![#f03c15](https://via.placeholder.com/15/f03c15/000000?text=+) **THEIR BIRTH**

| VIM |
| --- |

Vim is a contraction for `VI Improved`. As stated VIM is an improved version of vi. It is a keyboard-supported text editor which supports efficient editing allowing only the keyboard. According to Wikipedia sources, the origin of vim dated back to 1988 by, `Bram Moolenaar`. He started his work on vim as an extension to the previous work which was done back in 1966 in Bell Labs by `Ken Thomas`. Ken Thomas improvised the used text-editor `tool QED` to which further features were added and improved. Later in 1976, an engineer graduate `Joy` worked on the Coulouris' source code and built out an improved version of `ed ` called `ex,` for "extended ed." Version 1.1 of ex was bundled with the first release of BSD Unix in 1978.

The second release of ed in 1979 marked the origin of vi, which introduced some more features than the ex. Vi when created used a video terminal which video terminal Lear Siegler ADM-3A, which had a keyboard with no cursor keys. Instead, arrows were painted on the `h`, `j`, `k`, and `l` keys, which is those keys are being used for cursor movement in vi.

![LSI-ADM3A-full-keyboard](https://user-images.githubusercontent.com/71714243/134562137-70817e8d-9a10-45e6-ad35-91024044d5eb.jpg)


Finally, the vim origin began to replace the vi platform with a more stable version and new features. `Moolenar` with many other contributors improved the vi version. This improvement continued till a stable version of `VIM (v1.1.4 ) was released in 1991`.

| EMAC |
| ---  | 

Emacs or EMACS (Editor MAcroS) is the text editor that is identified by its extensibility. The manual for the universally used GNU Emacs defines it as "the extensible, customizable, self-documenting, real-time display editor". The history of the Emac fallbacks in the years of `1970s in MIT and AI Lab.` 
Emac is an output of work that was intensified on the editor that the computers using Incompatible Timesharing System (ITS) operating system used, `Tape Editor and Corrector (TECO)`. Later `Richard Stallman` worked over the GNU EMAC which finally led to its first public release, which was made on `March 20, 1985`, of Version 13.

![1_mj92IUHcqSc0gFgFs8qvFw](https://user-images.githubusercontent.com/71714243/134565227-b7f5eed8-d09a-4cb7-82c0-d95e8413a456.png)


The earliest widely diffused version of GNU Emacs was `version 15.34`, released later in `1985`. The early versions of this editor were numbered as `1. x.x`, where the initial digit signifies the version of the C core.

---

<a id="org611a4e7"></a>
![#f03c15](https://via.placeholder.com/15/f03c15/000000?text=+) **THE STYLE OF EDITING DOCUMENT**

Since both the text-editors are designed in their own way. The way of editing document is also somewhat different. Keeping in mind the key difference of VIM having only keyboard to help in editing the documents.

 | **EMAC** | 
 | ---      | 
 It is a visual mode editor meaning it gives the visual interpretationn of the entire file you wish to edit. Unlike the *line-editors* the emac gives you the ability to edit the file by hovering around freely and making change to any part you wish to. The editor commands can be distinguished using control and escape sequence. There this  one thing about Emac. Whenever you wish to edit the file you never edits the actual file. Rather the copy of the file, called buffer, is stored over RAM. Only after you save the file the changes are copied from RAM to disk.The display is divided into three areas namely text window, where the document is being edited appears. Secondly, the single-mode line which gives information about the document, and the emacs session. Lastly the minibuffer.
 
 You can install emac-28 over REDHAT-LINUX by enabling snaps. Snaps are the applications which along with their dependencies can be installed over all linux-distributions.
 
 
 ![emac](https://user-images.githubusercontent.com/71714243/134646451-4a27c384-6997-4a80-99ef-95a30f856411.png)

 - **INSTALL EMAC**
  Set up yum repository by adding EPEL Repository
  ``` 
   sudo dnf install https://dl.fedoraproject.org/pub/epel/epel-release-latest-8.noarch.rpm
  ```
  ```
  sudo dnf upgrade
  ```
  Install snapd on the system
```
sudo yum install snapd
```

Enable the snapd socket by using systemd
```
sudo systemctl enable --now snapd.socket
```

Update the snaps path
```
sudo ln -s /var/lib/snapd/snap /snap
```

Install emac-28
```
sudo snap install emacs-28 --beta
```

---
| **VIM** |
| ---     |
Vim is a modal editor. To make you familiar with the word 'Modal Editor' , the type of editor where the editing can be done in diffrent mode.The notion behind having a modal text editor is that it enables the user to write and edit without needing the mouse. The keyboard has it all. The most common modes you come across in Vim are command mode and insert mode. These modes will enable you to do anything and everything you desire to including creating text files to saving it, followed by advanced editing. The notion behind having a modal text editor is that it enables the user to write and edit without needing the mouse. The keyboard has it all. The most common modes you come across in Vim are command mode and insert mode. These modes will enable you to do anything and everything you desire to including creating text files to saving it, followed by advanced editing.


![Vim_(text_editor)-Logo wine](https://user-images.githubusercontent.com/71714243/134645911-05972e00-bb9e-4375-8e84-c9eab5bd312d.png)



- INSTALLING VIM

You can install vim by configuring yum before. Vim being used widely also sometimes come up as pre-installed in the linux system else can be installed by :

```
yum install vim

```

----
<a id="orga688087"></a>
![#f03c15](https://via.placeholder.com/15/f03c15/000000?text=+) **FEATURES INCLUDED IN VARIOUS EDITORS**

The various features included in vim and emac can be studied through the cheat sheet. Cheat sheet are the document kind of sheet containing the featues and various methods used to bring changes and editing the file.
Let's get an overview of the same by exploring the various features.

### EMAC 
To start editing with emac type the `emacs`
```
emac filename
```
Emac is customizale that is you can create your own emac-macros, key bindings and custom functions. Some of the inbuilt features supported by the emac are 


| **OPERATION**                      | **COMMAND USED IN EMAC**|
| ---                                |  ---                    |                  
| Exiting emac                       | Ctrl-X                  |
|---                                 | ---                     |
| One-line-help                      |  Ctrl-H                 |
|----                                | ---                     |
| Read-disk file into buffer         |  Ctrl-X-Ctrl-F          |
|---                                 | ---                     |
| Save the contents                  | Ctrl-X-Ctrl-S           |
| ---                                | ---                     |
|Write contents to different file    | Ctrl-X-Ctrl-W           |
|---                                 | ---                     |
| moves cursor to forward character  | Ctrl-F                  |
|---                                 | ---                     |
| move cursor to previous character  | Ctrl-B                  |
| ---                                | ---                     |
| move cursor to next line           | Ctrl-N                  |
|---                                 | ---                     |
| move cursor to previous line       | Ctrl-P                  |
| ---                                | ---                     |
| deletes forward one letter         | Ctrl-D                  |
| ---                                | ---                     |
|deletes from point to end of line   | Ctrl-K                  |
| ---                                | ---                     |
| undo the changes                   | ctrl - _                |

--- 

### VIM 
To start editing and exploring with vim we open the file using the vim command.
```
vim filename.txt
```
Vim also supports many functions and keyboards combinations to make it easy and efficient text editor. With almost similar features of editinf and inserting mode vim has the option of search and replace. Vim has alot of collection which isn't feasible to sum at a time. Some of the important features are


| **OPERATION**                                   | **COMMAND USED IN EMAC**      |
| ---                                             |  ---                          |                  
| Exiting vim forecefully                         | :q!                           |
|---                                              | ---                           |
| Inserting mode                                  |  I                            |  
|----                                             | ---                           |
|  Opens a file                                   |  :e[file]                     |
|---                                              | ---                           |
| Save the contents without exiting               | :w                            |
| ---                                             | ---                           |
| Performs a search of help documentation         |  :help[keyword]               |
|---                                              | ---                           |
| Save your file and close Vim                    | :wq                           |
|---                                              | ---                           |
| move cursor left,right,up,down                  | h ,l,j,k                      |
| ---                                             | ---                           |
| deletes a line / delete a word                  | dd / dw                       |
|---                                              | ---                           |
| Searches for text in the document               | /[keyword]                    |
| ---                                             | ---                           |
| Replaces all occurrences of a pattern           |:%s/[pattern]/[replacement]/g  |
| ---                                             | ---                           |
|Copies a line/ copies a word                     | yy / yw                       |
| ---                                             | ---                           |
| undo the changes                                | u                             |

---
<a id="org5e43f04"></a>
![#f03c15](https://via.placeholder.com/15/f03c15/000000?text=+) **CURRENT STATUS**

The millennials have debated over the two-sided topic since ever. Some people are favoring and others opposing the same topic. The debate over this continues and has become difficult to arrive at a clear and cut solution.
 Both the editors debated over the years by the developers. 
 
   ![vim_emacs](https://user-images.githubusercontent.com/71714243/134645534-da5bc448-1fcb-4578-9dcd-1261523d8a38.png)
 
 Nevertheless, the stats around has helped us to gather some data and arrive at some points. 
 Back in 2018 StackOver Flow released the data for out casing the popularity of the two. 
 Vim holder about 25% of the people's choice whereas Emac lagged at 4%. 
 The ongoing trend of vim continues to make the graph steeper. However, people are still trying hands-on over Emac.
