# Limitations of Virtual Functions  

The limitations of Virtual Functions are listed below:  

- Global functions cannot be declared virtual. 
 
- Defining a virtual function in a base class is a must, even though it may not be used.  

- Because static functions can be invoked without referencing a specific class instantiation, virtual functions cannot be designated static. 

- There is virtual destructor but no virtual constructor.

- Virtual functions can only be declared for member functions of a class. Ordinary functions cannot be specified as virtual functions because virtual functions are only relevant to class objects with inheritance relationships.  

- Because an inline function cannot dynamically select its place during operation, it cannot be a virtual function. Even though a virtual function is defined within a class, it is still treated as a non-inline function during compilation.
