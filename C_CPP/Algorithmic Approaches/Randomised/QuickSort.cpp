#include<bits/stdc++.h>
using namespace std;
void Rand_Suffle(int *data, int s, int e){
    srand(time(NULL));
    int i,j,temp;
    for(i=e; i>0; i--){
        j=rand()%(i+1);
        swap(data[i], data[j]);
    }
 }

int Partition(int *data, int s, int e){
    int i= s-1;
    int j= s;
    int pivoit = data[e];
    for( ; j<e; j++){
        if(data[j]<= pivoit){
            i++;
            swap(data[i],data[j]);
        }
    }
    swap(data[i+1], data[e]);
    return (i+1);
}
void RandmisedQuickSort(int *data, int s, int e){
    if(s>=e){
        return;
    }
    int p= Partition(data, s, e);
    RandmisedQuickSort(data, s, p-1);
    RandmisedQuickSort(data, p+1, e);
}
int main(){
    int data[]={8,5,9,4,6,1,12};
    int n = sizeof(data)/sizeof(int);
    Rand_Suffle(data ,0 , n-1);
    cout<<"Data is : ";
    for(int i=0; i<n; i++){
        cout<<data[i]<<"  ";
    }
    RandmisedQuickSort(data, 0 ,n-1);
    cout<<"\n";
    cout<<"Sorted Data is : ";
    for(int i=0; i<n; i++){
        cout<<data[i]<<"  ";
    }

    return 0;
}