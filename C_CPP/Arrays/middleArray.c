#include <stdio.h>
int main() {
  int n,i; 
  printf("Enter the size of array: ");
  scanf("%d",&n);           // taking the size of array
  int a[n];

  printf("Enter array elements:\n");

  // taking input of the array elements
  for(i = 0; i < n; ++i) {
     scanf("%d", &a[i]);
  }

  int len = n-1;        //taking maximum index value of n length array
  
  //middle value checking condition for even length array
    if (n%2==0){
        a[i] = a[(len/2)];
        a[i+1] = a[(len/2)+1];
        printf("Middle of Array is:%d %d",a[i],a[i+1]);
    }
     //middle value checking condition for odd length array
    else if(n%2!=0)
    {
            a[i] = a[(len/2)];
            printf("Middle of Array is: %d",a[i]);
    }
    else{
            printf("Invalid Input!!!");
    }
  return 0;
}
