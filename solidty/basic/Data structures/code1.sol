pragma solidity ^0.4.0;
contract coin{
//data type address
address public H1;
//we use mapping function which is a verstile data structure that is key value pair 
//syntax : mapping(address => unit) public balance 
// we are going to map address with balance
mapping(address => uint) public balance;
//balance is like dictionary in python balance[key] here key is value 

//now we are going to make event 
//keyword for making event then name of event

//event  name(from where to send, to whom ,what amount to be send )
event    sent(address from, address to , uint amount );

//now create a constructor
function coin()public{
//we use message which is complex data structure 
// we use message attribute sender
//msg.sender gives the address of sender's message
//so to store that address we must need a adress type variable that is H! maked above  

H1=msg.sender;
}
//function creation
//function name(datatype parameter reciever,datatype amount to send ){body}
function  mint(address receiver   ,uint amount)public {
    //we will check if sender address is not equal to H1 datatype for not (if not then return ) 
    if (msg.sender!=H1){
        return;
    }
    //after the real owner requester for balance then this will go as follows
    balance[receiver]+=amount;
}



//2. function name
function send(address receiver   ,uint amount)public{
    //we will check now that is sender has amount to send in account  present or not 
     if(balance[msg.sender]<amount){
         //as balance is not  available for transaction 
         return;
     } 
     else{
         //this means ammount present
         balance[msg.sender]=balance[msg.sender]-amount;
         //deduction amount from sender account 
         
        // balance[key=> address]= integer amount(unit)  
         balance[receiver]=balance[receiver] +amount;
         //adding amount to receiver account now
         
         //calling event log 
         //callind event set made above sent(address,address,amount) we can at most pass three 
         //argument as parameter in event always remember
         sent(msg.sender, receiver,amount);
     }
    
}
    
    
    
}
