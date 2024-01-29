# note this function is system defined only 
def show_entry_fields():
    print("Firstname :",e1.get())
    print("lastname :",e2.get())
# note this function is system defined only 
def delete():
    print("Firstname :",e1.delete(0,3))
    print("lastname :",e2.delete(0,END))



from tkinter import * 
top=Tk()


top.title("labells of window")
l1=Label(top,text="firstname",fg="red",bg="yellow").grid(row =0,column=0)
l2=Label(top,text="lastname",fg="white",bg="blue").grid(row =1,column=0)
#create text field
e1=Entry(top)
e1.grid(row =0,column=1)
e2=Entry(top)
e2.grid(row =1,column=1)
Button(top,text="Quit",command=top.destroy).grid(row=2,column=0)
Button(top,text="Show",command=show_entry_fields).grid(row=2,column=1)
Button(top,text="delete",command=delete).grid(row=2,column=2)

