#here from the previous code we use socket to reterive data from internet
#now we are going to use urllib to make code more easy also 

#we use library urllib

#import modulename .library
import urllib.request,urllib.parse,urllib.error

# modulelibrary.function()
#urllib.urlopen("url") this return a file handler 
filehandle=urllib.request.urlopen("http://data.pr4e.org/romeo.txt")

#this is now like treating a file not a web page which is very nice to do 
#iterate from filehandle using loop
for i in filehandle:
    #print(i.decode())

    #we are using decode function to make byte array to string 
    #then we also use strip function to remove space 
    print(i.decode().strip())
