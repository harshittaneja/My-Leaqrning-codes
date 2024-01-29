import pandas as pd
#here we read a file olymoics.csv which is record of plympic summer and winter 
'''
df = pd.read_csv('olympics.csv')
print(df.head())
'''
df = pd.read_csv('olympics.csv', index_col = 0, skiprows=1)
print(df.head())
print("\n 1. df.columns print all columns of file \n ")
print(df.columns)


#renaming colums
for col in df.columns:
    if col[:2]=='01':
        df.rename(columns={col:'Gold' + col[4:]}, inplace=True)
    if col[:2]=='02':
        df.rename(columns={col:'Silver' + col[4:]}, inplace=True)
    if col[:2]=='03':
        df.rename(columns={col:'Bronze' + col[4:]}, inplace=True)
    if col[:2]=='№':
        df.rename(columns={col:'#' + col[1:]}, inplace=True) 

print(df.head())
#boolean functions
print("\n df['Gold'] :")
print(df['Gold'])
#this will give boolean value if df[gold]column is greater then zero
#then give true for it 
print(df['Gold'] > 0)
only_gold = df.where(df['Gold'] > 0)
#this will create df where df['Gold]>0 give result of those values else put nan there 
print(only_gold.head())
#print only gold values greater then zero
print("only_gold['Gold'].count():",only_gold['Gold'].count())
#count all gold values
print("df['Gold'].count()",df['Gold'].count())
#this will drop all nan values 
only_gold = only_gold.dropna()
only_gold.head()
print(only_gold.head())

only_gold = df[df['Gold'] > 0]
print(only_gold.head())
#calculating summer oplypics countries whose gold >0
print("len(df['Gold'] > 0):",len(df['Gold'] > 0) )
print("len(df[(df['Gold'] > 0) ]:",len(df[(df['Gold'] > 0) ]))
print("len(df[(df['Gold'] > 0) | (df['Gold.1'] > 0)])",len(df[(df['Gold'] > 0) | (df['Gold.1'] > 0)]))
print("df[(df['Gold.1'] > 0) & (df['Gold'] == 0)] : \n")
print(df[(df['Gold.1'] > 0) & (df['Gold'] == 0)])

#indexing
#seting df country column as index
df['country'] = df.index
#chaninging to country column with gold getting 
df = df.set_index('Gold')
df.head()
#note from this code the index will set as column name summer gold
#mtlb index jo hai vo gold column set hojyga

#reseting the index
df = df.reset_index()
df.head()




