//now we going to change version of yargs
const c =require('yargs')
//then run this command node code2.js --version
// you can also set versionof yargs
c.version('1.1.0')

console.log(c.parse())

// run this comand on cmd node versioncheck.js --version
//output is going to be 1.1.0