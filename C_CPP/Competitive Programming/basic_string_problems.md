## **Basic problems on string**
## 1.Compare two strings entered by user, if they are equal print 0 otherwise 1.

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
0                               
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

## 3. Write a program to reverse a string.
code in c++
```c++
#include <iostream>
#include <string>
using namespace std;
string reverse(string x){
        string b;                              //initializing a new string
        b=x;                                   //storing all character of given string into temporary string
        int index=0;
        for(int i=b.length()-1;i>=0;i--){
             x[index]=b[i];                    //now storing all characters from temporary string into given string in reverse manner
            index++;
        }
        return x;
}
int main() 
{
        string a;
        cout<<"Enter String : ";
        cin>>a;
        cout<<"reversed string is: "<<reverse(a);
        
  }
```
Time complexity of above code is O(n)
## HAPPY LEARNING 🙌✨

### REFERENCES

For preparing this document some refrences were taken for maintaining the authenticity of the code and also for making the topics more informative
The links of blog that were reffered -:


 - [w3resource](https://www.w3resource.com/cpp-exercises/string/index.php)
 - [codesdope](https://www.codesdope.com/practice/cpp-string/)
  
