'''
write a program to split words form a file (code 11 important .txt)
and split it from spaces comes and make a list of it and also avoid to add
same elements in the list just and then sort them 
'''
#entering the file name 
fname = raw_input("Enter file name: ")
#openinf file using open function 
fh = open(fname)
#empty list created
lst = list()
#iterate data from file 
for line in fh:
    #removing spaces and making list using split function
    word= line.rstrip().split()
    #now removing similar element if present
    #means if list contains same element then continue otherwise
    #append the different element in the list
    for element in word:               
        if element in lst:         
            continue               
        else :
            #appending different element
            lst.append(element)   
#sortoing the list after appending all different elements
lst.sort()                         
print(lst)   
