//now we going to change version of yargs
const c =require('yargs')


//then run this command node code2.js --version
//then you have command function in yargs
//this command function contains various this 
//as it attribute like
//1.name of command
//2.handler that contains a function which tells what task need to done
//like here in hanler we just going to print on console   
c.command({
command:'hello',
describe:'add a new node',
handler :function (){
	console.log('printing hello on  command run ')
}
}
)
//if you don't write parse then i will not print anything becoz to yargs to used for string parsing so we need parse at last
c.parse()

//to run this handler we need to type on cmd that node code.js command_name
// here like node code2.js hello