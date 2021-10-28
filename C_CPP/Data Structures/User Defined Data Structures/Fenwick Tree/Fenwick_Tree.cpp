#include "bits/stdc++.h"
using namespace std;

int n;
vector<int> fenwick_tree;

int query(int idx){
    int ans=0;
    while(idx>0){
        ans+=fenwick_tree[idx];
        idx-=idx & (-idx);
    }
    return ans;
}

void update(int idx,int val){
    while(idx<=n){
        fenwick_tree[idx]+=val;
        idx+=idx & (-idx);
    }
}

int main(){

    cout<<"Enter the Number of elements in the Array: ";
    cin>>n;
    fenwick_tree=vector<int> (n+1);
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        update(i,arr[i]);
    }

    int q;
    cout<<"Enter the Number of Queries: ";
    cin>>q;
    while(q--){
        int choice;
        cout<<"\n Type1- Print the Sum of Array from Range L to R";
        cout<<"\n Type2- Update the value of an element of given index with val";
        cout<<"\n Enter your choice: ";
        cin>> choice;

        switch (choice)
        {
        case 1:
            int l,r;
            cout<<"Enter the values of L and R ";
            cin>>l>>r;
            int ans= query(r)-query(l-1);
            break;
        
        default:
            break;
        }
    }
}