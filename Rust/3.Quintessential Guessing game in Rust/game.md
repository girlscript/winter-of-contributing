# Guessing Game In Rust : 

- We will learn quite a few things here like **let , match , functions , how to use external crates** and other miscellaneous things .
- This is basically a CLI game about guessing random numbers .
- Let us jump **HEAD first into the code** :
 ```rust
use rand::Rng;
use std::cmp::Ordering;
use std::io;

fn main() {
    println!("Guess the number!");

    let secret_number = rand::thread_rng().gen_range(1..101);

    loop {
        println!("Please input your guess.");

        let mut guess = String::new();

        io::stdin()
            .read_line(&mut guess)
            .expect("Failed to read line");

        let guess: u32 = match guess.trim().parse() {
            Ok(num) => num,
            Err(_) => continue,
        };

        println!("You guessed: {}", guess);

        match guess.cmp(&secret_number) {
            Ordering::Less => println!("Too small!"),
            Ordering::Greater => println!("Too big!"),
            Ordering::Equal => {
                println!("You win!");
                break;
            }
        }
    }
} 
 ```
- So this is lot to take in but I am sure you must be getting a feel of it .
- Let's discuss **the imports i.e. the use** statements :

  ```rust
  use rand::Rng;
  use std::cmp::Ordering; 
  use std::io;
  ```
  
  - The `std::io` is for handling input/output streams , equivalent to the **<iostream.h>** headerfile from C++ land .
  - The `std::cmp::Ordering` is for ordering and we are using it here for comparing the values and check for a match [**Ordering is an enum**].
  - `rand:Rng` is used to generate random numbers in a range , and this comes from the crate rand . 
  - So our **Cargo.toml** will have `rand = "0.9.0"` under dependencies 
  
## Main Function 🦀🦀 :

- We are using `let` to define `secret_number` , generating a **random number that the user has to guess** between 1 and 100 .

- The **loop** is an indefinite loop , it is **infact the game loop** and we are using a `break` statement to end the game .

- Onto the snippet below then : 

```rust
       println!("Please input your guess.");

       let mut guess = String::new();

       io::stdin()
           .read_line(&mut guess)
           .expect("Failed to read line");


```
 - `println!()` for asking users input 
 -  `guess` is use to store the used input and as you notice it has the `mut` keyword , this means that the variable can be overwritten . `mut` is short for mutable and is a central to Rust's ownership model . **No need to worry about it now** 🍦 .
 
