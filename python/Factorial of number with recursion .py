def fact(z):
    if  z==1:
        return 1;
    else:
        return z*fact(z-1);

    
for i in range(0,11):
    print("enter the",i,"number :")
    z=eval(input())
    l=fact(z);
    print("factorial of ",z,"is : ",l)
