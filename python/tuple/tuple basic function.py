#tuples are collection which is ordered unchangeable(Imuntable )in nature
l=(1,2,3)
print(type(l))
l=tuple()

print("Empty tuple :",l)
t=(1,2,3)
print("t[1] :",t[1])
#basic difference betweeen tuple and list is as follows
#t[1]=4 once a position assigend it can't be changed or update
t1=[1,2,3]
t2=[4,5,8]
T=t1+t2
print("t1 +t2 :",T)
#methods of tuple
#1. len()
#2. max()
#3. min()
#4. index()
#5. count()

#len
print("len(T) :",len(T))
#max
print("max(T) :",max(T))
#min
print("min(T) :",min(T))
#index  eg T.index("vlaue") as 4 at index 3
print("T.index(4) :",T.index(4))
#count eg T.count(value) here 3 occures 3 times 
z=(1,2,3,1,2,3,1,2,3)
print("z.count(3) :",z.count(3))

#passing variable length argument
def fun(*x):
    #note this star indicate that this is a tuple create
    print("tuple X: ",x)
    for i in x:
        print(i)
fun(10,20,30,40,50)
#convert list into tuples
#eg
a=[1,2,3,0]
print(type(a))
a=tuple(a)
print(type(a))
# sort function with tuple
#note we can't use sort functiojn with tuple
#so we need first convrt it into lisr then sort
#then again convert it into tuple
a=list(a)
a.sort()
a=tuple(a)
print(a)
# triversing tuple from a list
a=[(1,2),(2,4,'ram'),(3,'shyam')]
#a=[(i,j)]
#here its list of tuples
print("type(a) :",type(a))
print("type(a[1]) :",type(a[1]))
print("type(a[1][1]) :",type(a[1][2]))
print("list of tuples")
#list of tuples
#eg:
#doubt need to consult teacher
#for i,j in a:
    
    #print(j)
    #print(i)

#zip function
a=[1,2,3]
b=[2,4,6]
c=[3,4,5]

d=list(zip(a,b,c))
#not this will convert this list a tuple and then make then element of list
# they become list of tuples
print(d)
b=(4,5,6)
a=[1,2,3]
#purpose of zip is to map the similar indexws of multiple containts
for i,j in zip(a,b):
    print(i)
    #output= 1 2 3
    
    print(j)
    #output= 4 5 6
    
#zip function 2
a=[1,2,3]
b=[2,4,6]
c=[3,4,5]

d=list(zip(a,b,c))
x,y,z=zip(*d)
print("x,y,z=zip(*d)\n eg")
print("X:",x)

print("Y:",y)
print("Z:",z)
#method present in tuple
t=tuple()
print("t=tuple()")
print("dir(tuple name)")
print("dir(t) :",dir(t))
# assigning tuple
(x,y)=(4,'fred')
#tuple(element1,element2)=(4,'fred')
#element1=4
#element2='fred'
print("x :",x)
print("y :",y)
# comparing tuples
print("(1,2,1)<(2,0,0) :",(1,2,1)<(2,0,0))
# not it will only compare  1 < 2 not next them don't care for that
#becoz for an example => 109<201 as 1<2 so don't matter about other
print("(1,4,4)<(0,9,9) :",(1,4,4)<(0,9,9))
#if first one matches
#EG=(0,1,3)<(0,2,3) as 0=0 so it will compare 1 and 2 and then as 1<2 so it will give true
print("(0,1,3)<(0,2,3)",(0,1,3)<(0,2,3))

#comparsion in string tuple
#note here in tuple first element is same so we compare next to as s =s then a =a l>m so false as m<l
print("('jones','sally')>('jones','sam') :",('jones','sally')>('jones','sam'))
