import pandas as pd
import matplotlib.pyplot as plt
# reading csv file  and making a dataframe from csv files
df=pd.read_csv("objective 10.csv")
#data.csv file is present in your cwd , having columns Marks 1, Marks2, Name
#first three months
print("menu driven program :\n 1.press 1 to print first 3 months.  \n2.press 2 to print last three months \n3.Maximum income containing Month \n4.Plot a Pie graph for Income also set index as Month \n5.Minimum Income containing month With PIE Graph \n6.Total cash in hand after dec., 2019. With graph. \n7.Loss and profit month wise.  ")
print("Enter your choice :")
a=int(input())
if(a==1):
    df1=df.head(3)
    df1.plot.bar() 
    plt.show()
if(a==2):
    df2=df.tail(3)
    df2.plot.bar() 
    plt.show()
if(a==3):
    ind=df[['Income']].idxmax()
    print(ind)
    df2=df.loc[ind]
    print("maximum Income :",df['Income'].max(),"RS at month :",df2['month'])
    #print("maximum amount of Income:",maximum,"RS")
    #or
    #another way get the index of maximum value usin this index
    x=max(df['Income'])
    indexes=df[df['Income'] == x].index.tolist()
    dk=df.loc[indexes[0]]
    print("maximum icome month :",dk['month'])
if(a==4):
    # creating dataframe
    
    #df2=pd.DataFrame(df['Income'])
    df2=df.set_index('month')
    df3=df2['Income']
    
    print(df3)
    df3.plot.pie(subplots=True) 
    plt.show()
##
if(a==5):
    ind=df[['Income']].idxmin()
    df2=df.loc[ind]
    print("mnimum Income :",df['Income'].min(),"RS at month :",df2['month'])
if(a==6):
    total=df['Income'].sum()
    print("total Income :",total)
if(a==7):
    df1=df['month']
    df2=pd.DataFrame(columns=['Profit OR LOSS'])
    df2['Profit OR LOSS']= df['Income']-df['Expense']
    
    frames=[df1,df2]
    res=pd.concat(frames,axis=1)
    print(res)
    res.plot() 
    plt.show()
    

