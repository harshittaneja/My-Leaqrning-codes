# compring to which  number is less 
class complex:
    def __init__(self,real,image):
        self.real=real
        self.image=image
    def __lt__(self,other):
        if self.real>=other.real and self.image >=other.image :
            print(other.real," + ",other.image,"i","is less")
        else:
            print(self.real," + ",self.image,"i","is less")
            
ob1=complex(1,2)
#ob2=complex(2,1)
ob2=complex(4,6)
ob3 = ob1<ob2
