#we are going to deal with soup library

#import modulename .library
import urllib.request,urllib.parse,urllib.error

from bs4 import BeautifulSoup

#taking url from user

url=input("Enter the url :")
#this urlopen function returns a file handle so we can also use read function with it 
k=urllib.request.urlopen(url).read()
#this read function will read all the data of file and make one single string of it

#so now we are going to parse this string from BeautifulSoup() function 
s=BeautifulSoup(k,'html.parser')

#this s object is just take nasty bit and clean all 

#retrieve all the anchor tags

tags=s('a')

#this line will give a list of achor tags from the web page of url 
#list name :tags

#tags=['anchor tag 1','anchor tag 2','anchor tag 2']
#inside an web page contain so many anchor tags  

for i in tags:
    #this will print the value present in the anchor tag
    #eg <a href="hello.cu.mail.com"></a>
    #value=hello.cu.mail.com so this value is going to pull out this value from get method like in dictionary 
    print(i.get('href',None))
