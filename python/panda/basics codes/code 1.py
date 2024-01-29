import pandas as pd
# Program to Create series with scalar values  
Data =[1, 3, 4, 5, 6, 2, 9]  # Numeric data   
# Creating series with default index values (0,1,2,3,4,5)
#you can see the value of dtype is int becoz list is of type integer
# but if list is of type character then it gives object
s = pd.Series(Data)   
print(s)    
print(type(s))
#output
#0    1
#1    3
#2    4
#3    5
#4    6
#5    2
#6    9
#dtype: int64
