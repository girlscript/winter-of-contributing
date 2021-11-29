<h1>Running Code on Cleanup with the Drop Trait</h1>

The second trait important to the smart pointer pattern is Drop, which lets you customize what happens when a value is about to go out of scope. You can provide an implementation for the Drop trait on any type, and the code you specify can be used to release resources like files or network connections. We’re introducing Drop in the context of smart pointers because the functionality of the Drop trait is almost always used when implementing a smart pointer. For example, when a Box<T> is dropped it will deallocate the space on the heap that the box points to.

In some languages, the programmer must call code to free memory or resources every time they finish using an instance of a smart pointer. If they forget, the system might become overloaded and crash. In Rust, you can specify that a particular bit of code be run whenever a value goes out of scope, and the compiler will insert this code automatically. As a result, you don’t need to be careful about placing cleanup code everywhere in a program that an instance of a particular type is finished with—you still won’t leak resources!

Specify the code to run when a value goes out of scope by implementing the Drop trait. The Drop trait requires you to implement one method named drop that takes a mutable reference to self. To see when Rust calls drop, let’s implement drop with println! statements for now.

Listing 15-14 shows a CustomSmartPointer struct whose only custom functionality is that it will print Dropping CustomSmartPointer! when the instance goes out of scope. This example demonstrates when Rust runs the drop function.

