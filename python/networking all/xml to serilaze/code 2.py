#code 2 

import xml.etree.ElementTree as T
#multiple line string input(xml string )
data='''<stuff>
<users>
<user x="2">
<id>001</id>
<name>chuck</name>
</user>
<user x="7">
<id>009</id>
<name>harshit</name>
</user>
<user x="8">
<id>003</id>
<name>yashasvi</name>
</user>
</users>
</stuff>
'''
#using xml from string to pull data out of string
k=T.fromstring(data)
#this tag is used to find all user tag below users tags
#these tag are in a list (lst) it is list contains elements as tags  
lst=k.findall('users/user')
#find len of list
print("len(l) l=k.findall('users/user') :",len(lst))
#iterating over list items
for i in lst:
    print("Names :",i.find('name').text)
    print("ID :",i.find('id').text)
    print("X :",i.get('x'))

print("LIst of tags :",lst)
     



