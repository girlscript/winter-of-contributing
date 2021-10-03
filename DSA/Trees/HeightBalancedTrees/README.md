# HEIGHT BALANCED BINARY TREES 

A tree which satisfies the following criteria is termed as a HEIGHT BALANCED TREE (In context of Binary Trees) :
(a) At every node the the absolute difference in the heights of the right and the left subtrees must be less 	 than or equal to 1.
(b) Both the left and right subtrees of the given trees are height balanced.

Mathematicall expression : |HeightLeftSubtree - HeightRightSubtree| <= 1 for all the nodes.

## How to check if a binary tree is height balanced or not?

### Naive Approach : 
--> We create one function height() which will take input the root node and return the height of the tree
--> And another function isBalanced() which is going to return a boolean value, true if the tree is height 		balanced and false if the tree is not height balanced.
--> However this approach will be inefficient because, for finding the height of a specific root node we will 	  need to iterate over its left and right subtrees and this will take approximately O(N) time for every 		call.
--> Calling this height function for all the nodes of the tree during tree traversal for isBalanced() 			function will cause the overall time complexity to be O(N^2).
--> Hence we need to think of somthing better....


### Optimised Approach :
--> We will create a function which will return us a pair of the type : pair <boolean, int>, here the boolean 	  value will be the balance of the subtree/tree on which the function is being called and int value will be 	storing the height of that particular subtree/tree.
--> Tree traversal is going to take O(N) time, and you can see that we don't need to anything else which will 	  add to our time complexity, so we will be able to reduce the time complexity from O(N^2) to O(N), which 		is way better.

Example : 
										(1)  --> ROOT NODE
									   /   \
									(2)     (3)
									/	   /   \
								 (4)	(5)     (6)
								    \			   \
								     (7)			(8)
								    /	\
								 (9)	 (10)

Dry Run Analysis : 
--> Start from the root node i.e. node (1).
	We make a call on the left and the right subtree of the root node i.e we call on nodes (2) and (3).

								Left Subtree        Right Subtree
						--> Call    (2)     			(3)
									/	   			   /   \
								 (4)				(5)     (6)
								    \			   			   \
								     (7)						(8)
								    /	\
								 (9)	 (10)

--> Now as we reach the node (2), it makes a call on its left and right subtrees.
	We make a call on node (4) i.e the left subtree and we make a call on NULL i.e. the right subtree of node (2). Similarly, we make a call on the left and right subtrees of node (3).

					--> Call	(4)	   (NULL)			(5)     (6)
								   \			   				   \
								    (7)								(8)
								   /   \
								(9)	    (10)

--> Now in the same manner we make all the subsequent calls until we hit our base case :
	
### Base Case : As soon as we hit a leaf node, or a node which is pointing to NULL we will return the pair    	  <true, 0>, since the height of a leaf node is always 0 and its balance is always true, as it does not 		have any left or right subtrees, however a NULL pointer Node is already height balanced.

--> Otherwise we will return the following data : 
	we will check if the left and the right subtrees of the root node is balanced or not, if both of them are balanced then we will mark the balance of the root node as true, and the height of root node is going to be the HeightTree = (max(HeightLeftSubtree, HeightRightSubtree) + 1)

	we either of the left or right subtree is not balanced, we will return the balance of root as false and its height as calculated in the above step.

### Now let's dive into the codes.
