#mutiple inheritance
# output
#A   B
# \ /
#  C
class A:
    a=" A"
    def A(self):
        print(self.a)
    
class B:
    b="B"
    def B(self):
        print(self.b)
class C(A,B):
    c="C"
    def C(self):
        print(self.c)
ob1=C()
ob1.C()
ob1.A()
ob2=B()
ob1.B()


