# import datetime module 
import datetime

# import datetime as attribute
#eg import datetime as dt
#dt.date.today()

# this will print todays date in year-month -date
print(datetime.date.today())
# this fill print the year
print(datetime.date.today().strftime("%Y"))
# this will  print the month
print(datetime.date.today().strftime("%B"))
# this will  print the day
print(datetime.date.today().strftime("%d"))
#this will print weak number of month of this year out of 7*12 months total 
print("week number of month",datetime.date.today().strftime("%W"))
# week day of current week like out of 0 to 6
#like today when i was writting this is wednesday so small w print 3   
print("week day of week",datetime.date.today().strftime("%w"))
# print day of year out 365 day 
print("day of year ",datetime.date.today().strftime("%j"))
# this will print current day name like today is wednesday
print("day of week : ",datetime.date.today().strftime("%A"))
#date time now => 2020-04-22 14:35:02.260815
print("date time now =>",datetime.datetime.now())
