class complex:
    def __init__(self,real,image):
        self.real=real
        self.image=image
    def __mul__(self,other):
        return complex(((self.real*other.real)-(self.image*other.image)),((self.real*other.image) + (self.image*other.real)))
    def display(self):
        print(“output”,self.real,"+ ",self.image,"i")
c1=complex(4,5)
c2=complex(2,7)
c3=c1*c2
c3.display()
