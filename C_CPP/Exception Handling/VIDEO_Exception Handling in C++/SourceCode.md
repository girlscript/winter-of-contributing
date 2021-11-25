1. Exception.cpp
```cpp
//Simple Exception Handling- Divide by 0
#include <iostream>
using namespace std;
int main()
{
    int a=50;
    int b=5;
    double c=0;
    try
    {
        if(b==0)
        {
            throw(1);
        }
        c=a/b;
        cout<<"\n Division is "<<c;
    }
    catch(int i){
        cout<<"\n Divide by zero error!! Number can not be divide by 0. Error number "<<i;
    }
    return 0;
}
```
  
2. Exception2.cpp
```cpp
//Exception Handling using multiple throw and catch
#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    try
    {
    if(a==1)
    {
        throw 1;
    }
    if (a == 2)
    {
        throw 'a';
    }
    if (a == 3)
    {
        throw float(20.9);
    }
    }
    catch (int i)
    {
        cout << "Caught Integer Exception value="<<a;
    }
    catch (char i)
    {
        cout << "Caught Character Exception value=" << a;
    }
    catch (float i)
    {
        cout << "Caught Float Exception value=" << a;
    }
    return 0;
}
```
  
3. Exception3.cpp
```cpp
//Multiple throw single catch block
#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    try
    {
        if (a == 1)
        {
            throw 1;
        }
        if (a == 2)
        {
            throw 'b';
        }
        if (a == 3)
        {
            throw float(20.9);
        }
    }
    catch (...)
    {
        cout << "Caught an Exception value"<<a;
    }

    return 0;
}
```
