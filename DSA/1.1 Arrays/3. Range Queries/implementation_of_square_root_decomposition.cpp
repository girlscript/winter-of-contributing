#include<iostream> // for using `cout`
#include<vector>   // for using `vector`
#include<cmath>    // for using `ceil` and `sqrt`
using namespace std;

/**
 * @brief Square root decomposition allows us to answer queries in sqrt(N) time.
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

        /**
        * @param index: The index to be updated.
        * @param value: The value to set the element at specified index.
        */
        void update(int index, int value){
            int blockIndex = index/sqroot;
            blockSum[blockIndex] = blockSum[blockIndex]-arr[index]+value;
            arr[index] = value;
        }

        /**
         * @param left: The stating index.
         * @param right: The ending index.
         * @return The sum from index left to right
         */
        long query(int left, int right){
            int startBlockIndex = left/sqroot;
            int endBlockIndex = right/sqroot;
            long sum = 0;
            for(int i = startBlockIndex+1; i < endBlockIndex; i++)
                sum += blockSum[i];
            
            int startIndex = left%sqroot;
            int endIndex = right%sqroot;
            for(int i = startIndex; i < sqroot; i++)
                sum += arr[startBlockIndex*sqroot+i];
            for(int i = 0; i <= endIndex; i++)
                sum += arr[endBlockIndex*sqroot+i];

            return sum;
        }

        /**
        * @brief function to print arr and blockSum array.
        */
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

/**
* @brief main function or the driver function.
* @return 0
*/
int main(){
    // Initilizing input array.
    vector<int> input{1, 2, 6, 7, 9, 3, 1, 9, 7};
    
    // Printing Initial Array.
    SqrtDecomposition sqrtDecomposition(input);
    sqrtDecomposition.print();

    // Updating index 6 with value 8.
    sqrtDecomposition.update(6, 8);
    sqrtDecomposition.print();

    // Execuring sum query within range.
    cout<< "\nSum Query Within Range 2 to 7 Is: " << sqrtDecomposition.query(2, 7)<< endl;

    return 0;
    // End of main function.
}