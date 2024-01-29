pragma solidity ^0.4.0; 

// this code is ballot version 4 contains previous code we also going to use try catch 
//handling in it also modifier + function header

//contract like  main class in java

contract Ballot{
   
   // datatypes in contrzct  structure
  //1. structure 1
    struct Voter {
        //datatype variables
        uint weight;
        bool voted;
        uint8 vote;
        address delegate;
    }
   
    //2. structure 2
    struct Proposal {
        // this for vote count 
        uint voteCount;
    }
    //enumeration datatype
    //timestamp code enumeration with some variable    
    enum Stage {Init ,Reg,Vote ,Done}
//enumerationtype variable declaration setting it as init state means initazise it with 0
Stage public stage=Stage.Init;
//unsigned integer variable startTime
uint startTime;


address chairperson;
//address mapped with structure(Voter type) 
    mapping(address => Voter) voters;
    // mapping variable        x
   //structure type(Proposal) array name (simply means structure type array )
    Proposal[]                proposals;
    
    
    //now we are declaring a modifier
    //syntax => modifier   name of modifier(parameter){body }
 modifier w(Stage A) {
  require(stage == A);
  _;
}
    
   
    //constructor(argument which you put into delop side inputType)
    function  Ballot(uint8 _numProposals) public {
          //getting adress of sender and putting into address type vraiable  thats is chairperson 
        chairperson = msg.sender;
        // dictionary[address].weight=1 we are setting wieghtage of chairperson vote to 2
        voters[chairperson].weight = 2;
             //array.length=3 as we pass three in the deploy 
        proposals.length = _numProposals;
        
        //timelogic code here
        // means if stage=0 then set stage =1 state.reg  as below done
         //if small stage equal to large stage Init then put it into small stage reg
         stage=Stage.Reg;
         startTime=now;
        
        
        
    }
    
    //second function 
    function register(address toVoter) public w(Stage.Reg) {
        
        //here to avoid if else staement again and again we use modifier which
        //evertime compare it in the block as written above 
        //we just tell what stage now as her we tell in parameter its reg stage 
        // then it goes in the above code and compare and get back
        if (msg.sender != chairperson || voters[toVoter].voted){
        //second condition to stuck in loop is this 
            return;
        }
        //struct x
        //x[address].variable=value
        voters[toVoter].weight = 1;
        
        voters[toVoter].voted=false;
        
        if(now >(startTime+10 seconds)){
            stage=Stage.Vote;
            startTime=now;
            
        }
        
    }
    
          // vote function third function
    function vote(uint8 toProposal) public w(Stage.Vote) {
        //structurename        a
        Voter storage sender = voters[msg.sender];
        if (sender.voted || toProposal >= proposals.length) return;
        sender.voted = true;
        sender.vote = toProposal;
        proposals[toProposal].voteCount += sender.weight;
        
    
    
}
//4 fourth function
    function winningProposal() public w(Stage.Done) constant returns (uint8 _winningProposal) {
        
        uint256 winningVoteCount = 0;
        for (uint8 prop = 0; prop < proposals.length; prop++)
            if (proposals[prop].voteCount > winningVoteCount) {
                winningVoteCount = proposals[prop].voteCount;
                _winningProposal = prop;
            }
        
    }



