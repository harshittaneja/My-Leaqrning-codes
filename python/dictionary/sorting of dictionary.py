#sorting of dictionary all possible sequences

m={'d':35,'b':2 ,'c':16,'a':45}
print("m:",m)
#1.
print("1. for i in sorted(m.items()): \n print(i)")
for i in sorted(m.items()):
    #print all values in ascending order of items on basses of key values asci values of letters
    print(i)
print("\n")  
#2.acsending
print(" 2. for i in sorted(m.keys()): \n print(i) ")    
for i in sorted(m.keys()):
    
#it will print all keys  values in ascending order asci values of latters
    
    print(i)
print("\n")
#2.1 .acsending order
print(" 2.1 . for i in sorted(m.keys()): \n print(m[i]) ")    
for i in sorted(m.keys()):
    
#it will print all keys  values in ascending order asci values of latters
    
    print(m[i])
print("\n")    





#3.desending order
print("3.for i in sorted(m.keys(),reverse=True): \n print(i)")
for i in sorted(m.keys(),reverse=True):
    print(i)
print("\n") 
    



#4.
print("4 .for i in sorted(m.values()): \n print(i)")
for i in sorted(m.values()):
    print(i)

print("\n") 
#5
print("for i in sorted(m.values(),reverse=True): \n print(i)")
for i in sorted(m.values(),reverse=True):
    print(i)
print("\n") 
x = {'b': 1, 'd': 4, 'c': 3, 'e': 2, 'a': 0}
print("x :",x)
#6.
#sorting elements of dictionary according to there keys
print("sorting elements on basis of keys")

print("6.for i,j in sorted(x.items()): \n print(i,j) ")
for i,j in sorted(x.items()):
    #it will print all keys  values in dscending order asci values of latters
    print(i,j)

print("\n")
#7.
#sorting elements of dictionary according to there values 
x = {'b': 1, 'd': 4, 'c': 3, 'e': 2, 'a': 0}
print("sorting elements on basis of values")
print("7.for k, v in sorted(x.items(), key=lambda item: item[1]): \n print(k,v)")
for k, v in sorted(x.items(), key=lambda item: item[1]):
    print(k,v)




