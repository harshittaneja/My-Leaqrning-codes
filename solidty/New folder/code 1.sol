pragma solidity ^0.4.0;
contract a{
    
    uint public data=13;
    
}
contract B{
    a ob =new a();
    function f()public{
        uint d=ob.data();
    }
    
}