import csv
#importing csv module
#% precision 2
with open('data .csv') as csvfile:
    l=list(csv.DictReader(csvfile))
    
 #create a list l and made data of file as list of dictionary using csv DictReader

#printing first tall elements of list
print(l[0:len(l)+1])
#not working
'''
output:
is a list

[OrderedDict([('s no ', '1'), ('Marks1', '67'), ('name', 'harshit'), ('Marks2', '10')])
, OrderedDict([('s no ', '2'), ('Marks1', '79'), ('name', 'naman'), ('Marks2', '20')])
, OrderedDict([('s no ', '3'), ('Marks1', '70'), ('name', 'yash'), ('Marks2', '30')])
'OrderedDict([('s no ', '4'), ('Marks1', '2'), ('name', 'murli'), ('Marks2', '40')])
, OrderedDict([('s no ', '5'), ('Marks1', '23'), ('name', 'jai'), ('Marks2', '50')])]
'''
print("total no of records: ",len(l))
# as l is a list but elements of list is a dictionary so we can see the key values of dictionaty elements using key function 
print(l[0].keys())
print(type(l[0]))
# l[0]=elemets=dictionary
print(l[0]['Marks1'])
print(l[1]['Marks1'])
k=0
#this is a method to add all marks values of all records
#to find sum
for i in range(len(l)):
  k=int(l[i]['Marks1'])+k
  #241
print("sum :",k)
average=k/len(l)
print("average",average)
#this is short way creating average 
print(sum(int(i['Marks1']) for i in l)/len(l))
#here we are just using output, i/o operation  and then for loop checking as similar in slip function as i done in class


#note this will create a set of itemes of marks(as set is always unodered so sequence can be change)
print(set(i['Marks1'] for i in l))
    

