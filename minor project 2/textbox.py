from tkinter import *
root = Tk() # create root window


left_frame = Frame(root, width=200, height=600,bg="red3")
left_frame.grid(row=0, column=0, padx=10, pady=5)

RIGHT_frame = Frame(root, width=400, height=400,bg="white")
RIGHT_frame.grid(row=0, column=1, padx=10, pady=5)

textwindow=Text(RIGHT_frame,width=84,height=24)
textwindow.grid(row=0, column=0, padx=10, pady=5)
