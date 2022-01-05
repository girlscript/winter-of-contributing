<h1>Reading the Argument Values</h1>

To enable minigrep to read the values of command line arguments we pass to it, we’ll need a function provided in Rust’s standard library, which is std::env::args. This function returns an iterator of the command line arguments that were given to minigrep. For now, you only need to know two details about iterators: iterators produce a series of values, and we can call the collect method on an iterator to turn it into a collection, such as a vector, containing all the elements the iterator produces.





`use std::env;
fn main() {
    let args: Vec<String> = env::args().collect();
    println!("{:?}", args);
}`


First, we bring the std::env module into scope with a use statement so we can use its args function. Notice that the std::env::args function is nested in two levels of modules. As we discussed in Chapter 7, in cases where the desired function is nested in more than one module, it’s conventional to bring the parent module into scope rather than the function. By doing so, we can easily use other functions from std::env. It’s also less ambiguous than adding use std::env::args and then calling the function with just args, because args might easily be mistaken for a function that’s defined in the current module.
