# **Cycle Detection In Graphs Disjoint Union Set**

- This data structure is extremely important because of its usage in finding cycles in **undirected graphs**
This algorithm is also used in Kruksals algorithm

<br />

- Disjoint Sets : non-overlapping sets, or sets which do not share any common elements

- This data structure supports two operations :
  - 1 **Union**
  - 2 **Find**

- Find operation will return the set in which a particular element is present.
Union function means we want to merge two sets into one.

- Our goal is to design such a data structure that performs these two operations in minimum possible 
time complexity

- We will start by basic approach which will do it in linear time and then we will make some optimizations
which will do it in O(1) time.
  - 1 **Path Compression**
  - 2 **Union By Rank**

- We will be creating a parent and a rank array which will be storing the parent and number of elements in the set of that particular element respectively.

  - if parent of some node is -1 then it means that the node is itself the set/that node in itself the parent of the set
  - Initially we will mark the parent of all the elements as -1 (initially every element is going to be a set in itself)
  - A particular set can be identified using its leader (parent node), the leader will be representing the set and will give us the access to the number of elements in its set

<br />

## **APPROACH**

- We will implement our **graph using adjacency list**, inside the graph class we will define 2 methods :
  - 1 **Find()**
  - 2 **UnionSet()**

- Both these methods will be used to group and create sets of all the nodes of the graph so that our underlying idea can be implemented, that is : if two vertices of a graphs share a common parent, the graph must contain a cycle.

- **NOTE** First we will see how to create these functions using naive appraoch, and afterwards we will implement these structures using optimized appraoch

<br />

### **Optimisations**

- We will use dynamic programming kind of appraoch in this optimisation that is :
  - **Path Compression :** if two elements belong to the same set, then instead of marking one as the parent of other, we will mark the leader of the set as the parent of all its children

  - **Union by Rank :** while merging 2 sets, we will keep a check on the number of elements in each set
   if one set have more number of elements than the other we will make the leader of that set as the parent of the combined set, otherwise we will make the leader of the other set as the leader of the new combined set, this will add to the efficiency of the program.

### **Time Complexity**

- Unoptimised
  - O(log(N))
- Optimised
  - O(1)

<br />

### **Code**

- **Unoptimised Approach**

```C++
#include<bits/stdc++.h>

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
```

<br />

- **Optimized Approach**

```C++
#include<bits/stdc++.h>

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

	g.printGraph();

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
```

### **Output :**

<br />

<img src="https://user-images.githubusercontent.com/34866732/136705602-e8e50005-a307-4e8f-89e1-03783c070717.png" width="1115" height="624">
