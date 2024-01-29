print("  armstrong number between 1 and 10000:")

sum=0
for i in range(1,10000):
    l=i
    count=0
    while(l!=0):
        l=l//10
        count=count+1;
    sum=0
    z=i

    while(z!=0):
        rem=z%10
        k=rem**count
        sum=sum+k;
        z=z//10
    if(i==sum):
        print(i,end=" ")
