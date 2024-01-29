#more than one radiobutton using Loop
import tkinter as tk
root = tk.Tk()
v = tk.IntVar()
v.set(0) # initializing the choice, i.e. Perl
languages = ["Python","java","peral"]
def harshit():
    print(v.get())

tk.Label(root,text="""Choose your favouriteprogramming language:""",justify = tk.RIGHT,padx = 20).pack()

for val,language in enumerate(languages):
    tk.Radiobutton(root,text=language,padx = 20,variable=v,command=harshit,value=val).pack(anchor=tk.W)

