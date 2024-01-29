const yargs = require('yargs') 
// Customize yargs version 
yargs.version('1.1.0') 

// Create add command 
yargs.command({ 
	command: 'add', 
	describe: 'Adds two number', 
	builder: { 
		// this will take value of number1 when we type --firstname =4
		firstNumber: { 
			describe: 'First Number', 
			demandOption: true, // Required 
			type: 'number'	
		},
		// this will take value of number1 when we type --secondNumber=10
		secondNumber: { 
			describe: 'Second Number', 
			demandOption: true, 
			type: 'number'
		} 
	}, 

	// Function for your command 
	handler(argv) { 
		console.log( "Result :",(argv.firstNumber+argv.secondNumber)) 
	} 
}) 

yargs.parse() // To set above changes 
// to run on cmd type node code4.js add --firstNumber=4 --secondNumber=10