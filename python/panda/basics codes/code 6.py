#dataframe creating with series
import pandas as pd
#row
#o 1
#1 3
#2 4
s1 = pd.Series([1, 3, 4, 5, 6, 2, 9])           # Define series 1 
row
#o 1.1
#1 3.5
#2 4.7
s2 = pd.Series([1.1, 3.5, 4.7, 5.8, 2.9, 9.3]) # Define series 2 
s3 = pd.Series(['a', 'b', 'c', 'd', 'e'])     # Define series 3 
Data ={'first':s1, 'second':s2, 'third':s3} # Define Data dictionary
dfseries = pd.DataFrame(Data)              # Create DataFrame 
print(dfseries)


#ouput
#   first  second third
#0      1     1.1     a
#1      3     3.5     b
#2      4     4.7     c
#3      5     5.8     d
#4      6     2.9     e
#5      2     9.3   NaN
#6      9     NaN   NaN 
