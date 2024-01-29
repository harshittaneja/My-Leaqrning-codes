#search a specific lines from a text file 

#opening the file using open function
ob=open("searching from file.txt","r")

#here ob is sequence of string
#iteration from object
for i in ob:
    #to avoid spacing from the right side after the completion of line this will
    #do
    i=i.rstrip()
    #this will check if line not starts with ("This word") then prin that line 
    if not i.startswith("This"):
        print(i)
