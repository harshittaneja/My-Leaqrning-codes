
class A:
    def display(self):
        print("A")
    
class B(A):
    def display(self):
        print("B")
    
class C(A):
    def display(self):
        
        print("C")
        
class D(B,C):
    
    pass

ob1=D()
ob1.display()
#output
#B





