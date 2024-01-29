#here from the previous code we use socket to reterive data from internet
#now we are going to use urllib to make code more easy also 

#we use library urllib

#import modulename .library
import urllib.request,urllib.parse,urllib.error

# modulelibrary.function()
#urllib.urlopen("url") this return a file handler 
filehandle=urllib.request.urlopen("http://data.pr4e.org/romeo.txt")

 


#this is now like treating a file not a web page which is very nice and easy
#to do

#empty list
le=list()
#empty dictionary
d=dict()

#iterate from filehandle using loop
for i in filehandle:
    #putting data into list le and also removing the spliting them when space come
    le=i.decode().split()

    #now iterarte from list
    for j in le:
        #putting and counting data into dictinory 
        d[j]=d.get(j,0) +1
#now printing dictionary
print(d)
    
    
