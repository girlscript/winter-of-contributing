## **Basic problems on string**
## 1.Compare the two string entered by user, if they are equal print 0 otherwise 1.

code in c++

```c++
#include <iostream>
#include <string>                          //string header 
using namespace std;

int main()
{
  string a,b;                                //initialize two strings

  cout << "Enter first string" << endl;
  cin >> a;                                  //taking first string from user
  cout << "Enter second string" << endl;
  cin >> b;                                  //taking second string from user
  bool res=true;
  if(a.length()!=b.length())
  {
    res = false;                           //if length of strings are not equal then they wil not equal
  }
  else
  {
    for(int i=0;i<x.length();i++)       
    {
      if(x[i]!=y[i])                     
      {
        equal = false;
        break;
      }
    }
  }
  cout << equal << endl;
  return 0;
}
```
Output
```
Enter first string
Hello
Enter second string
Hello
1

Enter first string
Hello
Enter second string
hello
0                               //as in first string h is in uppercase and in second string h is in lowercase so they are not equal
```
Time complexity of above code is O(n)

## 2.Write a program to delete all the vowels from a string.

code in c++
```c++
#include<iostream>
using namespace std;
int main()
{
        string a;
        cout<<"Enter String : ";
        cin>>a;
        for(int i=0;i<a.length(); i++)
        {
                if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I'
|| a[i]=='O' || a[i]=='U')
                {
                        a[i]=' ';
                }
        }
        cout<<"New string is: "<<a<<endl;
        return 0;
}
```
Output
```
Enter String : Hello
New string is: H ll
```
Time complexity of above code is O(n)


