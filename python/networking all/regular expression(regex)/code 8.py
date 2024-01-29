#escape character

#looking for email address part 2
#fine _tuning string extraction

#importing module
import re
x='we just received $10.00 for cookies.'
y=re.findall('\$[0-9.]+',x)

print(y)
#output logic '\$[0-9.]+'

#1. \$ tells that it start with dollar sign
#2. [0-9.] number with dotes in it
#3. + means followed by more charcter

