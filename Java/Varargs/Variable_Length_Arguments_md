# VARIABLE ARGUMENTS (VARAGS)
       
In JDK5,Java has included a feature the simplies the code for method that take variable number of arguments, this feature is called **_variable length arguemt (varangs)_**
  The varargs allows the method to **accept zero or multiple arguments**. Methods which can take variable number of arguemnts is called **_vararg method._**
  Before varags either we use overloaded method or take an array in the method parameter,but it was not considered good as it lead to large code with more chances of error.
  So over all this varags is a good and simple option.
  
   **_If we do not know how many arguments we need to pass then vararg is a better approach_**
    
  ## SYNTAX OF VARAGS:
  
     return_type method_name(datatype ...variable name)
     { 
     method body 
     }
   ### method example 
     
    public static void main syntaxx(int ...s)
    {
       //method body
    }
    

  
  The above syntax tells compiler that method syntaxx can be called with zero or more number of arguments.As a result here implicitly an array of type int[] gets declared.
  
  ## Example for better understanding of varags
     
      class example
     {
     static void syntaxx(int ...s)
     {
     System.out.println("Number of arguments :" + s.length);//total number of argument each time
      
      for(int i:s) //loop to display all elements in s
      System.out.print(i +" ");
       System.out.println();
       
      }
      
      public static void main(String args[])
      {
      syntaxx(345);  //one argument
      syntaxx(1,32,345); //three argument
      syntaxx(); //no argument
      }
    }

      
 ### OUTPUT
   
     Number of arguments :1
     345 
     Number of arguments :4
     1 32 34 577 
     Number of arguments :0
     
     
   **_A method can have variable length parameters with other parameters too._**
   
   example code-
       
       class example
     {
     static void syntaxx(char a,int ...s)
     {
         System.out.println("Character argument :"+ a);
     System.out.println("Number of arguments :" + s.length);//total number of argument each time
      
      for(int i:s) //loop to display all elements in s
      System.out.print(i +" ");
       System.out.println();
       
      }
      
      public static void main(String args[])
      {
          //for character you need to pass a argument int can take variable arguments
      syntaxx('a',345);  
      syntaxx('s',1,32,345);
      syntaxx('d'); 
      }
    }
 ###Output
 
    Character argument :a
    Number of arguments :1
    345 
    Character argument :s
    Number of arguments :3
    1 32 345 
    Character argument :d
    Number of arguments :0
   
## THINGS TO BE TAKEN CARE WHILE WRITING A VARARG FUNCTION
 
   **1.There can be only one variable arguments in a function**
   
   example code-
       
       void errorss(String ...s,int ...a,float ...b)
       {
       //compile time error as more than one vararg
       }
     

   **2.Variable argument must be the last argument.**
   
  example code-
         
         void errorrs(int ...a,int b)
         {
         //compile time error as vararg appear before normal argument
         }
    
    
    
    
  
