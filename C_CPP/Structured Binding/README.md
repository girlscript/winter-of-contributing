
# Structured Bindings

Structured Bindings allow us to define several objects in one go, in a more natural way than in the previous versions of C++.

Consider The Function:

std::tuple<char, int, bool> mytuple()

{

    char a = 'a';
    int i = 123;
    bool b = true;
    return std::make_tuple(a, i, b);
}

This returns three variables all of different types. To access these from a calling function prior to C++17, we would need something like:

    char a;
    int i;
    bool b;
    std::tie(a, i, b) = mytuple();

Where the variables have to be defined before use and the types known in advance.

But using Structured Bindings, we can simply do this as:

    auto [a, i, b] = mytuple();

which is a much nicer syntax and is also consistent with modern C++ style using auto almost whenever possible.

# Syntax

    auto ref-opeattr can be any attribute.
attr can be any attribute.

cv-auto is cv- qualified type specifier auto.

ref-operator is & or &&.

identifier-list is a comma-separated list of variables.


It works with:

* Struct
* Tuple and pair
* Arrays

 Let us see the advantage of Structure bindings over tuples with the help of an example :

#include <bits/stdc++.h>

using namespace std;

// Creating a structure named Point

    struct Point {
	int x;
	int y;
    };

// Driver code

int main()

{

	Point p = {1, 2};
	
	int x_coord = p.x;
	int y_coord = p.y;
	
	cout << "X Coordinate : " << x_coord << endl;
	cout << "Y Coordinate : " << y_coord << endl;

	return 0;
}
