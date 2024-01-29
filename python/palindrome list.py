def pal(lst):
     k=lst[::-1]
     if k==lst:
       return True
     else:
         return False
        
       

lst=[]
print("enter the list size")
n=eval(input())
for i in range(n):
    l=(input("enter the element of list :"))
    lst.append(l)
c=pal(lst)
print(c)
print(lst)
