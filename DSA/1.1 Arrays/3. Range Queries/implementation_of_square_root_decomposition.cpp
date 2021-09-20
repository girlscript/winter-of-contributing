#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

class SqrtDecomposition{
    vector<int> arr;
    vector<long> blockSum;
    int sqroot;

    public:
        SqrtDecomposition(vector<int>& input){
            sqroot = ceil(sqrt(input.size()));
            arr.resize(sqroot*sqroot);
            for(int i = 0; i < input.size(); i++)
                arr[i] = input[i];
            blockSum.resize(sqroot);
            for(int i = 0; i < blockSum.size(); i++){
                int startIndex = i*sqroot;
                for(int j = 0; j < sqroot; j++)
                    blockSum[i] += arr[startIndex+j];
            }
        }
};

int main(){

    vector<int> input{1, 2, 6, 7, 9, 3, 1, 9};
    SqrtDecomposition sqrtDecomposition(input);

    return 0;
}