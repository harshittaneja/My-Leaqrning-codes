Python 3.7.2 (tags/v3.7.2:9a3ffc0492, Dec 23 2018, 22:20:52) [MSC v.1916 32 bit (Intel)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> format(3.45678, ".2f")
'3.46'
>>> format(3.45678, "10.2f")
'      3.46'
>>> format(3.45678, "20.2f")
'                3.46'
>>> format(3.45678, "<10.2f")
'3.46      '
>>> str.format(qws)
Traceback (most recent call last):
  File "<pyshell#4>", line 1, in <module>
    str.format(qws)
NameError: name 'qws' is not defined
>>> str.format("qws")
'qws'
>>> print('{} is good'.format("Ram"))
Ram is good
>>> print('{} is good {}'.format("Ram" , 3))
Ram is good 3
>>> print('{1} is good {0}'.format("Ram" , 3))
3 is good Ram
>>> str.format('qws')
'qws'
>>> print('{ :.2f}'.format(3.34556))
Traceback (most recent call last):
  File "<pyshell#10>", line 1, in <module>
    print('{ :.2f}'.format(3.34556))
KeyError: ' '
>>> print('{ :<.2f}'.format(3.34556))
Traceback (most recent call last):
  File "<pyshell#11>", line 1, in <module>
    print('{ :<.2f}'.format(3.34556))
KeyError: ' '
>>> print('{ :<.2f}'.format(3.45653))
Traceback (most recent call last):
  File "<pyshell#13>", line 1, in <module>
    print('{ :<.2f}'.format(3.45653))
KeyError: ' '
>>> print('{:.2f}'.format(3.34556))
3.35
>>> print('{:<.2f}'.format(3.34556))
3.35
>>> print('{:>.2f}'.format(3.34556))
3.35
>>> print('{:>.2f}'10.format(3.34556))
SyntaxError: invalid syntax
>>> print('{:>10.2f}'.format(3.34556))
      3.35
>>> print('{:<10.2f}'.format(3.34556))
3.35      
>>> 
print('{:^20.2f}'.format(3.34556))
        3.35        
>>> 
print('{:_20.2f}'.format(3.34556))
Traceback (most recent call last):
  File "<pyshell#21>", line 2, in <module>
    print('{:_20.2f}'.format(3.34556))
ValueError: Invalid format specifier
>>> print('{:_^20.2f}'.format(3.34556))
________3.35________
>>> print('{:@^20.2f}'.format(3.34556))
@@@@@@@@3.35@@@@@@@@
>>> print('{:@^20.3s}'.format("Akshay"))
@@@@@@@@Aks@@@@@@@@@
>>> 
print('{:>20.3s}'.format("Akshay"))
                 Aks
>>> 
