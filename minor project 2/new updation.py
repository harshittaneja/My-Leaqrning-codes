from tkinter import *
from tkinter import messagebox
import time 
def Coressoption():
    if messagebox.askokcancel("Quit", "Do you want to quit?"):
        root.destroy()
 
root = Tk() # create root window
root.title("Frame Example")
root.config(bg="red3")
root.protocol("WM_DELETE_WINDOW", Coressoption)


val=""


def clock():
    h=str(time.strftime("%H"))
    m=str(time.strftime("%M"))
    s=str(time.strftime("%S"))
    if(int(h)>12 and int(m)>0):
        st.config(text="PM")

    
    if(int(h)>12):
        if((int(h)-12)<9):
            h="0"+ str(int(h)-12)
        else:
            h=str(int(h)-12)
    
        
    
        
        
            
        
    hr.config(text=h)
    mins.config(text=m)
    sec.config(text=s)
    hr.after(200,clock)
      

#working code XML type data protoype
def XMLfunction():
     
      
     entry = textwindow.get("1.0",END)
    
     
     # to give warring that url is empty or not
     if(len(textwindow.get("1.0", END)))==1:
          msg = messagebox.showwarning( "warning", "!!!Please enter valid url!!!")
          
          
     else:
          rootXML=Tk()
          rootXML.title("Data")
          frame = Frame(rootXML, width=500, height=700,bg="white")
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
               print(i.find("name").text)
               counter=counter+1
               total=total +int(i.find("count").text)
          print("Count:",counter)
          t.insert(INSERT,"\n Count: ",counter)
          
#json type
def jsonfunction():

      
     
     #module import 
     import urllib.request, urllib.parse, urllib.error
     import json
     #Data collection
     link =textwindow.get("1.0",END)
     if(len(textwindow.get("1.0", END)))==1:
          msg = messagebox.showwarning( "warning", "!!!Please enter valid url!!!")

     else:
          rootjson=Tk()
          rootjson.title("Data")
          frame = Frame(rootjson, width=500, height=1300,bg="white")
          frame.pack(fill='both', expand=True)
          t=Text(frame,width=100,height=300,font=("verdana",12),bg="black",fg = 'red')
          t.pack()
          print('Retrieving', link)
          t.insert(INSERT,"\n Retrieving " +link)
          fh = urllib.request.urlopen(link)
          data=fh.read().decode()
          print('Retrieved', len(data), ' characters')
          
          t.insert(INSERT,"\n Retrieved " + str(len(data))+" characters")
          counter=0
          total=0
          
          try:
               js = json.loads(data)
          
          except:
               js = None
               
               
          
          for i in js['comments']:
               counter =counter+ 1
               print(i['name'])
               t.insert(INSERT,"\n"+i["name"])
               total=total+ int(i['count'])
          print('Count:', counter)
          t.insert(INSERT,"\n count :"+str(counter))
          print('Sum:', total)
          t.insert(INSERT,"\n sum :"+str(total))
          
          
          

     
     
   
          
          
def delete():

     if(len(textwindow.get("1.0", END)))==1:
          msg = messagebox.showwarning( "warning","Already Empty")
     else:
          
          global val
          val=textwindow.get("1.0",END) 
          textwindow.delete("1.0",END)

def undotask():
     if(len(textwindow.get("1.0", END)))==1:
          textwindow.insert(INSERT ,val)
     else:
          msg = messagebox.showwarning( "warning","Already Url ")
          
     
     
     
     
     
          
          
     
     










# Create Frame widget
left_frame = Frame(root, width=200, height=600,bg="red3")
left_frame.grid(row=0, column=0, padx=10, pady=5)

RIGHT_frame = Frame(root, width=400, height=400,bg="white")
RIGHT_frame.grid(row=0, column=1, padx=10, pady=5)



root.resizable(False,False)






#left panel
b10=Label(left_frame,text="",font=("verdana",18),bg="red3")
b10.grid(row=1, column=0 ,ipadx=2)
b0=Label(left_frame,text="Options",font=("verdana",18),bg="red3")
b0.grid(row=2, column=0 ,ipadx=2)
b1=Button(left_frame,text="XML", activebackground="white" ,bg="darkorange",activeforeground="black",font=("verdana",18) ,relief=FLAT,command=XMLfunction )
b1.grid(row=3, column=0 ,ipadx=19)
b2=Button(left_frame,text="JSON", activebackground="white", bg="yellow",activeforeground="black",font=("verdana",18) ,relief=FLAT,command=jsonfunction)
b2.grid(row=4, column=0,ipadx=12)
b3=Button(left_frame,text="urllib", activebackground="white",bg="firebrick1"  ,activeforeground="grey",font=("verdana",18) ,relief=FLAT)
b3.grid(row=5, column=0,ipadx=15)
b5=Button(left_frame,text="  Soup  ", activebackground="white" ,bg="spring green",activeforeground="black",font=("verdana",17) ,relief=FLAT)
b5.grid(row=6, column=0)
b6=Button(left_frame,text="Geojson", activebackground="white",bg="blue2"  ,activeforeground="grey",font=("verdana",17) ,relief=FLAT)
b6.grid(row=7, column=0)
b8=Label(left_frame,text="",font=("verdana",18),bg="red3")
b8.grid(row=8, column=0 ,ipadx=2)
b10=Label(left_frame,text="Clock",font=("verdana",18),bg="red3")
b10.grid(row=9, column=0)
left_frame1 = Frame(root, width=110, height=40,bg="red3")
left_frame1.place(x=10,y=490)
hr=Label(left_frame1,text="12",font=("verdana",15),bg="blue",fg="white")
hr.place(x=1,y=1)
mins=Label(left_frame1,text="12",font=("verdana",15),bg="green yellow")
mins.place(x=38,y=1)
sec=Label(left_frame1,text="12",font=("verdana",15),bg="DarkOrchid2",fg="white")
sec.place(x=76,y=1)
st=Label(root,text="AM",font=("verdana",15),bg="red3")
st.place(x=45,y=530)









#right side
b0=Label(RIGHT_frame,text="welcome to GUI Mode ",font=("verdana",20),bg="white")
b0.grid(row=0,column=0)
b1=Label(RIGHT_frame,text="Enter the url below ",font=("verdana",10),bg="white")
b1.grid(row=1,column=0)

textwindow=Text(RIGHT_frame,width=84,height=24,font=("verdana",12),bg="blue")
textwindow.grid(row=2, column=0, padx=10, pady=5)
 




r=Frame(RIGHT_frame, width=200, height=600,bg="yellow")
r.grid(row=3, column=0, padx=10, pady=5)
b6=Button(r,text="Clear", activebackground="white",bg="ivory2"  ,activeforeground="grey",font=("verdana",16) ,relief=FLAT,command=delete)
b6.grid(row=0, column=0)
b7=Button(r,text="Undo", activebackground="white",bg="ivory3"  ,activeforeground="grey",font=("verdana",16) ,relief=FLAT,command= undotask)
b7.grid(row=0, column=1)

clock()




        
       






