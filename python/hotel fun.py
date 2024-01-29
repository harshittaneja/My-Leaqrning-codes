print("enter the name &address of customer and id phone no")
name=input()
address=input()
id=input()
phone_no=eval(input())
print("enter the total number of days you want to stay :")
day=eval(input())
print(" No of available services opted by user \n 1.gold \n 2. silver \n 3.bronze \n enter the choice")
n=eval(input())
if n==1:
    basic=10000
    print("Gold fix charge =>10,000 Rs per person per night ")
    print("services : \n 1.spa =>500 Rs \n  2.bar 5000 RS per night (unlimited drinks !!)\n 3. massage 2000 => per person \n 4.laundry=>300")
    print("\n enter the days in spa")
    spa=eval(input())
    ta= spa*500
    print("\n enter the days used laundry")
    laundry=eval(input())
    tb=  laundry*300
    print("\n enter the days in bar")
    bar=eval(input())
    tc=  bar*5000
    print("\n enter the days taken massage")
    massage=eval(input())
    td= massage*500
    total=basic+ta+tb+tc+td     
    print("bill!!")
    print("--------------------------------------------------------------------------------------------------------------------------------------")      
    print("customer name =",name ,"\n id=",id,"Address - ",address,"\n spa bill:",ta,"RS","\n laundry bill :",tb,"RS","\n bar bill :",tc,"RS","\n massage bill:",td,"RS","\n total =",total,"RS")
          
     
elif n==2:
    basic=7000
    print("silver fix charge =>7,000 Rs per person per night ")
    print("services : \n 1.lunch =>250 Rs \n 2.dinner =>350 Rs per person per day \n 3.laundery 150 RS per night \n 4. additional bed 1250 => per person ")
    print("\n enter the days taken lunch")
    lunch=eval(input())
    ta=lunch*250
    print("\n enter the days taken dinner")
    dinner=eval(input())
    tb=dinner*350
    print("\n enter the days taken laundry")
    laundry=eval(input())
    tc=laundry*150
    print("\n enter the days taken additiuonal bed ")
    bed=eval(input())
    td=bed*1250
    total= basic+ta+tb+tc+td
    print("bill!!")
    print("----------------------------------------------------------------------------------------------------------------------------------------")      
    print("customer name =",name ,"\n id=",id,"Address-",address,"\n dinner bill:",ta,"RS","\n lunch bill :",tb,"RS","\n bar bill :",tc,"RS","\n additional bed:",td,"RS","\n total =",total,"RS")
if n==3:
     basic=4000
     print("bronze fix charge =>4,000 Rs per person per night ")
     print("services : \n 1.breakfast=>100 Rs \n 2.car parking =>50 Rs \n 3.hot water 50 RS per night \n  ")
     print("\n enter the days taken breakfast")
     breakfast=eval(input())
     ta=breakfast*100
     print("\n enter the days taken car parking")
     parking=eval(input())
     tb=parking*250
     print("\n enter the days taken hot water")
     hotwater=eval(input())
     tc=hotwater*250
     total= basic+ta+tb+tc+td    
     print("bill!!")
     print("----------------------------------------------------------------------------------------------------------------------------------------")      
     print("customer name =",name ,"\n id=",id,"Address-",address,"\n breakfast bill:",ta,"RS","\n car parking bill :",tb,"RS","\n hotwater bill :",tc,"RS","\n additional bed:",td,"RS","\n total =",total,"RS")




z=input()
    

    
