#search a specific lines from a text file 

#opening the file using open function
ob=open("searching from file.txt","r")

#iteration from object
for i in ob:
   
    i=i.rstrip()
   
    if "This" in i :
        print(i)
        
    
        
        
        
#you can see the main difference between the code as shown in code 4
