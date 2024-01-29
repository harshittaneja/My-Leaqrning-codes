upper=eval(input("enter the upper limit"))
lower=eval(input("enter the lowe4 llimit"))
print("prime number are :")
for i in range(upper,lower+1):
    temp=0
    for j in range(2,i//2+1):
        if(i%j==0):
            temp=1
    if(temp==0):
            print(i)
n=eval(input())
        
            

    
