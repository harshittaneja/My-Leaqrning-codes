from tkinter import *
from tkinter import messagebox

#pring on label by this empty string and strinVar() function
val=""

# operators code
a=0
operator=""


# working of opeartion like + and minus 
# +
def bplus_click():
    global val
    global operator
    global a
    # converting integer from string 
    a=int(val)
    operator="+"
    val=val+"+"
    #putting value on label
    data.set(val)
# -
def bminus_click():
    global val
    global operator
    global a
    # converting integer from string 
    a=int(val)
    operator="-"
    val=val+"-"
    #putting value on label
    data.set(val)

def bmul_click():
    global val
    global operator
    global a
    # converting integer from string 
    a=int(val)
    operator="*"
    val=val+"*"
    #putting value on label
    data.set(val)

def bdiv_click():
    global val
    global operator
    global a
    # converting integer from string 
    a=int(val)
    operator="/"
    val=val+"/"
    #putting value on label
    data.set(val)



    






#working code
def b1_click():
    global val
    val=val+"1"
    #putting value on label
    data.set(val)
def b0_click():
    global val
    val=val+"0"
    data.set(val)

def b2_click():
    global val
    val=val+"2"
    data.set(val)

def b3_click():
    global val
    val=val+"3"
    data.set(val)

def b4_click():
    global val
    val=val+"4"
    data.set(val)

def b5_click():
    global val
    val=val+"5"
    data.set(val)

def b6_click():
    global val
    val=val+"6"
    data.set(val)

def b7_click():
    global val
    val=val+"7"
    data.set(val)

def b8_click():
    global val
    val=val+"8"
    data.set(val)

def b9_click():
    global val
    val=val+"9"
    data.set(val)


def bclear():
    global val
    global operator
    global a
    a=0
    # converting integer from string 
    #a=int(val)
    operator=""
    val=""
    #putting value on label
    data.set(val)


def bdot():
    global val
    global operator
    global a
    a=0
    # converting integer from string 
    k=float(val)
    a=int(k)
    val=val+"."
    #putting value on label
    data.set(val)
    
    

# LAST result function

def result():
    global val
    global operator
    global a
    
    val2=val
    #putting value on label
    data.set(val)
    if(operator=="+"):
        # eg 13 +12 so value.split(divides them in two parts and at index 1  there is second value which we convert into integer)
        c = int(val2.split("+")[1])
    #    operation pefroming from a and splited value
        c=c+a
        data.set(c)
        val=str(c)


    if(operator=="-"):
        # eg 13 +12 so value.split(divides them in two parts and at index 1  there is second value which we convert into integer)
        c = int(val2.split("-")[1])
    #    operation pefroming from a and splited value
        c=c+a
        data.set(c)
        val=str(c)



    if(operator=="*"):
        # eg 13 +12 so value.split(divides them in two parts and at index 1  there is second value which we convert into integer)
        c = int(val2.split("*")[1])
    #    operation pefroming from a and splited value
        c=c*a
        data.set(c)
        val=str(c)

    if(operator=="/"):
        # eg 13 +12 so value.split(divides them in two parts and at index 1  there is second value which we convert into integer)
        c = int(val2.split("/")[1])
        if(c==0):
           val=""
           data.set("INFINITY")
            
        else:
            c=c/a
            data.set(c)
            val=str(c)
            
        















top = Tk()
top.geometry("350x400+300+300")
top.resizable()
top.title(" Harshit's simple calculator")
# one lable

data= StringVar() 
l=Label(top,text="0",textvariable=data,anchor=SE,font=("verdana",22), background="#ffffff",fg="#000000")
l.pack(expand=True,fill="both")


# using frame 1
frame1=Frame(top)
frame1.pack(expand=True ,fill="both")

b1=Button(frame1,text="1", activebackground="grey", activeforeground="white",font=("verdana",22) ,relief=GROOVE,border=0,command=b1_click)
b1.pack(side=LEFT,expand=True,fill="both" )

b2=Button(frame1,text="2", activebackground="grey", activeforeground="white",font=("verdana",22,),relief=GROOVE,border=0,command=b2_click)
b2.pack(side=LEFT,expand=True,fill="both")
b3=Button(frame1,text="3", activebackground="grey", activeforeground="white",font=("verdana",22),relief=GROOVE,border=0,command=b3_click)
b3.pack(side=LEFT,expand=True,fill="both")
b4=Button(frame1,text="+", activebackground="grey", activeforeground="white",font=("verdana",22),relief=GROOVE,border=0,command=bplus_click)
b4.pack(side=LEFT,expand=True,fill="both")


# using frame 2
frame2=Frame(top)
frame2.pack(expand=True ,fill="both")

b5=Button(frame2,text="4",activebackground="grey", activeforeground="white",font=("verdana",22),relief=GROOVE,border=0,command=b4_click)
b5.pack(side=LEFT,expand=True,fill="both")
b6=Button(frame2,text="5",activebackground="grey", activeforeground="white",font=("verdana",22),relief=GROOVE,border=0,command=b5_click)
b6.pack(side=LEFT,expand=True,fill="both")
b7=Button(frame2,text="6",activebackground="grey", activeforeground="white",font=("verdana",22),relief=GROOVE,border=0,command=b6_click)
b7.pack(side=LEFT,expand=True,fill="both")
b8=Button(frame2,text="-",activebackground="grey", activeforeground="white",font=("verdana",22),relief=GROOVE,border=0,command=bminus_click)
b8.pack(side=LEFT,expand=True,fill="both")


# using frame 3
frame3=Frame(top)
frame3.pack(expand=True ,fill="both")
b9=Button(frame3,text="7",activebackground="grey", activeforeground="white",font=("verdana",22),relief=GROOVE,border=0,command=b7_click)
b9.pack(side=LEFT,expand=True,fill="both")
b10=Button(frame3,text="8",activebackground="grey", activeforeground="white",font=("verdana",22),relief=GROOVE,border=0,command=b8_click)
b10.pack(side=LEFT,expand=True,fill="both")
b11=Button(frame3,text="9",activebackground="grey", activeforeground="white",font=("verdana",22),relief=GROOVE,border=0,command=b9_click)
b11.pack(side=LEFT,expand=True,fill="both")
b12=Button(frame3,text="*",activebackground="grey", activeforeground="white",font=("verdana",22),relief=GROOVE,border=0,command=bmul_click)
b12.pack(side=LEFT,expand=True,fill="both")

# using frame 4
frame4=Frame(top)
frame4.pack(expand=True ,fill="both")
b13=Button(frame4,text="0",activebackground="grey", activeforeground="white",font=("verdana",22),relief=GROOVE,border=0,command=b0_click)
b13.pack(side=LEFT,expand=True,fill="both")
b16=Button(frame4,text="C",activebackground="grey", activeforeground="white",font=("verdana",22),relief=GROOVE,border=0,command=bclear)
b16.pack(side=LEFT,expand=True,fill="both")
b15=Button(frame4,text="=",activebackground="grey", activeforeground="white",font=("verdana",22),relief=GROOVE,border=0,command=result)
b15.pack(side=LEFT,expand=True,fill="both")
b16=Button(frame4,text="/",activebackground="grey", activeforeground="white",font=("verdana",22),relief=GROOVE,border=0,command=bdiv_click)
b16.pack(side=LEFT,expand=True,fill="both")

#b17=Button(frame4,text=".",activebackground="grey", activeforeground="white",font=("verdana",22),relief=GROOVE,border=0,command=bdot)
#b17.pack(side=LEFT,expand=True,fill="both")




