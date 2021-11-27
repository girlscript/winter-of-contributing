#include<iostream>
using namespace std;

void towerOfHanoi(int source, int destination, int helper, int N){
    // base case
    if(N==0){          
        return;
    }
    // move N-1 rods from source to helper (using destination tower as helper)
    towerOfHanoi(source,helper,destination,N-1);

    // move the last (N) rod from source to destination and print this instruction
    cout<<endl<<"Move "<<N<<"th disk from tower "<<source<<" to tower "<<destination;

    // move those N-1 rods from helper to destination (using source as helper)
    towerOfHanoi(helper,destination,source,N-1);
}

int main(){
    int N;
    cout<<"Enter the number of disks: ";
    cin>>N;
    towerOfHanoi(1,2,3,N);
    return 0;
}
