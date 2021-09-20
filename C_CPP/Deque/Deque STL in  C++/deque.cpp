#include <iostream>
#include <deque>

using namespace std;

void printgwoc(deque<int> g)
{
    deque<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
    {
        cout << '\t' << *it;
    }
    cout << endl;
}

// driver code
int main()
{
    deque<int> gwoc;
    gwoc.push_back(50);  // adding element from back
    gwoc.push_front(60); // adding element from front
    gwoc.push_back(90);  // adding element from back
    gwoc.push_front(85); // adding element from front
    gwoc.push_back(40);  // adding element from back
    gwoc.push_front(25); // adding element from front

    cout << "The deque gwoc is : ";
    printgwoc(gwoc); // function call

    cout << "\ngwoc.size() : " << gwoc.size();         // prints actual size of deque
    cout << "\ngwoc.max_size() : " << gwoc.max_size(); // prints maximum size of deque

    cout << "\ngwoc.at(3) : " << gwoc.at(3);     // prints an element at index-3
    cout << "\ngwoc.front() : " << gwoc.front(); // prints first element
    cout << "\ngwoc.back() : " << gwoc.back();   // prints last element

    cout << "\ngwoc.pop_front() : ";
    gwoc.pop_front(); // deletes an element from the front
    printgwoc(gwoc);  // function call

    cout << "\ngwoc.pop_back() : ";
    gwoc.pop_back(); // deletes an element from the back
    printgwoc(gwoc); // function call

    return 0;
}