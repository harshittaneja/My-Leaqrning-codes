from tkinter import *
master = Tk()
# slider default=vertical

w = Scale(master, from_=0, to=42)
w.pack()
w = Scale(master, from_=0, to=200, orient=HORIZONTAL)
w.pack()
master.mainloop()
