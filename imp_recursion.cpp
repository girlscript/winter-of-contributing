//Find the first and last occurence of a number in an array:

#include<iostream>
using namespace std;

int firstocc(int arr[], int n , int i , int key){
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return firstocc(arr,n , i+1, key);
}

int lastocc(int arr[], int n , int i , int key){
    int restarray=lastocc(arr,n , i+1, key);
    if(restarray==-1){
    return restarray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}

int main()
{
    int arr[]={4,2,1,2,5,2,7};
    cout<<firstocc(arr,7,0,7)<<endl;
    cout<<lastocc(arr,7, 0 , 7)<<endl;
    return (0);
}

//o/p:- 6

// Count no. of digits in number
#include<iostream>
using namespace std;

int countdigit(long long n)
{
    int count=0;

    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}

int main()
{
    long long n ;
    cin>>n;
    cout<<countdigit(n);
    return (0);
}

//i/p:-123
//o/p:-3

//Important questions of recursion from basic to advance 

//Factorial 
#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int smalloutput=factorial(n-1);
    return n*smalloutput;
}

int main(){
    int n;
    cin>>n;
    int output=factorial(n);
    cout<<output<<endl;
    return(0);
}

//i/p:-5
//o/p:-120

//Nth fibonaci number
#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n==0)
    {
        return (0);
    }
    if(n==1)
    {
        return 1;
    }
    int smalloutput1=fib(n-1);
    int smalloutput2=fib(n-2);
    return smalloutput1 + smalloutput2;
}

int main()
{
    cout<<fib(3)<<endl;
    return(0);
}

//i/p:- 3
//o/p:- 2

//Generate all substring of a string

#include<iostream>
#include<string>

using namespace std;

void subseq(string s , string ans)
{
    if(s.length()==0){
    cout<<ans<<endl;
    return ;
    }
    char ch= s[0];
    string ros=s.substr(1);

    subseq(ros,ans);
    subseq(ros,ans+ch);
}

int main()
{
    subseq("ABC"," ");
    return(0);
}


/*
o/p:-
C
 B
 BC
 A
 AC
 AB
 ABC
 */

//Print numbers till n 
//1 increasing
//2 decreasing

#include<iostream>
using namespace std;

void dec(int n)
{
    if(n==0)
    {
        return ;
    }
    cout<<n<<" ";
    dec(n-1);
}

void inc(int n){
    if(n==1)
    {
        cout<<"1"<<" ";
        return;
    }
    inc(n-1);
    cout<<n<<" ";
    
}

int main()
{
    int n ;
    cin>>n;
    dec(n);
    cout<<endl;
    inc(n);
    return(0);
}

//i/p:- 5
/*o/p:- 1 2 3 4 5
5 4 3 2 1 
*/

//Move all x to the end of the string\

//input : "abscdXXXXedddiddaaaXXXXXXXddd"

//output : "absdaedddiddaaadddXXXXXXXXXXX"

#include<iostream>
using namespace std;

string moveallX(string s)
{
    if(s.length()==0)
    return "";

    char ch=s[0];
    string ans=moveallX(s.substr(1));

    if(ch=='X'){
        return ans+ch;
    }
    return ch+ans;
}

int main(){

    cout<<moveallX("abscdaXXXedddiddaaaXXXXXXddd");
    return(0);
}

//Replace pi with 3.14 in string

// input : "pippxxppiixipi"
// output : "3.14ppxxp3.14ixi3.14"

#include<iostream>
using namespace std;

void replacepi(string s)
{
    if(s.length()==0)
    return;
    
    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        replacepi(s.substr(2));
    }
    else{
        cout<<s[0];
        replacepi(s.substr(1));
    }
}

int main()
{
    
    replacepi("pippxxppiixipi");
    return(0);
}

//o/p:- 3.14ppxxp3.14ixi3.14


//power of x to y
#include <bits/stdc++.h>
using namespace std;

float power(float x, int y)
{
	float temp;
	if(y == 0)
		return 1;
	temp = power(x, y / 2);
	if (y % 2 == 0)
		return temp * temp;
	else
	{
		if(y > 0)
			return x * temp * temp;
		else
			return (temp * temp) / x;
	}
}

int main()
{
	float x ;
	int y ;
    cin>>x>>y;
	cout << power(x, y);
	return 0;
}

//i/p:- 4 5
//o/p:- 1024

//Remove all duplicates from a string

#include<iostream>
using namespace std;

string removedup(string s)
{
    if(s.length()==0)
    return " ";

    char ch=s[0];
    string ans=removedup(s.substr(1));
    if(ch==ans[0])
    return ans;

    else
    return ch +ans;
}

int main()
{
    cout<<removedup("aaabbccddeeeaaff");
    return(0);
}

//o/p:-abcdeaf

//Reverse a string using recursion

#include<iostream>
#include<string>
using namespace std;

void reverse(string s)
{
    if(s.length()==0)
    {
        return;
    }
    string ros=s.substr(1);
    reverse(ros);
    cout<<s[0];
}

int main()
{
    reverse("Akrati");
    return(0);
}

//o/p:- itarkA

//Check whether array is sorted or not
#include<iostream>
using namespace std;

bool is_sorted(int a[], int size)
{
    if(size==0 || size==1)
    {
        return true;
    }
    if(a[0]>a[1])
    {
        return false;
    }
    bool issmallsorted=is_sorted(a+1,size-1);
    return issmallsorted;
}
int main()
{
    int a[]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    cout<<is_sorted(a,size)<<endl;
    return(0);
}

//o/p:- 1


//Tower of Hanoi
#include<iostream>
using namespace std;

void towerofhanoi(int n , char src, char dest , char helper){
    if(n==0)
    {
        return;
    }
    towerofhanoi(n-1,src, helper , dest);
    cout<<"Move from "<<src<<" To "<<dest<<endl;
    towerofhanoi(n-1, helper, dest, src);
}

int main()
{
    towerofhanoi(3,'A','C','B');
    return(0);
}

/*
o/p:-
Move from A To C
Move from A To B
Move from C To B
Move from A To C
Move from B To A
Move from B To C
Move from A To C
*/