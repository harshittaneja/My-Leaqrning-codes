#In this code we use file,tuple ,list , dictionary

#opening a file
fh=open('searching from file.txt')

#empty dictionary
count=dict()

#reading for file and split it from space and putting data into list( word)
for i in fh:
    word=i.split()
    #iterating from list(word) 1 by 1
    for j in word :
        # now counting and adding element into dictionary (count)
    #this will add element and count occurence of element in file and put in 
        count[j]=count.get(j,0)+1

#empty list
l=list()
for key,value in count.items():
    #creating a tuple with elements key and value 
    t1=(value,key)
    #appending value of tuples in lst l  
    l.append(t1)
l=sorted(l,reverse=True)
for key,value in l[:10]:
    print(key,value)
