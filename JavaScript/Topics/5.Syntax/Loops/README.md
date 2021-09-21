# Loops

## What are loops?

Loops offer a quick and easy way to do something repeatedly. 

You can think of a loop as a computerized version of the game where you tell someone to take X steps in one direction, then Y steps in another

**Let's take an example**

Imagine you have to take five steps towards east 

You can do this in 2 ways

Without using loops

```javascript
console.log('Walking east one step');
console.log('Walking east one step');
console.log('Walking east one step');
console.log('Walking east one step');
console.log('Walking east one step');
```

OR

Using loops

```javascript
for (let step = 0; step < 5; step++) {
  // Runs 5 times, with values of step 0 through 4.
  console.log('Walking east one step');
}
```

NOTE: This is just an example that uses one type of loop (for loop)

The different types of loops are:
1. **Entry Controlled loops**: In this type of loops the test condition is tested before entering the loop body. **For Loop** and  **While Loop** are entry controlled loops.
2. **Exit Controlled Loops**: In this type of loops the test condition is tested or evaluated at the
end of loop body. Therefore, the loop body will execute atleast once,
irrespective of whether the test condition is true or false. **do – while loop** is exit controlled loop.   

The different types of statements to use loops are in JavaScript are :

- For loop
- For in loop
- While loop
- do-while loop

aditionally
- for each method
- every method

You can learn about each loop by reading about them using the different files in this directory