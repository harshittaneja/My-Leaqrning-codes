number=eval(input("enter the number to get the reverse of it :"))
sum =0
sum1=0
while number>0:
    rem=number%10
    
    sum=sum*10+rem
    sum1=sum1+rem
    number=number//10
   
print("reverse of number is :",sum)
print("sum of digit :",sum1) 
