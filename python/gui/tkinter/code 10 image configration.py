from tkinter import *
top =Tk()

Label(top,text="image ").pack()
#ipadx internal padding of x and ipday
k=PhotoImage(file="496002.png")
Label(top,image=k ,pady=10).pack()
top.mainloop()
