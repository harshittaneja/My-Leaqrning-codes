#grid layout
#import tkinter
from tkinter import * 
top=Tk()
# layout mangement
#1.pack
#2.place
#3.grid

top.title("labells of window")
l1=Label(top,text="Harshit",fg="red",bg="yellow")
# padding margin from x and y 
l1.grid(row =0,column=1)
l2=Label(top,text="Taneja",fg="white",bg="blue")
l2.grid(row =0 ,column =0)
# stuck in infinte loop
l3=Label(top,text="hello",fg="white",bg="blue")
# note we can't use pack as well as grid combine in a code l3.pack(side=RIGHT)
l1.mainloop()
