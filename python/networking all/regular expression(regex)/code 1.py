#is this we use regular expression module
#that is regex and find searching in file 
#file name = mbox-short.txt

#importing module
import re

#handling file
ob=open('mbox-short.txt')

#iterating from file handler
for i in ob:

#removing spaces for file using rstrip function
    i=i.rstrip()
    if re.search('From:',i):
    
        print(i)
#this will print se record

#we can also do it using find method
        

'''
for i in ob:

#removing spaces for file using rstrip function
    i=i.rstrip()
    if i.find('From:')>=0:
    
        print(i)
#this will print se record

#we can also do it using find method
'''        


