#file handling
'''
modes of file handling
1. r read (this mode will work when only file is present in the directory)

2. w write(this mode will work to write the data from file it doesn't matter
file is present or not if file is not present it will create then it will write)

3. a (this mode is same as write mode but the difference is in write
whenever we open the file in write mode it will delete the previous written
data of file but it will not delete in append mode and start writting after that
text)


4. r+(read + write )

5. w+(write +read )

6. a+(append +read )


7. rb(read binary files )

8. wb(write binary files)

9. ab(append binary files )
'''
#function in file handling present
#1.open()
#2.close()
#3.read()
#4.write()
#5.readline()
#6.readlines()
#7.seek()
#8.truncate()


#example 1
def fun():
    #writing data into file 
    j=open('code.txt','w')
    #data into file writting 
    inputtofile=input()
    #file variable used with write function
    #j.write(data)
    j.write(inputtofile)
    #close file in write mode
    j.close()
    #read data from file using read mode
    j=open('code.txt','r')
    #printing data on console 
    print(j.read())
    
    



fun()






