import pandas as pd
# Program to Create ndarray series 
Data =[[2, 3, 4], [5, 6, 7]]  # Defining 2darray
# this code create two rows for 2 elements of list
#0 [2,3,4]
#1 [5,6,7]

snd = pd.Series(Data)
# here the data type of element is object becoz every element of data is list
# element 1 - [2,3,4] element 2 =[5,6,7]
print(snd)

