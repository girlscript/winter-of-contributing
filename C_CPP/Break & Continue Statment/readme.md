
# Continue Statment 

Continue statement skips the execution of further statements in the block and continues with the next iteration.

# Syntax of Continue 


continue;

eg..

#include <iostream>

using namespace std;
 
int main()

{

   int i=0;

   while (i < 10) 
   
   {
     
      if (i==4) 
      
      {
         i++;
         continue;
      }
      cout << i << "  ";
      i++;
   }

}

 ## Output 

 0  1  2  3  5  6  7  8  9

 //The control variable i is not incremented because of the continue statement. So, we incremented i before executing the continue statement.

 ## Flowchart Of Continue Statment

 ![Flow-chart-of-Continue-Statement](https://user-images.githubusercontent.com/69664057/134815874-a182da65-1a37-4a52-a2dc-84029b5eec30.png)


## Break Statment 

The C++ break is used to break loop or switch statement. It breaks the current flow of the program at the given condition. In case of inner loop, it breaks only inner loop.

## Syntax for break Statment

jump-statement;      
break;  
eg..

#include <iostream>  
using namespace std;  
int main() {  
      for (int i = 1; i <= 10; i++)    
          {    
              if (i == 5)    
              {    
                  break;    
              }    
        cout<<i<<"\n";    
          }    
}  
## Output
1
2
3
4

## Flowchart

![flow-chart-of-break-statementDone jpg](https://user-images.githubusercontent.com/69664057/134816322-6bfa9628-5d17-4f1e-bb3a-5078218c52f5.jpg)











