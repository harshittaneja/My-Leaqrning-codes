#module import 
import urllib.request, urllib.parse, urllib.error
import json

#Data collection
link = input('Enter location: ')
#Enter location:  http://py4e-data.dr-chuck.net/comments_713565.json
print('Retrieving', link)
#filehandle=module.function(url)
fh = urllib.request.urlopen(link)
#string=filehandle.read().decode()
data=fh.read().decode()
#decode for converting utf-8 to unicode
print('Retrieved', len(data), 'characters')
#string(len)
try:
#dictionary=module.loads(string)
    js = json.loads(data)
except:
    js = None

counter = 0
total=0
#her dict['key']=js['comments'] is work as list
# for i in list
for i in js['comments']:
    counter =counter+ 1
    total=total+ int(i['count'])

print('Count:', counter)
print('Sum:', total)
