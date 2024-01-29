import pandas as pd
import matplotlib.pyplot as plt
# reading csv file  and making a dataframe from csv files
# create csv from excel
df=pd.read_csv("data .csv")           #data.csv file is present in your cwd , having columns Marks 1, Marks2, Name
df.plot.bar()         		#to plot bar graph using matplotlib

		#to show the graph
print('\nmax marks\n',df['Marks1'].max())  	#to get maximum marks from Marks1 column
print('\nmin marks\n',df['Marks1'].min())		 #to get minimum marks

df1=df[['Marks1']]			#select Marks Column Only
df1.plot.pie(subplots=True)		#to plot pie chart
plt.show()
lp=df['Marks1']-df['Marks2']		#subtract one column from another
print(lp)
total=lp.sum()			#to calculate sum
print('\n',total)

