//run on cmd by command node code.js

//created ob as a file handler 
var ob=require('fs')
//not in write mode if file is not present then it will make automatically
//then write on it  
data="hello harshit" 
//putting data into file like harshit concat taneja 
ob.writeFileSync("Harshit.txt",data +" taneja")


