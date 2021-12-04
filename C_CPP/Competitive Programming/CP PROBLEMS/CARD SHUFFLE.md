# CARD SHUFFLE

### PROBLEM LINK--  https://www.codechef.com/problems/CARDSHUF


**PROBLEM STATEMENT**  

Chef is organizing an online card game tournament and for this purpose he has to provide a card shuffling software. This software has to simulate the following shuffling process. A stack of N cards is placed face down on the table. Cards in the stack are ordered by value. Topmost card has value 1 and the one on the bottom has value N. To shuffle the cards we repeat the following steps M times:

* take A cards from the top of the deck.
* take another B cards from the top of the deck.
* put the A cards, which you removed in the first step, back on top of the remaining deck.
* take C cards from the deck
* put the B cards, which you're still holding from the second move, card by card on top of the deck.
* finally, return the block of C cards on top  
**Note**: taking a block of cards from the top of the deck does not change their order. The entire block is removed in a single move and not card by card. The only exception is the fifth move, where you return cards one by one from the top.

**INPUT**  
The first line contains integers N and M. The following M lines describe the moves by integers A<sup>i</sup>, B<sub>i</sub>, C<sub>i</sub> as described in the previous section.

In the spirit of random card shuffling, all test cases were generated with uniform random distributions to select where to cut the deck of cards.  

**OUTPUT**  
In a single line output the cards in the deck after performing all the moves. Cards should be listed from top of the deck to bottom and separated by spaces.  

**CONSTRAINTS**  
1 <= N, M <= 100 000

**EXAMPLE**  
```bash
Input:
10 2
6 2 2
5 3 6

Output:
1 2 8 7 3 9 6 5 4 10

```

**EXPLANATION**  
The key to solving this problem are dynamic trees data structures. The dynamic trees problem involves maintaining a forest of trees, which change through series of edge insertions or deletions. The most known solution are link/cut trees. However, they are a bit difficult to implement and adapt for different applications. As we are dealing with a small number of trees in our problem, the constraints are low enough and inputs are random, we can make a compromise and choose some easier solution which still works in sub-quadratic time.

A good candidate are splay trees with their amortized logarithmic time complexity. They are a very flexible data structure. To split a tree at some point just splay adjacent node to the root and remove the edge. Merging two trees can be implemented in a similar way. Splay the rightmost node of the first tree to the root and attach the root of the second tree as its child. You will also have to maintain the sizes of subtrees at each node so that you can find and splay the k-th node to the root and detach first k nodes from a tree. Reversing the order of elements in a subtree should be done in a lazy way. Instead of reversing an entire subtree, just mark the root node for reversal. Next time before you access this node, swap its children and mark them for reversal.

**C++ CODE**
```cpp
#include <iostream>
#include <vector>
#include<bits/stdc++.h>

#define ll int
using namespace std;

struct Node{
    Node(ll v):val{v},rev{0},sz{1},l{0},r{0},prio{rand()}{}
    ll val;
    ll rev;
    ll sz;
    ll prio;
    Node* l;
    Node* r;
};

ll sz(Node* p) {return p? p->sz:0;}

void new_sz(Node* p) {
    if(p) p->sz = 1 + sz(p->l) + sz(p->r);
}

void do_rev(Node* p){
    if(!p || !p->rev) return;
    swap(p->l,p->r);
    if(p->r) p->r->rev^=1;
    if(p->l) p->l->rev^=1;
    p->rev = 0;
}

void merge(Node* &p, Node* l, Node* r){
    do_rev(l);
    do_rev(r);
    if(!l || !r) p = l?l:r;
    else if(l->prio > r->prio){
        p = l;
        merge(p->r,l->r,r);
    }
    else {
        p = r;
        merge(p->l,l,r->l);
    }
    new_sz(p);
}

void split(Node* p, Node* &l, Node* &r, ll x){
    if(!p){l=0;r=0;return;};
    do_rev(p);
    ll pos = sz(p->l)+1;
    if(pos <= x){
        l = p;
        split(p->r,p->r,r,x-pos );
    }
    else {
        r = p;
        split(p->l,l,r->l,x);
    }
    new_sz(p);
}

void out(Node* p){
    if(!p) return;
    do_rev(p);
    out(p->l);
    cout << p-> val << ' ';
    out(p->r);
}

int main() {
    srand(time(0));
    Node* root = 0;
    Node* x = 0;
    Node* y = 0;
    Node* z = 0;
    ll N;
    ll M;
    cin >> N >> M;
    for(ll i=0;i<N;++i){
        merge(root,root,new Node(i+1));
    }
    for(ll i=0;i<M;++i){
        ll A;
        ll B;
        ll C;
        cin >> A >> B >> C;
        split(root,x,y,A); // x  y
        split(y,y,z,B); // x y z
        merge(x,x,z); // y (x+z)
        split(x,x,z,C);// x y z
        y->rev=1;
        merge(y,y,z);
        merge(root,x,y);
    }
    out(root);
    return 0;
}
```