
class A:
    a=" A"
    def display(self):
        print(self.a)
    
class B(A):
    b="B"
    def display(self):
        # calling a method
        super().display()
        #OR
        #A.display(self)
        print(self.b)

ob1=B()
ob1.display()



