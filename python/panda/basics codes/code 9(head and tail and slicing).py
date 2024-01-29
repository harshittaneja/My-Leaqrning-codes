# Import pandas package
import pandas as pd
# Define a dictionary containing employee data
# dict ={"key "list:}
data = {'Name':['Jai', 'Princi', 'Gaurav', 'Anuj'],
        'Age':[27, 24, 22, 32],
        'Address':['Delhi', 'Kanpur', 'Allahabad', 'Kannauj'],
        'Qualification':['Msc', 'MA', 'MCA', 'Phd']}
# Convert the dictionary into DataFrame 
df = pd.DataFrame(data)
#select two columns
#print(df[['Name', 'Qualification']])
#print(df.head(2))  #or df[:2] will select the top two rows 
#print(df.tail(3))  #will select the bottom three rows
#print(df.tail(2))
#print(df[2:3])  #for printing specific rows
#print(df[:-2]) is same as print(df[0:-2:1])
#print(df[0:-2])
#print(df[0:2:1])
# reverse
print(df[-1::-1])
#print(df[::-1])
