//process agrument module
console.log(process.argv)

/* output
[
  'C:\\Program Files\\nodejs\\node.exe',
  'C:\\Users\\Dell\\Desktop\\sem 5\\microservices lab\\node js\\procees agrument module\\code.js'
]

This list contains two elements
these elements are process arguments

argument 1 ='C:\\Program Files\\nodejs\\node.exe'

1. node executable file (first argument of list is path of node executable file)

argument 2='C:\\Users\\Dell\\Desktop\\sem 5\\microservices lab\\node js\\procees agrument module\\code.js'
2.location of application(second argument of list is path of node application file)

*/

//if you want to add third argument in list it is done like node code.js Harshit
//(this command will run on terminal and assigned the value harshit at 3rd location)

/* output
[
  'C:\\Program Files\\nodejs\\node.exe',
  'C:\\Users\\Dell\\Desktop\\sem 5\\microservices lab\\node js\\procees agrument module\\code.js',
  'Harshit'
]

*/            // index 0  ,  index 1   ,index 2
//            [ Argument1 , Argument2  ,argument3]
//['C:\\Program Files\\nodejs\\node.exe','C:\\Users\\Dell\\Desktop\\sem 5\\microservices lab\\node js\\procees agrument module\\code.js',Harshit]

//printing specific index value here at index 2 value is Harshit 
console.log("index2  :",process.argv[2]) 
console.log("index 1 :",process.argv[1])
console.log("index 0 :",process.argv[0])

// run on terminal like node code.js Harshit taneja 
//here taneja is treated as third argument 
//command node code.js Harshit taneja      
console.log("index 3 :",process.argv[3])

//assign title to argument harshit
//command node code.js harshit --title="harshit"

//as ouput of title assigned to harshit is not a key value pair like dictionary in python so this is issue in procees argument 
//so to avoid it we use yargs module 