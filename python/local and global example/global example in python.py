c = "hello everyone "
# global variable concept with string also 
    
def add():
    global c
    c = "Hello harshit" 
    print("inside function :"+c)
print(c)
#note not use like add(c) it will then give error
add()
print(c)
