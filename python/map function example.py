#creating two list name store1 and store 2 an map it
# also use min function to map smallest value
store1=[10.00,12.34,11.00,2.34]
store2=[11.30,12.34,9.00,2.01]
cheapest=map(min,store1,store2)
print(cheapest)
'''
d=list(cheapest)

print(d)
'''
# how to print map values
for i in cheapest:
    print(i)
