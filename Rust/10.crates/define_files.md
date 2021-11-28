<h1>Defining Modules to Control Scope and Privacy</h1>

In this section, we’ll talk about modules and other parts of the module system, namely paths that allow you to name items; the use keyword that brings a path into scope; and the pub keyword to make items public. We’ll also discuss the as keyword, external packages, and the glob operator. For now, let’s focus on modules!

Modules let us organize code within a crate into groups for readability and easy reuse. Modules also control the privacy of items, which is whether an item can be used by outside code (public) or is an internal implementation detail and not available for outside use (private).

As an example, let’s write a library crate that provides the functionality of a restaurant. We’ll define the signatures of functions but leave their bodies empty to concentrate on the organization of the code, rather than actually implement a restaurant in code.

In the restaurant industry, some parts of a restaurant are referred to as front of house and others as back of house. Front of house is where customers are; this is where hosts seat customers, servers take orders and payment, and bartenders make drinks. Back of house is where the chefs and cooks work in the kitchen, dishwashers clean up, and managers do administrative work.

To structure our crate in the same way that a real restaurant works, we can organize the functions into nested modules. Create a new library named restaurant by running cargo new --lib restaurant; then put the code in Listing 7-1 into src/lib.rs to define some modules and function signatures.
