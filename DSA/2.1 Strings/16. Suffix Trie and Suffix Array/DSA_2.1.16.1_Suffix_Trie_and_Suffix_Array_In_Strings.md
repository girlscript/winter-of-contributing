## Suffix Trie

Suffix trie are a space-efficient data structure to store a string that allows many kinds of queries to be answered quickly. Suffix trees are hugely important for searching large sequences like genomes.

* **Building a Suffix Trie**
    1. Generate all suffixes of given text. 
    2. Consider all suffixes as individual words and build a trie.
    
    Let us consider an example text “banana\0” where ‘\0’ is string termination character. Following are all suffixes of “banana\0”
    
    ```
    banana\0
    anana\0
    nana\0
    ana\0
    na\0
    a\0
    \0
    
    ```
    
    If we consider all of the above suffixes as individual words and build a Trie, we get following. 
    
    <img src = "https://media.geeksforgeeks.org/wp-content/uploads/trieSuffix.jpg" width = "500" height = "300">
    
    Image Source:- [GeeksforGeeks](https://www.geeksforgeeks.org/pattern-searching-using-trie-suffixes/)
    
    **How to search a pattern in the built Trie?**
    
     Following are steps to search a pattern in the built Trie. 
        
     1. Starting from the first character of the pattern and root of the Trie, do following for every character. 
           
           1. For the current character of pattern, if there is an edge from the current node, follow the edge. 

           2. If there is no edge, print “pattern doesn’t exist in text” and return. 
           
     2. If all characters of pattern have been processed, i.e., there is a path from root for characters of the given pattern, then print print all indexes where pattern is present. To store indexes, we use a list with every node that stores indexes of suffixes starting at the node.
     
     **Implementation of Suffix Trie**
     
     ```cpp
      // A simple C++ implementation of substring search using trie of suffixes
      #include<iostream>
      #include<list>
      #define MAX_CHAR 256
      using namespace std;

      // A Suffix Trie (A Trie of all suffixes) Node
      class SuffixTrieNode
      {
        private:
	          SuffixTrieNode *children[MAX_CHAR];
	          list<int> *indexes;
            
        public:
          	SuffixTrieNode() // Constructor
	          {
          		// Create an empty linked list for indexes of
          	  // suffixes starting from this node
        		  indexes = new list<int>;

		          // Initialize all child pointers as NULL
		          for (int i = 0; i < MAX_CHAR; i++)
		            children[i] = NULL;
	          }

          	// A recursive function to insert a suffix of the txt
          	// in subtree rooted with this node
          	void insertSuffix(string suffix, int index);

	         // A function to search a pattern in subtree rooted
          	// with this node.The function returns pointer to a linked
          	// list containing all indexes where pattern is present.
          	// The returned indexes are indexes of last characters
          	// of matched text.
          	list<int>* search(string pat);
      };

      // A Trie of all suffixes
      class SuffixTrie
      {
        private:
        	SuffixTrieNode root;
        
        public:
          // Constructor (Builds a trie of suffies of the given text)
        	SuffixTrie(string txt)
	           {
		            // Consider all suffixes of given string and insert
        		// them into the Suffix Trie using recursive function
        		// insertSuffix() in SuffixTrieNode class
        		for (int i = 0; i < txt.length(); i++)
          			root.insertSuffix(txt.substr(i), i);
        	}

	        // Function to searches a pattern in this suffix trie.
        	void search(string pat);
      };

      // A recursive function to insert a suffix of the txt in
      // subtree rooted with this node
      void SuffixTrieNode::insertSuffix(string s, int index)
      {
        	// Store index in linked list
        	indexes->push_back(index);
  
	        // If string has more characters
      	  if (s.length() > 0)
        	{
          		// Find the first character
          		char cIndex = s.at(0);

		          // If there is no edge for this character, add a new edge
          		if (children[cIndex] == NULL)
            			children[cIndex] = new SuffixTrieNode();

		          // Recur for next suffix
          		children[cIndex]->insertSuffix(s.substr(1), index+1);
        	}
      }

      // A recursive function to search a pattern in subtree rooted with
      // this node
      list<int>* SuffixTrieNode::search(string s)
      { 
      	  // If all characters of pattern have been processed,
        	if (s.length() == 0)
    		    return indexes;

	        // if there is an edge from the current node of suffix trie,
        	// follow the edge.
        	if (children[s.at(0)] != NULL)
        		return (children[s.at(0)])->search(s.substr(1));

	        // If there is no edge, pattern doesn’t exist in text
        	else return NULL;
      }

      /* Prints all occurrences of pat in the Suffix Trie S (built for text)*/
      void SuffixTrie::search(string pat)
      {
  	      // Let us call recursive search function for root of Trie.
  	      // We get a list of all indexes (where pat is present in text) in
  	      // variable 'result'
        	list<int> *result = root.search(pat);

	        // Check if the list of indexes is empty or not
    	    if (result == NULL)
		        cout << "Pattern not found" << endl;
	        else
        	{
  	        list<int>::iterator i;
	          int patLen = pat.length();
	          for (i = result->begin(); i != result->end(); ++i)
		            cout << "Pattern found at position " << *i - patLen<< endl;
	        }
      }

      int main()
      {
          // Let us build a suffix trie for text "geeksforgeeks.org"
	        string txt = "geeksforgeeks.org";
	        SuffixTrie S(txt);

	        cout << "Search for 'ee'" << endl;
	        S.search("ee");

	        cout << "\nSearch for 'geek'" << endl;
	        S.search("geek");

	        cout << "\nSearch for 'quiz'" << endl;
	        S.search("quiz");

	        cout << "\nSearch for 'forgeeks'" << endl;
	        S.search("forgeeks");

	        return 0;
      }

     ```

     **Output:-**	
     
     ```
     Search for 'ee'
     Pattern found at position 1
     Pattern found at position 9

     Search for 'geek'
     Pattern found at position 0
     Pattern found at position 8

     Search for 'quiz'
     Pattern not found

     Search for 'forgeeks'
     Pattern found at position 5
     ```
     
     `Time Complexity:- O(m + k)`, where m is length of the pattern and k is the number of occurrences of pattern in text.
     
## Suffix Array

A suffix array is a sorted array of all suffixes of a given string.

A suffix array can be constructed from Suffix tree by doing a DFS traversal of the suffix tree. In fact Suffix array and suffix tree both can be constructed from each other in linear time. 

Advantages of suffix arrays over suffix trees include improved space requirements, simpler linear time construction algorithms (e.g., compared to Ukkonen’s algorithm) and improved cache locality.

* **Example:-**

   ```
   Let the given string be "banana".
   
   0 banana                          5 a
   1 anana     Sort the Suffixes     3 ana
   2 nana      ---------------->     1 anana  
   3 ana        alphabetically       0 banana  
   4 na                              4 na   
   5 a                               2 nana
   ```
   
   **Implementation of Suffix Array**
   
   ```cpp
   #include <iostream>
   #include <cstring>
   #include <algorithm>
   using namespace std;

   // Structure to store information of a suffix
   struct suffix
   {
   	int index;
    	char *suff;
   };

   // A comparison function used by sort() to compare two suffixes
   int cmp(struct suffix a, struct suffix b)
   {
   	return strcmp(a.suff, b.suff) < 0? 1 : 0; 
   }
   
   // This is the main function that takes a string 'txt' of size n as an
   // argument, builds and return the suffix array for the given string
   int *buildSuffixArray(char *txt, int n)
   {
   	// A structure to store suffixes and their indexes
    	struct suffix suffixes[n];

    	// Store suffixes and their indexes in an array of structures.
    	// The structure is needed to sort the suffixes alphabatically
    	// and maintain their old indexes while sorting
	
		for (int i = 0; i < n; i++)
    	{
        		suffixes[i].index = i;
        		suffixes[i].suff = (txt+i);
    	}

    	// Sort the suffixes using the comparison function
    	// defined above.
    	sort(suffixes, suffixes+n, cmp);
	
		// Store indexes of all sorted suffixes in the suffix array
    	int *suffixArr = new int[n];
    	for (int i = 0; i < n; i++)
        	suffixArr[i] = suffixes[i].index;
	
	 	// Return the suffix array
    	return  suffixArr;
   }
   
   // A utility function to print an array of given size
   void printArr(int arr[], int n)
   {
  		for(int i = 0; i < n; i++)
        		cout << arr[i] << " ";
    		cout << endl;
   }
   
   // Copy the code function given above

   // A suffix array based search function to search a given pattern
   // 'pat' in given text 'txt' using suffix array suffArr[]
   
   void search(char *pat, char *txt, int *suffArr, int n)
   {
    	int m = strlen(pat); // get length of pattern, needed for strncmp()

    	// Do simple binary search for the pat in txt using the
    	// built suffix array
    	int l = 0, r = n-1;  // Initilize left and right indexes
    	while (l <= r)
    	{
        		// Compare pat with the middle suffix in suffix array
        		int mid = l + (r - l)/2;
        		int res = strncmp(pat, txt+suffArr[mid], m);

        		// If match found at the middle, print it and return
        		if (res == 0)
        		{
            		cout << "Pattern found at index " << suffArr[mid];
            		return;
        		}

        		// Move to left half if pattern is alphabtically less than
        		// the mid suffix
        		if (res < 0) r = mid - 1;

        		// Otherwise move to right half
        		else l = mid + 1;
    	}

     // We reach here if return statement in loop is not executed
     cout << "Pattern not found";
   }
   
   int main()
   {
   	char txt[] = "banana";  // text
    	char pat[] = "nan";   // pattern to be searched in text

    	// Build suffix array
    	int n = strlen(txt);
    	int *suffArr = buildSuffixArray(txt, n);

    	// search pat in txt using the built suffix array
    	search(pat, txt, suffArr, n);

    	return 0;
   }
   
   ```

  **Output**
  ```
  Pattern found at index 2
  ```
  
  `Time Complexity: O(mlogn)`
  
  `Auxiliary Space: O(m+n)`
  
  **Applications of Suffix Array**
  
  * Pattern Searching 
  * [Finding the longest repeated substring](http://en.wikipedia.org/wiki/Longest_repeated_substring_problem)
  * [Finding the longest common substring ](http://en.wikipedia.org/wiki/Longest_common_substring_problem)
  * [Finding the longest palindrome in a string](http://en.wikipedia.org/wiki/Longest_palindromic_substring)
  
REFERENCES:-

* [Suffix Trie](https://www.geeksforgeeks.org/pattern-searching-using-trie-suffixes/)
* [Suffix Array](https://www.geeksforgeeks.org/suffix-array-set-1-introduction/)
