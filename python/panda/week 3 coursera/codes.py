#merging dataframe
import pandas as pd
#here data is list consists three dictionaries as
#Dataframe(data: [{dict1},{dict2},{dict1}],index=[])
df=pd.DataFrame([{'Name': 'Chris', 'Item Purchased': 'Sponge', 'Cost': 22.50},
                   {'Name': 'Kevyn', 'Item Purchased': 'Kitty Litter', 'Cost': 2.50},
                   {'Name': 'Filip', 'Item Purchased': 'Spoon', 'Cost': 5.00}]
                ,index=['Store 1', 'Store 1', 'Store 2'])
print(df)
#adding a column to df
#df[columnname]
print("adding column ")
df['Date']=['1 june','2 june',' 3 june']
print(df)
df['delivery']=True
print("\n")
print(df)
df['feedback']=['positive',None,'negative']
print("\n")
print(df)
#now we are reset the index
print('\n l=df.reset_index()\n')
l=df.reset_index()
l['date']=pd.Series({0:'1 june',1:'2 june',2:'1 june'})
print(l)
