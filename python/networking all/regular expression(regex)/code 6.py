#looking for email address
#fine _tuning string extraction

#importing module
import re

#given string we need to find email address from it
x='From harshithhh090@gmail.com sat jan 5 09:14:16 2020'

y=re.findall('\S+@\S+',x)
print(y)
#output logic+ means of '\S+@\S+'

#1.   shows that \S is non blank character
#2. + means there is more charcter present
#3. @ show there must be @ symbol present in the non blank charcter followed by more character
#4    after @ symbol it means there also non blank charcter after @ comming (dubbara dhundu non blank character after @ come)
#5. + again do same after @ character
