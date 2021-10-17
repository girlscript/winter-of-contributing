# Structure in C++

<p> Let's have a look on the definition : </p>
<p> Structure is a collection of variables of different data types under a single name. 
It is also similar to a Class, as a Class also store different data types in it.
</p>
<br>

<!-- ![Structure](https://github.com/ankushsingh24/winter-of-contributing/blob/C_CPP/C_CPP/Procedural%20Structures/Structure/Diagram/structure-in-cpp.png) -->

<img width="600" alt="structure" src="https://user-images.githubusercontent.com/83535682/134462533-e6bdf4d0-71db-47c9-b6f2-ca27d8dbd290.png">


<br>

## Syntax Of Structure

```cpp
struct GWOC
{
    //data memebers
    int Contributor;
    char Name;
    float Stipend;
    double time;

    // member functions
    void contributorInfo();
    void contibutorSkills();
};
```

Note: Remember to end the declaration with a semicolon (;)

1. We can declare variables in structure called data members.
2. We can declare functions in strucure called member functions.

## Sample Program on Structure in C++ :

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

struct GWOC
{
    // data members
    int ContributorSno;
    char Language;
    float time;
    double Stipend;
};

struct GWOC input() // taking info
{
    struct GWOC Ankush;

    cout << "\nEnter the SNo of Contributor : ";
    cin >> Ankush.ContributorSno;
    cout << "Enter the Language Code used by Contributor : ";
    cin >> Ankush.Language;
    cout << "Enter the time used by Contributor : ";
    cin >> Ankush.time;
    cout << "Enter the Stipend of Contributor : ";
    cin >> Ankush.Stipend;

    return Ankush;
}

void display(GWOC *Ankush) // displaying details
{
    cout << "\nThe SNo of Contributor : " << Ankush->ContributorSno << endl;
    cout << "The Language Code used by Contributor : " << Ankush->Language << endl;
    cout << "The time used by : " << Ankush->time << endl;
    cout << "The Stipend of Contributor : " << Ankush->Stipend << endl;
}

// driver code
int main()
{
    GWOC Ankush; // structure variable

    cout << "Enter the details of the Contributor : " << endl;
    Ankush = input(); // function call for input

    cout << "\n\nThe details of the Contributor : " << endl;
    display(&Ankush); //function call for display, passing by call by reference

    return 0;
}
```

### Output

```
Enter the details of the Contributor :

Enter the SNo of Contributor : 24
Enter the Language Code used by Contributor : C
Enter the time used by Contributor : 24.6
Enter the Stipend of Contributor : 2406.12


The details of the Contributor :

The SNo of Contributor : 24
The Language Code used by Contributor : C
The time used by : 24.6
The Stipend of Contributor : 2406.12
```
