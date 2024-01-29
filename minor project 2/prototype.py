from tkinter import *
from tkinter import messagebox

 
root = Tk() # create root window
root.title("Frame Example")
root.config(bg="red3")
 


#working code XML type data protoype
def XMLfunction():
     
        
     entry = e1.get()
     if(entry==""):
          
          msg = messagebox.showwarning( "warning", "!!!Please enter valid url!!!")
     else:
          
          #working tree
          import urllib.request, urllib.parse, urllib.error
          import xml.etree.ElementTree as ET
          import ssl
          #value from tikinter
          url =entry
          print('Retrieving', url)
     #string=filehandle.read()   
          xml = urllib.request.urlopen(url).read()
          #len(string)
          print('Retrieved', len(xml), 'characters')

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
               
               
               print(i.find("name").text)
               counter=counter+1
               total=total +int(i.find("count").text)
          print("Count:",counter)
#json type
def jsonfunction():

      
     
     #module import 
     import urllib.request, urllib.parse, urllib.error
     import json
     #Data collection
     link =e1.get()
     if(link==""):
          msg = messagebox.showwarning( "warning", "!!!Please enter valid url!!!")

     else:
          print('Retrieving', link)
          fh = urllib.request.urlopen(link)
          data=fh.read().decode()
          print('Retrieved', len(data), 'characters')
          try:
               js = json.loads(data)
          
          except:
               js = None
               counter = 0
               total=0
          
          for i in js['comments']:
               counter =counter+ 1
               print(i['name'])
               total=total+ int(i['count'])
          print('Count:', counter)
          print('Sum:', total)
          
          
          
     
     
     
          
          
def delete():
     e1.delete(0,END)

def socketfunction():
     url=''+ e1.get()
     if(url==""):
          msg = messagebox.showinfo( "warning", "!!!Please enter valid url!!!")
     else:
          import socket
          ob=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
          ob.connect(('data.pr4e.org',80))
          command=url.encode()
          ob.send(command)
          data =ob.recv(512)
          if len(data)<1:
               
              print(data.decode())
          ob.close()
          

















# Create Frame widget
left_frame = Frame(root, width=200, height=600,bg="red3")
left_frame.grid(row=0, column=0, padx=10, pady=5)

RIGHT_frame = Frame(root, width=400, height=400,bg="white")
RIGHT_frame.grid(row=0, column=1, padx=10, pady=5)

left2=Frame(root,bg="white")

root.resizable(False,False)

#left panel
b0=Label(left_frame,text="features",font=("verdana",18),bg="red3")
b0.grid(row=0, column=0 ,ipadx=2)
b1=Button(left_frame,text="XML", activebackground="white" ,bg="darkorange",activeforeground="black",font=("verdana",18) ,relief=FLAT,command=XMLfunction )
b1.grid(row=1, column=0 ,ipadx=19)
b2=Button(left_frame,text="JSON", activebackground="white", bg="yellow",activeforeground="black",font=("verdana",18) ,relief=FLAT,command=jsonfunction)
b2.grid(row=2, column=0,ipadx=12)
b3=Button(left_frame,text="urllib", activebackground="white",bg="firebrick1"  ,activeforeground="grey",font=("verdana",18) ,relief=FLAT)
b3.grid(row=3, column=0,ipadx=15)
b5=Button(left_frame,text="  Soup  ", activebackground="white" ,bg="spring green",activeforeground="black",font=("verdana",17) ,relief=FLAT)
b5.grid(row=4, column=0)
b6=Button(left_frame,text="Geojson", activebackground="white",bg="blue2"  ,activeforeground="grey",font=("verdana",17) ,relief=FLAT)
b6.grid(row=5, column=0)
b8=Label(left_frame,text="",font=("verdana",18),bg="red3")
b8.grid(row=6, column=0 ,ipadx=2)
b9=Label(left_frame,text=" ",font=("verdana",18),bg="red3")
b9.grid(row=7, column=0 ,ipadx=2)
b10=Label(left_frame,text=" ",font=("verdana",18),bg="red3")
b10.grid(row=8, column=0 ,ipadx=2)

#right side
b0=Label(RIGHT_frame,text="welcome to GUI Mode ",font=("verdana",20),bg="white")
b0.grid(row=0,column=0)
R1_frame = Frame(RIGHT_frame, width=300, height=300,bg="blue2")
R1_frame.grid(row=1, column=0, padx=10, pady=5)
R3_frame = Frame(R1_frame, width=100, height=10,bg="blue2")
R3_frame.grid(row=1,column=0)
b0=Label(R3_frame,text="URL Below: ",font=("verdana",20),bg="blue2")
b0.grid(row=0,column=0)
e1=Entry(R1_frame,textvariable="url",font=("verdana",35),width=20,background="blue2",)
e1.grid(row=2,column=0)
R2_frame = Frame(R1_frame, width=400, height=400,bg="blue2")
R2_frame.grid(row=3,column=0)
b6=Button(R1_frame,text="Clear", activebackground="white",bg="white"  ,activeforeground="grey",font=("verdana",17) ,relief=FLAT,command=delete)
b6.grid(row=8, column=4)



        
       






