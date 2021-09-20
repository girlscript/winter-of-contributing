# Template Strings

Template Strings allows you to use strings or embedded expressions in the form of a string.

They are also known as __Template Literals__, before ES6 template literals were called as template strings. So, Template literals are the new feature added in ES6, which provides an easy approach to create multiline strings and to perform string interpolation.

Template literals uses back-ticks(``` ` ` ```) instead of quotes (```" "```)

__Syntax:__
```js
var string = `string-value`;
```

__Example:__
```javascript
var string = `Hello, World!`;
document.write(string); // will print Hello, World on Web Page
```

__Output:__
```
Hello, World!
```

# Multiline Strings

In normal strings, we have ```\n``` for the new line, but in Template Literals we don't use ```\n```.

__Example:__
```javascript
// with Template Literal

console.log(`Welcome Everyone
To GWOC`);

// without Template Literal

console.log("Welcome Everyone\nTo GWOC");
```

__Output:__
```
Welcome Everyone 
To GWOC
Welcome Everyone 
To GWOC
```
# String Interpolation
Template Literals support String Interpolation, to embed the variables and expression with string we have to following syntax.

__Syntax:__
```js
${}
```
__Example:__
```javascript
// without template literals

let name = "GWOC";
console.log("Hello "+ name);

// with Template Literals

console.log(`Hello ${name}`);
```

__Output:__
```
Hello GWOC
Hello GWOC
```
__Explanation:__

Before ES6, we have to use ```+``` for string interpolation.

# Tagged Templates

Tagged Templates allows to parse a Template literal with a function.

Before ES6, we use to pass the argument inside```()``` .

__Example:__
```js
function tag(str){
    return str;
}
let res = tag("Hello, GWOC!"); //passing argument inside ()
console.log(res);
```
__Output:__
```
Hello, GWOC!
```
After ES6, there's no need to use ```()```, just use back-ticks with function.

__Example:__
```javascript
const name = 'Glenn';
const hail = true;

function taggedLiteral(str, value) {
    let str1 = str[0]; // Hey
    let str2 = str[1]; // , How are you doing?

    if(hail) {
        return `${str1}${value}${str2}`;
    }
}


const result = tagExample`Hey ${name}, How are you doing?`;

console.log(result);
```

__Output:__
```
Hey Glenn, How are you doing?
```
# Raw Strings
```String.raw()``` is a tag function of Template Literals. 

It allows to print the strings without any interpretation of backslashes, allows to print backslashes. Best example can be printing of any path directory.

__Example:__
```javascript
var text = String.raw`Hello \n World\n`;
var str = String.raw`C:\Program Files\Folder`;
```
__Output:__
```
Hello \n World\n
C:\Program Files\Folder
```

# Conclusion
Congratulations! You've successfully learnt about Template String(Literals).

Keep exploring JavaScript :wave:

Contributor : [Abhinandan Adhikari](https://github.com/AbhinandanAdhikari) :heart:
