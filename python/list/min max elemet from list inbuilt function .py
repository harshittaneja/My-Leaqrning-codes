def maxmin(lst):
    x=max(lst)
    y=min(lst)
    return x,y
    




lst=[]
print("enter the size of list")
n=eval(input())
for i in range(n):
    k=eval(input())
    lst.append(k)
(z,k)=maxmin(lst)
print("max",z)
print("min",k)

    
