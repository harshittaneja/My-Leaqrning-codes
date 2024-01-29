# using data frames for data analysis
#as datafram consists of row and column 


import pandas as pd
#row
#a  1
#b  2
#c  3
#d  4

dict1 ={'a':1, 'b':2, 'c':3, 'd':4}        # Define Dictionary 1                                                                 #OUTPUT:
# row two
dict2 ={'a':5, 'b':6, 'c':7, 'd':8, 'e':9} # Define Dictionary 2
# column 1 = first and column 2 = dict
Data = {'first':dict1, 'second':dict2}  # Define Data with dict1 and dict2 
df = pd.DataFrame(Data)  # Create DataFrame                                                             
print(df)
# output
#   first  second
#a    1.0       5
#b    2.0       6
#c    3.0       7
#d    4.0       8
#e    NaN       9

# note here e in first is nan becooz in first dictionary we don"t have e as a elements
#but in second we have as element so it give value as nan
# also first dictionary elemnts are changed to gloat type becoz
# nan is not able to store in int type so it caste all values to float
