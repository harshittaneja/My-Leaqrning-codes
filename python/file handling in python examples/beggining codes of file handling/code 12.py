#entering the file name to open the file
#file name =code12.txt
fname = input("Enter file name: ")
#opening the file usinf open functin
fh = open(fname)
#count the case which starts with From words
count = 0
#for i in  file(object or sequence)
for line in fh:
    #if line not starts with "From" word then skip those lines 
    if not line.startswith('From'):
        continue
    #if line starts with "From" word then skip those lines
    if line.startswith('From:'):
        continue
    else:
        #split the lines from space and add first element of line in list
        line = line.split()
        line = line[1]
        print(line)
    count += 1
print("There were",count,"lines in the file with From as the first word")
