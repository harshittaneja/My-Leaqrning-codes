'''
In this code i am going to
split a line from spaces then count the each words occurence
'''
# empty dictionary
count=dict()
line=input('enter the line of text :')
#this code split lines into list name(words) of words
words=line.split()
print('words list:',words)
print("counting process")
for i in words:
    count[i]=count.get(i,0)+1
print(count)
# input =hi harshit hi how are you hi harshit
