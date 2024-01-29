import urllib.request, urllib.parse, urllib.error
import xml.etree.ElementTree as ET
import ssl
import matplotlib.pyplot as p
#url  http://py4e-data.dr-chuck.net/comments_421.xml
url = input('Enter location: ')
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
l1=[]
l2=[]
l3=[]
lst=tree.findall('comments/comment')
field1=input("enter the field1")
field2=input("enter the field2")
#these tag are in a list (lst) it is list contains elements as tags
#finding tages  below commentinfo then comments
k=0
limit=int(input("Enter the no of observation that you want to plot :"))
for i in lst:
    if(k<limit):
        l1.append(i.find(field1).text)
        l2.append(int(i.find(field2).text))
        k=k+1;


# printing task

p.ylabel('count')
p.xlabel('Names')
print(l2)
p.plot(l1,l2,'g^')
p.show()


