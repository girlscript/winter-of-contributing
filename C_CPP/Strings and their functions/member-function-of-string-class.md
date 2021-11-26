# Member Functions of "string" Class  

The most commonly used member functions of "string" class are as follows:  

## **a. append();**  
- Used to extend the current string by appending another string to it.  

### Example:  
```C++
#include<iostream>
#include<string> 
using namespace std;
int main()
{
   string s1 = "Girlscript ";
   string s2 = "Winter of ";
   string s3 = "Contributing";
   string s4;
   s4.append(s2);
   s4.append(s1);
   s4.sppend(s3);
   cout << s4 << endl;
   return 0;
}
```

### Output:
> Girlscript Winter of Contributing  

<br />

## **b. assign()**  
- Used to assign a new content to the existing string by replacing its current content.  

### Example: 
```C++
#include<iostream>
#include<string>
using namespace std;
int main()
{
   string s1;
   string s2 = "Work is Worship";
   s1.assign(s2);
   cout << s1 << endl;
   string s3 = "Be positive";
   s1.assign(s3);
   cout << s1 << endl;
   return 0;
}
```

### Output:
> Work is Worship  
> Be positive  

<br />

## **c. length() and size()**
- Both 'length()' and 'size()' are used to find the number of characters in a string.  

### Example: 
```C++
#include<iostream>
#include<string> 
using namespace std;
int main()
{
   string s1 = "Make in India";
   cout << s1.length() << endl;
   cout << s1.aize() << endl;
   return 0;
}
```

### Output
> 19  
> 19  

<br />

## **d. at()** 
- It returns a character at a specified position.  

### Example:  
```C++
#include<iostream>
#include<string>
using namespace std;
int main()
{
   string s1("Save Water");
   for(int i = 0; i < s1.length(); i++)
   cout << s1.at(i);
   return 0;
}
```

### Output:   
> Save Water  

<br />

## **e. begin() and end()**
- 'begin()' returns an iterator that points to the starting character of a string.  
- 'end()' returns an iterator that points to the next element after the last character in a string.  

### Example:  
```C++
#include<iostream>
#include<string>
suing namespace std;
int main()
{
   string s1 = "Save Power";
   string : : iterator i;
   for(i = s1.begin(); s1.end(); i++0
       cout << *i << endl;
   return 0;
}
```

### Output:
> Save Power  

<br />

## **f. comapre()**
- Ued to compare two strong object. This function returns zero(0), if all the characters of both the string objects are same. If the first mis-matched character of the invoking string obejct is lesser than the comparing string object, then the functions returns a negative value else it returns a positive value.  

### Example:  
```C++
#include<iostream>
#include<string>
using namespace std;
int main()
{
   string s1 = "GIRLSCRIPT";
   string s2 = "girlscript";
   int value;
   value = s1.compare(s2);
   if(value == 0)
      cout << "EQUAL" << endl;
   else if (value > 0)
      cout << "GREATER" << endl;
   else
      cout << "LESSER" << endl;
   return 0;
}
```

### Output:
> LESSER
