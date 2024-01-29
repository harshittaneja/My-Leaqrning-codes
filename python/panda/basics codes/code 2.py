import pandas as pd
# Program to Create series with scalar values  
Data =[1, 3, 4, 5, 6, 2, 9]
# we provide the index
Index =['a', 'b', 'c', 'd', 'e', 'f', 'g']  
si = pd.Series(Data, Index) 
print(si) 
