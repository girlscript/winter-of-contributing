#include <bits/stdc++.h>
using namespace std;

class Trie
{
public:
    //Structure of each node in a Trie

    class node
    {
    public:
        bool end;
        node *next[26]; //Each node has 26 next nodes

        //Constructor for node
        node()
        {
            end = false;
            for (int i = 0; i < 26; i++)
            {
                next[i] = NULL; //Initializing each node with null value
            }
        }
    };

    node *trie;

    //Constructor for trie
    Trie()
    {
        trie = new node();
    }

    //Method to insert a new word in the trie
    void insert(string word)
    {
        int i = 0;
        node *it = trie;
        while (i < word.size())
        {
            if (it->next[word[i] - 'a'] == NULL)      //word does not exist
                it->next[word[i] - 'a'] = new node(); //Creating new node for storing the word
            it = it->next[word[i] - 'a'];             //Moving to the next node
            i++;
        }
        it->end = true;
    }

    //Method to search a given word in the trie
    bool search(string word)
    {
        int i = 0;
        node *it = trie; //Iterator to traverse through the trie

        while (i < word.size())
        {
            if (it->next[word[i] - 'a'] == NULL) //if the next node of word does not exist => the word doesn't exist.
                return false;
            it = it->next[word[i] - 'a'];
            i++;
        }

        return it->end; //to check if the word ends here
    }
};

int main()
{
    Trie *gwocTrie = new Trie;
    vector<string> words = {"Girlscript", "Winter", "Contributing"};

    for (auto w : words)
    {
        gwocTrie->insert(w);
    }

    //search
    if (gwocTrie->search("CPP"))
    {
        cout << "CPP found\n";
    }
    else
    {
        cout << "CPP does not exist in the Trie\n";
    }

    return 0;
}
