#include <iostream>
#include <vector>

using namespace std;

int iterationsCounter=0;

int winesProfit(vector <int> wines, int i, int j, int year)
{
	iterationsCounter++;
	if(i>j)
	{
		return 0;
	}

	int op1=wines[i]*year + winesProfit(wines,i+1,j,year+1);
	int op2=wines[j]*year + winesProfit(wines,i,j-1,year+1);

	return max(op1,op2);
}

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;

		vector <int> wines;

		for(int i=0;i<n;i++)
		{
			//int num;
			//cin>>num;

			//wines.push_back(num);
			wines.push_back(i+1);
		}

		cout<<winesProfit(wines,0,n-1,1)<<endl;
		cout<<"Total number of iterations done for this answer are : "<<iterationsCounter<<endl;
	}

	return 0;
}