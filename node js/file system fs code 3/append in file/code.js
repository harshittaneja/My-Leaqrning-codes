//run on cmd by command node code.js

//created ob as a file handler 
var ob=require('fs')
// we are going to appended data into file       
ob.appendFileSync("Harshit.txt","hello")
//printting data on console after appending above 
console.log(ob.readFileSync("Harshit.txt").toString())

