
# Structured Bindings

Structured Bindings allow us to define several objects in one go, in a more natural way than in the previous versions of C++.

Consider The Function:
```cpp
std::tuple<char, int, bool> mytuple()  
{  
    char a = 'a';
    int i = 123;
    bool b = true;
    return std::make_tuple(a, i, b);
}
```

This returns three variables all of different types. To access these from a calling function prior to C++17, we would need something like:
```cpp
    char a;
    int i;
    bool b;
    std::tie(a, i, b) = mytuple();
```
Where the variables have to be defined before use and the types known in advance.

But using Structured Bindings, we can simply do this as:
```cpp
    auto [a, i, b] = mytuple();
```
which is a much nicer syntax and is also consistent with modern C++ style using auto almost whenever possible.

# Syntax
```cpp
auto ref-opeattr can be any attribute.
```
**attr** can be any attribute.  
**cv-auto** is cv- qualified type specifier auto.  
ref-operator is & or &&.  
**identifier-list** is a comma-separated list of variables.


**‘auto’** keyword let the compiler determine the type of a return value, presumably by looking at the signature of the function.

auto keyword can be used to determine the type of a group of variables inside a tuple when used with ‘[’ square brackets ‘]’.
```cpp
auto [x, y, z, name] = init_entity("avatar");
std::cout << name << " at (" << x << ", " << y << ", " << z << ")" <<std::endl;
```
Structured binding makes the declaration and assignment of elements a one step process:  
```cpp
auto t = std::make_tuple(1.0, "2", '3');
auto [f, i, c] = t; // f = 1.0, i = "2", c = '3'
```  
One advantage structured binding has over std::tie is that we can very easily obtain references to tuple members, whereas C++14 requires us to use get() on individual members to obtain references. For instance:  
```cpp
// C++17
auto& [first, second, third, forth] = t;

auto const& [const_first, const_second, const_third, const_forth] = t;
```
**Implementation** 

With the introduction of structured bindings, we can now obtain a reference to the tuple members using auto&:

```cpp
#include <iostream>
#include <tuple>

int main()
{
    auto tuple = std::make_tuple(1, 'a', 2.3);

    // unpack the tuple into its individual components
    auto& [ i, c, d ] = tuple;

    std::cout << "i=" << i << ", c=" << c << ", d=" << d << '\n';

    // change the value of i inside the tuple
    i = 2;

    // show that the value inside the tuple has changed
    std::cout << "tuple<0>=" << std::get<0>(tuple) << '\n';

    return 0;
}
```
Build and run:

![Screenshot (37)](https://user-images.githubusercontent.com/69664057/139239404-d785d97e-10fe-464a-9190-a1b7ef082eec.png)

**Structs**

Structured bindings also allow us to “unpack” the members of a struct into its individual components.

```cpp
#include <iostream>

struct Foo
{
    int i;
    char c;
    double d;
};

int main()
{
    Foo f { 1, 'a', 2.3 };

    // unpack f's members into individual variables declared at the call site
    auto [ i, c, d ] = f;

    std::cout << "i=" << i << " c=" << c << " d=" << d << '\n';

    return 0;
}

```
Build and run:

![Screenshot (38)](https://user-images.githubusercontent.com/69664057/139239761-495efc2f-ca04-4b4c-b826-3a92290282b5.png)

**Program**

Consider an simple program :

```cpp
#include <tuple>
#include <iostream>

int main() {
  // Declare a tuple-like object.
  std::tuple<double, int, const char*> tuple(3.14, 100, "Hello tuple");

  // Bind temporaries to its parts.
  auto [a, b, c] = tuple;

  // Print its components.
  std::cout<< "0: "<< a<< "\n";
  std::cout<< "1: "<< b<< "\n";
  std::cout<< "2: "<< c<< "\n";
}
```
```cpp
$ circle structured.cxx
$ ./structured
0: 3.14
1: 100
2: Hello tuple
```

Here, automatic storage duration objects a, b and c are declared and bound to the parts of the tuple. This is a destructure operation. The C++ frontend first looks for specializations of std::tuple_size<E> on the operand type. In this case it finds it, so uses std::tuple_element<I, E> to access the type of each tuple part and std::get<I> to access each member lvalue.