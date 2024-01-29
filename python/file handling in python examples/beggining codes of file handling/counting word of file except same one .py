#writing a program to count all word of file but not include the word that occure
#more than once 

#opening the file using open functin
fh = open("code 11 important.txt")

# empty dictionary
d=[]
for i in fh:
    #split word on the basis of spaces
    wordsList=i.split()
    #counting the element of list and addedto dictionary 
    for j in wordsList:
        if j  in  d:
            continue
           
        else:
             d.append(j)
            
        
        
print(d)
print(len(d))

