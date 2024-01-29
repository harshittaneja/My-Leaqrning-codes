import pandas as pd
df =pd.DataFrame([[54.2,'a'],[658,'d']],index=list('pq'))
df.columns=df.index
print(df.columns.values)
