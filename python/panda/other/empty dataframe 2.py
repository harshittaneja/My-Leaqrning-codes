import pandas as pd
# dataframe contains column name but not records
df = pd.DataFrame(columns=['User_ID', 'UserName', 'Action'], index=['a', 'b', 'c'])
print("Empty Dataframe", df, sep='\n')
#Add rows to an empty dataframe at existing index                                             #OUTPUT
df.loc['a'] = [23, 'Riti', 'Login']
df.loc['b'] = [24, 'Aadi', 'Logout']
df.loc['c'] = [25, 'Jack', 'Login']
print('\n',df)
