from tkinter import *
import tkinter.scrolledtext as scrolledtext
from tkinter import messagebox
import matplotlib.pyplot as p
root = Tk()
root.title("project")
root.config(bg="grey25")
left_frame = Frame(root, width=200, height=602,bg="red3")
left_frame.grid(row=0, column=0, padx=10, pady=5)

RIGHT_frame = Frame(root, width=400, height=400,bg="red3")
RIGHT_frame.grid(row=0, column=1, padx=10, pady=5)


onlinecounter=0
offlinecounter=0
def online():
    global onlinecounter
    onlinecounter=1
    
def offline():
    global offlinecounter
    offlinecounter=1
    
    
l1=[]
l2=[]
l3=[]
l4=[]
l5=[]
l6=[]
l7=[]
l8=[]
        

def popup():
    global onlinecounter
    global offlinecounter
    global l1
    global l2
    global l3
    global l4
    print(onlinecounter)
    print(offlinecounter)
    if(onlinecounter==1):
        
        entry = k=t2.get("1.0",END)
    
    
     
     # to give warring that url is empty or not
        if(len(t2.get("1.0", END)))==1:
           
            msg = messagebox.showwarning( "warning", "!!!Please enter valid url!!!")
        
           
  
          
        else:
           
            rootXML=Tk()
            rootXML.title("Data")
            frame = Frame(rootXML,  width=500, height=700,bg="white")
            frame.grid(row=0, column=1)
            t=Text(frame,width=100,height=300,font=("verdana",12),bg="black",fg = 'yellow')
            t.grid(row=0, column=0)
            t.insert(INSERT,"Line 2")
          
          #working tree
            import urllib.request, urllib.parse, urllib.error
            import xml.etree.ElementTree as ET
            import ssl
          #value from tikinter
            url =entry
            print('Retrieving', url)
            t.insert(INSERT,"\n Retrieving " + url )
     #string=filehandle.read()   
            xml = urllib.request.urlopen(url).read()
          #len(string)
            print('Retrieved', len(xml), 'characters')
            t.insert(INSERT,"\n Retrieved " + str(len(xml))+"characters")

    #now process the given string
    #using xml from string to pull data out of string
    #  k  = module.fromstring(string)
            tree = ET.fromstring(xml)
            total=0
            counter=0
     #list
            lst=tree.findall('comments/comment')
     #these tag are in a list (lst) it is list contains elements as tags
     #finding tages  below commentinfo then comments
          
            for i in lst:
               
               
                 t.insert(INSERT,"\n"+i.find("name").text)
                 l1.append(i.find("name").text)
                 print(i.find("name").text)
                 counter=counter+1
                 total=total +int(i.find("count").text)
                 l2.append(int(i.find("count").text))
            print("Count:",counter)
            t.insert(INSERT,"\n Count: ",counter)
    onlinecounter=0

    if(offlinecounter==1):
        print("Hello")
        import xml.etree.ElementTree as T
        k=t2.get("1.0",END)
        if(len(t2.get("1.0", END)))==1:
            
           msg = messagebox.showwarning( "warning", "Enter the file name FIrst")
        else:  
            
            g=k.find("\n")
            k=k[0:g]
            print(g)
            fh=open(k)
            data=fh.read()
            k=T.fromstring(data)
            rootXML=Tk()
            rootXML.title("Data")
            frame = Frame(rootXML,  width=500, height=700,bg="white")
            frame.grid(row=0, column=1)
            t=Text(frame,width=100,height=300,font=("verdana",12),bg="black",fg = 'yellow')
            t.grid(row=0, column=0)
            t.insert(INSERT,"Line 2")
    
#this tag is used to find all user tag below users tags
#these tag are in a list (lst) it is list contains elements as tags  
            lst=k.findall('comments/comment')
#find len of list
            print("len(l) l=k.findall('comments/comment') :",len(lst))
#iterating over list items
            for i in lst:
                
                print(i.find("name").text)
        
                print(i.find("count").text)
                t.insert(INSERT,"\n"+i.find("name").text)
                l3.append(i.find("name").text)
                
                t.insert(INSERT,"\n"+i.find("count").text)
                l4.append(int(i.find("count").text))
        
        
    
    offlinecounter=0
    
    
    

        

        
        
    
#console functionality
def consolebutton():
    global onlinecounter
    global offlinecounter
    global l5
    global l6
    global l7
    global l8
    if(offlinecounter==1):
        import xml.etree.ElementTree as T


    
    
        k=t2.get("1.0",END)
        if(len(t2.get("1.0", END)))==1:
            
            msg = messagebox.showwarning( "warning", "Enter the file name FIrst")
        else:
            
           g=k.find("\n")
           k=k[0:g]
           print(g)
           fh=open(k)
           data=fh.read()
           k=T.fromstring(data)
    

    
#this tag is used to find all user tag below users tags
#these tag are in a list (lst) it is list contains elements as tags  
           lst=k.findall('comments/comment')
#find len of list
           print("len(l) l=k.findall('comments/comment') :",len(lst))
