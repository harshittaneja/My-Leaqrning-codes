//before using yargs module try to understand process module
//here when user type node code.js add on terminal then const c get value add
//so then this if statement work 
// argv is arugement keyword like array in c 
const c =process.argv[2]
if(c=='add'){
    console.log("adding a log ")
}