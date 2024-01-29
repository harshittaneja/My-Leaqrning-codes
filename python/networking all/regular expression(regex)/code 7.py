#looking for email address part 2
#fine _tuning string extraction

#importing module
import re

#given string we need to find email address from it
x='From harshithhh090@gmail.com sat jan 5 09:14:16 2020'

y=re.findall('^From (\S+@\S+)',x)
print("y=re.findall('^From (\S+@\S+)',x) :",y)
#output logic of this regilar expression=>  '^From (\S+@\S+)'

#1. ^from shows that the charcter must be starts with  from 
#2. then space comes then bracket shows that we only need bracket character not from with it into the list 
#3. otherwise last code is similar with it

#in HIndi  from ke baad jo ho vo cahihye from pher soace then jo bracket mai hai use list me dall do  bracket mai to same email address wala logic hai 

#gmail.com kaise find kare
k=y=re.findall('@([^ ]*)',x)
print("k=y=re.findall('@([^ ]*)',x):",k)

#logic of '@([^ ]*)',x

#1. @ show after this
#2. () bracket shows after at symbol but not include at in it
#3. [^ ] this shows non blank character
#4. * check as may times as you can

#other logic
e=y=re.findall('^From .*@([^ ]*)',x)
print("e=y=re.findall('^From .*@([^ ]*)',x) :",e)
