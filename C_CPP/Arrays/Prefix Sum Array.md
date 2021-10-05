#The following code snippet calculates and prints the prefix sum array

'''
#include <iostream>
  using namespace std;
  int main()
  {
  //we consider an array of size 5
  //we can also take input from user
  int array[5]={10,20,40,15,25};
  //to generalise the process we will store the array size in variable n
  //if size is unknown it can be calculated by using n=sizeof(array)/sizeof(int)
  int n=5;
  //now we will find the sum of current and previous element of array starting from second position
  //first position has no previous element so we will leave without any change
  for(int index=1;index<=n-1;index=index+1)
                                  {
                                  array[index]=array[index]+array[index-1];
                                  }
                                  //now we have our new array as prerfix sum array of original array
                                  //hence output should be "10 30 70 85 110"
                                  //now we can print the new array from index 0 to n-1
                                  for(int index=0;index<=n-1;index=index+1)
  {
  cout<<array[index]<<" ";
  }
  return 0;
  }
  '''
  
  #sample input
  5 12 13 22 3
  
  #sample output
  5 17 30 52 55
