#enumerate in For loop
grocery = ['bread', 'milk', 'butter']
for item in enumerate(grocery):
#output
    #(0, 'bread')
    #(1, 'milk')
    #(2, 'butter')

    print(item)
# print grocery list value


print('\n')
for count, item in enumerate(grocery):
# output
    #0 bread


    #1 milk
 

    #2 butter
    print(count, item)
    print('\n')


# changing default start value
for count, item in enumerate(grocery, 100):
    
    print(count, item)

#
for coun item in enumerate(grocery):

    print( item)
    print('\n')


