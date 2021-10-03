#include <iostream>
#include <queue>

using namespace std;

class Node
{
 public:
    int data;
    Node*left;
    Node*right;
    
    Node(int d)
    {
        data=d;
        right=NULL;
        left=NULL;
    }
};

class HBPair
{
public :
    int height;
    bool balance;
};

Node*build()
{
    int d;
    cin>>d;
    if(d==-1)
    {
        return NULL;
    }
    
    Node*root=new Node(d);
    root->left=build();
    root->right=build();
    
    return root;
}

void printBFS(Node*root)
{   
    queue <Node*> q;
    
    q.push(root);
    q.push(NULL);
    
    while(!q.empty())
    {
        Node*f=q.front();
        if(f==NULL)
        {
            cout<<endl;
            q.pop();
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        
        else 
        {
            cout<<f->data<<" ";
            q.pop();
            
            if(f->left)
            {
                q.push(f->left);
            }
            if(f->right)
            {
                q.push(f->right);   
            }
        }
    }
    
    return ;
}

int height(Node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    
    return 1+max(height(root->left),height(root->right));
}

//height balanced tree : |height of right subtree - height of left subtree|<=1 at every node
//We can write a function such that every node returns a pair : <height,balance>, balance is going to be a bool value 
//we will be following a bottom up approach 
//condition at every node : |h1-h2|<=1 and right balance=true and left balane=true 

HBPair isHeightBalanced(Node*root)
{
    HBPair p;
    
    if(root==NULL)
    {
        //empty trees are always balanced
        
        p.height=0;
        p.balance=true;
        
        return p;
    }
    
    //recursive case
    
    HBPair left=isHeightBalanced(root->left);
    HBPair right=isHeightBalanced(root->right);
    
    if(abs(height(root->left)-height(root->right))<=1 && left.balance && right.balance)
    {
        p.height=1+max(left.height,right.height);
        p.balance=true;
        
        return p;
    }
    else 
    {
        p.balance=false;
    }
    
    return p;
}

int main()
{
    Node*root=build();
    printBFS(root);
    cout<<endl;
    
    HBPair p=isHeightBalanced(root);
    
    cout<<"Height of the tree : "<<p.height<<endl;
    cout<<"Balance of the tree : "<<p.balance<<endl;
    
    return 0;
}