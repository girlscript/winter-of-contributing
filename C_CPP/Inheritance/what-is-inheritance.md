## What is Inheritance?

Inheritance is a feature of Object Oriented Programming in which, new classes are derived from the existing classes. 

Here the new class is called the "derived class" or "child class" and the existing class is called the "base class" or "parent class."

When we say that derived class is Inherited from the base class, it means the derived class have all the properties of the base class. Think it like a father-child relationship. 
Let's say father here, which is the base class, have some qualities or properties of his own. Also, the father has a child too. Now the child, which is the derived class, will take all the qualities of his father and can add few of his own new qualities too with that.

Now that's how, my friends, Inheritance works. There are few more types of Inheritance that we will study in another file of this particular directory.

### The Syntax for deriving a new class is as follows:

<!--- Blockquote --->

> class  _(derived-class-name)_  :  _(access-specifier)_  _(base-class-name)_

where, 

class -> keyword to create a new class
<br />
_derived-class-name_ -> name of the new class which will be inherited from the base class
<br />
_access-specifier_ -> anyone among public, private or protected. If neither is mentioned then private is taken as default
<br />
_base-class-name_ -> name of the base class from which the derived class will be inherited

<br />


### Example:

```C++

class parent
{
    //Body
};
class child : public parent
{
    //Body
};

```
The example above shows that 'parent' is the base class and 'child' is the derived class. 'class child' inherits all the features of 'class parents' and also add its own features too.
This means that the objects of the derived class contains the members of the 'parent' class and also the members of its own class. We will prove this by finding the size of objects of both the classes i.e. parent class and child class.

<br />


### Example:

```C++

#include<iostream>
using namespace std;
class parent
{
    int p;
};
class child : public parent
{
    int c;
};
int main()
{
    parent p;
    child c;
    cout<<"Size of p is "<<sizeof(p)<<endl;
    cout<<"Size of c is "<<sizeof(c)<<endl;
    return 0;
}

```
### Output

> Size of p is 4  
> Size of c is 8

Therefore, the output is same as what we predicted. The size of derived class object is more than the base class. The reason behind this is because the derived class is inherited from the base class.





