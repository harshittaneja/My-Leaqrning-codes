#this code will count no of character of a file 
#file name = code 2.1.txt

#open file in read mode
file = open("code 2.1.txt", "r")



#read the content of file
#note this will also read spaces also in the text and count them
data = file.read()

#get the length of the data
number_of_characters = len(data)

print('Number of characters in text file :', number_of_characters)

#output =14 as 11 character in the code and 3 spaces total =11+3=14
