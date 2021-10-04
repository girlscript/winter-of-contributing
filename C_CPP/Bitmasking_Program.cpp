#include <iostream>
using namespace std;
int getIthBit(int n,int i)
{   
    int mask= 1<<i; // creating a mask here i is position of bit we want 
    return (n & mask) > 0 ? 1 : 0; // performing & operation with mask and using ternary operators

}
int clearIthBit(int n,int i)
{
    int mask= ~(1<<i); //performing negation of mask
    n=(n & mask);// performing and opeartion with mask
    return n;
}
int setIthBit(int n,int i)
{
    int mask= (1<<i);
    n= (n|mask);// performing or opeartion with mask
    return n;
}
int updateIthBit(int n,int i,int v)
{
    clearIthBit(n,i); //using clear ith bit concept
    int mask=(v<<i); 
    n=n|mask;// sets the right value
    return n;
}
int main() {
  int ch,n,i,v;
  cout<<" Enter \n 1 To get Ith bit\n 2 To clear Ith bit\n 3 To set Ith bit\n 4 To update Ith bit\n";
  cin>>ch;
  switch(ch)
  {
      case 1:       cout<<"Enter the number\n";
                    cin>>n;
                    cout<<"Enter the position of bit you want to get\n";
                    cin>>i;
                    cout<<"Bit is:";
                    cout<<getIthBit(n,i)<<endl;
                    break;
    case   2:       cout<<"Enter the number\n";
                    cin>>n;
                    cout<<"Enter the position of bit you want to clear\n";
                    cin>>i;
                    cout<<"Number after claering Ith bit:";
                    cout<<clearIthBit(n,i)<<endl;
                    break;
    case   3:       cout<<"Enter the number\n";
                    cin>>n;
                    cout<<"Enter the position of bit you want to clear\n";
                    cin>>i;
                    cout<<"Number after setting Ith bit:";
                    cout<<setIthBit(n,i)<<endl;
                    break;
    case   4:       cout<<"Enter the number\n";
                    cin>>n;
                    cout<<"Enter the position of bit you want to update\n";
                    cin>>i;
                    cout<<"Enter the updated bit value:\n";
                    cin>>v;
                    cout<<"Final Number is:";
                    cout<<updateIthBit(n,i,v)<<endl;
                    break;
    
     }
  return 0;
}