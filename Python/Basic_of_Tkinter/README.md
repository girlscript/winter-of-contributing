# **Basics of Tkinter**

## [Click to listen to the audio](https://drive.google.com/file/d/1OsnMvsuujsRrBtfbKiATUMgkft2Yup6j/view?usp=sharing) 

## Outline
+ Introduction
+ How is Tkinter different?
+ Prerequisites for Tkinter
+ Features of Tkinter
+ First Tkinter Example
+ Advantages of Tkinter
+ Drawbacks of Tkinter
+ Summary
+ References

## **Introduction**

![Tkinter](https://miro.medium.com/max/960/1*w_eTuhPBBmmC1sYqIcwOCg.jpeg)


**Tkinter** is the standard **GUI** (Graphical User Interface) library for **Python**. Python when combined with Tkinter provides a fast and easy way to create GUI applications.
Tkinter provides a powerful object-oriented interface to the **Tk GUI toolkit**.

The name Tkinter comes from **Tk interface**. Python has a lot of GUI framework, but Tkinter is the only framework that's built into the Python standard library.


## **How is Tkinter different?**

Tkinter in Python helps in creating GUI Applications with a minimum hassle. Among various GUI Frameworks, Tkinter is the only framework that is built-in into Python's Standard Library.

 Tkinter is Python's default GUI module and also the most common way that is used for GUI programming in Python.
 
## **Prerequisites for Tkinter**
Before learning Tkinter you should have basic knowledge of Python.

Creating a GUI application using Tkinter is an easy task. All you need to do is perform the following steps −

+ Import the Tkinter module.
+ Create the GUI application main window.
+ Add one or more of the above-mentioned widgets to the GUI application.
+ Enter the main event loop to take action against each event triggered by the user.

## **Features of Tkinter**
The following are the features of Tkinter −

+ An important feature in favor of Tkinter is that it is cross-platform, so the same code can easily work on Windows, macOS, and Linux.
+ Tkinter is a lightweight module.
+ It is simple to use.

## **First Tkinter Example**

##### Input


``` 
from Tkinter import *
root = Tk( )
root.title("A simple application")
root.mainloop( )
``` 

The first 2 lines allow to create a complete window. The third line sets the caption of the window, and the fourth one makes it enter its event loop. Compared to MFC programming, it makes no doubt that Tkinter is simple to use.


##### Output

![Output](https://s3.ap-south-1.amazonaws.com/s3.studytonight.com/tutorials/uploads/pictures/1592906951-71449.png)

## **Advantages of Tkinter**
The advantages of Tkinter are −

+ Layered Approach
+ Accessibility
+ Portability
+ Availability


+ ##### Layered approach

The layered approach used in designing Tkinter gives Tkinter all of the advantages of the TK library. Therefore, at the time of creation, Tkinter inherited from the benefits of a GUI toolkit that had been given time to mature. This makes early versions of Tkinter a lot more stable and reliable than if it had been rewritten from scratch. Moreover, the conversion from Tcl/Tk to Tkinter is really trivial, so that Tk programmers can learn to use Tkinter very easily.

+ ##### Accessibility

Learning Tkinter is very intuitive, and therefore quick and painless. The Tkinter implementation hides the detailed and complicated calls in simple, intuitive methods. This is a continuation of the Python way of thinking, since the language excels at quickly building prototypes. It is therefore expected that its preferred GUI library be implemented using the same approach. 

+ ##### Portability

Python scripts that use Tkinter do not require modifications to be ported from one platform to the other. Tkinter is available for any platform that Python is implemented for, namely Microsoft Windows, X Windows, and Macintosh. This gives it a great advantage over most competing libraries, which are often restricted to one or two platforms. Moreover, Tkinter will provide the native look-and-feel of the specific platform it runs on.

+ ##### Availability

Tkinter is now included in any Python distribution. Therefore, no supplementary modules are required in order to run scripts using Tkinter.

## **Drawbacks of Tkinter**
The multi-layered approach taken in designing Tkinter can have some disadvantages as far as execution speed is concerned. While this could constitute a problem with older, slower machines, most modern computers are fast enough so as to cope with the extra processing in a reasonable time. When speed is critical, proper care must be taken so as to write code that is as efficient as possible.


## **Summary**
So, basically Tkinter is a standard library in python used for creating Graphical User Interface (GUI) for Desktop Applications.
In this we covered the basics of Tkinter like what it is, its features, a sample code and what are the prerequisites required for it. Also discussed about its advantages and drawbacks.
For more detailed study, you can refer to websites.

## **References**
+ https://www.studytonight.com/
+ https://www.cs.mcgill.ca/
