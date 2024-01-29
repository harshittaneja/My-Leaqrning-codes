#this program will read no of charcter in a file without spaces
#file uses name =code 2.1.txt

#open file in read mode
file = open("code 2.1.txt", "r")

#read the content of file and replace spaces with nothing
#now we are just count caharcters only so we replace space by no gape 
data = file.read().replace(" ","")

#get the length of the data
number_of_characters = len(data)

print('Number of characters in text file :', number_of_characters)
