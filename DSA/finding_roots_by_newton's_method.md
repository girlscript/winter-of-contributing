
# Finding roots by Newton's Method

Isaac Newton created this iterative method in the year 1664. However, because Raphson devised the identical technique a few years after Newton, but his work was published much earlier, this approach is sometimes sometimes referred to as the Raphson method.
Given the following equation: f(x) = 0, 
We need to solve the equation by finding its root on the interval [a,b], f(x) is assumed to be continuous and differentiable.

## Algorithm

The method's input parameters include not only the function f(x), but also a starting approximation - some x0 - with which the procedure begins.
If we already know xi, we may compute xi+1 in the following way. Find the location on the x-axis where the tangent to the graph of the function f(x) intersects. The x-coordinate of the discovered location is set to xi+1, and we start over.
The formula obtained is, 
<p align="center"> x<sub>i+1</sub> = x<sub>i</sub>− [ f(x<sub>i</sub>) / f′(x<sub>i</sub>) ]</p>
It is intuitively clear that if the function f(x) is "good" (smooth), and xi is close enough to the root, then xi+1 will be even closer to the desired root.
...
1. Start

2. Define function as f(x)

3. Define derivative of function as g(x)

4. Input:
	a. Initial guess x0 
	b. Tolerable Error e
	c. Maximum Iteration N

5. Do 
	If g(x0) = 0
		Print "Mathematical Error"
		Stop
	End If

    x(i+1) = x(i) - f(x) / g(x)  
	
	step = step + 1
	
	If step > N
		Print "Not Convergent"
		Stop
	End If

   While abs f(x1) > e 

7. Print root as x(i+1)

8. Stop
...


## Application of Newton's method
Let's use the calculation of function f(x) = x2 - 4x - 7 taking initial guess as x = 5 using the Newton's Method to determine an approximation to the root that is accurate to at least within 10<sup>-9</sup>.
Now, the information required to perform the Newton Raphson Method is as follow:

-> f(x) = x2 - 4x - 7,
-> Initial Guess x0 = 5,
-> f´(x) = g(x) = 2x - 4,
-> And tolerance e = 10-9

### C++ Implementation 

...
* #include <iostream>
#include <math.h>
#include<iomanip>
#include<chrono>
using namespace std::chrono; 
using namespace std;
int N= 1000;   //  max iterations

static double function(double x);
double derivFunc(double x);
void newtonRaphson( double x, double precision);

int main() {
  double x0;
  double c;
  double precision;

  cout << "function(x) = x^2 - 4x - 7 "<<endl;


  cout << "Enter initial guess: ";
  cin >> x0;
    

  cout << "\nEnter precision of method: ";
  cin >> precision;


  newtonRaphson(x0,precision);

  return 0;
}

static double function(double x)    // f(x)
{
  return  pow(x,2) - 4*x -7;
}


double derivFunc(double x)   // f'(x) = g(x)
{
    return  2*x - 4 ;
}

void newtonRaphson(double x, double precision)
{

int iter=0;

cout<<setw(3)<<"\niterations"<<setw(8)<<"x"<<setw(30)<<"function(x)"<<endl;

auto start = high_resolution_clock::now(); 

  
  if(derivFunc(x)== 0 )
  {
      cout<<"Error";
      return;

  }
  double h = function(x) / derivFunc(x);
  
  do
  {
    
    h = function(x)/derivFunc(x);     

    // x(i+1) = x(i) - f(x) / f'(x)  
        x = x - h;

    iter++;
    cout<<setprecision(10)<<setw(3)<<iter<<setw(25)<<x<<setw(20)<<function(x)<<endl;

    if (iter > N)
    {
      cout<<" Not Convergent";
      break;
    }

  }while (fabs(function(x))>=precision);

  auto stop = high_resolution_clock::now(); 
  auto duration = duration_cast<microseconds>(stop - start); 


  cout<<"\nRoot = "<<x<<endl;
  cout<<"f(x)="<<function(x)<<endl;
  cout << duration.count()<<" microseconds"<< endl; 
} *
