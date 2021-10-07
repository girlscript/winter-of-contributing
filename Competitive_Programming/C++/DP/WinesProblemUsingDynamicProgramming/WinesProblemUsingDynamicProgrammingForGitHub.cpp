#include <iostream>
#include <vector>

using namespace std;

/*
Approach : 
we will need to test all the possible answers for this problem and we will choose the one 
which gives us the maximum profit out of all the answers

since for every selection we are limited to choose a wine bottle from either end of the wines array
we will be using two pointers approach for this case and will be using top down dynamic programming 
based approach to solve this problem
*/


vector <vector <int>> dp(100, vector <int>(100,0));

int iterationsCounter=0;

int winesProfit(vector <int> wines, int i, int j, int year)
{
	iterationsCounter++;
	if(i>j)
	{
		return 0;
	}

	if(dp[i][j]!=0)
	{
		return dp[i][j];
	}

	int op1=wines[i]*year + winesProfit(wines,i+1,j,year+1);
	int op2=wines[j]*year + winesProfit(wines,i,j-1,year+1);

	return dp[i][j]=max(op1,op2);
}

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;

		cout<<n<<endl;
		iterationsCounter=0;

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
		dp.clear();
	}

	return 0;
}