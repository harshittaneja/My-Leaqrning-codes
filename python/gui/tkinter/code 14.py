#CheckButton with grid
from tkinter import *
master = Tk()
def var_states():
    print(" Red %d\n White : %d" % (var1.get(), var2.get()))

Label(master,text="Your Favourite Color:").grid(row=0)
var1 = IntVar()
Checkbutton(master, text="Red", variable=var1).grid(row=1)
var2 = IntVar()
Checkbutton(master, text="White", variable=var2).grid(row=2)
Button(master, text='Quit', command=master.destroy).grid(row=3, pady=4)
Button(master, text='Show', command=var_states).grid(row=4, pady=4)
master.mainloop()
