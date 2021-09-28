//Replace pi with 3.14 in string

// input : "pippxxppiixipi"
// output : "3.14ppxxp3.14ixi3.14"

#include<iostream>
using namespace std;

void replacepi(string s)
{
    if(s.length()==0)
    return;
    
    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        replacepi(s.substr(2));
    }
    else{
        cout<<s[0];
        replacepi(s.substr(1));
    }
}

int main()
{
    
    replacepi("pippxxppiixipi");
    return(0);
}