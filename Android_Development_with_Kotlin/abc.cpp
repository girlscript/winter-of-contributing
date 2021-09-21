#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q,i,j;
	cin>>n>>q;
	string s;
	for(i=0;i<n;i++)
		s+=(char)('A'+i);
	for(i=0;i<q;i++)
	{
		for(j=0;j<n-1;j++)
		{
			cout<<"? "<<s[j]<<" "<<s[j+1]<<endl;
			char ans;
			cin>>ans;
			if(ans=='<')
				swap(s[j],s[j+1]);
		}
	}
	cout<<"! "<<s<<endl;
	return 0;

}