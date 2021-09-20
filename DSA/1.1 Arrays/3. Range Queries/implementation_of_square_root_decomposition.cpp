#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

/*
* Square root decomposition allows us to answer queries in sqrt(N) time.
*/
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

        /*
        * @param index: The index to be updated.
        * @param value: The value to set the element at specified index.
        */
        void update(int index, int value){
            int blockIndex = index/sqroot;
            blockSum[blockIndex] = blockSum[blockIndex]-arr[index]+value;
            arr[index] = value;
        }

        void print(){
            cout<< "\nSquare Root Decomposition: "<< endl;
            cout<< "Array Is: "<< endl;
            for(int i = 0; i < arr.size(); i++)
                cout<< arr[i]<< " ";
            cout<< "\nBlock Sum Is: "<< endl;
            for(int i = 0; i < blockSum.size(); i++)
                cout<< blockSum[i]<< " ";
            cout<< endl;
        }
};

int main(){
    // Initilizing input array.
    vector<int> input{1, 2, 6, 7, 9, 3, 1, 9};
    
    // Printing Initial Array.
    SqrtDecomposition sqrtDecomposition(input);
    sqrtDecomposition.print();

    // Updating index 5 with value 7.
    sqrtDecomposition.update(5, 7);
    sqrtDecomposition.print();

    return 0;
}