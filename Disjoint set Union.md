# <p align="center">Disjoint Set Union or Union Find Data Structure </p>
### In computer science, a disjoint-set data structure, also called a union–find data structure or merge–find set, is a data structure that stores a collection of disjoint sets
**Example 1:- &nbsp; Let’s say, you have a set of N elements which are partitioned into further subsets, and you have to keep track of connectivity of each element in a particular subset or connectivity of subsets with each other. To do this operation efficiently, you can use Disjoint Set Union Data Structure.**  
**Example 2:- &nbsp; Given n friends and their friendship relations, find the total number of groups that exist and the number of student in each group.If no relation is given for any person then that person has no group and singularly forms a group. If a is a friend of b and b is a friend of c, then a b and c form a group.**
### ALgorithm for Example 2 :- 
Step 1. Create an array parent[] of size n+1 which is initialized with 1 to n , which means initially each student is its own parent .

Step 2. Create another array size[] of size n+1 which is initialized with 1 , which means intially  each student is its own friend .

Step 3. We will create function Union(a,b) , which will take two arguments a and b . By this function we will connect a and b by making parent a student of other student .

 &nbsp;&nbsp;&nbsp;case 1 &nbsp;  if size[a]<=size[b]  
 parent[a]=b. and hence we have made the b as parent of a that's why the size of a update to zero and size of b update to (size of a + size of b).
    
 &nbsp;&nbsp;&nbsp;case 2  &nbsp;if size[a]>size[b] , parent[b]=a.
 
Step 4. We will create another function Find(a,b) , which will take two arguments a and b . By this function we came to know  whether the a and b belongs to same group or not. 
if a and b belongs to the same group continue else  follow the cases in step 3.
 
 
 

