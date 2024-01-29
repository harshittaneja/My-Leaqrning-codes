#write a program to copy context of one file to another 


#source file from where data is taken s

ob1=open("code.txt",'r')
#destination file to where data is sent 
ob2=open("code2.txt",'w')
for i in ob1:
    #writing data in  ob2 file
    #object.write(data)
    ob2.write(i)
ob1.close()
ob2.close()



'''
#another way
ob1=open("code.txt",'r')
ob2=open("code2.txt",'w')
d=""
d=ob1.read()
print(d)
#note this way you can't able to write data into file but you can write on console
ob2.write(d)
'''    


