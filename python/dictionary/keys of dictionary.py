d={'d':65,'a':35,'c':1,'b':79}

for i in sorted(d.items(),key = lambda x : x[1]):
    print(i[0],i[1])
    
print("reverse of dictionaty:")
d={'d':65,'a':35,'c':1,'b':79}
for i in sorted(d.items(),key = lambda x : x[1],reverse=True):
    print(i[0],i[1])
print("code")    
d={'d':65,'a':35,'c':1,'b':79}
for i in sorted(d.items()):
    print("key",i[0])
    print("values",i[1])