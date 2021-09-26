# HTML Class Attribute

The HTML class attribute is used to specify a class for an HTML element. Multiple HTML elements can share the same class.

The class attribute is often used to point to a class name in a style sheet. It can also be used by a JavaScript to access and manipulate elements with the specific class name.

# Syntax for class 

To create a class; write a period (.) character, followed by a class name. Then, define the CSS properties within curly braces {}:

## Example :
 
	<!DOCTYPE html>
	<html>
		<head>
			<style>
			.city {
				  background-color: green;
				  color: white;
				  padding: 10px;
			}
			</style>
		</head>
		<body>

			<h2>The class Attribute</h2>
			<p>Use CSS to style elements with the class name "city":</p>

			<h2 class="city">New Delhi</h2>
			<p>New Delhi is the capital of India.</p>

			<h2 class="city">Tokyo</h2>
			<p>Tokyo is the capital of Japan.</p>

			<h2 class="city">Ottawa</h2>
			<p>Ottawa is the capital of Canada.</p>

		</body>
	</html>


# HTML id attribute

The HTML id attribute is used to specify a unique id for an HTML element. You cannot have more than one element with the same id in an HTML document.

The id attribute specifies a unique id for an HTML element. The value of the id attribute must be unique within the HTML document.

The id attribute is used to point to a specific style declaration in a style sheet. It is also used by JavaScript to access and manipulate the element with the specific id.

# Syntax for id

To create a id: write a hash character (#), followed by an id name. Then, define the CSS properties within curly braces {}.

## Example :

	<!DOCTYPE html>
	<html>
		<head>
			<style>
				#city1 {
				  background-color: green;
				  color: white;
				  padding: 10px;
				}
				#city2 {
				  background-color: yellow;
				  color: black;
				  padding: 10px;
				}
				#city3 {
				  background-color: purple;
				  color: white;
				  padding: 10px;
				}
			</style>
		</head>
		<body>

			<h2>The id Attribute</h2>

			<h2 id="city1">New Delhi</h2>
			<p>New Delhi is the capital of India.</p>

			<h2 id="city2">Tokyo</h2>
			<p>Tokyo is the capital of Japan.</p>

			<h2 id="city3">Ottawa</h2>
			<p>Ottawa is the capital of Canada.</p>

		</body>
	</html>

