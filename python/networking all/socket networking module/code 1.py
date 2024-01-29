#Here we deal with netwrking se we need to uderstand socket and ports no

#for example : www.harshit.org.8080/li
#                 hostname    , portnumber

#8080 is web port number

#now we use module that name is socket

import socket

#this module has a function : socket(parameters)  this function returns object
ob=socket.socket(socket.AF_INET,socket.SOCK_STREAM)

#(socket.AF_INET,socket.SOCK_STREAM )parameters inside socket function is
#kind of endpoint that ready to connect out but not connect yet they are like
#coneection point 
 
#ob.connect(('hostname of website',port number))
ob.connect(('data.pr4.org',80))



#above code is just a example to connect far way computer by just this code
#we still not sending data yet there different set of rules to connect with
#different port web(8080) or 443 ,email(25), login(23), personal mail box (180 or 110)


'''
The Hyper text transfer protocol is the set of rules to allow browser
to retrieve web documents from servers over the internet

http://WWW.dr_chuck.com/page1.htm

protocal    host        document 

'''

