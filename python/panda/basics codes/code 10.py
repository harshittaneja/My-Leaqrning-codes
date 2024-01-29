import pandas as pd
dict1={"name":'harshit','roll no ':'18bcs4103','cost':1200}
dict2={"name":'yash','roll no ':'18bcs4069','cost':1300}
dict3={"name":'naman','roll no ':'18bcs4107','cost':1460}
s1=pd.Series(dict1);
s2=pd.Series(dict2);
s3=pd.Series(dict3);
#here we create there  dictionary and put them in three series and then make of list of them
#and put them in dataframe
df=pd.DataFrame([s1,s2,s3])

print(df)
#output
#      name   roll no 
#0  harshit  18bcs4103
#1     yash  18bcs4069
#2    naman  18bcs4107
print("\ndf.loc[0] :")
print(df.loc[0])
print("\ndf.loc[2] :")
print(df.loc[2])
print("\n")
print("type(df.loc[0] :",type(df.loc[0]))

print("\n")
print("df.loc[0][1] :",df.loc[0][1])
print("df.loc[0][2] :",df.loc[0][2])
print("df.loc[2][1] :",df.loc[2][1])
#taking transpose of dataframe

print("\ntransposed dtaframe:")
print(df.T)
print("slicing with dataframe")
#          df.loc[0 to 1][[colums ,name]]
print(df.loc[0:1][['name','cost']])
#drop dataframe
print("note here in droping a record it just not delete from actually dataframe only from copy")

print(df.drop(0))

print("\n after droping then still original")
print(df)
#copying value

d1=df.copy()
d1=d1.drop(0)
print("copied value now")
print(d1)
