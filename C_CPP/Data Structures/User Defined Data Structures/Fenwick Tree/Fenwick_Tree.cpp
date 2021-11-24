#include "bits/stdc++.h"
using namespace std;

int n;
vector<int> fenwick_tree;

int query(int idx){
    int ans=0;
    while(idx>0){
        ans+=fenwick_tree[idx];
        //idx & (-idx) computes 2's complement
        idx-=idx & (-idx); //Dropping L.S.B
    }
    return ans;
}

void update(int idx,int val){
    while(idx<=n){
        fenwick_tree[idx]+=val;
        idx+=idx & (-idx);//Adding L.S.B
    }
}

int main(){

    cout<<"\n Enter the Number of elements in the Array: ";
    cin>>n;
    fenwick_tree=vector<int> (n+1);
    vector<int> arr(n+1);
    cout<<"\n Enter the elements: ";
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        update(i,arr[i]);
    }

    int q;
    cout<<"\n Enter the Number of Queries: ";
    cin>>q;
    while(q--){
        int choice;
        cout<<"\n Type 1- Print the Sum of Array from Range L to R";// Sum Query
        cout<<"\n Type 2- Update the value of an element of given index with val";//Point Update
        cout<<"\n Type 3- Add val to each element of the array from range L to R";//Range Update
        cout<<"\n Enter your choice: ";
        cin>> choice;

        switch (choice)
        {
        case 1:
            int l,r,ans;
            cout<<"\n Enter the values of L and R : ";
            cin>>l>>r;
            ans= query(r)-query(l-1);
            cout<<ans<<"\n";
            break;
        case 2:
            int index,val;
            cout<<"\n Enter the index and the value to be updated with : ";
            cin>>index>>val;
            update(index,-arr[index]);
            arr[index]=val;
            update(index,val);
            break;
        case 3:
            int count;
            count=0;
            cout<<"\n Enter the values of L and R : ";
            cin>>l>>r;
            cout<<"\n Enter value to add the range with : ";
            cin>>val;
            update(l,val);//Adding val to index from l to end
            update(r+1,-1*val);//Adding -val to index from r+1 to end
            //This code is for displaying the updated sum only
            for(int i=1;i<=n;i++)
            {
                
                count+=fenwick_tree[i];
                arr[i]=count;
                cout<<arr[i]<<"\n";
            }        
            break;
       
        default:
            break;
        }
    }
    return 0;
}