#iterating over list items
           for i in lst:
               print(i.find("name").text)
               print(i.find("count").text)
               txt.insert(INSERT,"\n"+i.find("name").text)
               l5.append(i.find("name").text)
               txt.insert(INSERT,"\n"+i.find("count").text)
               l6.append(int(i.find("count").text))
    offlinecounter=0
    if(onlinecounter==1):
        entry = k=t2.get("1.0",END)
        if(len(t2.get("1.0", END)))==1:
            msg = messagebox.showwarning( "warning", "!!!Please enter valid url!!!")
        else:
            import urllib.request, urllib.parse, urllib.error
            import xml.etree.ElementTree as ET
            import ssl
          #value from tikinter
            url =entry
            print('Retrieving', url)
            txt.insert(INSERT,"\n Retrieving " + url )
     #string=filehandle.read()   
            xml = urllib.request.urlopen(url).read()
          #len(string)
            print('Retrieved', len(xml), 'characters')
            txt.insert(INSERT,"\n Retrieved " + str(len(xml))+"characters")
            tree = ET.fromstring(xml)
            total=0
            counter=0
     #list
            lst=tree.findall('comments/comment')
            for i in lst:
               
               
                 txt.insert(INSERT,"\n"+i.find("name").text)
                 l7.append(i.find("name").text)
                 
                 print(i.find("name").text)
                 counter=counter+1
                 total=total +int(i.find("count").text)
                 l8.append(int(i.find("count").text))
            print("Count:",counter)
            txt.insert(INSERT,"\n Count: ",counter)
            
    onlinecounter=0
            
def graphprint():
    #z=int(input("Enter the number of observation you want to plot :"))
    z=int(t1.get("1.0", END))
    

    if (len(l1)!=0 and len(l2)!=[]) :
       
       
        p.ylabel('count')
        p.xlabel('Names')
        p.plot(l1[:z],l2[:z],'g^')
        p.show()
       

       
    elif(len(l3)!=0 and len(l4)!=0):
        p.ylabel('count')
        p.xlabel('Names')
        p.plot(l3[:z],l4[:z],'g^')
        p.show()
       
    elif(len(l5)!=0 and len(l6)!=0):
        p.ylabel('count')
        p.xlabel('Names')
        p.plot(l5[:z],l6[:z],'g^')
        p.show()

    elif(len(l7)!=0 and len(l8)!=0):
        p.ylabel('count')
        p.xlabel('Names')
        p.plot(l7[:z],l8[:z],'g^')
        p.show()
       
    
def storefile():
    d=open("DATA.txt","w")
    putting=""
    
    if (len(l1)!=0 and len(l2)!=[]) :
       d.write(l1)
       d.write(l2)
       print(putting)
       
        
        
       

       
    elif(len(l3)!=0 and len(l4)!=0):
        
        d.write(str(l3))
        d.write(str(l4))
        
        
        
       
        
       
    elif(len(l5)!=0 and len(l6)!=0):
        d.write(str(l5))
        d.write(str(l6))
       
        
        
      
        
        

    elif(len(l7)!=0 and len(l8)!=0):
        d.write(str(l7))
        d.write(str(l8))
        
        
       
        
        
       
    
    
            
        
            
            
            
        
        

    
     
    









root.resizable(False,False)
#left side
b1=Button(left_frame,text="Online", activebackground="white" ,bg="firebrick1",activeforeground="black",font=("verdana",15),width = 13 ,relief=FLAT,command=online )
b1.grid(row=0, column=0, padx=10, pady=5)
t1=Text(left_frame,width=22,height=24,background="white")
t1.grid(row=1, column=0, padx=10, pady=5)
b2=Button(left_frame,text="Offline", activebackground="white" ,bg="darkorange",activeforeground="black",font=("verdana",15),width = 13,height=3 ,relief=FLAT,command=offline )
b2.grid(row=2, column=0, padx=10, pady=5)


#right side
l=Label(RIGHT_frame,text="Welcome to GUI Mode ",font=("verdana",10),bg="red3")
l.grid(row=0,column=0)
t2=Text(RIGHT_frame,width=50,height=11,font=("verdana",12),fg = 'red',background="white")
t2.grid(row=1, column=0, padx=10, pady=5)

R1 = Frame(RIGHT_frame, width=20, height=20,bg="red3")
R1.grid(row=2, column=0, padx=10, pady=5)
b1=Button(R1,text="Console", activebackground="white" ,bg="blue2",activeforeground="black",font=("verdana",15),width = 8 ,relief=FLAT,command=consolebutton )
b1.grid(row=2, column=0, padx=10, pady=5)

b2=Button(R1,text="pop up", activebackground="white" ,bg="spring green",activeforeground="black",font=("verdana",15),width =8 ,relief=FLAT )
b1.grid(row=2, column=0, padx=10, pady=5)

b2=Button(R1,text="pop up", activebackground="white" ,bg="spring green",activeforeground="black",font=("verdana",15),width =8 ,relief=FLAT,command=popup )
b2.grid(row=2, column=1, padx=10, pady=5)
b3=Button(R1,text="Graph", activebackground="white" ,bg="yellow",activeforeground="black",font=("verdana",15),width =8 ,relief=FLAT,command=graphprint )
b3.grid(row=2, column=2, padx=10, pady=5)

b4=Button(R1,text="file", activebackground="white" ,bg="darkorange",activeforeground="black",font=("verdana",15),width =8 ,relief=FLAT,command=storefile )
b4.grid(row=2, column=3, padx=10, pady=5)


t3=Text(RIGHT_frame,width=50,height=14,font=("verdana",12),bg="black",fg = 'red')
t3.grid(row=3, column=0, padx=10, pady=5)

txt = scrolledtext.ScrolledText(t3, undo=True,bg="black",fg = 'red')
txt['font'] = ('consolas', '8')
txt.pack(expand=True, fill='both')



