        ITERATIVE STATEMENTS:-Iterative statements are such statements which we often use in any programming langauges,such as C,C++,etc to repeat the execution of a list of statements.C langauge supports three types of iterative statements:-
        
        1)While loop:-
        The while loop provides a mechanisim to repeat one or more statements while a particular condition is true.

        -->SYNTAX OF WHILE LOOP:-
        while(condition)
        {
            statement 1;
            statement 2;
            ...........
            ...........
            ...........
            statement n;
            variable increment;
        }
        Explanation of syntax:-Inside the while loop there is a condition.The condition can be anything depending upon the needs of program.All the statements written inside while loop will work till the condition is true.The time when condition is false while loop will stop.
        Variable increment:-If a condition is true then the statement will be executed by while loop,but till how many tmes?? Any guess?
        Well,let me tell you if we don't use variable incrementation then in such case while loop will be an infinite loop.An infinite loop is such type of condition where the statements inside any particular loop will be executed till infinity.The loop will never stop which will be a big error and problem for any developer.To rectify this issue an variable incrementation is done so that at any point of time,while loop gets stop and take a peaceful exit.
        
        Example 1:- int x=5,y=3;
                  while(y<x)
                  {
                      printf("Condition is true");
                      x++;
                  }
        Explanation of Example 1:-
        1st line:-Declaration of variable x and y is done in int datatype.
        2)2nd line:-A while loop is used in which the condition is y<x.
        3)3rd line:-Starting of while loop.
        4)4th line:-Print the statement "Condition is true" using printf,when the while loop gets executed from 2nd time.(Wait I know you are thinking what he is saying about second time.This will be explained in next point,have patience.Now just focus on while loop).
        5)5th line:-Variable Incrementation-To stop while loop.
        6)6th line:-Closing of while loop.
        
        Example 2:-#include<stdio.h>//header files in c language
                   #include<conio.h>
                   int main()
                   {
                       int i=1;//initialize the loop variable
                       while(i<=10)//test the condition
                       {  //Execute the loop statement
                         printf("%d",i);
                         i=i+1;//Variable Incrementation
                       } 
                       return 0;
                   }
        
        Explanantion of Example 2:-(I will jump directly to main topic i.e while loop)
       4th line:-Condition of while loop.
       5th line:-Starting of while loop.
       6th line:-print the value of 'i' in while loop after each execution.
       7th line:-Closing of the while loop.


       IMPORTANT POINTS OF WHILE LOOP:-
       1)In while loop,the condition is tested before any of the statements in the statement block is executed.if the condition is true,only then the statements will be executed otherwise if the condition is false,the control will jump to statement y.This is the point I was talking about in explanation of example 1.So,in first time irrespective of the condition the statements inside the while loop will be executed.And main checking of the condition and then executing the statements inside the loop is done from the second time.

       2)We need to constantly update the condition of the while loop.It is the condition which determines when the loop will end.

       3)If the condition is never updated and the condition never becomes false then the computer will run into an infinite loop which is never desirable.

       4)A while loop is also referred to as a top-checking loop since control condition is placed as the first line of the code.If the control condition evavaluates to false,then the statements enclosed in the loop are never executed.

       SOME MORE EXAMPLES IN WHILE LOOP:-

       Example 3:- 
       #include<stdio.h>
      int main()
      {
          int i=1,sum=0;
          while(i<10)
          {
              sum=sum+i;
              i=i+1;
          }
          printf("\nSum=%d",sum);
      }      

      Output:-55

      Example 4:-
      #include<stdio.h>
      int main()
      {
          int i=1;
          while(i<=20)
          {
              printf("*");
              i++;
          }
          return 0;
      }      

      Output:-*********************

      2)Do-while loop:-The do-while loop is similar to while loop.The only difference is that in a do-while loop,the test condition is evaluated at the end of the loop.Now that the test condition is evaluated at the end,this clearly means that the body of the loop gets executed at least one time(even if the condition is false).

    
        Syntax of do-while loop:-
        do{
            statement 1;
            statement 2;
            ...........
            ...........
            ...........
            statement n;
        }while(condition);

        Example 5:-
        #include<stdio.h>
        int main()
        {
            int i=1;
            do{
                printf("\n%d",i);
                i=i+1;
            }
            while(i<=10);
            return 0;
        }

        Output:-The code will print numbers from 1 to 10.

        Example 6:-
        #include<stdio.h>
        int main()
        {
            int n,i=1,sum=0;
            float avg=0.0;
            printf("\nEnter the value of n:-");
            scanf("%d",&n);
            do
            {
                sum=sum+i;
                i=i+1;
            }
            while(i<=n);
            avg=(float)sum/n;
            printf("\nThe sum of first %d numbers:-%d",n,sum);
            printf("\nThe average of first %d numbers:-%f",n,avg);
            return 0;
        }

        Output:-
        Enter the value of n:-18
        The sum of first 18 numbers=171
        The average of first 18 numbers=9.00

        Some important points regarding do-while loop:-
        1)Don't forget to place a semicolon at the end of the do-while loop statement.
        2)Avoid using do-while loop for implementing pre-test loops and use the do-while loop for post-test loops.
        3)If you want that the body of the loop must get executed at least once,then use the do-while loop.
        

        3)For loop:-Like the while and do-while loops,the for loop provides a mechanism to repeat a task until a particular condition is true.For loop is usually known as a determinate or definite loop because loop the programmer knows exactly how many times the loop will repeat.The number of times the loop has to be executed can be determined mathematically by checking the logic of the loop.
         When a for loop us used,the loop variable is initialized only once.With every iteration of the loop,the value of the loop variable is updated and the condition is checked.If the condition is true,the statement block of the loop is executed,else the statements comprising the statement blcok of the for loop are skipped and the control jumps to immediate statement following the for loop body.

         Syntax of for loop:-
         for(initialization;condition;incrementation/decrementation)
         {
             statement 1;
             statement 2;
             ............
             ............
             ............
             statement n;
         }

         -->Initialization:-In for loop firstly we have to initialize the initial value of the variable in which we will use for loop.For example we write i<7,the compiler will ask what is the current value of i??Right?
         Without having initial value of the variable we cannot use for loop.

         -->Condition:-Condition based on which the statements inside the for loop will be executed.

         -->Incrementation/Decrementation:-To stop the for loop at any time,we need to have incrementation or decrementation of the same operator so that at any point of time,for loop exit.

            SOME EXAMPLES ON FOR LOOP:-
        

        Example 7:-#include<stdio.h>
        int main()
        {
            int i,n;
            printf("\nEnter the value of n:-");
            scanf("%d",&n);

            for(i=0;i<=n;i++)
            {
                printf("\n %d",i);
            }
            return 0;
        }

        Explanantion:-In the code,i is the loop variable.Initially,it is initialized with the value 1.Suppose the user enters 10 as the value for n.Then the condition is checked,since the condition is true as i is less than n,the statement in the for loop is executed and the value of i is printed.After every iteration,the value of i is incremented.When i=n,the control jumps to the return 0 statement.


        Example 8:-
        #include<stdio.h>
        int main()
        {
            int i,j;
            for(i=1;i<=5;i++)
            {
                printf("\n");
                for(j=1;j<=ilj++)
                {
                    printf("%d",i);
                }
            }
            return 0;
        }

        Output:-
        1
        22
        333
        4444
        55555
     

     Important points regarding for loop:-
     

     1)In for loop,any or all the expressions can be omitted.In case all the expressions are omitted,then there must be two semicolons in the for statement.

     2)There must be no semicolon after a for statement.If you do that,then you are sure to get some unexpected results.

     3)Multiple initializations must be seperated with a comma operator.

     4)If there is no initialization to be done,then the initialization statement can be skipped by giving only a semicolon.

     5)Multiple conditions in the test expressions can be tested by using logical operators(&& or ||).

     6)If the loop controlling variable is updated within the statement block,then the third part can be skipped.

     7)Multiple statements can be included in the third part of the for statement by using the comma operator.For example:-

     for(i=0,j=10;i<j;i++,j--)

     8)The controlling variable can also be incremented/decremented by values other than 1.

     Thanks,this is all about Iterative statements in C.
     Happy coding!!!



              