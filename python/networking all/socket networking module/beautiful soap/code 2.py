#in the previous code is not working due to ssl error so we are going to remove
#it in this code

#module importing stuff

import urllib.request,urllib.parse,urllib.error

from bs4 import BeautifulSoup

#ssl module importing
import ssl

#this is new from previous from code to make it run and avoid SSL certificate error
ctx=ssl.create_default_context()
ctx.check_hostname=False
ctx.verify_mode=ssl.CERT_NONE

#taking url from user

#url : http://dr-chuck.com/page1.htm try this one first

url=input("Enter the url :")
#this urlopen function returns a file handle so we can also use read function with it 
k=urllib.request.urlopen(url,context=ctx).read()
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
