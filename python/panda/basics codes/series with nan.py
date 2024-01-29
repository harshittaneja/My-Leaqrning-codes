import pandas as pd
import numpy as np
import random
l=[1,2,3,None]
p=pd.Series(l)
print(p)
# checking is np.nan==None
print( "checking is np.nan==None",np.nan==None)
# dtype related query

a=["harshit",'naman','utkarsh']
# note here d typw is object becoz in string list it is gives series type as objects
j=pd.Series(a)
print(j)
#another example
print("np.nan==np.nan",np.nan==np.nan)
#we can only check using specialized function nam isnan
#eg
print(np.isnan(np.nan))
#iloc value finding
print("\n a=['harshit','naman','utkarsh']\n")
print(" j.iloc[2]:",j.iloc[2])
print("j.loc[0]",j.loc[0])
total=0
l=[12,13,14]
for i in l:
    total=total+i
print(total)

# or do simple
total =np.sum(l)
print("total =np.sum(l) :",total)
#creating a random series of 12 number from 1 to 20
s=pd.Series(np.random.randint(1,20,12))

print(s)
print(len(s))


