//An example of returning and updating the sum of the subarray a[i to j] of an array of size n using Segment Tree
#include "bits/stdc++.h"
using namespace std;

const int N=1e5+2;
int arr[N], tree[4*N];

//Building the Segment Tree
void build(int node,int start,int end){
    if(start==end){
        tree[node]=arr[start];
        return;
    }

    //Divide and Conquer
    int mid=(start+end)/2;
    build(2*node,start,mid);//Building the left subtree
    build(2*node+1,mid+1,end);//Building the right subtree

    //Operation Line (can be modified depending on what operation we want to perform)
    tree[node]=tree[2*node]+tree[2*node+1];
}

//Query to the Segment Tree
int query(int node,int start,int end,int l,int r){
    if(r<start ||end<l){
        //Range lies outside
        return 0;
    }

    if(l<=start && end<=r){
        return tree[node];
    }

    //Divide and Conquer
    int mid=(start+end)/2;
    int left=query(2*node,start,mid,l,r);//Query to the Left Subtree
    int right=query(2*node+1,mid+1,end,l,r);//Query to the Right Subtree

    //Depending on Operation
    return(left+right);
}

//Updating the Segment Tree
void update(int node,int start,int end,int index,int val){
    if(start==end){
        //This indicates that it is a leaf node
        arr[index]+=val;//Updating the Array
        tree[node]+=val;//Updating the Segment Tree
    }
    else{
        int mid=(start+end)/2;
        if(start<=index && index<=mid){
            //Updating the Left Subtree
            update(2*node,start,mid,index,val);
        }
        else{
            //Updating the Right Subtree
            update(2*node+1,mid+1,end,index,val);
        }

        //Depending on Operation
        tree[node]=tree[2*node]+tree[2*node+1];
    }
}

void display(int n){
    for(int i=1;i<2*n;i++){
        cout<<tree[i]<<endl;
    }
}

int main(){

    int n;
    cout<<"\n Enter the number of elements: ";
    cin>>n;
    //Input
    cout<<"\n Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //Building the Segment Tree
    build(1,0,n-1);
    display(n);

    //Query
    cout<<"\nAnswer to the Query:"<<query(1,0,n-1,1,5);

    //Update
    int idx,value;
    cout<<"\nEnter the index and value to update: ";
    cin>>idx>>value;
    update(1,0,n-1,idx,value);
    display(n);
    
    return 0;
}