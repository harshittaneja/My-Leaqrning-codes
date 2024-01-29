#single inheritance
class A:
    a=10
    def A(self):
        print(self.a)
    
class B(A):
    b=13
    def B(self):
        print(self.b)


# creting class a object 
ob1=A()
# calling a class function with object a
ob1.A()
# creting class b object
ob2=B()
# calling b class function with object b
ob2.B()
# calling a class function with object b
ob2.A()

