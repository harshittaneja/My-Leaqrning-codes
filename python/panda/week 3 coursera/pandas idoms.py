#pandas idoms
#Idiomatic Pandas: Making Code Pandorable
import pandas as pd
df = pd.read_csv('census.csv')
print(df)
#where query
#df.where(df['SUMLEV']==50).dropna().set_index().rename() multiple queries
print((df.where(df['SUMLEV']==50).dropna().set_index(['STNAME','CTYNAME']).rename(columns={'ESTIMATESBASE2010': 'Estimates Base 2010'})))


#another

