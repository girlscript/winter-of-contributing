# Rules for Virtual Functions  

- The Virtual Functions must be non-static members.  

- The Virtual Functions are accessed by using pointers to objects.  

- A Virtual Functions can be friend of another class.  

- Constructor cannot be made virtual, but destructor can be made.  

- Virtual Function defined in the base class need not be necessarily redefined in the derived class. In such scenario, calls will invoke the base function.  
  
- A base class pointer can refer to the derived class objects, but the reverse is not true.  

- Virtual Functions should be declared in the public section of a class.
