# no greedy matching

#importing module
import re

#string
x='From: using the : charcter'

#findall function()



# module.method(what is going to find ,where we need to find )
#findall() makes list of tuples
y=re.findall('^F.+?:',x)


#output logic '^F.+?:'

#1   ^F.+ means ^(carrot character tells first character is begining from F ) 
#2   .( dot means after F there more be characters also present )
#3   +(plus means 1 or more character)
#4   :(last charcter is :)
#5.  ?(this question mark tell don't be greedy)

# outcomes can be
#1. From: (small similar output)
#2. From: using the : (larger similar output) as they pic the largest same expression

#so at the end it will print the first string as a output which is no greedy  
print(y)

#this is called non greedy becoz it will takes as samll as outcomes 

