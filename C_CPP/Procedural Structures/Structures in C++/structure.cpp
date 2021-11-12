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
