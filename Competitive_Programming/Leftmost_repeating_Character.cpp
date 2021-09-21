//Index of leftmost repeating character
#include<bits/stdc++.h>
using namespace std;
int leftmost(string &str);
const int CHAR=256;
int main(){
   string str="hello";
   cout<<"Leftmost repeating character of string "<<str<<" is at index: "<<leftmost(str)<<endl;
   str="CodeofTheDay";
   cout<<"Leftmost repeating character of string "<<str<<" is at index: "<<leftmost(str)<<endl;
   str="ABBCAED";
   cout<<"Leftmost repeating character of string "<<str<<" is at index: "<<leftmost(str)<<endl;
   return 0;
}

int leftmost(string &str){
    int fIndex[CHAR];
    fill(fIndex,fIndex+CHAR,-1);
    int res=INT_MAX;
    for(int i=0;i<str.length();i++){
        int fi=fIndex[str[i]];
        if(fi==-1)
            fIndex[str[i]]=i;
        else
            res=min(res,fi);
    }
    return (res==INT_MAX)?-1:res;
}
