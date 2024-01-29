#matching and extracting data 

#importing module
import re

#sample string
x='my 2 Favourite number are 19 and 42 great 299 '

#the square braket is weard [0-9] it indicates 1 character
#this means it contains 1 character in the bracket or range in here list may be 
#[0-9] + this plus tells we have 1 or more digit 

#methoc call findall(what we will find,from where we need to find)
y=re.findall('[0-9]+',x)
print(y)


# it will find where the number lyes in the string x and put them into list Y
#as 2 lyes then 19 (not think it will only find number from 0 to 9 )
# it is using like 1 digit character or  more digit character  

#example 2

w=re.findall('[AEIOU]+',x)
#this will see is there is any uppercase letter in string or >=1
#so her we don't have uppercase vowels but we have upercase alphabet F
#it will only see uppercase vowels or not alphabet so list remain empty 
print(w)
