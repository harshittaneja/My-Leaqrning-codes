#write a function to count total no of lines & character ,words  in text file 
# and also repeat the longest line

#ob=open("code3.txt",mode)
ob=open("code3.txt","r")
#couting no of cahrater in a file without space 
charcter=ob.read().replace(" ","").rstrip()
print("no of character in file:",len(charcter))
ob.close()
#couting no of words of a file
ob=open("code3.txt","r")
words=ob.read().split()
print("counted words in file :",len(words))
ob.close()
ob=open("code3.txt","r")
#counting no of lines in file
lines=0
for words in ob:
    lines=lines+1
    
        
print("no of lines :",lines)
ob.close()
    
    





