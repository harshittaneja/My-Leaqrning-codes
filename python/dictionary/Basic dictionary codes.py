#empty dictionary
#dictionary is unodered unigue datstructure it is a collection type
#(colection means store multiple type of data )
d={}
print("a={}",type(d))
d={"a":1,"b":2,"c":3}
# d{key}=value
print("d['b']:",d["b"])
#method to create empty dictionary
dictionries=dict()
#key function
print("print(d.keys()):",d.keys())
print("print(d.values) :",d.values())
print("print(d.intems) :",d.items())
#traversing from list 
for i,j in d.items():
    print(i)
for i,j in d.items():
    print(j)
for i,j in d.items():
    print(i,j)
k={'sachin':{'odi':3512,'test':572},'virat':{'odi':6219,'test':357}}
print("k={'sachin':{'odi':3512,'test':572},'virat':{'odi':6219,'test':357}}")
print("k['sachin']['odi'] :",k['sachin']['odi'])
print("k['sachin']['odi'] :",k['sachin']['test'])
#print("k['test']:",k['test']) this line gives error

#treversing of nested dictionary
for name,run in k.items():
    print(name)
    
for name,run in k.items():
    print(run)
    
for name,run in k.items():
    #run['odi'] =d['key']
    print(run['odi'])
    
for name,run in k.items():
    
    print(run['test'])
    
for name,run in k.items():
    for i,j in k.items():
        print(j)
        
for name,run in k.items():
    for i in run:
        print(run[i])
        
        print(j)

s={"name":"harshit" ,"lastname":"taneja","phnone":8930019181}
x=('naman','parashar','99212215464')
name,lastname,phnone=x
print(name)
print(lastname)
print(phnone)
#all element in dictionary are uique
x={"a":1,"a":1,"a":1,"a":1}
print("x={'a':1,'a':1,'a':1,'a':1,}   :")
print(x)
# another
g={}
g['a']=1
g['a']=1
print("g['a']=1 \n g['a']=1")
print(g)
#get method example
stuff = dict()
print(stuff.get('candy',-1))

#creating element of dictionary(count the occureces of element)
count=dict()
#list 
name=['csev','cwen','csev','zqian','cwen']
#csev=2
for i in name:
    #checking elements is already present or not??
   #if i not in dictionary
    if i not in count:
        count[i]=1
    else:
        count[i]=count[i]+1
print(count)

#smilar above
#creating element of dictionary(count the occureces of element) using get
count=dict()
#list 
name=['csev','cwen','csev','zqian','cwen']
#csev=2
for i in name:
    
    #checking elements is already present or not??
    count[i]=count.get(i,0)+1
print(count)

# more examples
dictionary={'harshit':4103,'yashasvi':4069,'murli':4089,'kritick':4106}
for key in dictionary:
    print(key,dictionary[key])

#converting dictionary to list
m=list(dictionary)
print("m=list(dictionary) :",m)
#this will print list of keys
print(dictionary.keys())
#this will print list of values
print(dictionary.values())
#this will print list of of tuple of elements 
print(dictionary.items())









