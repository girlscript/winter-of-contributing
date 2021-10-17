#Conditional Statements in Kotlin programming language

Conditional statements are statements that are used in making decisions. These statements decide what code to run when the condition is true and when the condition is false.

Conditional statements in Kotlin are:

	 -if statement
	- if-else statement
	- if-else as expression
	- when statement

## 1) if statement
if statement checks the condition first, if the condition is true then code that follows the if statements will execute.In Kotlin if condition can be used as an expression means it can return a value.

# Syntax :

	var max = a
	if (a < b) max = b

	// With else
	var max: Int
	if (a > b) {
		max = a
	} else {
		max = b
	}

# Example :

	fun main(args: Array<String>) {
		var a = 3
		if(a > 0){
			print("Yes,number is positive")
		}
	}
	
# Output :
		Yes, number is positive

## 2) if-else statement :
if statement only lets you to execute code when the condition is true, but what when if condition is false. In such casewe need else statement. So when if the condition is false , else block will be executed.


# Syntax :
	if(a>b)
		max=a
	else
		max=b
		

# Example :
	fun main(args: Array<String>) {
			var a = 5
			var b = 10
			if(a > b){
				print("Number 5 is larger than 10")
			}
			else{
				println("Number 10 is larger than 5")
			}
		}
		
# Output :

	Number 10 is larger than 5

## 3) if-else as an expression

if-else statement as expression works similar like ternary operator. If the condition is true it will return first value and if condition is false it will return else part.

	var max = if(a>b) a else b
# Note: 
If, if/else branch can be contained in the blocks then the last statement of the block is considered as value of the block.

# Syntax :

	var max= if(a>b) {
		println("a is max")
		a
	}
	else{
		println("b is max")
		b
	}

# Example :

	fun main(args: Array<String>) {
		var a = 50
		var b = 40

		// here if-else returns a value which
		// is to be stored in max variable
		var max = if(a > b){                 
			print("Greater number is: ")
			a
		}
		else{
			print("Greater number is:")
			b
		}
		print(max)
	}

# Output :

	Greater number is: 50

## when statement

When we have to select one choice from multiple choices, then instead of using several if..else..if.. Statements ( if-else ladder) we can use when statement. When matches its arguments to all the test condition until argument matches to any given case. It can be used as a statement or as an expression.

This is a replacement of switch block i.e. present in c or java. when functions similar to switch block but with better functionality. In Kotlin we use when block as

	when(a){
		1 ->print("x=1")
		2 ->print("x=2")
		3,4 ->print("x is 3 or 4") //if multiple case to be handle in same way
			in 5..10 ->print("in rage of 5 to 10")
		else ->print("not in range 1 to 10 ")
	}
There is no need of break statement as it automatically dismisses the when block after executing the statements in the matching test condition.

# Example :

	fun main(args: Array<String>) {
		var number = 1

		while(number <= 10) {
			println(number)
			number++;
		}
	}
	

# Output :

	1
	2
	3
	4
	5
	6
	7
	8
	9
	10
