//Remove all duplicates from a string

#include<iostream>
using namespace std;

string removedup(string s)
{
    if(s.length()==0)
    return " ";

    char ch=s[0];
    string ans=removedup(s.substr(1));
    if(ch==ans[0])
    return ans;

    else
    return ch +ans;
}

int main()
{
    cout<<removedup("aaabbccddeeeaaff");
    return(0);
}
