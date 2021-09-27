#include <iostream>
using namespace std;

class girlscript{
    int a;

    public:
    girlscript(){
        a=0;
        cout<<"The actual value is "<<a<<endl;
    }
    friend class gwoc;
};

class gwoc{
    int b;

    public:
    void changeA(girlscript& gs){
        gs.a = 5;
        cout<<"New value is "<<gs.a<<endl;
    }
};

int main(){
    girlscript gs;
    gwoc g;
    g.changeA(gs);
    return 0;
}