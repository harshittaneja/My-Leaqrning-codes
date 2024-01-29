import pandas as pd
staff_df = pd.DataFrame([{'Name': 'Kelly', 'Role': 'Director of HR'},
                         {'Name': 'Sally', 'Role': 'Course liasion'},
                         {'Name': 'James', 'Role': 'Grader'}])

student_df = pd.DataFrame([{'Name': 'James', 'School': 'Business'},
                           {'Name': 'Mike', 'School': 'Law'},
                           {'Name': 'Sally', 'School': 'Engineering'}])

#staff dataframe
print("staff dataframe")
print(staff_df.head())
print('\n')
print('student dataframe')
print(student_df.head())
#concat
print("\n concating dataframe without axis=1")
f=[staff_df,student_df]
concated_value=pd.concat(f)
print(concated_value)
#note if axis =1 then at same index it will shows horizontally to avoid nan
#also axis=0 is sililar not to pass it 
concated_value1=pd.concat(f,axis=1)
print("\n concating dataframe ,axis=1")
print("\n note if axis =1 then at same index it will shows horizontally to avoid nan \n ")
print(concated_value1)

print("\n concating dataframe with keys")
c1=pd.concat(f,keys=['a','b'])

print(c1)

