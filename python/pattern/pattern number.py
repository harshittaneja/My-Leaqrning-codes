print(" Number Pattern")

lastNumber = eval(input())
for i in range(1, lastNumber):
    for j in range(-1+i, -1, -1):
        print(format(2**j, "8d"), end=' ')
    print("")
