class demo:
    x=5
    def display(self,x):
        #function value passed
        x=x+30
        #class value pased 
        self.x=self.x+30
        print(self.x)
        print(x)

ob1=demo()
ob1.display(50)
