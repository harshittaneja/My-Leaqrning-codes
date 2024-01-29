# Import pandas package
import pandas as pd
# Define a dictionary containing employee data
data = {'Name':['Jai', 'Princi', 'Gaurav', 'Anuj'],
        'Age':[27, 24, 22, 32],
        'Address':['Delhi', 'Kanpur', 'Allahabad', 'Kannauj'],
        'Qualification':['Msc', 'MA', 'MCA', 'Phd']}
# Convert the dictionary into DataFrame 
df = pd.DataFrame(data)
'''
#select two columns
print("df\n")
print(df)
print("\n df[['Name', 'Qualification']]\n")
print(df[['Name', 'Qualification']])
print("\n df.head()")
print(df.head())


print("\n df.head(2) :")
print(df.head(2))  #or df[:2] will select the top two rows
#or
print("\n df[:2] :")
print(df[:2])
print("\n df.tail(3) :")
print(df.tail(3))  #will select the bottom three rows
print("df[2:3]")
print(df[2:3])  #for printing specific rows
#print from reverse
print("\n print from reverse df[::-1]")
print(df[::-1])
'''
print("df[0:-4:]")
print('df[-1:-5:-1]') # print(df[-1::-1]) they both are same
print(df[-1:-5:-1])
print("df[0:-4] :")
print(df[0:-4:])
print("df[-1::-1]")
print(df[-1::-1])
print("\n df[0:-2:1]")
print(df[0:-2:1])# (df[0:-2:1]=df[0:2:1])
#  0      1       2       3         
# Jai  Princi   Gaurav  Anuj
# -4     -3       -2      -1


#here -3 =1 and -2=2
print(df[0:-3:1]) #here it will go from 0 then -3 is excluded means from 0 to 1(-3) so only one value(df[0:-3:1]=df[0:1:1])
print(df[0:-1:1]) #here it print only 3 value from 0 to 2 
