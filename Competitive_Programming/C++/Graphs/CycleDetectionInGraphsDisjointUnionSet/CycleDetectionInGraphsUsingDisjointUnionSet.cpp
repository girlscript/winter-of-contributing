#include <iostream>
#include <list>

using namespace std;

class Graph
{
	int V; //number of vertices of the graph
	list <pair<int,int>> l; //list that will contain the vertex details as : X-Y Coordinate Pair

public:

	Graph(int V)
	{
		//This is our constructor
		//Initialize the number of vertices of the graph 

		this->V=V;
	}

	int addEdge(int u,int v)
	{
		//add an edge between 2 given coordinates

		l.push_back(make_pair(u,v));
	}

	int findSet(int i,int parent[])
	{
		//base case

		if(parent[i]==-1)
		{
			//this means that the node is itself the parent 

			return i;
		}

		return findSet(parent[i],parent);
	}

	void unionSet(int x,int y,int parent[])
	{
		//logic : if the two nodes have different parents then we will merge them into one single set
		//		  other wise we will leave them as it is

		int s1=findSet(x,parent);
		int s2=findSet(y,parent);

		if(s1!=s2)
		{
			parent[s1]=s2;
		}
	}

	bool containsCycle()
	{
		//create the parent array 
		//this array will store the leader of the set of which current node is a part of 

		int *parent=new int[V+1];

		for(int i=0;i<V+1;i++)
		{
			parent[i]=-1; //initially mark the parent of all the nodes as the node itself
		}

		//iterate over all the nodes in the adjacency list 

		for(pair<int,int> edge:l)
		{
			int i=edge.first; //first node of the edge
			int j=edge.second; //second node of the set

			int s1=findSet(i,parent);
			int s2=findSet(j,parent);

			if(s1!=s2)
			{
				//if the parents of two nodes are not same then we will just merge them

				unionSet(s1,s2,parent);
			}
			else
			{
				return true; //if the parents are same then it means that the cycle is present
			}
		}

		delete []parent; //free the dynamcially allotted storage
		return false; //since no cycle could be found 
	}
};

int main()
{
	Graph g(4);

	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(2,3);
	//g.addEdge(3,0);

	cout<<g.containsCycle()<<endl;

	return 0;
}