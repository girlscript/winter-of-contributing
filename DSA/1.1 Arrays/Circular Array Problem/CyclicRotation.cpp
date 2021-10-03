#include<iostream>

using namespace std;
void rotate(int a[], int n)
{

    int last=a[n-1];
   for(int i=n-1;i>0;i--){
     a[i]=a[i-1];
   } 
   a[0]=last;
   for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
   }
    
}

int main(){
int a[]={1,7,6,4,9,10};
    int n= sizeof(a)/sizeof(a[0]);
  rotate (a,n);
return 0;
}
