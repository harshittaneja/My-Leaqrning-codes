# problem in hybrid ambiguity when we use a.diplay() not suppper
class A:
    def display(self):
        print("A")
    
class B(A):
    pass
class C(A):
    def display(self):
        
        print("C")
        
class D(B,C):
    
    pass


    
        
    
        
        

ob1=D()
ob1.display()

#output
#c
 



