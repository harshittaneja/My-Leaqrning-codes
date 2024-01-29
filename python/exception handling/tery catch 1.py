#try except with type define exception 
a=1
b=2
c=0
try:
    c=a/b
    print(c)
    #put charter not number on console
    n=int(input("enter the number :"))
 #note this can only handle arithematic error
except  ZeroDivisionError as  e :
    
    print("we can't do it :",e)
    #this will handle number format exception 
except  ValueError as  e :
    print("we can't do it :",e)
    
finally:
    # here you write that stuff for example to disconnect the database conectivity etc
    print("hello")
    print(c)
