def maxfunction(lst):
    min=lst[0]
    max=lst[0]

    for i in range(len(lst)):
        if(max<lst[i]):
            max=lst[i]
    return max;
def minfunction(lst):
    min=lst[0]
   

    for i in range(len(lst)):
        if(min>lst[i]):
            min=lst[i]
    return min;
    


lst=[]
print("enter the size of list")
n=eval(input())
print("enter the elements list")
for i in range(n):
    k=eval(input())
    lst.append(k)
ret=maxfunction(lst)
ret1=minfunction(lst)
print("max value :",ret)
print("min value :",ret1)
