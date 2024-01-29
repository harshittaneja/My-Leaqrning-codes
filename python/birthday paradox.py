import random
import datetime 
# birthday array
birthday=[]
i=0
while(i<50):
    year=random.randint(1895,2020)
    #1895 is becoz the oldest person ever leave


    # now check year is leap year or not
    if(year%4==0 and year%100!=0 or year%400==0):
        leap=1
    else:

        leap=0
    # generating month
    month =random.randint(1,12)
    if(month==2 and leap==1):
        day=random.randint(1,29)
    elif(month==2 and leap==0):
        day=random.randint(1,28)
    # month 7 and 8 both are of 31 days  
    elif(month==7 and month==8):
        day=random.randint(1,31)
    elif(month%2!=0 and month<7):
        day=random.randint(1,31)
    elif(month%2==0 and month>7 and month<12):
        day=random.randint(1,31)
    else:
        day=random.randint(1,30)
    dd=datetime.date(year,month,day)
    # tells which day of year it is 
    day_of_year=dd.timetuple().tm_yday
    i=i+1
    birthday.append(day_of_year)
    
birthday.sort()
i=0
while(i<50):
    print(birthday[i])
    i=i+1

    
        

