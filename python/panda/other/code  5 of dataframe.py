import pandas as pd                                                                                                                                 #OUTPUT
data1 = {'Name':['Jai', 'Princi', 'Gaurav', 'Anuj'], 
        'Age':[27, 24, 22, 32], 
        'Address':['Nagpur', 'Kanpur', 'Allahabad', 'Kannuaj'], 
        'Qualification':['Msc', 'MA', 'MCA', 'Phd']}  
data2 = {'Name':['Abhi', 'Ayushi', 'Dhiraj', 'Hitesh'], 
        'Age':[17, 14, 12, 52], 
        'Address':['Nagpur', 'Kanpur', 'Allahabad', 'Kannuaj'], 
        'Qualification':['Btech', 'B.A', 'Bcom', 'B.hons']} 
df = pd.DataFrame(data1,index=['a', 'b', 'c', 'd'])
# we are drop address line 
df.drop("Address", axis=1,inplace=True)
#by default axis=0 for rows
df.drop("Qualification", axis=1,inplace=True)
# we are drop Qualification line 
print(df)
