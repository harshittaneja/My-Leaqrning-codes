//run on cmd by command node code.js

//created ob as a file handler 
var ob=require('fs')
//not in read mode if file is not present then it will not make automatically
//   =file object.function(File-name)       

console.log(ob.readFileSync("a/Harshit.txt").toString())

