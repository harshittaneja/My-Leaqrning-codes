#multilevel inheritance
class A:
    a=" A"
    def A(self):
        print(self.a)
    
class B(A):
    b="B"
    def B(self):
        print(self.b)
class C(B):
    c="C"
    def C(self):
        print(self.c)


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
# creting class c object 
ob3=C()
# calling a class function with object c
ob3.A()
# calling b class function with object c
ob3.B()
# calling c class function with object c
ob3.C()
