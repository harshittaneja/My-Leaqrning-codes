#search a specific lines from a text file 

#opening the file using open function
ob=open("searching from file.txt","r")

#here ob is sequence of string
#iteration from object
for i in ob:
    #this will check if line starts with ("This word") then prin that line 
    if i.startswith("This"):
        print(i)
'''
output
This is the first paragraph of your essay. 

This is how  you  can improve.

This is where the writer introduces his topic for the very first time.

'''
#you can see the gap between to lines output you can also remove it by using
#rstrip as it is done in code 4
