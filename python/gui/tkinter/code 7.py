#grid layout
#import tkinter
from tkinter import * 
top=Tk()
# layout mangement
#1.pack
#2.place
#3.grid

top.title("labells of window")
l1=Label(top,text="firstname",fg="red",bg="yellow").grid(row =0,column=0)
l2=Label(top,text="lastname",fg="white",bg="blue").grid(row =1,column=0)
#create text field
e1=Entry(top).grid(row =0,column=1)
e1=Entry(top).grid(row =1,column=1)

