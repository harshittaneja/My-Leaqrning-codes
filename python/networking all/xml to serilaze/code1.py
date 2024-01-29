# we are using xm module to connect python with internet
#python dictionary -> internet -> java hashmap
#these bound takes palace using xml

#python dictionary (serializtion) ->  xml -> java hashmap (deserializtion)

#coding part

import xml.etree.ElementTree as T
#import module name          as aberivation

#this is format of string (''' multi line string ''')
data='''<person>
<name>Chuck</name>
<phone type="intl">+918930019181</phone>
<email hide="yes"/>
</person>
'''
# we need to pull this string data from give us back an object 

# we are going to use  t.fromstring() to make string data into object data
#this return a tree
tree=T.fromstring(data)
#                                 find(tag name)
print("tree.find('name')",tree.find('name'))
print("Name :",tree.find('name').text)
print("Attr :",tree.find('email').get('hide'))
