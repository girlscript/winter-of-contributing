# Trie or Prefix Tree

Trie is a user-defined Data Structure that acts like a Multi-Way Tree. It is used to store a set of strings/paths for efficient query and insertions.

- A Trie takes a lot of strings or a lot of paths and using these paths it constructs the data structure such that the user can search or insert efficiently.
- It stores the information of the characters and the paths that they create.
- Tries are also called **Prefix Trees** because all the children of a node have a common prefix of the string associated with the parent node.

## Sample Trie Structure:

![Trie](https://user-images.githubusercontent.com/72400676/140355284-cb4d88ee-6d94-4486-9028-9e4d8cea33db.png)

## Need:

- If we try to solve this problem using Array or LinkedList, we have to iterate over each char for all the strings to find out if a string exists in the data structure.The time complexity of this operation would be **O(L\*N)** where L = Maximum Length of string and N = Total Number of strings, which is very expensive.

- Tries help to reduce that complexity. With Tries, this operation has a time complexity of **O(M)** where M = Maximum String Lemgth.

## Algorithm:

- **Constructing a Trie**:

  - The Root of the Trie is associated with an empty string or null character.
  - From this root, find if any of the children (nodes) have the first character of the string in it.
    - Add a new node to the trie, if it doesn't exist.
    - However, no need to add a string or character if it already exists in the trie.
  - Same recursive approach follows for all the strings.
  - End node returns a boolean 'true' to mark the end of the string.

- **Searching a Trie**:
  - From the Root of the Trie, find if any of the children (nodes) have the first character of the string in it.
  - Iterate the path to check if the corresponding characters exist in the Trie.
  - If a character doesn't exist, return false.
  - If all the characters in the string exists in the Trie till the end, check the boolean returned by end.
    - If the end boolean is true, return true.
    - Else, return false.

## Applications:

Real-life Applications of a Trie range from simple _Digital Dictionaries_ to complex applications like _Auto-complete_ and _Spellchecks_.
