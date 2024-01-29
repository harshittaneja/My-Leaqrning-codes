import pandas as pd
# Program to Create Dictionary series 
dictionary ={'a':1, 'b':2, 'c':3, 'd':4, 'e':5}
print("dictionary ={'a':1, 'b':2, 'c':3, 'd':4, 'e':5}")
sd = pd.Series(dictionary)  
print(sd)
print(sd.index)
#iloc function
print("sd.iloc[2]:",sd.iloc[2])
# loc
print("sd.loc['d']",sd.loc['d'])
