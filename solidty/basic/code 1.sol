pragma solidity ^0.4.0;
//complier version 0.4.2+ commit.af6afb04.mod.Emscripten.clang 
// create a contract bidder contains data type 1. name type String ,
//2. uint (unordered integer) bidAmount (public which means it can acess from gui button in remix)
// it means if you don't make public then it is private by default and not show like button as it image =code1.jpg
//constant datatype means its value can't be change once set 
// here default value of eligible as false as shown in picture 


contract bidder{
    string name;
    uint public bidAmount=2000;
    bool public eligible;
    uint constant bidmid=1000;
}