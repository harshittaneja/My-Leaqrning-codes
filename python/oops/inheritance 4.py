#hybrid inheritance
# output
#   A    
#  / \
# B   C
#  \ /
#   D
class A:
    a=" A"
    def A(self):
        print(self.a)
    
class B(A):
    b="B"
    def B(self):
        print(self.b)
class C(A):
    c="C"
    def C(self):
        print(self.c)
class D(C,B):
    d="D"
    def D(self):
        print(self.d)


        
ob1=D()
ob1.D()
ob1.C()
ob1.B()
ob1.A()


