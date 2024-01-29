n =eval(input("enter the value :"))
for i in range(1,n+1):
    for j in range(n,i+1,-1):
        print(" ")
    for j in range(1,i):
        print("*")
    print("\n ")
