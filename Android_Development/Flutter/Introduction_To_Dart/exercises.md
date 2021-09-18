## 💻 Exercises

### Exercises:
### Exercises on Inheritance:

1. Example Question Statement( Remove this once any question added)
1. Write a program which has Student as the parent class and ScienceStudent, MathsStudent as the subsequent child classes. The parent class has attributes as walks() and talks() . Child classes have studiesScience() and studiesMaths() as methods . Inherit the methods of Student class in ScienceStudent class and the ScienceStudent class in MathsStudent class.

   ```
   Enter your age: 30
   You are old enough to drive.
   Enter your age:15
   You are left with 3 years to drive.
   class Student{
   
      void walks()  
         {  
            print("The student can walk.");  
          } 
          
          void talks()  
         {  
            print("The student can talk.");  
          } 
   }    
      // Inherits the super class  
   class ScienceStudent extends Student{    
         void studiesScience(){  
             print("The student studies science.");  
                 }               
   }  
   
   // Inherits the ScienceStudent base class  
   class MathsStudent extends ScienceStudent{    
         void studiesMaths(){  
             print("The science student studies Maths.");  
                 }               
   }   
   void main() {  
      // Creating object of the child class  
      MathsStudent s=new MathsStudent();    
      s.walks();    
      s.talks();    
      s.studiesScience();
      s.studiesMaths();
   } 
   ```
