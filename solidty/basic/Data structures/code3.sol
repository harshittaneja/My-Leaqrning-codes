pragma solidity ^0.4.0;
contract code3{
    
//datatype declaration 
enum Stage {Init ,Reg,Vote ,Done}
//enumerationtype variable declaration
Stage public stage;
uint startTime;
uint public Timenow;

    
//constructor
function code3()public{
//putting value of stage.Init into stage varaiable 
  stage=Stage.Init;
  //putting now varaiable into startTime varaiable
  startTime=now;
  
  

}
function timecodelogicher()public{
    //putting value of now into Timenow varaiable
    //so that we use it like local variable in function (now contain current time)
 Timenow=now   ;
 //conditions now
 //this will going to stages after every ten seconds 
//you need to press buttion after ten second so that Timenow > startTime+10 and stage will increment
//har 10 second ke bad timelogic button dbaana then stage button dba ke check karna
 if(Timenow > (startTime + 10 seconds)){
     //then put value of startTime as timenow 
     startTime=Timenow;
     if(stage==Stage.Init){
        // means if stage=0 then set stage =1 state.reg  as below done
         //if small stage equal to large stage Init then put it into small stage reg
         stage=Stage.Reg;
         return;
     }
     
     if(stage==Stage.Reg){
          // means if stage=1 then set stage =2 state.vote  as below done
         //if small stage equal to large stage Init then put it into small stage
         stage=Stage.Vote;
         return;
     }
      if(stage==Stage.Vote){
           // means if stage=2 then set stage =3 state.done  as below done
         //if small stage equal to large stage Init then put it into small stage
         stage=Stage.Done;
         return;
     }
//stages are as follows stage=0 is init stage=1 is reg stage=2 is vote and stage=3 is done
     
     
 }
}
}