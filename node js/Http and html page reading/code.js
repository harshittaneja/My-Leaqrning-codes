//this way will not get image data
//importing http module for server creation 
var h = require('http');
//importing file system module for read html page
var f = require('fs');
// creating server using createserver function in http module
h.createServer(function (req,res) {
	//checking if request.urlcontains /
	if (req.url === '/'){
	//read html data from html page usinf fs(filesystem) module 
	f.readFile('./Harshit.html', function(err, data) {
		//resposne checking is html type or not checking 
	 res.writeHead(200, {'Content-Type': 'text/html'});
	 //write html data at response side on web port as a web page
	 //simple means display all the web data as a web page
         res.write(data);
         //end the response
	 res.end();
	});
}

}).listen(8080);