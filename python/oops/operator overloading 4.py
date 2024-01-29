# compring to which  number is greater 
class complex:
    def __init__(self,real,image):
        self.real=real
        self.image=image
    def __gt__(self,other):
        if self.real>=other.real and self.image >=other.image :
            return "number 1 is greater"
        else:
            return "number 2 is greater"
ob1=complex(1,2)
#ob2=complex(2,1)

ob2=complex(4,6)
ob3 = ob1>ob2
print(ob3)
