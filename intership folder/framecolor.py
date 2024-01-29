from tkinter import *
class Window(Frame):
    def __init__(self, master=None, bg = "black",fg="black"):
        Frame.__init__(self, master)
        self.master = master
        self.master.configure(background='black')

root = Tk()
root.geometry("400x300")
app = Window(root)
root.mainloop()
