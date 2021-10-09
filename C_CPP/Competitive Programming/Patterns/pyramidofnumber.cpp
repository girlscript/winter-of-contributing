 /*
    1 
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number of rows :- ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            /* code */
            if (j <= n - i)
            {
                /* code */
                cout << " ";
            }
            else
            {
                cout <<i<<" " ;
            }
        }
        cout << endl;
    }
}