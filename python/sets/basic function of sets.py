#set is an unordered collection of unique element it is mutable(we can change value)
#only it not allowed udplicate element
#eg
s={1,2,3,1}

print(s)
# not set doesn't supprot indexing (it is unordered)print(s[1])
s={}
print("s={} denotes dictionary it way of creating empty dictionary not set",type(s))
w={1,2,3}
print("w={1,2,3} it a set type",type(w))
#method to create empty set
d=set()
print("Empty set method d= set()",type(d))
print(d)
#method of set class
#1. add()
#2. update()
#3. clear()
#4. remove()
#5. issubset()
#6. issuperset()
#7. union()
#8. intersection()
#9. difference()
#10. symmetric_difference()

#eg.
a={1,2,3,4,7,8}
b={1,2,3,4,5,6}
a.add(20)
print("a.add(20) :",a)
#set can also add different values heterogenous
a.add("d")
print("a.add('d') :",a)
c={4,5,90}
a.update(c)
print("a.update(c) :",a)
a.clear()
print("a.clear() :",a)
#remove function 
a={1,2,3,4,7,8,'d'}
b={1,2,3}
a.remove('d')
print("a.remove('d'): ",a)
# issubset()
a={1,2,3,4,7,8,'d'}
b={1,2,3}
print("a.issubset(b) : ",b.issubset(a))
# issuperset()
print("a.issuperset(b) : ",a.issuperset(b))
#union function
a={1,2,3,4,7,8,'d'}
b={1,2,3,9,10}
a.union(b)
print("a.union(b) :",a.union(b))
print("a|b bitwise or also use for union :",a|b)
#intersect() function
print("insertection of two set a and b :",a.intersection(b))
#difference function
print("a.difference(b) function :",a.difference(b))
#symertic difference function
print("a.symmetric_difference(b)function :",a.symmetric_difference(b))
print("a^b also gives the values of symertic difference :",a^b)



