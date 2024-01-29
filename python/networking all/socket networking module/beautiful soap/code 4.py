#this is assigment grded code must understand to get more knowlwge

from urllib.request import urlopen
from bs4 import BeautifulSoup
import ssl

# Ignore SSL certificate errors
ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE
#taking this url for last code 
url ='http://py4e-data.dr-chuck.net/comments_713562.html'
html = urlopen(url, context=ctx).read()
soup = BeautifulSoup(html, "html.parser")
j=0
sum=0
# Retrieve all of the anchor tags
tags = soup('span')
for tag in tags:
    #j is counter here 
    j=j+1
    sum=sum+int(tag.contents[0])
    #prints the content inside the tag
    #eg<span>35 so tag.contents[0]=35
    #count the number of record from span tag
print('Count',j)
#print the sum of records 
print('sum:',sum)
    
    
      




    
   

    
