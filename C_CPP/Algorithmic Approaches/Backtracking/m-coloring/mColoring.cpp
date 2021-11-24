#include<iostream>
#include<fstream>
using namespace std;

int n;// for storing number of vertices
int m;// maximum numbers of colours that can be used
int x[100];//contains numbers from 1 to m .x[k] represent the colour assigned to kth vertex
int graph[100][100];//storing adjancy matrix
int cnt=0;// for counting number of answers possible

void nextval(int k)
{
	while(true)
	{
		x[k]=(x[k]+1)%(m+1);//next higher colour
		if(x[k]==0) return;//all colours exhausted
		int j;
		for(j=1 ; j<=k-1 ; ++j){
			if(graph[k][j]==1 && x[j]==x[k]) //colour adjacent to it have same colour
                		break;
		}
		if(j==k) return;//new colour found
        //otherwise try to find another color
	}
}


void mcoloring(int k)
{
	while(true)
	{
		nextval(k);//genearte all legal colours
		if(x[k]==0) return;//no colour possible
		if(k==n)//if atmost k colours assigned to n vertices
		{
			cnt++;
			for(int i=1 ; i<=n ; ++i){
				cout<<x[i]<<" ";
			}
			cout<<endl;
		}
		else 
        		mcoloring(k+1);//contiue with next process
	}
}

int main(){
	
    fstream infile;
    infile.open("m.txt",ios::in);
	
    if(!infile){
        cout<<"Error on openning file"<<endl;
        return 0;
    }
	
    infile>>n;
    for(int i=1;i<=n ;++i){
        for(int j=1;j<=n ;++j){
            infile>>graph[i][j];
        }
    }
	
    cout<<"Enter value of m: ";
    cin>>m;
    mcoloring(1);
	
    cout<<"Total no. of solutions are "<<cnt<<endl;
	
    return 0;
}

/*  1-------2
    |       |
    |       |
    |       |
    4-------3 
    
Example graph */


/* Input

4
0 1 0 1
1 0 1 0
0 1 0 1
1 0 1 0 */


/* Output

Enter value of m: 2
1 2 1 2 
2 1 2 1 
Total no. of solutions are 2

*/
