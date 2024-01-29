//npm install validator
//website https://www.npmjs.com/
// command run on cmd to install validator npm install validator


var v = require('validator');
 
var c =v.isEmail('foo@bar.com');


//is valid email checking using validator it returns true so we print on console 
//built in validator functions and print it on log
console.log("var c =v.isEmail('foo@bar.com'); =",c)
console.log("v.isAlphanumeric('A123')=",v.isAlphanumeric("A123"))
console.log("v.isAlpha('123')=" ,v.isAlpha("123"))
console.log("v.equals('Harshit','Harshit') =",v.equals("Harshit","Harshit"))
console.log("v.equals('Harshit','Taneja') =",v.equals("Harshit","Taneja"))
console.log("v.isEmpty('')=",v.isEmpty(""))
console.log("v.isEmpty('a')=",v.isEmpty("A"))
console.log("v.isFloat('3.14')=",v.isFloat("3.14"))
console.log("v.isFloat('3')=",v.isFloat("3"))
console.log("v.isFloat('A')=",v.isFloat("A"))
console.log("v.isInt('1.2')=",v.isInt("1.2"))
console.log("v.isInt('1')=",v.isInt("1"))
console.log("v.matches('A','A')=",v.matches("A","A"))
console.log("v.matches('B','A')=",v.matches("B","A"))
console.log("v.isUppercase('ABC')",v.isUppercase("ABC"))
console.log("v.isUppercase('abc')",v.isUppercase("abc"))
console.log("v.isDate('2020/09/23')",v.isDate("2020/09/23"))
console.log("v.isDate('23-9-2000')",v.isDate("23-9-2000"))
console.log("v.isDate('23/9/2000')",v.isDate("23/9/2000"))
console.log("v.isLowercase('abc')",v.isLowercase("abc"))
console.log("v.isLowercase('ABC')",v.isLowercase("ABC"))
var a="{A:1,B:2,C:3}"
console.log(v.isJSON(a))
console.log("v.isURL('www.google.com')",v.isURL("www.google.com"))
console.log("v.isURL('cu.ac.in')",v.isURL("cu.ac.in"))