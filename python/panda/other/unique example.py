import pandas as pd
import matplotlib.pyplot as plt
# reading csv file  and making a dataframe from csv files
df=pd.read_csv("unique value testing.csv")
print(df)
print("df['scores'].unique() :",df["scores"].unique())

