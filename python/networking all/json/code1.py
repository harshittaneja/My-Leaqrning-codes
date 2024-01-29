#networking using javascript and json 

#module importing as abbrivation
import json as t
#here data is look like a dictionary where in javascript we called object 
data='''{
"name":"chuck","phone":{"type":"intl","Number":"+1 734 303 4456"}
,"email":{

"hide":"yes"}



}
'''
#dictionary =module.function(STring) loads() means load from string 
info=t.loads(data)
#this function loads gives dictionary
#print(dict[key])
print("name :",info["name"])
#print(dict[key1][key2]) dictionary inside dictionary
print("HIde :",info['email']["hide"])
print("phone :",info["phone"])
