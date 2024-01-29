#merging with unique key combination

import pandas as pd
# Define a dictionary for dataframe
data1 = {'key': ['K0', 'K1', 'K2', 'K3'],
         'Name':['Jai', 'Princi', 'Gaurav', 'Anuj'], 
        'Age':[27, 24, 22, 32],} 
   
# Define a dictionary containing employee data 
data2 = {'key': ['K0', 'K1', 'K2', 'K3'],
         'Address':['Nagpur', 'Kanpur', 'Allahabad', 'Kannuaj'], 
        'Qualification':['Btech', 'B.A', 'Bcom', 'B.hons']} 
 
# Convert the dictionary into DataFrame
#first dtaframe
df = pd.DataFrame(data1)
#second dataframe 
df1 = pd.DataFrame(data2) 
print(df, "\n\n", df1) 
#Now we are using .merge() function with one unique key combination
#pd.merge(dataFrame1,dataFrame2,using key)
res = pd.merge(df, df1, on='key')
print('\n',res)

