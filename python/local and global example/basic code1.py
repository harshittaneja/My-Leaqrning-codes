z=5
def fun():
    global z
    z=z+3
    print("value in function",z)
    return z





print("before value ",z)
#note please don't pass fun(z) then it will give an error use like this 
fun()
print("after value",z)
