#outer join (union )
import pandas as pd
print("(staff) ")

staff_df = pd.DataFrame([{'Name': 'Kelly', 'Role': 'Director of HR'},
                         {'Name': 'Sally', 'Role': 'Course liasion'},
                         {'Name': 'James', 'Role': 'Grader'}])
staff_df = staff_df.set_index('Name')
student_df = pd.DataFrame([{'Name': 'James', 'School': 'Business'},
                           {'Name': 'Mike', 'School': 'Law'},
                           {'Name': 'Sally', 'School': 'Engineering'}])
student_df = student_df.set_index('Name')
print(staff_df.head())
print("\n ")
print("(student) ")
print(student_df.head())
print("\n")
#outer join using merge function
print("(outer join (union)) ")
print(pd.merge(staff_df, student_df, how='outer', left_index=True, right_index=True))
#inner join using merge function
print("\n (inner join (intersection)) ")
print(pd.merge(staff_df, student_df, how='inner', left_index=True, right_index=True))
#left joins
print("\n(left join (only students)) ")
print(pd.merge(staff_df, student_df, how='left', left_index=True, right_index=True))
#right joins
print("(right join (only staff)) ")
print(pd.merge(staff_df, student_df, how='right', left_index=True, right_index=True))
#now joines without indexes
staff_df = staff_df.reset_index('Name')
student_df = student_df.reset_index('Name')
#left join without index (left join means left wale ssare or right waale comman)
print("left join without index (left join means left wale ssare or right waale comman)\n")
print(pd.merge(staff_df, student_df, how='left', left_on='Name', right_on='Name'))
#right join without index (left join means right wale ssare or left waale comman)
print("right join without index (left join means right wale ssare or left waale comman)\n ")
print(pd.merge(staff_df, student_df, how='right',left_on='Name', right_on='Name'))
#add some values
staff_df = pd.DataFrame([{'Name': 'Kelly', 'Role': 'Director of HR', 'Location': 'State Street'},
                         {'Name': 'Sally', 'Role': 'Course liasion', 'Location': 'Washington Avenue'},
                         {'Name': 'James', 'Role': 'Grader', 'Location': 'Washington Avenue'}])
student_df = pd.DataFrame([{'Name': 'James', 'School': 'Business', 'Location': '1024 Billiard Avenue'},
                           {'Name': 'Mike', 'School': 'Law', 'Location': 'Fraternity House #22'},
                           {'Name': 'Sally', 'School': 'Engineering', 'Location': '512 Wilson Crescent'}])
print(pd.merge(staff_df, student_df, how='left', left_on='Name', right_on='Name'))

#inner join with multiple

staff_df = pd.DataFrame([{'First Name': 'Kelly', 'Last Name': 'Desjardins', 'Role': 'Director of HR'},
                         {'First Name': 'Sally', 'Last Name': 'Brooks', 'Role': 'Course liasion'},
                         {'First Name': 'James', 'Last Name': 'Wilde', 'Role': 'Grader'}])
student_df = pd.DataFrame([{'First Name': 'James', 'Last Name': 'Hammond', 'School': 'Business'},
                           {'First Name': 'Mike', 'Last Name': 'Smith', 'School': 'Law'},
                           {'First Name': 'Sally', 'Last Name': 'Brooks', 'School': 'Engineering'}])
print(pd.merge(staff_df, student_df, how='inner', left_on=['First Name','Last Name'], right_on=['First Name','Last Name']))
