import urllib.request,urllib.parse,urllib.error
from bs4 import BeautifulSoup

#url = 'http://python-data.dr-chuck.net/known_by_Conar.html'
url = input('Enter URL:')
count = int(input('Enter count:'))
position = int(input('Enter position:'))-1
html = urllib.request.urlopen(url).read()

soup = BeautifulSoup(html,"html.parser")
href = soup('a')
#print href
k=[]
for i in range(count):
    link = href[position].get('href', None)
    print("Retrieving:",link)
    k.append(href[position].contents[0])
    html = urllib.request.urlopen(link).read()
    soup = BeautifulSoup(html,"html.parser")
    href = soup('a')
    link = href[position].get('href', None)
print(k[-1])
    #we are going link inside link and print tag.position[2] that is<LI> <a href ></a></li>
       #position                                                     1    2
#here we give position and count from user oncolose
 #sample inputs
'''
$ python3 solution.py
Enter URL: http://py4e-data.dr-chuck.net/known_by_Fikret.html
Enter count: 4
Enter position: 3
Retrieving: http://py4e-data.dr-chuck.net/known_by_Fikret.html
Retrieving: http://py4e-data.dr-chuck.net/known_by_Montgomery.html
Retrieving: http://py4e-data.dr-chuck.net/known_by_Mhairade.html
Retrieving: http://py4e-data.dr-chuck.net/known_by_Butchi.html
Retrieving: http://py4e-data.dr-chuck.net/known_by_Anayah.html
   k[-1]= Anayah
'''
