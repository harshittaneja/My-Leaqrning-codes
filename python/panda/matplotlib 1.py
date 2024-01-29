import pandas as pd
import matplotlib.pyplot as plt
# reading csv file  and making a dataframe from csv files
df=pd.read_csv("data .csv")           #data.csv file is present in your cwd , having columns Marks 1, Marks2, Name
df.plot.bar()         		#to plot bar graph using matplotlib
plt.show()		#to show the graph


