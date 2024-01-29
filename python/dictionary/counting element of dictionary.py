#creating element of dictionary
count=dict()
#list 
name=['csev','cwen','csev','zqian','cwen']
#csev=2
for i in name:
    #checking elements is already present or not??
    if i not in count:
        count[i]=1
    else:
        count[i]=count[i]+1
print(count)
