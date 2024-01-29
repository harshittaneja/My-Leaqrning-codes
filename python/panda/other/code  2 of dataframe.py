# importing pandas as pd
import pandas as pd
# importing numpy as np because we are using nan in data dict.                                             #OUTPUT                             
import numpy as np
# dictionary of lists
dict = {'First Score':[100, 90, np.nan, 95],
        'Second Score': [30, 45, 56, np.nan],
        'Third Score':[np.nan, 40, 80, 98]}
# creating a dataframe from list
df = pd.DataFrame(dict)

# using isnull() function to get the information that which fields are null.

print(df.isnull())
# print all record if every record is null then true at  that position else false

print('\n')
print(df)
print('\n')


print(df.fillna(5)) #for filling the missing value, any value can pass in fillna
# fil the null values by 5 as we pass in parameter


print('\n')
print(df.dropna())  #for dropping the missing value
# this function will only show those records which all entery was there and delete the other records
