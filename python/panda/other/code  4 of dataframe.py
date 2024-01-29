import pandas as pd
import numpy as np
# dictionary of lists
dict = {'First Score':[100, 90, np.nan, 95],                            #OUTPUT
        'Second Score': [30, 45, 56, np.nan],
        'Third Score':[np.nan, 40, 80, 98]}
# creating a dataframe from list
df = pd.DataFrame(dict)
#creating columns list 
columns = list(df)
print(columns)
print('\n')
for i in columns:
    # printing the third element of the column
    print (df[i][2])

