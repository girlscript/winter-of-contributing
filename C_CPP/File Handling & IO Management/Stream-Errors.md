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

### No-Input Input

Sometimes, the users are expected to enter a number or a string, but they simply press Enter key without even typing any digits. Like 
> cin>>input; 
 
Pressing Enter key will cause the cursor come to the next line, at the same time the stream continues to wait for the input.

**_What's wrong in this ?_**

- Firstly, the user might think that the computer is broken and not his/her fault to press Enter without entering the digit.
- Secondly, pressing the Enter key repeatedly causes the cursor go down and down till it reaches the bottom of the screen, which is of no use. 
 In text-based graphics related programs, scrolling down and down disarranges the display.
 
 **_Solution to get rid of this problem:_**
 
 It's really important to tell the input stream to not ignore the whitespace, which is done by clearing the _skipws_ flag.
 
 ```C++

  cout<<"Enter an input= "<<endl;
  cin.unsetf(ios::skipws);  // This is done to not ignore whitespace.
  cin>>input;
 ```
 
 By doing this, even if the user presses Enter key without entering input, the failbit will be set and an error will be generated.


### Too Much Characters

Commonly, more characters are left in the input stream even after the input is apparently completed and then they are moved along to next line operation. To overcome these irrelevant characters the **_ignore(max,delim)_** function of _istream_ is used. This function reads and throws upto max characters, including delimiter.

Example:
> cin.ignore(20,'\n');
  
Which causes cin to read not more than 20 characters including '\n' and removes them from input.
