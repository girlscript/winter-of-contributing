# **Arithmetic Operations Using Numbers As String**

## **Overview**

It is very common to input numbers in the form of strings for various computations and daily practices, and thus all the operations which are possible using numbers should also be available for using numbers in the form of string. We are going to implement make a `NumbersAsString` class which will support all the functions which are there for normal numbers and for this purpose we are going to make use of the predefined `cmath` library. This library contains most of the arithmetic functions that are defined for number and are useful for analysis.

<br>

## **Approach**

The implementation is really really simple, since we have the numbers in the form of a string, we are going to take the advantage of ASCII (American Standard Codes for Information Interchange). We will traverse each digit of the string, then we will extract the number using a standard practice

- To convert a number character into a number we just need to do `character_number - '0'`
- Fun fact is that we can use a single character as a number and the value that we are going to get depends on the ASCII value of the character we have
- And what's important for our usecase is that we can subtract the ASCII values of two characters since these are just numbers
- The ASCII values of numbers starts from : 48 (ASCII value of 0) and ends at 57(ASCII value of 9)
- When we subtract the ASCII value of 0 from any other digit's ASCII value we end up getting the difference as the value of the number only
- And thus this method is very useful for extracting the number out from a string
- Once we are done with extracting a single digit, we can repeat this process for all the remaining elements of the string

<br>

Suppose we have the string number : 4187

1. We start with the last character that is : '7'

```txt
'7' - '0' = 55 - 48 = 7
```

2. Now we extract the next character on the left of '7' that is '8'

```txt
'8' - '0' = 56 - 48 = 8
```

3. Now we extract the next character on the left of '8' that is '1'

```txt
'1' - '0' = 49 - 48 = 1
```

4. Now we extract the next character on the left of '1' that is '4'

```txt
'4' - '0' = 52 - 48 = 4
```

<br>

## **PseudoCode**

<br>

```C++
class Number
private :
    num;
public :
    Number(str)
        i = 0
        while str[i] != '\0'
            digit <-- str[i] - '0'
            num <-- num*10 + digit
            i <-- i + 1
```

<br>

## **Time Complexity**

The time complexity of conversion of a string into a number is O(N) since we need to extract each number digit by digit, hence we need to visit each character of the string and hence we end up with a linear complexity

<br>

## **Code**

<br>

```C++
#include <iostream>
#include <cmath>

using namespace std;

class Number
{
private:
    long long num;
public:
    Number()
    {
        num = 0;
    }

    Number(string s)
    {
        num = 0;
        int i = 0;
        while(s[i] != '\0')
        {
            int digit = s[i] - '0';
            num = (num*10 + digit);
            i++;
        }
    }

    long long get_number() const
    {
        return num;
    }
};

void print_array(Number arr[], int n)
{
    cout << "**********************" << endl;
    cout << "The numbers array is :" << endl;

    for(int i = 0; i < n; i++)
        cout << arr[i].get_number() << "\t";
    cout << endl;
    cout << "**********************" << endl;
}

void log_base10(Number arr[], int n)
{
    cout << "**********************" << endl;
    cout << "The base 10 log of all the elements of the array is :" << endl;

    for(int i = 0; i < n; i++)
        cout << log10(arr[i].get_number()) << "\t";
    cout << endl;
    cout << "**********************" << endl;
}

int main()
{
    cout << "How many number strings you want to enter ?" << endl;
    int n;
    cin >> n;

    Number arr[n];

    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        Number temp(s);
        arr[i] = temp;
    }

    print_array(arr, n);
    log_base10(arr, n);

    return 0;
}
```

<br>

## **Output**

<br>

![Output1](https://user-images.githubusercontent.com/34866732/143735019-75ebb8e0-0ff6-471b-8a1d-577149bb3897.png)

<br>

![Output2](https://user-images.githubusercontent.com/34866732/143735041-a39a7271-b1e1-4418-a75e-8f7519bfe373.png)
