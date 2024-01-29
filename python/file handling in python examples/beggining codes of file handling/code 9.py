# try catch program with file
#we will see that when we enter the file name in code if it is ohk
#then run the code other gives user some waring

try:
    
    name=input("Enter the file name:")
    ob=open(name,"r")
    

except:
    print("you have enter the incorrect name",name)
    quit()
    
count=0
#iteration from object
for i in ob:
    if i.startswith("This"):
        count=count+1
print("There are ",count," lines starts with this")
   
   
