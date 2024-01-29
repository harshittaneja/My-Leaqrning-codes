pragma solidity ^0.4.0;

contract Greeter  {
    string public yourName;  // data
    
    /* This runs when the contract is executed */
    //constructor
    function Greeter() public {
        yourName = "World";
    }
    //it is used to intialize the data variable 
    function set(string  name) public {
        yourName = name;
    }
    
    function hello() constant public returns (string memory) {
        return yourName;
    }
}
