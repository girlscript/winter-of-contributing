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

void update(int node,int start,int end,int index,int val){
    
}