#write ap rogram to count no of words in a file
#filename=
file = open("code 2.1.txt", "r")
data = file.read()
#split words from space and put in words
words = data.split()

print('Number of words in text file :', len(words))
