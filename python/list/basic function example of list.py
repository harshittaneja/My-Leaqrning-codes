#list is a collection which is ordered and changeable (mutable ) which allows duplicate
#members
a=[]
#empty list
a=list()
a=[1,2,3]
print(a[1],a[2])
#difference betwwen  list and string
A="hello"
B="hello"
print("A=",A)
print("b=",B)
#both have same id means if i make change in 1 String then value automatically updated  to values 
print("String A id :",id(A))
print("String B id :",id(B))
b=[1,2,3]
print("List A id :",id(a))
print("List B id :",id(b))

m=[10,20,30 ,40,50,60]
print(m)
# m[-4]=30 then m[-4+1=-3]=40 and at last m[-2]
print("m[-4:-1:] :",m[-4:-1:])
k="python"
print("k=",k)
k1=list(k)
print(k1)

k1.append("w")
# as list is hetrogenous so it can add different values also
k1.append(3)
print("k1.append('w') :",k1)

d=["String",[2,3]]
print(d)
print("len(d)=",len(d))
#d[0]="String" and d[1]=[2,3]
print(d[1])
#d[0][1]="t"
print("d[0][1] :",d[0][1])
#d[1][1]=3
print("d[1][1] :",d[1][1])
#d[2][3]= not exist as only d[1] exist so this line gives error
#print("d[2][3] :",d[2][3])
m=[10,20,30,50,4,1]
print("max(m):",max(m))
print("min(m):",min(m))
print("sum(m):",sum(m))
#index
print("m.index(20) :",m.index(20))
#insert(location,value)
m.insert(1,2)

print("m.insert(1,2) :",m)
# sort
m1=[30,20,10]
m1.sort()
print("m.sort() :",m1)
#m.reverse
m.reverse()
print("m.reverse() :",m)
# or bother method to do reverse sort
m.sort(reverse=True)
print("m.sort(reverse=True) :",m)
# pop function m.pop(index of element
m.pop(0)
print("m.pop(2) :",m)
# copy function
f=[1,2,3,4,5,6,7,8,9,10]
print(f)
g=f.copy()
print("copy function then  the ids of them are different")
print("g=f.copy() :",g)
print(f)
print("id of a :",id(g))
print("id of b :",id(f))
#list in operator
x= 4 in f
print(x)

#iteration
d=[1,2,3,4]
print("for i in[1,2,3,4]:")
for i in[1,2,3,4]:
    print(i)

print("for i in d:")
for i in d:
    print(i)
#range function
print("range(len(d)) :",range(len(d)))
x = list(range(5))
print("x = list(range(5))",x)

#conacting to list
m=[1,2]
n=[3,4]
print(m,"\n",n)
print("m+n :",m+n)
#sun function
print("sum(n) :",sum(n))
#split function (this functin return string)
s="hello harshit taneja how                are you"
#note it treat more than one space as single space 
f=s.split()
print("f=s.split() :",f)
y="r;t;y;y;r;e;q"
g=y.split(';')
print("y.split(';')",g)
#getting the email for a text using splt

text="From 23 la by harshithhhh090@gmail.com sat :23:12:2002 wa"
#spliting from spaces
j=text.split()
email=j[4]
print("email",email)
#finding value before @ using split
username=email.split("@")
print("username[0]",username[0])

#example
friends = [ 'Joseph', 'Glenn', 'Sally' ]
friends.sort()
print(friends[0])
#list methods are shown below
l=list()
print("l=list()")
print("dir(l) :",dir(l))

