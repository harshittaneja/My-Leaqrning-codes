#list comprehension is a way of createa list
#eg
a=[  i       for i in range(0,10) if i%2==0] 
#a=[output    input sequence      condition  ]
print(a)
w="wow I LOVe PYthon "
#note if you don't pass anything in split function as a agrument
#then by default it take as space  and make a list 
k=w.split()
print(k)
d="my_date_of_birth is_23_sep_2000"
m=d.split("_")
print(m)
# another example
# note in this when we enter on console as input then it will split on basses
#of space
#eg input like  1  2  3  4
n=[int(i) for i in input().split()]
print(n)
