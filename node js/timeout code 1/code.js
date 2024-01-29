//first code print data on console using console.log with specific time delay
//this concept is called non blocking
//non blocking means no need to wait to execute in sequence
// just exexcute which has less timeout
setTimeout(function(){console.log("hello1");},3000);
setTimeout(function(){console.log("hell02");},4000);
setTimeout(function(){console.log("hello3");},300);