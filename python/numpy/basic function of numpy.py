import numpy as np
import random
#importing numpy module
Hlist=[1,2,3]
#create a list
x=np.array(Hlist)
#using array function print value
print(x)
print("dimension using shape",x.shape)
print(type(x))
#multi dimensional array creation
y=np.array([[1,2,3],[4,5,6],[7,8,9]])
print(y)
print("shape attribute will print the dimension",y.shape)

#np.arrage function
n=np.arange(1,10,2)
#this will print all values in some just like for loop
print("np.arange(1,10,2) : ",n)
n=np.array([1,2,3,4])
# reshape function
#this will change array as per row and column provide in reshape function
n=n.reshape(2,2)
#n=np.reshape(row,colmn)
print(n)
n=np.linspace(0,4,9)
print(n)
#this reshape the array as per the row and column you provide
k=[1,2,3,4,5,6]
k=np.array(k)
k.resize(3,2)
print(k)
#ones array this will create arrays of one of 3x2

print("ones array of 3x2\n ",np.ones([3,2]))

#zeros array this will create arrays of one of 3x2

print("zeros array of 3x2\n ",np.zeros([3,2]))
#this will create 3x3 matrix of diagnol value 1
print("np.eye(3) array of 3x2\n ",np.eye(3))


print("np.diag(y) array  ",np.diag(y))

# difference between  and repeat function
print("\n\n\n difference between  and repeat function")
print("np.array([1,2,3]*3) :",np.array([1,2,3]*3))
print("np.repeat([1,2,3],3) :",np.repeat([1,2,3],3))

print("creating  array of 2x3 of ones \n ",np.ones([2,3],int))


# vstack p=np.ones([2,3])
print("vstack p=np.ones([2,3])\n print(np.vstack([p,2*p]))")

p=np.ones([2,3])
print(np.vstack([p,2*p]))

print("\n hstack p=np.ones([2,3])\n print(np.vstack([p,2*p]))")
print(np.hstack([p,2*p]))

Hlist=[1,2,3]
x=np.array(Hlist)
y=np.array([4,5,6])
print("\n Hlist=[1,2,3] \n x=np.array(Hlist) \n y=np.array([4,5,6])\n  ")
print("x+y :",x+y)
print("x-y :",x-y)
print("x * y :",x*y)
print("x**2 :",x**2)
print("pow(x,2) :",pow(x,2))
print("x**3",x**3)
print("pow(x,3) :",pow(x,3))
print("martix product multplication [1,2,3]*[4,5,6]= 1*(4)+ 2(5)+ 3(6)= 4+ 10 + 18 =32  ")
print(x.dot(y))

# 2d example
print("\n 2d example\n \n ")
print("a = np.array([[1,2],[3,4]])\n  b = np.array([[11,12],[13,14]]) \n np.dot(a,b)")
print("[1 2|   [11  12] - [37  40]")
print("[3 4] * [13  14] - [85  92]")
a = np.array([[1,2],[3,4]]) 
b = np.array([[11,12],[13,14]])

print(np.dot(a,b))
print(" d=np.array([y,2*y]) ")
d=np.array([y,y**2])
print(d)
print("np.array([y,y**2]) shape attribute : ",d.shape)
print("d.type :",d.dtype)
print("d.transpose =(d.t)\n ",d.T)
print("d.shape now after transpose :",d.T.shape)
#casting array type
print("casting type of array :")
d=d.astype('float64')
print("D=:",d)
print("type after casting to float:",d.dtype)

#mathematical operation
d=np.array([-1,-4,-3,-2])
print("sum(d.sum()) =",d.sum())
k=np.array([12,13,14,15])
print("k=np.array([12,13,14,15])")
print("k.min():",k.min(),"\nk.max():",k.max())
#mean
print("mean(k.mean()):",k.mean())
print("standard deviation (k.std()):",k.std())
print("to find index of maximum value k.argmax(): ",k.argmax())
print("to find index of minimum value k.argmax(): ",k.argmin())


#indexing and slicing
p=np.arange(13)**2
print(p)
print("p[0]:",p[0])
print("p[4]:",p[4])
print("p[-4,-1]:",p[-4:-1])
#creating two dimensional array with elements 0 to 25 
f=np.arange(36)
#note in this 1 to 3% we print
p=np.arange(1,36)
print(p)
f.resize([6,6])
print(f)
print("f[2,2] :",f[2,2])
#prining the last three elements of row
print("f[3,3:7] :",f[3,3:7])
#printing the enter third row
print("f[3,3:7] :",f[3,0:])
# condiition on array elements
print(f[f>13])

# lets now set all values greater then 30 to 1
f[f>30]=1
print(f)
f1=f[:3,:3]
print("f[:3,:3] : ",f1)
f1[:]=0
print("f1",f1)
print("f now :",f)
print("\n \n ")
o=f.copy()
print(o)
o[:]=1
print("o:",o)
print("\n ")
print("f:",f)

#iterate over array
#using random number as element of array 
k=np.random.randint(1,10,[4,3])
#k=np.random.randint((range),[row,cloumn])
print(k)
print(type(k))

#iterate over loops
for i in k:
    print(i)

for i,row in enumerate(k):
    print("row",i,"is", row)

k=k**2
print("\n \n k=k**2")
print(k)
    
