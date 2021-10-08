# Tkinter

Tkinter is the standard GUI library for Python. Python when combined with Tkinter provides a fast and easy way to create GUI applications. Tkinter provides a powerful object-oriented interface to the Tk GUI toolkit.
To Open Tkinter follow the following steps

1.	Import Tkinter module

2.	initialize an object to it and add required widgets

3.	add object name.main loop()

The following steps are shown through the code below
``` python
from tkinter import *


obj = Tk()

obj.mainloop()

```


it should open a GUI as shown in the picture


![image](https://user-images.githubusercontent.com/66876387/136183422-9346f077-c2f4-4025-a49b-676f09f5a3f0.png)

## Tkinter Widgets

Tkinter provides various controls, such as buttons, labels and text boxes used in a GUI application. These controls are commonly called widgets.

There are many types of widgets in Tkinter. Here are some of the widgets as well as a brief description in the following −

### Button
The Button widget is used to display buttons in your application.

### Canvas
The Canvas widget is used to draw shapes, such as lines, ovals, polygons and rectangles, in your application.

### Checkbutton
The Checkbutton widget is used to display a number of options as checkboxes. The user can select multiple options at a time.

### Entry
The Entry widget is used to display a single-line text field for accepting values from a user.

### Frame
The Frame widget is used as a container widget to organize other widgets.

### Label
The Label widget is used to provide a single-line caption for other widgets. It can also contain images.

### Listbox
The Listbox widget is used to provide a list of options to a user

### Menubutton
The Menubutton widget is used to display menus in your application.


Here are the implementation of the widgets 

Button :- it is used to display button on your application


``` python

new_button = Button(text= "button", command ="")
new_button.pack()

```

Entry : it is used to display a single input text field line 

``` python
text_field = Entry()
text_field.pack()

```


Label:- it is used to display a single  text field line

``` python

main_title = Label(text = "Hello")
main_title.pack()


```


![image](https://user-images.githubusercontent.com/66876387/136183985-568c533d-3541-47e8-9f14-b920e11a8d97.png)

## Geometry Management
All the widget has to use a specific geometry method it is basically divided into 2 types

### Pack:-organizes the widgets before placing them in the parent widget.

``` python
new_button = Button(text= "button", command ="")
new_button.pack(side = BOTTOM)


text_field = Entry()
text_field.pack(side = LEFT)


main_title = Label(text = "Hello")
main_title.pack(side= RIGHT)


```


![image](https://user-images.githubusercontent.com/66876387/136184459-f006afbe-005b-4241-8490-eb0cf75bcf75.png)

### Place:- you can directly define where to place the widget

``` python


new_button = Button(text= "button", command ="")
new_button.place(height = 100, width = 100)


```


![image](https://user-images.githubusercontent.com/66876387/136184631-036a143a-f4f2-4f86-b35f-ff4adaffe1a5.png)
