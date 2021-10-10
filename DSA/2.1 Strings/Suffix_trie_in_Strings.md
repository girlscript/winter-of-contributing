
# Suffix Trie in Strings 

### What is Suffic Tree/Trie?

A suffix tree T is a natural improvement over trie used in pattern matching problem,
the one defined over a set of substrings of a string s. The idea is very simple here.
Such a trie can have a long paths without branches. If we only can reduce these long
paths into one jump, we will reduce the size of the trie significantly, so this is 
a great first step in improving the complexity of operations on such a tree. 
This  reduced trie defined over a subset of suffixes of a string s is called a suffix 
tree of s.

![suffix-tree](https://user-images.githubusercontent.com/78275713/136688906-9a3dd444-809f-4503-afcb-42d256272d62.png)
