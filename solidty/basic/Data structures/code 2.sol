pragma solidity ^0.4.0; 
// structure datatype declaration 
//struct name{ body }
contract Ballot {
    


 //1. structure 1
    struct Voter {
        //datatype variables
        uint weight;
        bool voted;
        uint8 vote;
        address delegate;
    }
    
    // address type variable 
address chairperson;
//address mapped with structure(Voter type) 
    mapping(address => Voter) voters;
    // mapping variable        x
   //structure type(Proposal) array name
    Proposal[]                proposals;
    
    
    
    
 //2. structure 2
    struct Proposal {
        // this for vote count 
        uint voteCount;
    }


   //constructor(argument which you put into delop side inputType)
    function  Ballot(uint8 _numProposals) public {
        //getting adress of sender and putting into address type vraiable  thats is chairperson 
        chairperson = msg.sender;
       // dictionary[address].weight=1 we are setting wieghtage of chairperson vote to 2
        voters[chairperson].weight = 2;
        //array.length=3 as we pass three in the deploy 
        proposals.length = _numProposals;
    }

    
    function register(address toVoter) public {
//we are checking that if address != chairperson address or voter[address].voted
//which is boolean value is true
        if (msg.sender != chairperson || voters[toVoter].voted) return;
        else{
        //int a obj is like structure
        //obj.a
        voters[toVoter].weight = 1;
        //obj.a
        voters[toVoter].voted=false;
    }
    }

  

    // vote function(integer x) 
    function vote(uint8 toProposal) public {
//structurename        a= mapping variable[length]
        Voter storage sender = voters[msg.sender];
//checking if sender is voted or not and x> array.length then stuck in if else 
        if (sender.voted || toProposal >= proposals.length) return;
        //else put his vote 
        sender.voted = true;
        sender.vote = toProposal;
        proposals[toProposal].voteCount += sender.weight;
    }

    function winningProposal() public view returns (uint8 _winningProposal) {
        uint256 winningVoteCount = 0;
        //for(int i ,i<n;i++)
        for (uint8 prop = 0; prop < proposals.length; prop++)
            if (proposals[prop].voteCount > winningVoteCount) {
                winningVoteCount = proposals[prop].voteCount;
                _winningProposal = prop;
            }
    }
}
