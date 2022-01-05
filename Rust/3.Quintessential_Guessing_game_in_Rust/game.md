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
 
   - `String::new()` is one of numerous ways of using string , here the `new()` signifies a heap allocated string 
   - The last part is used to take the input from `stdin` and `expect` is there to handle error cases if and when they occur .
 
 
- The Last part with the `match` : 
```rust
        
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


```


 - We are using `match` , a brief defination :
  > Rust has an extremely powerful control flow operator called match that allows you to compare a value against a series of patterns and then execute code based on which pattern matches. Patterns can be made up of literal values, variable names, wildcards, and many other things .
  
 - `match` basically is a **very efficient if-elseif flow operator** .
 - `guess.trim().parse()` is used to parse the **string input into numbers**
 - `Ok(num) => num` arm stores the number in guess, **if the parsed string is in fact a number**
 - `Err(_)` means for everything else , i.e. except a number continue the loop .
 -  Finally , we have **three arms** in the match here .
 -  If guessed number is **less than** `secret_number` then print *Too Small!*
 -  If guessed number is **greater** than `secret_number` then print *Too big!* 
 -  If guessed number is **equal** than `secret_number` then print *You win!* and break out of the loop 
 
### That is the end of the game and to run the game use : 

```bash
cargo run 
```

## You Deserve some Rest now , but come back in an hour or so 😎:  

<p align="center">

<img src="https://media.giphy.com/media/damps49KVkFkCWn8cC/giphy.gif">

</p>
