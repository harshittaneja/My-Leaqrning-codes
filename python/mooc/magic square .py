#magic square of size 3

#276
#951
#438

#magic square of size 5

#9  3   22  16  15
#2  21  20  14  8
#25 19  13  7   1
#11 10  4   23  17

#note only odd X odd matrix will work here and form magic square

#Fact -> magic number(m)=n(n^2 +1)/2

#steps

# 1. in any magic square 1 is located at position (n/2,n-1)
# 2. lets say the position of 1 ie (n/2,n-1) then next number which is 2 located at (p-1,q+1) position.
# anytime if the alculated row position becomes -1 then make it n-1 and if column position becomes n then make it it zero
# 3. if the calculated position already contains a number then decrement the column by 2 and increment the row by 1 .
# 4. if anytime row position become -1 and column position become n,switch it to (0,n-2).




def magic_square(n):

    magicSquare =[]
    for i in range(n):
        l=[]
        for j in range(n):
            l.append(0)
        magicSquare.append(l)
    i=n//2 # condition 1
    j=n-1
    num= n*n
    count=1
    while(count<=num):
        if(i==-1 and j==n):
            j=n-2   #condition 2
            i=0
        else:
            if(j==n):
                j=0
            if(i<0): 
                i=n-1
        if(magicSquare[i][j]!=0):
            j=j-2       # condition 3
            i=i+1
            continue
        else:
          magicSquare[i][j]= count
          count=count+1
        i=i-1
        j=j+1
    for i in range(n):
        for j in range(n):
            print(magicSquare[i][j],end=" ")
        print()
n=eval(input("enter the number of width magic block:"))

magic_square(n)

