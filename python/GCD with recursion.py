print("GCD of two numberS for which you have calulate GCD")
def fun(a,b):
    if b!=0:
        return fun(b,a%b);
       
    else:
         return a;
a=eval(input("Enter the  number a "))
b=eval(input("enter the  number b"))
z=fun(a,b);
print("gcd of ",a,"and ",b,"is :",z)
