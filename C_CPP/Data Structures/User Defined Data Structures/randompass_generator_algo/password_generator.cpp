#include <bits/stdc++.h>
using namespace std;
string PasswordSuggestion(int l, int u, int d, int s, string str)
{
 
    // all digits
    string num = "0123456789";
 
    // all lower case, uppercase and special characters
    string lower_case = "abcdefghijklmnopqrstuvwxyz";
    string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string newchar = "#@$_()!";
    int val = 0;
 
    if (l == 0) {
        val = rand() % str.length();
        str.insert(val, 1, lower_case[rand() % 26]);
    }
 
    // if there is no upper case char in input string, add it
    if (u == 0) {
        val = rand() % str.length();
        str.insert(val, 1, upper_case[rand() % 26]);
    }
 
    // if there is no digit in input string, add it
    if (d == 0) {
        val = rand() % str.length();
        str.insert(val, 1, num[rand() % 10]);
    }
 
    // if there is no special character in input string, add it
    if (s == 0) {
        val = rand() % str.length();
        str.insert(val, 1, newchar[rand() % 7]);
    }
 
    return str;
}
 // adding more characters to suggest strong password
string add_more_char(string str, int need)
{
    int pos = 0;
    string lower_case = "abcdefghijklmnopqrstuvwxyz";
 
    for (int i = 0; i < need; i++) {
        pos = rand() % str.length();
        str.insert(pos, 1, lower_case[rand() % 26]);
    }
    return str;
}
/* make_password function :This function is used to check
strongness and if input string is not strong, it will suggest*/
void generate_password(int n, string p)
{
    int l = 0, u = 0, d = 0, s = 0, need = 0;
 
    // password suggestions.
    string suggest;
 
    for (int i = 0; i < n; i++) {
        // password suggestions.
        if (p[i] >= 97 && p[i] <= 122)
            l = 1;
        else if (p[i] >= 65 && p[i] <= 90)
            u = 1;
        else if (p[i] >= 48 && p[i] <= 57)
            d = 1;
        else
            s = 1;
    }
 
    // Check if input string is strong that
    // means all flag are active.
    if ((l + u + d + s) == 4) {
        cout << "Your Password is Strong" << endl;
        return;
    }
    else
        cout << "Suggested password " << endl;
 
    /*suggest 10 strong strings */
    for (int i = 0; i < 10; i++) {
        suggest = PasswordSuggestion(l, u, d, s, p);
        need = 8 - suggest.length();
        if (need > 0)
            suggest = add_more_char(suggest, need);
        cout << suggest << endl;
    }
}
 
// Driver code
int main()
{
    string input_string = "acdf";
    srand(time(NULL));
    generate_password(input_string.length(), input_string);
    return 0;
}
