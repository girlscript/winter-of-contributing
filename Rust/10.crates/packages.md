<h1>Packages and Crates</h1>

The first parts of the module system we’ll cover are packages and crates. A crate is a binary or library. The crate root is a source file that the Rust compiler starts from and makes up the root module of your crate (we’ll explain modules in depth in the “Defining Modules to Control Scope and Privacy” section). A package is one or more crates that provide a set of functionality. A package contains a Cargo.toml file that describes how to build those crates.

Several rules determine what a package can contain. A package can contain at most one library crate. It can contain as many binary crates as you’d like, but it must contain at least one crate (either library or binary).

Let’s walk through what happens when we create a package. First, we enter the command cargo new:

`$ cargo new my-project
Created binary (application) my-project package
$ ls my-project
Cargo.toml
src
$ ls my-project/src
main.rs`
