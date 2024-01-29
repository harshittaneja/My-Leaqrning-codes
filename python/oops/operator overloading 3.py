# comapring to commplex number 
class complex:
    def __init__(self,real,image):
        self.real=real
        self.image=image
    def __eq__(self,other):
        if self.real==other.real and self.image==other.image :
            return True
        else:
            return False
ob1=complex(1,2)
#ob2=complex(2,1)
ob2=complex(1,2)
ob3 = (ob1==ob2)
print(ob3)
