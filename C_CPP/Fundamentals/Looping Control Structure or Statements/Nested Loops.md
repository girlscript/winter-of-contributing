<h1>NESTED LOOPS</h1>

Let's first look at the meaning of nested loops.

<h2>Defination</h2>
<p>In programming of computers , loops are termed as to be a sequence of instructions that is repeated until a certain condition is reached 
or in simple words , a repetition control system / structure which is executed a specefic number of times. And a nested loop is termed as
to be a loop statement inside another loop statement. These are also known as "loop inside loop".</P>

<h2>Examples to differentiate</h2>
Now to differentiate between loops and nested loops we can consider the following two examples-

<h3>example 1 - Basic for loop</h3>
                               #include <iostream> 
                               using namespace std;
                               int main()
                               {
                                   for(int i=0 ; i<10 ; i++)
                                   { }
                                   return0;
                               }

<h3>example 2 - Nested for loop</h3> 
                               #include <iostream>
                               using namespace std;
                               int main()
                               {
                                   for(int i=0 ; i<10 ; i++)
                                   {
                                       for(int j=0 ; j<10 ; j++)
                                       { }
                                   }
                                   return0;
                               } 
                               

<p>So as we compare the above two examples we can clearly see the difference. </p>

<h2>Basic Format</h2>
<p>To get a basic idea for the syntax or the format we can refer the following-</p>
 
 Nested while loops   
                                
                                
                                while( initialization; condition; increment ) ;

                                       // or the condition

                                { 
                                    while( initialization; condition; increment );
                                       
                                        // or the condition

                                    { }
                                }

Do while loops
                                do{

                                do{ 

                                  }
                                       while( initialization; condition; increment );

                                       // or the condition

   
                                   
                                   }
                                        while(initialization; condition; increment);
                                         
                                         // or the condition



<h2> Basic Flow</h2>
To understand the flow of nested loops we can look at the following example-
                                     
                                    #include <iostream>
                                    #include <conio.h>
                                    using namespace std;
                                    int main()
                                    {
                                    int i=0;
                                    while(i<=3)
                                    {
                                    cout<<"outer loop executes"<< endl;
                                    int j=0;
                                    while(j<=4)
                                    {
                                    cout<<"inner loop executes";
                                    cout << "i = "<<i<<" and j="<<j << endl;
                                    j++;
                                    }

                                    i++;
                                    }
                                    getch();
                                    return 0;
                                    }
                                

<h2> Some examples</h2>
<p>Now at last , we should look at some examples- </p> 

example 1 - 
              // to print a pattern of 5 rows and 3 columns
              *  *  *  
              *  *  *  
              *  *  *  
              *  *  *  
              *  *  *  
                                     
                                       #include <iostream>
                                       using namespace std;

                                       int main() 
                                       {

                                        int rows = 5;
                                        int columns = 3;

                                        for (int i = 1; i <= rows; ++i) 
                                        {
                                        for (int j = 1; j <= columns; ++j) 
                                        {
                                        cout << "*  ";
                                        }
                                        cout << endl;
                                        }

                                        return 0;
                                        }     


example 2 - 
             // nested for loop to find the prime numbers from 2 to 100 


                                        #include <iostream>
                                        using namespace std;
 
                                        int main () {
                                        int i, j;
   
                                        for(i = 2; i<100; i++) 
                                                        
                                        {
                                        for(j = 2; j <= (i/j); j++)
                                        if(!(i%j)) break; 
                                                                                   
                                                        // if factor found, not prime
                                 
                                 
                                        if(j > (i/j)) cout << i << " is prime\n";
                                        }
   
                                         return 0;
                                        }


example 3 - 
    // C++ program to display  triangular pattern of numbers By taking input from user using nested while loop 

                1
                22
                333
                4444



                                                     #include <iostream>
                                                     using namespace std;
                                            
                                                     int main() 
                                                    {
                                                    int rows, i = 1;
                                                    cout << "Enter the number of rows: ";
                                                    cin >> rows;

                                                    while (i <= rows)
                                                    {
                                                        int j = 1;
                                                    while(j <= i) 
                                                    {
                                                    cout << i;
                                                    j++;
                                                    }
                                                    cout << "\n";
                                                    i++;
                                                    }
                                                    return 0;
                                                    }