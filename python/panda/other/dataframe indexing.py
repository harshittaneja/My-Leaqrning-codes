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
#acessing the columns value to update means from 0 to length of data list
# and getting cost column of each record 
cost=df.loc[:]['cost']
#printing the columns value as cost variable is a dataframe type 
print(cost)
#updating the column value by adding to in each
cost+=2
#then assinging then to that values 
df.loc[:]['cost']=cost
print(cost)
print(df)
