### PROBLEM DEFINITION:
Maximum profit :
<br>
 There are objects in front of you each with a particular value and of different weights. you have sack which can carry
a fixed weight and not more than that. He has to choose among those objects and fill
the sack in such a way that you makes maximum profit.
If there are n objects each with a value vi and weight wi [i=1,2,...,n] then to fill his bag
with most profitable items, you has to choose the objects with maximum vi/wi.
<br>
#### Example:
##### Input:
Items as (value, weight) pairs
arr[] = {{60, 30}, {20, 20}, {120, 20}}
Knapsack Capacity, W = 60;
##### Output:
Maximum possible value = 190
#### Explanation:
For 1st item, v1/w1= 60/30 = 2<br>
For 2nd item, v2/w2= 20/20 = 1<br>
For 3rd item, v3/w3= 120/20 = 6<br>
Since vi/wi value of 3rd item is maximum followed by 1st item, they are chosen first i.e., 30+20 = 50 out of total weight 60 is filled.<br>
Remaining weight = 60-50 =10<br>
So 1/2 fraction of 20 kg is taken.<br>
Hence total price will be 60+120+(1/2)*(20) = 190.
<br>
## SOLUTION: 
### Algorithm:
Algorithm that we followed to solve this problem is :
```
Begin
Take an array of structure Item
Declare value, weight, knapsack weight and density
Calculate density=value/weight for each item
Sorting the items array on the order of decreasing density
We add values from the top of the array to total value until the bag is full, i.e; total
value <= W
End
```
### Code
``` C++
#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
struct item {
int s;
int value, weight;
};
bool cmp(struct item a, struct item b) {
double aRatio = (double)a.value / a.weight;
double bRatio = (double)b.value / b.weight;
return aRatio > bRatio;
}
double fractionalKnapsack(int weight, item itemList[], int n) {
sort(itemList, itemList + n, cmp);
int currWeight = 0;
double knapsackVal = 0.0;
cout<<"YOU SHOULD TAKE THE FOLLOWING ITEMS:\t";
for (int i = 0; i < n; i++) {
if (currWeight + itemList[i].weight <= weight) {
currWeight += itemList[i].weight;
knapsackVal += itemList[i].value;
cout<<"ITEM-"<<itemList[i].s<<" AND ";
}

else{
int remaining = weight - currWeight;
knapsackVal += itemList[i].value * ((double) remaining / itemList[i].weight);
cout<<((double) remaining / itemList[i].weight)<<" OF ITEM- "<<itemList[i].s<<endl;
break;
}
}
return knapsackVal;
}
int main() {
cout<<"HII"<<endl;
int weight;
cout<<"I WILL HELP YOU FINDING THE MAXIMUM COST YOU CAN EARN BY
TAKING THE BEST ELEMENTS "<<endl;
cout<<"ENTER THE MAXIMUM CAPACITY OF YOUR SACK-";
cin>>weight;
cout<<"\nENTER THE FOLLOWING INFORMATION";
int n ;
cout<<"\nENTER THE NUMBER OF ITEMS-";
cin>>n;
cout<<"\n";
item itemList[n];
for(int i=0;i<n;i++){
itemList[i].s=i+1;
cout<<"ENTER THE VALUE OF ITEM-"<<i+1<<endl;

cin>>itemList[i].value;
cout<<"ENTER THE WEIGHT OF ITEM-"<<i+1<<endl;
cin>>itemList[i].weight;
}
cout<<"CHECK THE INFORMATION"<<endl;
cout<<"ITEM\tPROFIT\tWEIGHT"<<endl;
for(int i=0;i<n;i++){
cout<<i+1<<"\t"<<itemList[i].value<<"\t"<<itemList[i].weight<<endl;
cout<<"\n";
}
cout << "ACCORDING TO GREEDY APPROACH YOU WILL GET MAXIMUM COST
OF" << fractionalKnapsack(weight, itemList, n);
 return 0;
}
```
### OUTPUT
```
HII
I WILL HELP YOU FINDING THE MAXIMUM COST YOU CAN EARN BY TAKING THE BEST ELEMENTS
ENTER THE MAXIMUM CAPACITY OF YOUR SACK-60

ENTER THE FOLLOWING INFORMATION
ENTER THE NUMBER OF ITEMS-5

ENTER THE VALUE OF ITEM-1
30
ENTER THE WEIGHT OF ITEM-1
5
ENTER THE VALUE OF ITEM-2
20
ENTER THE WEIGHT OF ITEM-2
10
ENTER THE VALUE OF ITEM-3
100
ENTER THE WEIGHT OF ITEM-3
20
ENTER THE VALUE OF ITEM-4
90
ENTER THE WEIGHT OF ITEM-4
30
ENTER THE VALUE OF ITEM-5
160
ENTER THE WEIGHT OF ITEM-5
40
CHECK THE INFORMATION
ITEM    PROFIT  WEIGHT
1       30      5

2       20      10

3       100     20

4       90      30

5       160     40

YOU SHOULD TAKE THE FOLLOWING ITEMS:    ITEM-1 AND ITEM-3 AND 0.875 OF ITEM- 5
ACCORDING TO GREEDY APPROACH YOU WILL GET MAXIMUM COST OF 270
```
<i>Time Complexity: O(N*log2N)<br>
<i>Auxiliary Space: O(1)

