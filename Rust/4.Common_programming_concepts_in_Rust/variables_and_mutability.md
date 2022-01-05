# Variables and Mutability 

- As mentioned in the “Storing Values with Variables” section, by default variables are immutable. This is one of many nudges Rust gives you to write your code in a way that takes advantage of the safety and easy concurrency that Rust offers. However, you still have the option to make your variables mutable. Let’s explore how and why Rust encourages you to favor immutability and why sometimes you might want to opt out.

```rust
fn main() {
    let x = 5;
    println!("The value of x is: {}", x);
    x = 6;
    println!("The value of x is: {}", x);
}

```

- Compiling this would give error as **x is immutable** .

- It’s *important that we get compile-time errors when we attempt to change a value that we previously designated as immutable because this very situation can lead to bugs*. If one part of our code operates on the assumption that a value will never change and another part of our code changes that value, **it’s possible that the first part of the code won’t do what it was designed to do**. The cause of this kind of bug can be difficult to track down after the fact, especially when the second piece of code changes the value only sometimes.

- To get *mutable variables* use `mut` keyword .

```rust
fn main() {
    let mut x = 5;
    println!("The value of x is: {}", x);
    x = 6;
    println!("The value of x is: {}", x);
}
```
 > This will compile just fine !
 
## Differences Between Variables and Constants :

- Like immutable variables, constants are values that are bound to a name and are not allowed to change .

1. Can not use `mut` keyword with constants .
2. Must declare with `const` instead of `let`
3. **Type must be annotated**
4. Can be *declared in any lexical scope* 
5. Constants may be **set only to a constant expression**, *not the result of a value that could only be computed at runtime*.

`const HOURS_IN_A_DAY: u32 = 24 * 1 ;`
 
- Constants are valid for the entire time the program runs .

## Shadowing :

- **You can declare a new variable with the same name as a previous variable**. *Rustaceans say that the first variable is shadowed by the second*, **which means that the second variable’s value is what the program sees when the variable is used**. *We can shadow a variable by using the same variable’s name and repeating the use of the `let` keyword*.

```rust
fn main() {
    let x = 5;

    let x = x + 1;

    {
        let x = x * 2;
        println!("The value of x in the inner scope is: {}", x);
    }

    println!("The value of x is: {}", x);
}

```


#### OUTPUT :
```bash
$ cargo run
   Compiling variables v0.1.0 (file:///projects/variables)
    Finished dev [unoptimized + debuginfo] target(s) in 0.31s
     Running `target/debug/variables`
The value of x in the inner scope is: 12
The value of x is: 6
```

- Shadowing is different from marking a variable as mut, because we’ll get a compile-time error if we accidentally try to reassign to this variable without using the let keyword. By using let, we can perform a few transformations on a value but have the variable be immutable after those transformations have been completed.

- The other difference between mut and shadowing is that because we’re effectively creating a new variable when we use the let keyword again, we can change the type of the value but reuse the same name.










