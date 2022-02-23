**Function: A JavaScript function is a piece of code that performs a certain task.**

*🎇Why Functions?*
- We can reuse code by Defining the code once, and use it many times.
- We can use the same code many times with different arguments, to produce different results.

*🎇JavaScript Function Rules & Syntax*
- A JavaScript function is defined with the function keyword, followed by a name, followed by parentheses ().
- Function names can contain letters, digits, underscores, and dollar signs (same rules as variables).
- The parentheses may include parameter names separated by commas: (param1, param2,param3, ...)
- The code to be executed, by the function, is placed inside curly brackets: {}
- Function parameters are listed inside the parentheses () in the function definition.
- Function arguments are the values received by the function when it is invoked.
- Inside the function, the arguments (the parameters) behave as local variables.

Syntax: 
        function name(param1, param, param3) {
        // code to be executed
        }

Sample Function: 
        function multiply(p1, p2) {
        return p1 * p2;   // The function returns the product of p1 and p2
        }

Example:The following code has a function that displays a Gretting message with a name passed in the function.

        <!DOCTYPE html>
        <html>
        <body>
        <h2>JavaScript Functions</h2>

        <p>This Webpage shows a Greeting Message with name passed </p>
        <p id="demo"></p>

        <script>
        function greetFun(f) {
        let re = `${f} There is no better feeling of happiness than when you are
        happy because you made someone else happy. It's simply the best feeling 
        in the world. `;
        return re;

        }
        document.getElementById("demo").innerHTML = greetFun("Ruchika Suryawanshi");
        </script>

        </body>
        </html>

Output:
<br>
 <img src="https://github.com/RuchikaSuryawanshi7/winter-of-contributing/blob/Frontend_Web_Development_HTML_CSS_JS/Web_Development/Javascript/1.Functions_And_Scope/Javascript_Function/js_output.PNG">
