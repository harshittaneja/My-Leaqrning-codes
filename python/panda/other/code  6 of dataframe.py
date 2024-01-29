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
#df.drop(index,if inplace== false then not drop else if inplace== TRue means drop record by column)
df.drop('b',inplace=True)

# drop index value(index,implace ="True")
print('\n',df)
# note if a value is deleted it will not all to se again 
