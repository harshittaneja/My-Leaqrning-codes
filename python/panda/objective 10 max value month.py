import pandas as pd
df=pd.read_csv("objective 10.csv")
x=max(df['Income'])
ans=df[df['Income'] == x].index.tolist()
print(ans)
dk=df.loc[ans[0]]
print(dk['month'])
