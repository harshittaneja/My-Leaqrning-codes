import pandas as pd
df = pd.read_csv('census.csv')
print(df.head())
#finding unique value from column sumlev
#this will print only those value jo ki different rest ek baar print karege jo same honge 
print("df['SUMLEV'].unique() : ",df['SUMLEV'].unique())
#this line will create a column fro file whose value of sumlev ==50 then put them
#to the dataframe colun then print
#this way we filter(or just remove the data ) the data of
#which have value of sumlev =40 and clean it 
df=df[df['SUMLEV'] == 50]
print(df.head())
#this cs fille contains manny columns
#started from sumlev ,region,divsion ,state ,county,sTname
#so i only want to see thse column hat mentioned below
#so i created the list of these name columns so that i can se on console
#so i put in data frame then print those columns 

columns_to_keep = ['STNAME',
                   'CTYNAME',
                   'BIRTHS2010',
                   'BIRTHS2011',
                   'BIRTHS2012',
                   'BIRTHS2013',
                   'BIRTHS2014',
                   'BIRTHS2015',
                   'POPESTIMATE2010',
                   'POPESTIMATE2011',
                   'POPESTIMATE2012',
                   'POPESTIMATE2013',
                   'POPESTIMATE2014',
                   'POPESTIMATE2015']
df = df[columns_to_keep]
print(df.head())
#setting 2 columns as index
print("setting 2 columns as index :")
df = df.set_index(['STNAME', 'CTYNAME'])
print(df.head())

#location
print(df.loc['Michigan', 'Washtenaw County']  )    

print(df.loc[ [('Michigan', 'Washtenaw County'),
         ('Michigan', 'Wayne County')] ])
