# Let's Setup a New Project in Rust : 
- Setting up a project in Rust is relatively simple , all one needs is **cargo**
- Let's first navigate to the directory where you want to keep your project 🌿

> We’ll implement a classic beginner programming problem: a guessing game. Here’s how it works: the program will generate a random integer between 1 and 100. It will then prompt the player to enter a guess. After a guess is entered, the program will indicate whether the guess is too low or too high. If the guess is correct, the game will print a congratulatory message and exit.

```bash
cargo new guessing_game
cd guessing_game
```

- This create a code template for you to start with .
- **The cargo.toml** file is important and we will writing the code in the **src/main.rs** rust file 

### Contents of main.rs : 
```rust
fn main() {
    println!("Hello, world!");
}
```
### Contents of Cargo.toml :
```toml
[package]
name = "guessing_game"
version = "0.1.0"
edition = "2018"

# See more keys and their definitions at https://doc.rust-lang.org/cargo/reference/manifest.html

[dependencies]
# you can add your dependencies implicitly here or use "cargo install" , we will discuss it later 
```
[Let's move on to the code](./game.md)
