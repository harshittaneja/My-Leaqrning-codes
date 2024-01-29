#example of list

import json as J
#here data is list
data='''[{"id":"001","X":"2","name":"chuck"},
{"id":"4103","X":"3","name":"Harshit"}]
'''
#string data in form of list list containds elemnts as dictionary

#list =module.function(string)
info=J.loads(data)
#info=[dictionary1,dictionary2]
#printing length of dictionary
print("user count :",len(info))
#for i in list
for i in info :
    # i is for element of list here elements are dictionary 
    print("name :",i['name'])
    print("ID :",i['id'])
    print("x :",i['X'])

