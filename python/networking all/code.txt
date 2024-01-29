#read number from file then put them into list then print them 
import re
ob=open("sample.txt")
d=list()
l=[]
for i in ob:
    #finding number from list and putting it into empty list
    k=re.findall('[0-9]+',i)
    #concatinationg number into list 
    l=l+k

print(l)
sum=0
for j in l:
    sum=sum+int(j)
print("sum of number in list is :",sum)

    
    
   

        
        
        
        
        
        
