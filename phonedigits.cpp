//Print all possible words from phone digits

#include<iostream>

using namespace std;

void keypad(string s, string ans){
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string code = keypadarr[ch-'O'];
    string ros =  s.substr(1);

    for(int i=0;i<code.length();i++)
    {
        keypad(ros,ans+code[i]);
    }
}

int main()
{
    keypad("2 3","");
    return (0);
}