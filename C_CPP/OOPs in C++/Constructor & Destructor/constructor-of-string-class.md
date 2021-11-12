# Constructors of "string" Class

The most commonly used constructors of "string" class are as follows:

## *1. string();*
   - Used to create an empty string object
   - **Example:** string s1;


## _2. string(const char *s);_
   - Used to create an object of string class from a null-terminated character sequence (C-style strings) pointed by 's'.
   - **Example:** string s2("GIRLSCRIPT");


## _3. string(const char *s, size_t);_
   - Used to create an object of string class from the first 'n' characters of the C-style string pointed by 's'.
   - **Example:** string s3("GIRLSCRIPT", 3);


## *4. string(const string &s);*
   - Used to create an object of string class from other string class object.
   - **Example:** string s4("GIRLSCRIPT");  
   - **Example:** string s5(s4);


Here's an exmaple below explaining all the above examples together in a single program:

```C++
#include<iostream>
#include<string>
using namespace std;
int main()
{
   string s1 = "GIRLSCRIPT";
   string s2("GWOC");
   string s3(s2);
   string s4("GIRLSCRIPT", 4);
   
   cout << s1 << endl;
   cout << s2 << endl;
   cout << s3 << endl;
   cout << s4 << endl;
   
   return 0;
}

```

### *Output:*

> GIRLSCRIPT  
> GWOC  
> GWOC  
> GIRL
                  
