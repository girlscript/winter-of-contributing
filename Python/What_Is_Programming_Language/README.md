
# Python: 1.4 What is a programming language? #77

## **Programming Language**
▶ A programming language is a set of rules that
provides a way of telling a computer what
operations to perform.

▶ A programming language is a set of rules for
communicating an algorithm

▶ It provides a linguistic framework for
describing computations

▶ English is a natural language.
It has
words, symbols and grammatical rules.

▶ A programming language also has words,
symbols and rules of grammar.

▶ The grammatical rules are called syntax.

▶ Each programming language has a different set
of syntax rules.
## **1. Monolithic programming paradigm:**
- monolithic means a single block of statements.
- monolithic paradigm consists of sequence of statements uses global data.
- Useful for developing high level language (Basic) and assembly language (languages related to micro processors).
- Global data defined on top of the all the statements.
- Global data can be accessed by any sections of a program.
- How big the program all the statements should be in a same program
- There is no subroutines.
- We can jump from one section to another section within program using goto and jump instructions.
### **Drawbacks**
- no security for the data
- since all statements embedded in single program, debugging is difficult.
- no reusability.

## **2. Procedural programming/imperative paradigm:**
- Main program task is sub divided into sub task, each sub task implement as a separate procedure.
- Each procedure perform a specific task.
- Each procedure is also called as modules.
- The sequence of execution of instructions can be altered.
- There is no repetition of the code.
- Portan and cobol languages developed with this paradigm. 

![3](https://user-images.githubusercontent.com/86145099/133547760-96782e21-9843-4c51-ab3b-6a7f750cc757.PNG)

### **Advantages:**
- Program can be controlled better than monolithic paradigm.
- Debugging is easy.
- global data can be accessed by the all the sub tasks of a program so no security for the data.
### **Disadvantages:**
- Global data can be accessed by the all the sub tasks of a program so no security for the data.
- No reusability.
## **3. Structured programming/modular programming:**
- Entire program is divided into modules.
- Each module has set of functions each function performs single identifiable sub task.
- Each function has a local data and can also access global data if required.
- Local data of one function cannot access from another function.
- Follows the top down approach.
- Removes the goto statement is replaced with else if etc.
Ex: C,C++,java, C# 

![2](https://user-images.githubusercontent.com/86145099/133547137-3e5d5436-1327-4956-90a7-22e1003ee93f.PNG)

### **Advantages:**
- Larger programs are implemented easilly.
- Debugging is easy.
- Security for the data as local data cannot access outside of the function.
- Reusability.
- Control of the project is easy
- Maintenance is easy 
### **Disadvantages:**
- Global data can be shared among the modules.
- Main focus on functions than the data
## **4. Object oriented programming paradigm:**
- Models real world objects
- Uses bottom up approach
- Problem is decomposed into objects and build the data and functions around these objects.
- Program organized around the objects , grouped into classes.
- Data of the objects can be accessed only with the function associated with that objects.
- Objects can communicate with each other
- Empasize more on data.
Ex: c++,java, python, ruby and php.

![1](https://user-images.githubusercontent.com/86145099/133546964-cb4f795d-4676-409c-9502-f7312151d989.PNG)
### **Advantages:**
- Provides security to data
- Reusability.
- Models the real world
