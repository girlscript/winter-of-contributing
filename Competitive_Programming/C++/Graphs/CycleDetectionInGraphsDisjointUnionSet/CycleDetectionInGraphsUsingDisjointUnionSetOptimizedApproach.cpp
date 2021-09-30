#include <iostream>
#include <vector>

using namespace std;

class Graph
{
	int V;
	vector <pair <int, int>> l;
	int *parent;
	int *rank;

public:

	Graph(int V)
	{
		this->V = V;

		parent = new int[V+1];
		rank = new int[V+1];

		for(int i = 0; i <= V; i++)
		{
			parent[i] = -1;
			rank[i] = 1;
		}
	}

	int findSet(int i)
	{
		if(parent[i] == -1)
		{
			//if the node is itself the parent 

			return i;
		}

		//otherwise we will compress the path by updating the parent of the node as the leader of its set

		return parent[i] = findSet(parent[i]);
	}
	
	void unite(int x, int y)
	{
		int s1 = findSet(x);
		int s2 = findSet(y);

		if(s1 != s2)
		{
			//if the parents of the sets are same, these sets can not be merged, since they already belong
			//to the same set, hence we will merge only those elements, which do not belong to the same set

			if(rank[s1] < rank[s2])
			{
				//if the rank (the number of elements) in the set s1 is less than that in s2 then 
				//we will make s2 as the leader of the new set and add the count of elements of s1 
				//into the rank of s2

				//this appraoch is called Union by rank 

				parent[s1] = s2;
				rank[s2] += rank[s1];
			}
			else 
			{
				parent[s2] = s1;
				rank[s1] += rank[s2];
			}
		}
	}

	void addEdge(int x,int y)
	{
		l.push_back(make_pair(x, y));
	}

	void printGraph()
	{
		//iterate over all the edges in the edge list

		for(pair <int, int> edge : l)
		{
			int x = edge.first;
			int y = edge.second;

			cout<<"The edge is between : "<< x <<" and : "<< y <<endl;
		}
		cout<<endl;
	}

	bool containsCycle()
	{
		//iterate over all the nodes in the adjacency list 

		for(pair<int,int> edge:l)
		{
			int i=edge.first; //first node of the edge
			int j=edge.second; //second node of the set

			int s1=findSet(i);
			int s2=findSet(j);

			if(s1!=s2)
			{
				//if the parents of two nodes are not same then we will just merge them

				unite(s1,s2);
			}
			else
			{
				return true; //if the parents are same then it means that the cycle is present
			}
		}
		
		return false; //since no cycle could be found 
	}

};

int main()
{
	Graph g(7);

	g.addEdge(4,0);
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(2,6);
	g.addEdge(6,5);
	g.addEdge(2,5); // this edge is responsible for the presence of cycle in this graph 

	if(g.containsCycle())
	{
		cout<<"Cycle is present"<<endl;
	}
	else 
	{
		cout<<"No cycle is present"<<endl;
	}

	return 0;
}