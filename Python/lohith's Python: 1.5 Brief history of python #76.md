**Generations of programming languages**

**First genenration (machine level language):**
		- Machine language was used to program the first stored-program computer systems.
		- In 1950s, each computer had its own native language, and programmers had primitive systems for combining numbers to represent instructions such as add or subtract.
		- In machine language, all instructions , memory locations, numbers and characters are represented in strings of 0’s and 1s.
    
**Second generation ( assembly language):**
    - It consists of series of statements and the statement consists of label, operation code and one or more operands.
    - It needs assembler to convert code to machine language.
    - Ex mov AX,4 ; MOV BX, 6 ; ADD AX,BX;
    **Advantages**
      It is easy to understand Code is machine dependent and thus non portable
      Easy to write in AL than ML 
      It is easy to detect and correct errors 
      It is easy to modify
      It is less prone to errors
    **Disadvantages**
      Programmers should have a good knowledge of the hardware internal architechture of the CPU
      The code cannot be directly executed by the computer, as it needs assembler to convert AL to ML
      
**Third generation ( high level languages):**
    **Advantages** 
      The code is machine dependent 
      It is easy to learn and use the language 
      There are few errors 
      It is easy to document and understand the code
      It is easy to maintain the code
      It is easy to detect and correct errors
      Note: python ruby and perl are 3GL languages that combine some 4GL abilities within a general purpose 3GL environment
    **Disadvantages**
      Code may not be optimized
      The code is less efficient
      It is difficult to write a code that controls the CPU, memory and registers.
      
**Fourth generation:**
    **Characteristics of 4GL**
      - the instructions of the code are written in english like sentences.
      - they are nonprocedural, so users concentrate on ‘what’ instead of ‘how’ aspect of the task.
      - the code written in a 4GL is easy to maintain.
      - the code written in 4GL become 10 times more productive that 3GL as fewer lines of code is written.     
      - It is easy to understand Code is machine dependent and thus non portable
      - Easy to write in AL than ML Programmers should have a good knowledge of the hardware internal architechture of the CPU
      - It is easy to detect and correct errors The code cannot be directly executed by the computer, as it needs assembler to convert AL to ML 
      - It is easy to modify
      - It is less prone to errors
      (ex: query language(SQL), which can be used to access the content of database using english like sentences). easier to learn than COBOL and C
      - to generate the report which displays the total number of students enrolled in each class and in each semester.
      **TABLE FILE ENROLMENT**
      **SUM STUDENTS BY SEMESTER BY CLASS**
        - still evolving so difficult to define or standardize them.
        - it doesnot make efficient use of a machine’s resources.
        
**Fifth generation:**
      - centered on solving problems using constraints given to a program rather than using an algorithm.
      - most constraint based and logic programming languages and some declarative languages form a part of 5GL.
      - widely used in AI research and contains visual tools to help develop a program. ex: PROLOG, OPS5, Mercury , Visual Basic.
      5GL s were built upon LISP ex:ICAD. there are many frame languages such as KL-ONE
     
