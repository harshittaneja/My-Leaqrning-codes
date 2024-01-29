#is this we use regular expression module
#that is regex and find searching in file

#difference between startswith andre.search
#file name = mbox-short.txt

#importing module
import re

#handling file
ob=open('mbox-short.txt')

#iterating from file handler
for i in ob:

#removing spaces for file using rstrip function
    i=i.rstrip()
    if re.search('^From:',i):
        #if From is present in begining then (re.search()) return ture we use ^(carrot character special character)
        #this will check f is in begning of line foloowed by other character
    
        print(i)
#this will print se record

#we can also do it using find method
        
'''
#both code do same thing
#iterating from file handler
for i in ob:

#removing spaces for file using rstrip function
    i=i.rstrip()
    #iterating from file handler
for i in ob:

#removing spaces for file using rstrip function
    i=i.rstrip()
    #if i.startswith('From:'):
    
    
        print(i)
#this will print se record

#we can also do it using find method
        



    
    
        print(i)
#this will print se record

#we can also do it using find method
 '''       




