import pandas as pd
import numpy as np
df = pd.read_csv('census.csv')
df = df[df['SUMLEV']==50]
print(df)
#here we are just doing
#for i in df['column'].unique:
#                   df.where().dropna()['CENSUS2010POP']
#average=np.average(df.where( df['column name']==i).dropna()['CENSUS2010POP'] )
#just finding the average from this column
for state in df['STNAME'].unique():
    avg = np.average(df.where(df['STNAME']==state).dropna()['CENSUS2010POP'])
    print('Counties in state ' + state + ' have an average population of ' + str(avg))
#they both are just same work doing but working is different and syntax

#average finding  using group by function     
print("group by ")
for group, frame in df.groupby('STNAME'):
    avg = np.average(frame['CENSUS2010POP'])
    print('Counties in state ' + group + ' have an average population of ' + str(avg))
#setting st name as index
print("setting st name as index")
df = df.set_index('STNAME')

def fun(item):
    if item[0]<'M':
        return 0
    if item[0]<'Q':
        return 1
    return 2

for group, frame in df.groupby(fun):
    print('There are ' + str(len(frame)) + ' records in group ' + str(group) + ' for processing.')
#agg function
print(df.groupby('STNAME').agg({'CENSUS2010POP': np.average}))
