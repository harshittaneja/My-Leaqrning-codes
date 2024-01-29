n=eval(input("enter the check is prime or not :"))
temp=0
for i in range(2,n//2+1):
    if(n%i==0):
        temp=1
if(temp==1):
        print(n," is not prime")
else:
        print(n," is  prime")
        
        

    
