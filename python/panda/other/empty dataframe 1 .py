import pandas as pd                                                                                                                            #OUTPUT
df = pd.DataFrame(columns=['User_ID', 'UserName', 'Action'])
print("Empty Dataframe ", df)
#As we have created an empty DataFrame, so let’s see how to add rows to it
df= df.append({'User_ID': 23, 'UserName': 'Riti', 'Action': 'Login'}, ignore_index=True)
df = df.append({'User_ID': 24, 'UserName': 'Aadi', 'Action': 'Logout'}, ignore_index=True)
df = df.append({'User_ID': 25, 'UserName': 'Jack', 'Action': 'Login'}, ignore_index=True)
print("\nDataframe Contents ", df)
