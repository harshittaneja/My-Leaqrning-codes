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
l1.pack(side=LEFT,padx=10,pady=15)
l2=Label(top,text="Taneja",fg="white",bg="blue")
l2.pack(fill=X)
# stuck in infinte loop
l3=Label(top,text="hello",fg="white",bg="blue")
l3.pack(side=RIGHT)
l1.mainloop()
