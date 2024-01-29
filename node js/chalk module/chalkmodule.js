//chalk mode uses for color and highlight the text
// command : npm install chalk run this command on terminal
var c=require('chalk');
//changing text color to blue
console.log(c.blue('Hello world!'));
//changing specific word color
console.log(c.blue('Hello') + c.red(' World') + '!');
// Pass in multiple arguments
console.log(c.green('Hello', 'World!', 'Foo', 'bar', 'biz', 'baz'));
// Nest styles
console.log(c.red('Hello', c.underline.green('Harshit')));
//forground and background
console.log(c.bgRed.blue("hello Harshit"))
console.log(c.inverse.bgRed.blue("hello Harshit"))
console.log(c.keyword('orange')('Some orange text'))