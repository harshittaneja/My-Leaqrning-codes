d={"0":"000","1":"001","2":"010","3":"011","4":"100","5":"101","6":"110","7":"111"}
def fun(value):
    for i in range(0,len(value)):
        f=value[i]
        print(d[f],end="")
    
    
value=input()
fun(value)