a="hello"
print('type(a) :',type(a))
print('dir(a)  :',dir(a))
print("len(a)  :",len(a))
print("max(a)  :",max(a))
# note this will baesd upon asci code value of String A-Z =>>(65 to 90) ,(a-z)=>>97 to 122
print("min(a)  : ",min(a))
print("ord('A')",ord('A'))
print("character  value of 65 :",chr(65))

for i in a:
    print(i)
a= "Hello Word"
d=len(a)
print("\n")
for i in range(0,d,2):
    print(a[i])
a="hello"
print("a[0:5] :",a[0:5])
print("a[-1:5]:",a[-1:5])# note this will print a[-1] only 
#h   e  l   l  o
#-5 -4 -3  -2  -1
# 0  1  2   3   4
print( "Empty string :",a[-1 :0]) #empty string
print("a[::]:",a[::])#default 0 to length of string
print("a[-1:-5] :",a[-1:-5])
print("a[-5:-1] :",a[-5:-1])
print("a[::-1]  :",a[::-1])
print("a[::-2]  :",a[::-2])
a="hello123"
print("a="+a)
print("is alnum() function" )
print(a.isalnum());# tells booloean value if contains alpha numeric
#(expect sepcial character)then
a="hello@"
print("a="+a)
print("a.isalnum():",a.isalnum());
a="hello123"
print("a="+a)
print("isaplha() function");
print("a.isalpha() :",a.isalpha());

a="hello"
print("a=",a)
print("a.isalpha() :",a.isalpha());
a="123"
print("a=",a)
print("isdigit() function");
print("a.isdigit() :",a.isdigit());
#identifier
a="hello@1238"
print("a=",a)
print("a.isidentifier()",a.isidentifier());
a="hello1238"
print("a=",a)
print("a.isidentifier() :",a.isidentifier());
print("islower() function");
a="HELLO"
print("a=",a)
print("a.islower() :",a.islower());
a="hello"
print("a=",a)
print("a.islower()",a.islower());
print("isupper() function");
a="HELLO"
print("a=",a)
print("a.isupper():",a.isupper());
a="hello"
print("a=",a)
print("a.isupper() :",a.isupper());
print("ispace() function");
a=" hello word"
print("a=",a)
print("a.isspace():",a.isspace());
a=" hello word"
print("a=",a)
print("\t.isspace()")
print("\t".isspace());
#find function 
a="welcome"
print("a=",a)
print("find c as a.find('c') :",a.find("c"))
print("find e a.find('e') :",a.find("e"))
# swapcase
a="hArShIt"
print("a=",a)
print("swapcase",a.swapcase())
a="hi welcome harshit welcome harshit"
print("a=",a)
print("a.replace('harshit','Utkarsh') :",a.replace("harshit","Utkarsh"))
k="hello"
print("k=",k)
print("k.capitalize():",k.capitalize())
print("k.upper() :",k.upper())
print("k.lower() :",k.lower())
line="have a nice day"
print("l=",line)
print("l.startswith('have') :",line.startswith('have'))
print("l.startswith('day') :",line.startswith('day'))
print("l.startswith('H') :",line.startswith('H'))
# parsing and extracting
data="From stephen.marquard@uct.ac.za Sat Jan 5 09:14:16 2008 "
print("data",data)
w=data.find('@')
#this will find the position where @ position is
print("w=data.find('@') :",w)
#this will start from 21 position the position of @ to next space will come  
k=data.find('',w)
print("k=data.find('',w) :",k)
#now slicing will work we need @uct.ac.za
#k=31 and w=21 so data[21:31]=s
s=data[w+1:k]
print("data[w+1:k]:")
print(s)
