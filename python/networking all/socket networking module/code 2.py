import socket 

ob=socket.socket(socket.AF_INET,socket.SOCK_STREAM)

ob.connect(('data.pr4e.org',80))

#so as now connection is establish we need to send data 


# so we need to request server by using HTTP command 

command='GET http://data.pr4e.org/romeo.txt HTTP/1.0\r\n\r\n'.encode()
#encode function does convert string data(string data is unicode) into byte data


#the line \r\n\r\n means enter enter  or use \n\n

#then send this request command
# by using send function sendd command on server

#note you first send request then server respond it 
ob.send(command)

#now after sending we need to receive data using while loop

while True:
    #we receive data using receive function
    #
    data =ob.recv(512)
    #we are going to receive 512 charcter
    if len(data)<1:
        #if length of data from recieve is less than 1 then break (END of file)
        break
    #then print data using
#decode function(decode function does converting byte data into string data)
    #strind data is also unicode code combination
    #converting is done by UTF -8 conversion
    print(data.decode())
#closing the sockect connection
ob.close()
    
'''
output

this is metadata below

HTTP/1.1 400 Bad request

content-length: 90

cache-control: no-cache

content-type: text/html

connection: close



body below 


'''
#after metadata show blank then body of document

#In General    inisde computer (unicode data )=> byte (by encode) => at server we have asci code or we say it UTF- 8 data

#python mai unicode structure or server mai UTF-8 or Ascii code hai  so we send data by encoding and decoding using making data into byte 

    

