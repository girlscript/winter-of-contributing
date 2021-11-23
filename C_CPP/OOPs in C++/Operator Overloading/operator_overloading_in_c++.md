# Operator Overloading

The utility of operators( +,  -, *, /, and so on) are predefined in any programming language. The programmers can directly use these operators on built-in data types. But these operators do not work for user-defined types(objects).To enable C++'s operator to work with class objects, C++ allows programmers to provide their own definition for an operator(to extend the meaning of existing operators)by overloading the built-in operator. This feature is called operator overloading.

**Operator overloading is a form of compile-time polymorphism. Most of the C++'s operators can be overloaded, except**

- Scope resolution operator(::)
- Member selection operator(.)
- Member selection through a pointer to a function(.*)
- Ternary operator(?:)
- Size of operator(sizeof)

**Rules and Restrictions**

- The precedence and associativity of an operator cannot be altered by overloading.
- When we overload (),[],→ or any assignment operators, the operator overloading must be declared as a class member. For all other operators, the operator overloading function can be member functions or non - member functions.
- We cannot change the "arity " of an operator -the number of operands an operator takes.
- New operators cannot be created, only existing operators can be overloaded.
- Operations performed by an operator cannot be changed through the operator overloading, i.e. we cannot make a + operator multiply two operands.

**Operator overloading is generally implemented in two ways :**

- Through member function
- Through friend function(non-member function)


**Code for operator overloading implemented using member function**

```c
/*Add two arrays using operator overloading implemented through member function*/

#include <iostream>

using namespace std;

class AddArray
{
private:
int arr[5];
int sizeArr;

public:
AddArray();                     //default constructor
AddArray(int);                  //parameterized constructor
void display();                 //function for displaying the elements of an array
AddArray operator+(AddArray &); //member function to overload +operator
};

AddArray::AddArray()
{
for (int i = 0; i < 5; ++i)
{
arr[i] = 0;
}
sizeArr = 0;
}

AddArray::AddArray(int num)
{
sizeArr = num;
cout << "Enter the elements of the array :\n";
for (int i = 0; i < sizeArr; ++i)
{
cin >> arr[i]; //input array elements
}
}

void AddArray::display()
{
cout << "Displaying the elements of the array :\n";
for (int i = 0; i < sizeArr; ++i)
{
cout << arr[i] << " ";
}
cout << "\n";
}

AddArray AddArray::operator+(AddArray &arr2) //member function to overload + operator
{
AddArray obj;
obj.sizeArr = sizeArr;
for (int i = 0; i < sizeArr; ++i)
{
obj.arr[i] = arr[i] + arr2.arr[i]; //adding elements of the two arrays
}
return obj; //returning the object of AddArray
}

int main()
{
int num;
cout << "Enter the size of the array : ";
cin >> num;
cout << "\n";

AddArray obj1(num), obj2(num), obj3;
obj3 = obj1 + obj2; //invokes + operator by implicitly issuing
                    //the member function call obj1.operator+(obj2)
cout << "\nThe resultant array is :\n";
obj3.display();

return 0;

}
```

output:

```c
Enter the size of the array : 5

Enter the elements of the array :
67 54 13 32 90
Enter the elements of the array :
23 45 65 88 97

The resultant array is :
Displaying the elements of the array :        
90 99 78 120 187
```


**Code for operator overloading implemented using non-member function**

```c
/*Add two arrays using operator overloading implemented through non-member (friend) function*/

#include <iostream>

using namespace std;

class AddArray
{
private:
    int arr[5];
    int sizeArr;

public:
    AddArray();                     //default constructor
    AddArray(int);                  //parameterized constructor
    void display();                 //function for displaying the elements of an array
    friend AddArray operator+(AddArray ,AddArray ); //non-member function to overload + operator
};

AddArray::AddArray()
{
    for (int i = 0; i < 5; ++i)
    {
        arr[i] = 0;
    }
    sizeArr = 0;
}

AddArray::AddArray(int num)
{
    sizeArr = num;
    cout << "Enter the elements of the array :\n";
    for (int i = 0; i < sizeArr; ++i)
    {
        cin >> arr[i]; //input array elements
    }
}

void AddArray::display()
{
    cout << "Displaying the elements of the array :\n";
    for (int i = 0; i < sizeArr; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

AddArray operator+(AddArray arr1,AddArray arr2) //non-member function to overload + operator
{
    AddArray obj;
    obj.sizeArr = arr1.sizeArr;
    for (int i = 0; i < obj.sizeArr; ++i)
    {
        obj.arr[i] = arr1.arr[i] + arr2.arr[i]; //adding elements of the two arrays
    }
    return obj; //returning the object of AddArray
}

int main()
{
    int num;
    cout << "Enter the size of the array : ";
    cin >> num;
    cout << "\n";

    AddArray obj1(num), obj2(num), obj3;
    obj3 = obj1 + obj2; //invokes + operator by implicitly issuing
                        //the non-member function call operator+(obj1,obj2)
    cout << "\nThe resultant array is :\n";
    obj3.display();

    return 0;
}
```

output:

```c
Enter the size of the array : 5

Enter the elements of the array :
67 54 13 32 90
Enter the elements of the array :
23 45 65 88 97

The resultant array is :
Displaying the elements of the array :        
90 99 78 120 187
```
