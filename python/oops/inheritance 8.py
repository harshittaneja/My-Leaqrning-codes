# problem in hybrid ambiguity when we use a.diplay() not suppper
class A:
    def display(self):
        print("A")
    
class B(A):
    def display(self):
        
        print("B")
        super().display()
class C(A):
    def display(self):
        
        print("C")
        super().display()
class D(B,C):
    def display(self):
        
        # calling a method
        print("D")
        super().display()
        
        

ob1=D()
ob1.display()

#output
#D
#B
#C
#A
# note in this a is not printed twice here 
 



