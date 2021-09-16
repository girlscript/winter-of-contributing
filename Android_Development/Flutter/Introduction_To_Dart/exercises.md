## 💻 Exercises

### Exercises:

   VARIABLES
   1. What are the naming rules for identifier?

     ```

     Following are the naming rules:-
     -Identifiers should not contain white spaces, special characters except underscore (_) and dollar sign($).
     -Identifiers should not start with a number.
     -Identifiers should not contain alphabates and numbers.


     ```
   2. How to declare a variable which stay constant at compile time?     Demonstrate with example.
   

   ```
   The final and const keyword are used to declare constants. We can not modify the values of a variable declared using the final or const keyword. 
     
    For example:-
       void main() { 
   final v1 = 12; 
   const v2 = 13; 
   v2 = 12; 
}
The code given above will throw error.
      
   ```

   3. Write a code to print a name and a number.


   ```
   void main() { 
      int num=12;
      String name="John"; 
      print(num);
      print(name) ;
   }
   Output-
      12 John
   ```


