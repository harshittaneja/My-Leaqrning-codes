#import tkinter
from tkinter import * 
top=Tk()
# layout mangement
#1.pack
#2.place
#3.grid

top.title("labells of window")
l1=Label(top,text="Harshit",fg="red",bg="yellow")
l1.pack()
l2=Label(top,text="Taneja",fg="white",bg="blue")
l2.pack()
