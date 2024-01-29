n=eval(input("enter the no of digit "))
a=0
b=1
c=0
sum=0
sum= sum+a++b+c
print(a,end=" ")
for i in range(0,n-1):
    a=b
    b=c
    c=a+b
    sum=sum+c
    print(c,end=" ")

print("\n sum=",sum)    

    
    
    
