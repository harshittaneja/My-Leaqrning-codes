print("enter the String check is plaindrome or not :")
a=str(input())
reverse= a[::-1]
if a==reverse:
    print(a,"reverse",reverse)
    print("string is palindrome")
else:
    print(a,"reverse",reverse);
    print("string is not palindrome")
