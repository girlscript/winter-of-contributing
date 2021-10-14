# Exception Handling Involving Classes and Objects

Here's an example below explaining how an exception is thrown with Classes and Objects.

### Example:

```C++

#include<iostream>
using namespace std;
class girlscript   
{
  private:
         int p;
  public:
        girlscript( int q )   // constructor initialized with 'int' as the parameter
        {
          p = q;
          if( q == 1 )
            cout << "Constructor of 1st object is called" << endl;
          else 
            cout << "Constructor of 2nd object is called" << endl;
        }
        ~girlscript()   // destructor initialized 
        {
          if( p == 1 )
            cout << "Destructor of 1st object is called" << endl;
          else
            cout << "Destructor of 2nd object is called" << endl;
        }
};
void gwoc()
{
  girlscript g2(2);    // object g2 created
  throw "Exception thrown";    // exception being throwned
}
int main()
{
  cout << "I am in main" << endl;
  try
  {
    girlscript g1(1);   // object g1 created
    gwoc();
  }
  catch( const char *str )
  {
    cout << str << endl;
  }
  return 0;
}  // end of program

```

In this, when an exception is thrown by the throw statement, all the objects declared within the 'try block' gets detroyed and cleaned up by calling their appropriate destructors. In other words, the stack gets emptied.

<br />

Here's another program below where a class object is thrown as exception.

### Example:

```C++

#include<iostream>
#include<cstring>
int div_int( int, int );
double div_double_div( double, double );
void put_error( void );

class div_int_excep
{
  private:
         char str_error[40];
  public:
        div_int_excep( const char *str )
        {
          strcpy( str_error, str );
        }
        void put_error()
        {
          cout << str_error << endl;
        }
};
class div_double_excep
{
  private:
         char str_error[40];
  public:
        div_double_excep( const char *str );
        {
          strcpy( str_error, str );
        }
        void put_error()
        {
          cout << str_error << endl;
        }
};
int main()
{
  int i = 5, j = 0, c;
  double x = 5.5, y = 0.0, z;
  try
  {
    c = div_int( i, j );
    z = div_double( x, y );
  }
  catch( div_int_excep & d)
  {
    d.put_error();
  }
  catch( div_double_excep &d )
  {
    d.put_errro();
  }
  return 0;
}
int div_int( int i, int j )
{
  if(j == 0)
    throw div_int_excep("Exception in int");
  else
    return i/j;
}
double div_double( double x, double y )
{
  if( y == 0.0 )
    throw div_double_excep("Exception in double");
  else
    return x/y;
}

```

###  Output:

> Exception in int  


In this, the statement " throw div_int_excep( "Exception in int" ); ", the throw keyword is throwing a class object i.e. it first calls a parameterized constructor, which initializes its class data members and then creates an object. This object is then thrown to the respective "catch block". After the catch block is executed the stack is emptied and the program ends.

<br />

---
