const c =require('express')

//intialization express module
const a=c();
// '/' this default url now we are going to se specific url 
a.get('/',function(request, respond){
	respond.send('default url')
  //  output  check in browser by type localhost:2000
});
// this '/author' is a specific utl 
a.get('/author',function(request, respond){
	respond.send('specific author  url')
	//output  check in browser by type localhost:2000/author
});
//now we are going to see concept of dynamic url
a.get('/author/:id',function(request, respond){
	const numbervariable = request.params.id;
	respond.send('Author ID :'+ numbervariable)
	//output  check in browser by type localhost:2000/author/20 or type localhost:2000/author/21
	//anynumber as id after author like localhost:2000/author/1
});

a.listen(2000);