//pre built http module in node js 
var http = require("http");
//setting server at port number 8000
var port = process.env.VCAP_APP_PORT || 8000;
//Enviorment setup at port 8080
//Creating a Server with built function createserver in http module 
//this function contains callback function inside function having two argument 

http.createServer(function (request, response){
	//when server is created then it will send rsponse to client 
	//means send us respond back at port 8000 as set by us
	//below line check the status is sucessfully connect or not 
	response.writeHead(200, {'Content-Type': 'text/plain'}); 
	//if connect then send response back at port 8000 by printing 
	//text "Hello Harshit " at port 8000
	response.end('Hello Harshit');
}).listen(port);
//at last it will listen the port  at 8000
//run at cmd node code.js
//check by typing at http://localhost:8000/