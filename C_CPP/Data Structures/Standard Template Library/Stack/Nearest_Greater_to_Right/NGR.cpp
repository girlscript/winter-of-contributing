\n
class solution{
     public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        
        vector<long long>v;//creating a dynamic array i.e vector to store the elements 
        stack<long long>s;//creating a stack
        for(int i=n-1;i>=0;i--)//performing a loop such that to traverse the elements
        {
            if(s.size() == 0)//explaining that if size of stack is NULL or 0 then we will just exit and return
            {
                v.push_back(-1);
            }
            else if(s.size() > 0 && s.top()>arr[i])//if size is greater than 0 i.e some elements are present in stack and element of stack is greater than element of array
            {                                      //then push stack element in vector.
                v.push_back(s.top());
            }
            //if size is greater than 0 i.e some elements are present in stack and element of stack is less than element of array
                                                 
            else if(s.size()>0 && s.top()<=arr[i])                                      
            {
            //then start a loop till we found the larger element and then pop element from stack ,if size gets 0
                while(s.size()>0 && s.top()<=arr[i])
                {
                    s.pop();
                }
                if(s.size() == 0)//then return from loopand push -1 in vector
                {
                    v.push_back(-1);
                }
                else//push stack element in the vector
                {
                    v.push_back(s.top());
                }
            }
            //just push element of arr apart from conditions mentionaed above
            s.push(arr[i]);
        }
        //to get the result and output, reverse the output vector to get the result
        reverse(v.begin(), v.end());
        //return the vector elements  and then exit from loop of traversal
        return v;
    }
};
\n
