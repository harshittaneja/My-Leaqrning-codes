#indicator (Radiobutton) square nutton 
import tkinter as tk
root = tk.Tk()
v = tk.IntVar()
v.set(0) # initializing the choice, i.e. Python
 #           [0,1,2,3,4]  
languages = ["pyhton ","pearls","java","c"]
def ShowChoice():
    print(v.get())

tk.Label(root,text="""Choose your favouriteprogramming language:""",justify = tk.RIGHT,padx = 20).pack()
for val, language in enumerate(languages):
    # indicatoron = 0 makes thing square 
    tk.Radiobutton(root,text=language,indicatoron = 0,width = 20,padx = 20,variable=v,command=ShowChoice,value=val).pack(anchor=tk.W)
    

root.mainloop()
#
