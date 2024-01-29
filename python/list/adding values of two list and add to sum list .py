n=eval(input("enter the size "))
a=[]
for i in range(0,n):
   k=eval(input())
   a.append(k)
   
print(a)
b=a.copy()
b.reverse()

print(b)
sum=[]
j=0
for i in range(0,n):
    j=b[i]+a[i]
    sum.append(j)
print(sum)
    


