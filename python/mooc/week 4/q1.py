n,v1,v2=input().split(" ")
n,v1,v2=int(n),int(v1),int(v2)
time1=((2**.5)*n/v1)
time2=((2)*n/v2)
if(time1>time2):
  print("Cab",end="");
else:
  print("Walk",end="");
