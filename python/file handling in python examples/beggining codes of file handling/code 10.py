# Use words.txt as the file name

#this program convert file into uppercare 
fname = input("Enter file name: ")
fh = open(fname)
for i in fh:
    i=i.rstrip()
    print(i.upper())
