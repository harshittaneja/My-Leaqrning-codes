pragma solidity ^0.4.0;

contract simplestorage  {
      uint sdata;  // data
    
    // function setting  data value
    function set(uint x) public {
        sdata = x;
    }
   //this function increment value of sdata
    function increment(uint n) public {
        sdata= sdata + n;
        return;
    }
    //this function decrement value of sdata
    function decrement(uint n) public {
        sdata= sdata - n;
        return;
    }
    
    //this will return current value which in this method 
    function get() constant public returns (uint) {
        return sdata;
    }
}
