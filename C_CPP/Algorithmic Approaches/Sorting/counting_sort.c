#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define n 10

void counting_non_decreasing(int a[]){
    int sort[n];
    int coun[n]={0};
    for(int i=0;i<n;i++) coun[a[i]]++;
    for(int i=1;i<n;i++) coun[i]+=coun[i-1];
    for(int i=n-1;i>=0;i--) sort[(--coun[a[i]])]=a[i];
    printf("\n\nNon-decreasingly-sorted: ");
    for(int i=0;i<n;i++) printf("%d ",sort[i]);
}

void counting_non_increasing(int a[]){
    int count[n]={0};
    int sort[n];
    for(int i=0;i<n;i++) count[a[i]]++;
    for(int i=1;i<n;i++) count[i]+=count[i-1];
    for(int i=n-1;i>=0;i--) sort[n-1-(--count[a[i]])]=a[i];
    printf("\n\nNon-Increasingly-sorted: ");
    for(int i=0;i<n;i++) printf("%d ",sort[i]);
}

int main(){
    srand(time(0));
    int a[n];
    printf("random array: ");
    for(int i=0;i<n;i++){
        a[i]=rand()%10;
        printf("%d ",a[i]);
    }
    counting_non_decreasing(a);
    counting_non_increasing(a);
}