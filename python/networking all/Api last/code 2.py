#how to request the secured url for data acess
#twitter api code 2
import urllib.request,urllib.parse,urllib.error
import json
import twurl
#this twurl is file created by drchuck for acess twitter api as shown

# All  module import above

TWITTER_URL="https://api.twitter.com/1.1/friends/list.json"

while True:
    print('')
    account=input("Enter the twitter Account :")
    if(len(account)<1):break
    url=twurl.augment(TWITTER_URL,{'screen_name':account,'count':'5'})

    print("Retriving",url)
#  filehandle=module.function(url)
    connection=urllib.request.urlopen(url)
    
    #deocde is make utf-8 to unicode
    #string=filehandle.read().decode()
    data=connection.read().decode()
    #urllib eats header to get header we write below line
    header=dict(connection.getheaders())
    print("remaining",header['x_rate-limit-remaining'])
    js=json.loads(data)
    #dumps is used print data in curely braces like javascript object look on web
    print(json.dumps(js,indent=4))

    for i in js['user']:
        print(i['screen_name'])
        a=i['status']['text']
        print(" ",s[:50])
