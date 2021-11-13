
# Suffix Trie in Strings 

### What is Suffic Tree/Trie?

A suffix tree T is a natural improvement over trie used in pattern matching problem,
the one defined over a set of substrings of a string s. The idea is very simple here.
Such a trie can have a long paths without branches. If we only can reduce these long
paths into one jump, we will reduce the size of the trie significantly, so this is 
a great first step in improving the complexity of operations on such a tree. 
This  reduced trie defined over a subset of suffixes of a string s is called a suffix 
tree of s.


### How to Build a Suffix Tree?
    1. Generate all suffixes of given text. 
    2. Consider all suffixes as individual words and build a trie.

Consider an example of a string “banana\0” where ‘\0’ is string termination character.

#### Below You can see a compressed suffixes of “banana\0”

![suffix-tree](https://user-images.githubusercontent.com/78275713/136688906-9a3dd444-809f-4503-afcb-42d256272d62.png)




 **Implementation of Suffix Trie**

``` cpp
// A simple C++ implementation of substring search using trie of suffixes
      #include<bits/stdc++.h>
      using namespace std;
      #define long long int ll
      #define MAX_CHAR 256
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
	        string txt = "banana";
	        SuffixTrie S(txt);
	        cout << "Search for 'an'" << endl;
	        S.search("an");
	        cout << "\nSearch for 'na'" << endl;
	        S.search("na");
	        cout << "\nSearch for 'ba'" << endl;
	        S.search("ba");
	        return 0;
      }
```

### Output

```javascript
     Search for 'an'
     Pattern found at position 1
     Pattern found at position 3
     
     Search for 'na'
     Pattern found at position 2
     Pattern found at position 4
     
     Search for 'bn'
     Pattern not found
     
```

  

`Time Complexity:- O(m + k)`,
where m is length of the pattern and k is the number of occurrences of pattern in text.

### Contributor:

- [@Tushar Tiwari](https://www.github.com/brassgolem-25)

  
### Refrence

- [GeeksForGeeks](https://www.geeksforgeeks.org/)
- [CodeForces](https://codeforces.com/blog/entry/16780)
