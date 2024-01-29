print("Program to print half pyramid: ");

rows = input("Enter number of rows ")
rows = int (rows)

for i in range (1, rows):
    for j in range(1, (rows-i)+1):
        print(" ")
    for j in range(1,2*i):
        print("*")
    
print("\n")


