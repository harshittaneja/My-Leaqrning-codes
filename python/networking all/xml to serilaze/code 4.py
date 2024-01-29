import urllib.request, urllib.parse, urllib.error
import xml.etree.ElementTree as ET
import ssl
#url  http://py4e-data.dr-chuck.net/comments_42.xml
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
lst=tree.findall('comments/comment')
#these tag are in a list (lst) it is list contains elements as tags
#finding tages  below commentinfo then comments
for i in lst:
    counter=counter+1
    print(i.find("name").text)
    total=total +int(i.find("count").text)
print("Count:",counter)
print("sum:",total)

