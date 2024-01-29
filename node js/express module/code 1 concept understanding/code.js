//In node js web use web frame work to built web application that application 
//that framework in node js is called express

//in python we use django framework  to make website backend

//in java we use spring frame to make website backend

// we are now going to make express application that returns hello word

//express is not built framework its a external framework
//to install we need to type npm install express (this will install latest version)
//but if you want to install specific version then command npm install express@versionn(1.0.0)
const c=require('express');

//this command is to intialize express module 
//by intializing means you can now excess express function present in module
const k= c()
// know using express we are going to send request to server
// we need to start server here it done in below line

//app.listen(port) here this way you can start the server

// we need to check our server started or not that is check by below using 
// using request or respond parametered functionwith port number in listen function
k.listen(9000, function(request,respond){

console.log("server is running")
});

