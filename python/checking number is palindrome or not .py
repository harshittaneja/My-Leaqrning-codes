n=eval(input("Enter the number to check no palindrome :"))
k=n
sum=0;
while k>0:
    rem=k%10
    sum = sum*10 + rem
    k=k//10
if sum==n:
    print(sum ," is palindrome :")
else:
    print( sum," is not palindrome ")
