## Stream Errors

We had used a direct approach to input and output, using statements like:
> cout<<"GWOC'21";  
> cin>>variable;

We must have assumed that this approach will never go wrong during the I/O process. But, that's not the case always. So, in this we will explore the problems that arises during I/O process.


### Error-Status Bits

The stream error-status flags comprise of an **ios enum** member which gives an account of errors that has occured in an input or output process.  
The following table lists the **Error-Status Flags**.

|    Name    |      Definition      |
|------------|----------------------|
|  eofbit    | End of file reached. |
|  goodbit   | No errors.           |
|  badbit    | Invalid operation.   |
|  failbit   | Operation failed.    |
|  hardfail  | Unrecovered error.   |

The following table lists the **Functions of Error Flags**.

|   Function   |                              Motive                           |
|--------------|---------------------------------------------------------------|
|  int=eof();  | Returns true if EOF flag set.                                 |
|  int=good(); | Returns true if no flags set.                                 |
|  int=bad();  | Returns true if _badbit_ or _hardfail_ flag set.              |
|  int=fail(); | Returns true if _failbit_ or _badbit_ or _hardfail_ flag set. |


### Inputting Numbers

This particular approach applies to the numbers read from either the disk or the keyboard. Now, let's see how to solve errors when inputting numbers.
For that I have perfommed an example program to help you understand.

``` C++

#include <iostream>
using namespace std;

int main()
{
    cout<<"input 1= ";
    int i1=0;
    cin>>i1;
    cout<<"input 2= ";
    int i2=0;
    cin>>i2;
    
    cout<<"Input 1 is equal to "<<i1<<endl;
    cout<<"Input 2 is equal to "<<i2<<endl;
}

```

#### Output:

> input 1= 1 <br>
> input 2= hello <br>
> Input 1 is equal to 1 <br>
> Input 2 is equal to 0 <br>

#### *_Why does this happen ?_*
If the **cin** of the above code reads for input 2, character can't be converted to int. Also,
- _failbit_ for the cin is set.
- Attempt to read input from cin will be failed.

#### *_Solution for this problem:_*
Reset the input stream. Which means
- cin's _failbit_ should be cleared.
- cin's input buffer should also be cleared.

```C++
void cin_reset()
{
  cin.clear();  // clears all the error status bits.
  cin.ignore(); // clears all the input buffer.
}
```

### Too Much Characters
















