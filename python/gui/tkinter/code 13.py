#CheckButton
from tkinter import *
import tkinter
top = Tk()
CheckVar1 = IntVar()
CheckVar2 = IntVar()
top.title("check Button ")
# working function 
def show():
    #print value on cosole that written on onvalue
    print(CheckVar1.get())
    print(CheckVar2.get())

# creating check button using check button()
C1 = Checkbutton(top, text ="Music", variable = CheckVar1,onvalue = 5, offvalue = 0, height=5,width = 20, )
#C1 = Checkbutton(top, text ="Music", variable = CheckVar1 varable of get ,onvalue = 5, offvalue = 0, height=35,width = 20, )
#check button(panel,text on check button, variable = CheckVar1() to get check button value,height,widthof check button )
C2 = Checkbutton(top, text = "Video", variable = CheckVar2,onvalue = 6, offvalue = 0, height=5,width = 20)
B1=Button(top,text="show",command=show)
C1.pack()
C2.pack()
B1.pack()
top.mainloop()
