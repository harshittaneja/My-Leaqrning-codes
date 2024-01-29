#Indexing and Selecting Data 
import pandas as pd

data = {'Name':['Jai', 'Princi', 'Gaurav', 'Anuj'],
        'Age':[27, 24, 22, 32],
        'Address':['Delhi', 'Kanpur', 'Allahabad', 'Kannauj'],
                'Qualification':['Msc', 'MA', 'MCA', 'Phd']}
df=pd.DataFrame(data) 
#if you don't write this then it will create default index by itself
df=df.set_index('Name')    #set column Name as index
print(df)
# retrieving columns by indexing operator
first = data["Age"]
print(first)
