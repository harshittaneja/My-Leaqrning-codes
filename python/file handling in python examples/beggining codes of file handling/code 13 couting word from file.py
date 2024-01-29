#entering the file name to open the file
#file name =searching from file.txt

#we are going to count word from file and put them into dictionary so
#that i count the occurence of word in file
fname = input("Enter file name: ")
#opening the file usinf open functin
fh = open(fname)

# empty dictionary
d={}
for i in fh:
    #split word on the basis of spaces
    wordsList=i.split()
    #counting the element of list and addedto dictionary 
    for j in wordsList:
        d[j]=d.get(j,0)+1
print(d)

