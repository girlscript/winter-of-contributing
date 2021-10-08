# For in loop

JavaScript also includes another version of for loop also known as the for..in Loops. The for..in loop provides a simpler way to iterate through the properties of an object. This will be more clear after leaning objects in JavaScript. But this loop is seen to be very useful while working with objects.

### **Syntax:**

```
for (variableName in Object)
{
    statement(s)
}

```

In each iteration, one of the properties of Object is assigned to the variable named variableName and this loop continues until all of the properties of the Object are processed. Lets take an example to demonstrate how for..in loop can be used to simplify the work.

### Example

```jsx
// creating an Object
    var languages = { first : "C", second : "Java", 
                      third : "Python", fourth : "PHP", 
                      fifth : "JavaScript" };
  
    // iterate through every property of the
    // object languages and print all of them
    // using for..in loops
    for (itr in languages) 
    {
        console.log(languages[itr] + "<br >");
    }
```

Output:

```
C
Java
Python
PHP
JavaScript

```