# Program to convert from any other base to Decimal in cpp.
## Binary to Decimal 
```cpp
#include <bits/stdc++.h>
using namespace std;
int binaryToDecimal (int n)
{
    int decimal = 0;
    int x = 1;

    while (n>0)
    {
        int lastdigit = n%10;
        decimal += x * lastdigit;
        x = x *2;
        n /= 10;
    }
    return decimal;
}
int main()
{

    int num;
    cout << "enter Binary number:- ";
    cin >> num;

    cout<<binaryToDecimal(num);
}
```
## Octal to Decimal 
```cpp

#include <bits/stdc++.h>
using namespace std;
int octalToDecimal(int n)
{
    int decimal = 0;
    int weight = 1;
    while (n > 0)
    {
        int lastdigit = n%10;
        decimal += weight * lastdigit;
        weight *= 8;
        n/= 10;
    }
    return decimal;
}
int main()
{

    int num;
    cout << "enter octal number:- ";
    cin >> num;

    cout<<octalToDecimal(num);
}
```

## HexaDecimal to Decimal 
```cpp

#include <bits/stdc++.h>
using namespace std;
int hexaToDecimal(string n)
{
    int sum = 0;
    int x = 1;
    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            sum += x * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            sum += x * (n[i] - 'A' + 10);
        }
        x = x * 16;
    }
    return sum;
}
int main()
{

    int num;
    cout << "enter hexaDecimal number:- ";
    cin >> num;

    cout<< hexaToDecimal(num);
}
```
