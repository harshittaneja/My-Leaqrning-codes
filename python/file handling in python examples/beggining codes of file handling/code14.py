#we use file, list,dictionary to count occurences and find largest occuring word

#entering the file name to open the file
#file name =searching from file.txt

#we are going to count word from file and put them into dictionary so
#that i count the occurence of word in file
fname = input("Enter file name: ")
#opening the file usinf open functin
if len(fname) < 1 : fname = "searching from file.txt"
fh = open(fname)

# empty dictionary
d={}
for i in fh:
    #split word on the basis of spaces and make a list name wordslist
    wordsList=i.split()
    #counting the element of list and added into dictionary 
    for j in wordsList:
        d[j]=d.get(j,0)+1
#print(d)
largest=-1
largestoccureworld=None
#from the previous code we print direct d but now we used items to print them
for i,j in d.items():
    print(i,j)
#now finding the largest occuring element if value >largest
    if j>largest:
        
        largest=j
        largestoccureworld=i
print("largest value :",largest)
print("largest times occuring word is:",largestoccureworld)
    


    

