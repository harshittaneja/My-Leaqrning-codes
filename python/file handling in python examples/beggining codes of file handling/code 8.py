#this program will read who many lines starts with any specific alphabet
#opening the file using open function
ob=open("searching from file.txt","r")
#counter
count=0
#iteration from object
for i in ob:
    if i.startswith("This"):
        count=count+1
print("There are ",count," lines starts with this")
   
   
   
    
    
