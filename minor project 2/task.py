from tkinter import * 
top=Tk()
from tkinter import messagebox

large_font= ('Verdana',30)
small_font = ('Verdana',20)
top.configure(background='white')
top.title("minor project")
top.geometry("640x500+300+300")
top.resizable()
l1=Label(top,text="URL",fg="blue" ,font=("Helvetica", 50),background='white' )
l1.pack()

#setting frame for button
frame1=Frame(top)
frame1.pack()
e1=Entry(frame1,textvariable="url",width=100,font=large_font,background='white',relief=FLAT)
e1.pack()




#buttons working
def XMLfunction():
     
     top1=Tk()
     entry = e1.get()
     
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
        
       
        
       
    
 



     
    
def jsonfunction():
      #module import 
     import urllib.request, urllib.parse, urllib.error
     import json
     #Data collection
     link =e1.get()
     counter=0
     total=0
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
    
def urllibfunction():
     import urllib.request,urllib.parse,urllib.error
     filehandle=urllib.request.urlopen("http://data.pr4e.org/romeo.txt");
     le=list()

     d=dict()

     for i in filehandle:
          
         
         
          le=i.decode().split()
     for j in le:
          
         d[j]=d.get(j,0) +1
     print(d)


    
    
     
     

     
   
    
def socketfunction():
    import socket
    
    ob=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
    
    ob.connect(('data.pr4e.org',80))
    
    
    print(k)
    
    command=e1.get().encode()
    
    ob.send(command)
    
    while True:
         
         data =ob.recv(512)
         
         if len(data)<1:
              break
     
         print(data.decode())
    
    ob.close()
    
    
    
def soupfunction():
    msg = messagebox.showinfo( "Hello Python", "Hello World")
    
    
def geojsonfunction():
    msg = messagebox.showinfo( "Hello Python", "Hello World")
    
    



#second frame
frame2=Frame(top)
frame2.pack(expand=True ,fill="both")
b1=Button(frame2,text="XML", activebackground="white" ,bg="yellow",activeforeground="black",font=("verdana",18) ,relief=FLAT ,command=XMLfunction)
b1.pack(side=LEFT,expand=True,fill="both" )

b2=Button(frame2,text="JSON", activebackground="white", bg="spring green",activeforeground="black",font=("verdana",18) ,relief=FLAT ,command=jsonfunction)
b2.pack(side=LEFT,expand=True,fill="both" )
b3=Button(frame2,text="urllib", activebackground="white",bg="tomato"  ,activeforeground="grey",font=("verdana",18) ,relief=FLAT,command=urllibfunction)
b3.pack(side=LEFT,expand=True,fill="both" )

#third frame




