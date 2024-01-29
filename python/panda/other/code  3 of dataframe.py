import pandas as pd
import numpy as np                                                                                               #OUTPUT
# dictionary of lists
dict = {'First Score':[100, 90, np.nan, 95],
        'Second Score': [30, 45, 56, np.nan],
        'Third Score':[np.nan, 40, 80, 98]}
# creating a dataframe from list
df = pd.DataFrame(dict)
#this function will only triverse the rows
print(df)
for i, j in df.iterrows():
    print(i, j)
    
