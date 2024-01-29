def fun(n):
    d=list(n)
    for i in d:
        if i=='a':
            d.remove(i)
        elif i=='e':
             d.remove(i)
        elif i=='i':
            d.remove(i)
        elif i=='o':
            d.remove(i)
        elif i=='u':
            d.remove(i)
    print(d)
    str1=""
    for i in range (len(d)):
        str1=str1+d[i]
    print(str1)
            
     
        
value=str(input())    
fun(value)
