![Image](https://github.com/Mann-tech13/winter-of-contributing/blob/Java/Java/Java_Lang_Package/assets/runtime.jpg)

# **Run Time Memory Management in Java**

The run-time environment is the structure of the target computers registers and memory that serves to manage memory and maintain information needed to guide a programs execution process.

In Java, memory management is the process of allocation and de-allocation of objects, called Memory management. Java does memory management automatically. This documentation starts with description of Memory management and then it follows elaboration of its factors.

At execution time, the Java virtual machine (JVM) must handle different parts of memory:

### **Fully Static:**

Part that contains the Java bytecode (i.e., the code that is executed by the JVM). Fully static runtime environment may be useful for the languages in which pointers or dynamic allocation is not possible in addition to no support for recursive function calls. 

Variables are accessed directly via fixed address. The calling sequence involves the calculation of each argument address and storing into its appropriate parameter location and saving the return address and then a jump is made.

### **Stack of activation records:**

Part of memory for the data, dynamically grows and shrinks during execution, manages in the form of a stack (Last-In-First-Out strategy).

In this, activation records are allocated (push of the activation record) whenever a function call is made. The necessary memory is taken from the stack portion of the program. When program execution return from the function the memory used by the activation record is deallocated (pop of the activation record). Thus, the stack grows and shrinks with the chain of function calls.


### **Fully Dynamic**

Part of memory that contains the objects that dynamically grows and shrinks during execution, each object is allocated and deallocated independently from the other objects.

Functional language such as Lisp, ML, etc. use this style of call stack management. Silently, here activation record is deallocated only when all references to them have disappeared, and this requires the activation records to dynamically freed at arbitrary times during execution. Memory manager (garbage collector) is needed.

The data structure that handles such management is heap an this is also called as Heap Management.

## **Reference**

[https://www.geeksforgeeks.org/run-time-storage-organization/](https://https://www.geeksforgeeks.org/run-time-storage-organization/)
