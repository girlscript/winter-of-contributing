# IMPLEMENTATION OF STACK
Stack is a LIFO(last in first out) data structure. Last elements pops first. This data structure has many application like changing of infix to postfix expression, etc. I created an array name things to use that array as stack the basic operation are push which push the elements to array from one side only like in the code we are pushing from rear side, pop which returns the topmost i.e. last element of array and deletes it. Other functions are peek which returns topmost element(last element of array) and print_stack which prints all the elements at that time in the array.
Now, let's see the code: 
```javascript
class stack{
    constructor(){
        this.things=[]; //array 
    }
    peek(){
        console.log("topmost element");
        return this.things[this.things.length-1]; //topmost element of things
    }
    printstack(){
        console.log("values in stack are");
        for(var i=0;i<this.things.length;i++){
            console.log(this.things[i]);  // prints all elements from things
        }
    }
    push(item){
        this.things.push(item); //pushes element into the things
    }
    Pop(){
        if(this.things.length==0)
          return "underflow"; // if stack is empty 
        console.log("popped item");
        return this.things.pop() // prints and remove the top element
    }

}
var list= new stack()
list.push(10);
list.push(20);
list.push(30);
list.push(40);
list.printstack();
console.log(list.Pop());
console.log(list.Pop());
console.log(list.peek());
list.printstack();
```
### Output
```
values in stack are
10
20
30
40
popped item
40
popped item
30
topmost element
20
values in stack are
10
20

```

