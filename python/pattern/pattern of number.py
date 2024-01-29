print(" Number Pattern")

lastNumber = eval(input())
for i in range(1, lastNumber):
    for j in range(-1+i, -1, -1):
        print(2**j, end=' ')
    print("")
#output
    #if n=8
#1 
#2 1 
#4 2 1 
#8 4 2 1 
#16 8 4 2 1 
#32 16 8 4 2 1 
#64 32 16 8 4 2 1
