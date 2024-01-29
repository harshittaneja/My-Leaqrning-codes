pragma solidity ^0.4.0;
//complier version 0.4.2+ commit.af6afb04.mod.Emscripten.clang 

contract bidder{
    
//data types
// as we make string public now so it will acess  like button and give empty string 
    string public name="harshit";
 
    uint public bidAmount=2000;
    bool public eligible;
    uint constant bidmin=1000;


//methods
//1.
//syntax : function keyword then name (paramter) acess specifier {body}
function setNAME(string nm) public{
    //setting value of name variable with nm varaiable default value of name is "harshit"
   name=nm; 
}
// method 2
function bidAmountset(uint a) public{
//setting value of bidAmount variable with (uint a) varaiable default value of name is 2000
bidAmount=a;
    
}
// method 3 to check the eligibilty 
function determine_eligibilty() public{
    //conditional we use
//if bidAmount is greter then minimum eligible criteria then it return true else return false
if(bidAmount> bidmin){
    //setting eligible variable to true as condition full fill 
    eligible=true;
    
}

    
}
}