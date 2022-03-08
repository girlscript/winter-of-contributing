# Export 

You can export a variable using the export keyword in front of that variable declaration. You can also export a function and a class by doing the same.

`Syntax for variable`
export let variable_name;

`Syntax for function`
export function function_name() {
  // Statements
}

`Syntax for class`
export class Class_Name {
  constructor() {
    // Statements
  }
}

# Example

export let num_set = [1, 2, 3, 4, 5];
  
export default function hello() {
    console.log("Hello World!");
}
  
export class Greeting {
    constructor(name) {
        this.greeting = "Hello, " + name;
    }
}

# Import

You can import a variable using import keyword. You can specify one of all the members that you want to import from a JavaScript file.

`Syntax`
import member_to_import from “path_to_js_file”;
// You can also use an alias while importing a member.
import Greeting as Greet from "./export.js";
// If you want to import all the members but don’t
// want to Specify them all then you can do that using
// a ' * ' star symbol.
import * as exp from "./export.js";

# Example

<!DOCTYPE html>
<html lang="en">
	<head>
		<title>Import in ES6</title>
	</head>
	<body>
		<script type="module">

			// Default member first
			import hello, { num_set, Greeting } from "./export.js";
			console.log(num_set);
			hello();
			let g = new Greeting("Aakash");
			console.log(g.greeting);
		</script>
	</body>
</html>
