#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void non_decreasing_counting_sort(int a[],int n,int k){
    int b[n],op[n];
    for(int i=0;i<n;i++) b[i]=0;
    for(int i=0;i<n;i++) b[(a[i]/k)%10]++;
    for(int i=1;i<n;i++) b[i]+=b[i-1];
    for(int i=n-1;i>=0;i--) op[--b[(a[i]/k)%10]]=a[i];
    for(int i=n-1;i>=0;i--) a[i]=op[i];
}

void radix_sort(int a[],int n,int max){
    for(int i=1;max/i>0;i*=10) non_decreasing_counting_sort(a,n,i);
}

int main(){
    srand(time(0));
    int n=15,max=0;
    int arr[n];
    printf("Random values: ");
    for(int i=0;i<n;i++){
        arr[i]=rand()%1000+21;
        if(max<arr[i]) max=arr[i];
        printf("%d ",arr[i]);
    }
    radix_sort(arr,n,max);
    printf("\n\nSorted: ");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
}