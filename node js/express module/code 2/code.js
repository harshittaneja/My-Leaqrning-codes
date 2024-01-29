const c= require('express')

const A= c();
//in HTTP we have diffrent method to send the request and get resposnse
//method in htttp is get(), put(), post() and delete()

//method used to get or recieve data   / is default path and for root 
A.get('/',function(request,respond){
//this respond .send will going to print our hello world at localhost:2000
respond.send('hello Harshit')
//respond.send sending respond to browser
console.log("hello world on console also with express")
})
//get() method takes to arugments get(argument1,argumnet2)
//get('url','function(request,respond){}')
//request has data send from client to server
//respond has data which send by server to client

A.listen(2000,function(request,respond){
//here in listen method we are creating server 
	console.log("server is running")
})
// note here the url in get method is static means it is fixed  