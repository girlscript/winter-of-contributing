# Tkinter


Tkinter is a GUI library in python it is a fast and easy way to create GUI applications
To Open Tkinter follow the following steps

1.	Import Tkinter module

2.	initialize an object to it and add required widgets

3.	add object name.main loop()

The following steps are shown through the code below
```
from tkinter import *

obj = Tk()

obj.mainloop()

```


it should open a GUI as shown in the picture


![image](https://user-images.githubusercontent.com/66876387/136183422-9346f077-c2f4-4025-a49b-676f09f5a3f0.png)

After that, you can widgets there some of the important widgets that are
Button :- it is used to display button on your application


```

new_button = Button(text= "button", command ="")
new_button.pack()

```

Entry : it is used to display a single input text field line 

```
text_field = Entry()
text_field.pack()

```


Label:- it is used to display a single  text field line

```

main_title = Label(text = "Hello")
main_title.pack()


```


![image](https://user-images.githubusercontent.com/66876387/136183985-568c533d-3541-47e8-9f14-b920e11a8d97.png)

Geometry Management
All the widget has to use a specific geometry method it is basically divided into 3 types

1)Pack:-organizes the widgets before placing them in the parent widget.

```
new_button = Button(text= "button", command ="")
new_button.pack(side = BOTTOM)


text_field = Entry()
text_field.pack(side = LEFT)


main_title = Label(text = "Hello")
main_title.pack(side= RIGHT)


```


![image](https://user-images.githubusercontent.com/66876387/136184459-f006afbe-005b-4241-8490-eb0cf75bcf75.png)

2)Place:- you can directly define where to place the widget

```


new_button = Button(text= "button", command ="")
new_button.place(height = 100, width = 100)


```


![image](https://user-images.githubusercontent.com/66876387/136184631-036a143a-f4f2-4f86-b35f-ff4adaffe1a5.png)
