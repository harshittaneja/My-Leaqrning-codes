def fib(z):
    if z==1:
        return 1;
    elif z==0:
        return 0;
    else:
        return fib(z-1) +fib(z-2);
        
z=eval(input("enter the size of series :"))
sum=0
for i in range(0,z):
    k=fib(i);
    
    sum=sum+k
    print(k," ")
print("sum of number ",sum)
