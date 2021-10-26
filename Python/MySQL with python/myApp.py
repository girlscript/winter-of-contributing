from tkinter import *
import tkinter as tk
from tkinter import filedialog , messagebox
import os
import cv2

img =''

def browseing():
    global img
    fln =filledialog(initialdir=os.getcwd(),title="Browse Image File", filetypes=(("JPG Image","*.jpg"),("PNG Image","*.png"),("All Files","*.*"))
    t1.set(fln)
    img = fln
                   
   
root = Tk()
t1 = StringVar()
wrapper = LabelFrame(root, text = "Source File")
wrapper.pack(fill="both" ,expand="yes" , padx = 20 , pady =20)

wrapper2 = labelFrame(root, text = "Image Details")
wrapper2.pack(fill = "both" , expand = "yes" , padx=20, pady=20)

wrapper3 = LabelFrame(root , text="Actions")
wrapper3.pack(fill= "both" , expand="yes", padx=20 ,pady=20)

lbl = Label(wrapper, text = "Source File")
lbl.pack(side=tk.LEFT , padx =10, pady =10)

ent = Entry(wrapper, textvariable=t1)
ent.pack(side=tk.LEFT , padx=10 , pady=10)

btn = Button(wrapper, text="Browse" , command = browseing)
btn.pack(side = tk.LEFT , padx=10 , pady =10)

root.title("Image Resizer")
root.geometry("800x600")
root.mainloop()
