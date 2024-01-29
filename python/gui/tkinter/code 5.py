#place layout
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
l1.place(x=180,y= 40)
l2=Label(top,text="Taneja",fg="white",bg="blue")
#l2.place(fill=X) this line gives an error becz fil not work with place 
l2.place(x=0,y=0)
# this place will fix in cordinates like x and y cordinate
# stuck in infinte loop
l3=Label(top,text="hello",fg="white",bg="blue")
l3.pack(side=RIGHT)
l1.mainloop()
