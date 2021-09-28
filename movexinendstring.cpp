//Move all x to the end of the string\

//input : "abscdXXXXedddiddaaaXXXXXXXddd"

//output : "absdaedddiddaaadddXXXXXXXXXXX"

#include<iostream>
using namespace std;

string moveallX(string s)
{
    if(s.length()==0)
    return "";

    char ch=s[0];
    string ans=moveallX(s.substr(1));

    if(ch=='X'){
        return ans+ch;
    }
    return ch+ans;
}

int main(){

    cout<<moveallX("abscdaXXXedddiddaaaXXXXXXddd");
    return(0);
}