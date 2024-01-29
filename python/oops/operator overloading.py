class A:
    def __init__(self,real,image):
        self.real=real
        self.image=image
#operator overloading pre built operator function to add
    def __add__(self,other):
        return A(self.real+other.real,self.image+other.image)
    def display(self):
        print("sum ->",self.real,"+",self.image,"i")

real=int(input("enter the  real part of first number:"))
image=int(input("enter the image  part of first number :"))
ob1=A(real,image)
real1=int(input("enter the real  part of second number:"))
image1=int(input("enter the  image part of second number r:"))
ob2=A(real1,image1)
# calling add function
ob3=ob1+ob2
ob3.display()
