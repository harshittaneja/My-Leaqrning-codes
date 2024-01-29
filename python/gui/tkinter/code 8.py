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
e1=Entry(top)
e2=Entry(top)
#insert value in text fields 
# note in begin if you give 100 not 0 then it will consider it first position 
#e1.insert(0,"harshit")
e1.insert(10,"harshit")
e2.insert(0,"Taneja")
# this will insert data in e1 textfield again from index 10 
e1.insert(4,"utkarsh")
e1.grid(row =0,column=1)
e2.grid(row =1,column=1)
