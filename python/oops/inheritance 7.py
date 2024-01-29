# problem in hybrid ambiguity when we use a.diplay() not suppper
class A:
    def display(self):
        print("A")
    
class B(A):
    def display(self):
        
        print("B")
        A.display(self)
class C(A):
    def display(self):
        
        print("C")
        A.display(self)
class D(B,C):
    def display(self):
        
        # calling a method
        print("D")
        B.display(self)
        C.display(self)
        
        

ob1=D()
ob1.display()

#output
#D
#B
#A
#C
#A
 



