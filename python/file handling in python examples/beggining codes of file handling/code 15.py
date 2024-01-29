#opening the file 
name = input("Enter file:")
if len(name) < 1 : name = "mbox-short.txt"
hand = open(name)
#create a empty list
lst = list()
#for i in file handler:
for line in hand:
    #if i not startswith from words then skip that line
    if not line.startswith("From:"):
        continue
    #split line from space
    line = line.split()
    #append that split function list into empty list created above
    lst.append(line[1])

#empty dictionary
counts = dict()
#for i in list:
for word in lst:
    #count the occurence of word in dictionary above 
    counts[word] = counts.get(word,0) + 1

#finding the largest occuring sequence letter and his length
bigcount = None
bigword = None
#for key,value in dictionary.items()
for word,count in counts.items(): 
    if bigcount is None or count > bigcount:
        bigcount = count
        bigword = word

print (bigword,bigcount)
# for more understanding please understand code 14
#previous one just a one difference in it from this  
