#heriracial inheritance
# output
#  A
# / \
#b   c

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
ob1=C()
ob1.C()
ob1.A()
ob2=B()
ob2.B()
ob2.A()


# this line gives error becoz c not inherite a 
ob1.B()


