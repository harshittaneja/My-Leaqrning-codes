# Create DataFrame by using scalar values single dictionary 
import pandas as pd
dict1 ={'a':1, 'b':2, 'c':3, 'd':4}                                                                                #OUTPUT
#dfseries = pd.DataFrame(dict1) 
#this line will give error som have to pass the index
dfseries = pd.DataFrame(dict1,index=[4])
print(dfseries)

#output

# column a b c d
#        1 2 3 4
