//importing user define module = app2.js inside moduleharshit folder 
//making user defined sum function(adding(3,5)) in node js
//getting value of adding from app2.js module 
const adding =require('./moduleharshit/app2')
const total=adding(3,5)
console.log(total)
