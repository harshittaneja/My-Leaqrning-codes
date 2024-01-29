//run on cmd by command node code.js

//created ob as a file handler 
var ob=require('fs')

ob.writeFileSync("sample.txt","Hello Mr harshit")
//print value on console by tostring methid cahnges adrress buffer to value 
//using to string
console.log(ob.readFileSync("sample.txt").toString())