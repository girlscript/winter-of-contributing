# DISJOINT UNION SET

In this tutorial we will be implementing the DSU(Disjoint Union Set) data structure.
This data structure is extremely important because of its usage in finding cycles in undirected graphs
This algo is also used in Kruksals algo 

Disjoint Sets : non-overlapping sets, or sets which do not share any common elements

This data structure supports two operations : 
(a)Union
(b)Find

Find operation will return the set in which a particular element is present.
Union function means we want to merge two sets into one.

Our goal is to design such a data structure that performs these two operations in minimum possible 
time complexity 

we will start by basic approach which will do it in linear time and then we will make some optimizations
which will do it in O(1) time.
(a)Path Compression
(b)Union By Rank

We will be creating a parent and a rank array which will be storing the parent and number of elements in the set of that particular element respectively.

-->if parent of some node is -1 then it means that the node is itself the set/that node in itself the parent of the set
-->Initially we will mark the parent of all the elements as -1 (initially every element is going to be a 	set in itself)
-->A particular set can be identified using its leader (parent node), the leader will be representing the 	set and will give us the access to the number of elements in its set

#CYCLE DETECTION IN GRAPHS USING DISJOINT UNION SET

## APPROACH : 
-->We will implement our graph using adjacency list, inside the graph class we will define 2 methods : 
   (1) Find()
   (2) UnionSet()

-->Both these methods will be used to group and create sets of all the nodes of the graph so that our underlying idea can be implemented, that is : if two vertices of a graphs share a common parent, the graph must contain a cycle.

NOTE : First we will see how to create these functions using naive appraoch, and afterwards we will implement these structures using optimized appraoch

### Optimisations : 
-->We will use dynamic programming kind of appraoch in this optimisation that is : 
   (a) Path Compression : if two elements belong to the same set, then instead of marking one as the parent of other, we will mark the leader of the set as the parent of all its children

   (b) Union by Rank : while merging 2 sets, we will keep a check on the number of elements in each set
   if one set have more number of elements than the other we will make the leader of that set as the parent of the combined set, otherwise we will make the leader of the other set as the leader of the new combined set, this will add to the efficiency of the program.

   TIME COMPLEXITY WITHOUT OPTIMIZATIONS : O(logN)
   TIME COMPLEXITY AFTER OPTIMIZATIONS : almost O(1)

