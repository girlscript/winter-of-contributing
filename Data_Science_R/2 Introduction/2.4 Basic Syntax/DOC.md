# Basic Syntax in R

- R is the most popular computer language used for Statistical Computing and Data Analysis. Like other languages, R also has its basic sytax. We can program in R Language in two ways i.e., using R command Prompt or R Script file.

### R command Prompt

- First of all, make sure that you have R environment setup, if this is done   then you can easily start your program in R by just typing the below command.
```     
        $ R
```
- This command will open R interpreter and you can see a prompt where you can start writing your program.
```
greeting <- "Welcome to the World of R!"
print(greeting)
```
### R Script File
- R Scriptfile is similar to R Command Prompt but the oly change is that here we havw to write our programs in Script file with the help of R interpreter called R Script, and then execute our program.

### Syntax
- Each and every program in R is made up of three items namely Variables, Keywords and Comments.

### Variables in R
- Variables are the one which stores the data paired with an associated symbolic name.
- In R Programming Language, the variables can be assigned in three different forms.

 1. Simple Assignment =
 
 2. Leftward Assignment <-

 3. Rightward Assignment ->
```
x = "Hi there"
y <- "Congratulations!!"
"You have successfully executed your first piece of code in R Language" -> z 
print(x)
print(y)
print(z)
```
### Keywords in R
- Keywords are reserved and predefined words that have some special meaning to the compiler.
- Keywords are strictly prohibited in the usage of variable name or function name in any part of the code.
- Keywords used in R Language are :
 * if
 * else
 * while
 * repeat
 * for
 * function
 * next
 * in
 * break
 * TRUE
 * FALSE
 * NULL
 * Inf
 * NaN
 * NA
 * NA_integer_
 * NA_real_
 * NA_complex_
 * NA_character_

#### Note :
- Remember that R is a case-sensitive language which means that FALSE is not the same as false.

### Comments in R
- Comments are those which helps us in understanding the program more easily and fastly.
- These are ignored ny the interpreter. In this Programming Language we have only single line comments which can be written by using # at the start.

```
#This program is being executed in the year 2021
print("The above mentioned line is an example of single line comment.")
```
- Since R does not do multi-line commands, but by using a small trick or by just adding # at the beginning of every line as shown below :
```
a = "Happy Learning!"
# a = "Welcome"
# a = "R Language is so cool"
if (FALSE)
  {
    "As the condition for this IF loop is always FALSE this line will not be executed by the interpreter."
  }
print(a)
```
#### Note : 
- Multi-line comments which are written using loop should always be inside of single quote or double quote.
