<h1>NESTED LOOPS</h1>

Let's first look at the meaning of nested loops.

<h2>Defination</h2>
<p>In programming of computers , loops are termed as to be a sequence of instructions that is repeated until a certain condition is reached <br>
or in simple words , a repetition control system / structure which is executed a specefic number of times. And a nested loop is termed as<br>
to be a loop statement inside another loop statement. These are also known as "loop inside loop".</P>

<h2>Examples to differentiate</h2>
Now to differentiate between loops and nested loops we can consider the following two examples-

<h3><b>example 1</b> - Basic for loop</h3>

 #include <iostream> <br>
using namespace std; <br>
int main() <br>
{<br>
for(int i=0 ; i<10 ; i++) <br>
{ }<br>
return0;<br>
}<br>

<h3><b> example 2</b> - Nested for loop</h3> 

#include <iostream> <br>
using namespace std;  <br>
int main()<br>
{<br>
for(int i=0 ; i<10 ; i++) <br>
{<br>
for(int j=0 ; j<10 ; j++)<br>
}<br>
    return0;<br>
} <br>
                               

<p>So as we compare the above two examples we can clearly see the difference. </p>

<hr>

<h2>Basic Format</h2>
<p>To get a basic idea for the syntax or the format we can refer the following-</p>

 <br>
 <b>Nested while loops  </b>
                                
                                
while( initialization; condition; increment ) ;

// or the condition

{ <br>
while( initialization; condition; increment );
                                       
// or the condition

{ }<br>
}<br>

<br>
<b>Do while loops</b>


do
{

do
{ 

}
while( initialization; condition; increment );

// or the condition

   
                                   
}
while(initialization; condition; increment);
                                         
 // or the condition

<hr>

<h2> Basic Flow</h2>
To understand the flow of nested loops we can look at the following example-
  <br>                                   

#include <iostream> <br>
#include <conio.h><br>
using namespace std;<br>
int main()<br>
{<br>
int i=0;<br>
while(i<=3)          <br>                          
{<br>
cout<<"outer loop executes"<< endl;<br>
int j=0;<br>
while(j<=4)<br>
{<br>
cout<<"inner loop executes";<br>
cout << "i = "<<i<<" and j="<<j << endl;<br>
j++;<br>
<br>
}
<br>
i++;<br>
}
getch();<br>
return 0;<br>
}

 <hr>                               

<h2> Some examples</h2>
<p>Now at last , we should look at some examples- </p> 

<b>example 1</b> - 
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


<br>
<b>example 2</b> - 
// nested for loop to find the prime numbers from 2 to 100 


#include <iostream><br>
using namespace std;<br>
 <br>
int main () {<br>
int i, j;<br>
   
for(i = 2; i<100; i++) <br>
                                                        
{<br>

for(j = 2; j <= (i/j); j++)<br>
if(!(i%j)) break; <br>

// if factor found, not prime<br>
                                 
 if(j > (i/j)) cout << i << " is prime\n";<br>
                                        
}<br>
   
return 0;<br>
}<br>


<br>
<b>example 3 </b>- 
    // C++ program to display  triangular pattern of numbers By taking input from user using nested while loop 

                1
                22
                333
                4444



#include <iostream> <br>
using namespace std; <br>
int main()    <br>
 { <br>
int rows, i = 1;<br>
cout << "Enter the number of rows: ";  <br>
cin >> rows; <br>

while (i <= rows)<br>
{ <br>
int j = 1; <br>
while(j <= i) <br>
{
cout << i; <br>
j++; <br>
}
cout << "\n"; <br>
i++; <br>
}
return 0; <br>
} <br>