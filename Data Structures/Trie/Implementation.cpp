#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal; // Is it a last node

    TrieNode(char data)
    {
        this->data = data;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie
{
public:
    TrieNode *root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        // Assumption that input will be in captial i.e "ABE"
        int index = word[0] - 'A';
        TrieNode *child;

        if (root->children[index] != NULL)
        {
            // present
            child = root->children[index];
        }
        else
        {
            // absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // recursive call
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode *child;

        // present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // absent
            return false;
        }

        // recursive call
        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word)
    {
        return searchUtil(root, word);
    }
    // Return True if the Trie node has no child, else false
    bool isEmpty(TrieNode *root)
    {
        for (int i = 0; i < 26; i++)
            if (root->children[i])
                return false;

        return true;
    }

    TrieNode *deleteUtil(TrieNode *root, string word)
    {
        if (root == NULL)
            return NULL;

        // Last character being processed
        if (word.length() == 0)
        {
            // This will not be a word after removal
            if (root->isTerminal)
                root->isTerminal = false;

            // If this is not a prefix of any other word. [not helping to make any other word]
            if (isEmpty(root))
            {
                delete root;
                root = NULL;
            }

            return root;
        }

        // Recursion call
        int index = word[0] - 'A';
        root->children[index] = deleteUtil(root->children[index], word.substr(1));

        // Backtracking
        // If root has no child (as it's only child got deleted) and it is also not end of any other word
        if (isEmpty(root) && root->isTerminal == false)
        {
            delete root;
            root = NULL;
        }
        return root;
    }

    TrieNode *deleteWord(string word)
    {
        return deleteUtil(root, word);
    }
};

int main()
{
    Trie *t = new Trie();
    t->insertWord("ABCD");
    t->insertWord("MEN");
    t->insertWord("TIME");
    cout << "TIME present or not : " << t->searchWord("ABCD") << endl;
    cout << "MEN present or not : " << t->searchWord("MEN") << endl;
    t->deleteWord("MEN");
    cout << "MEN present or not : " << t->searchWord("MEN") << endl;
    return 0;
}

// Coding ninjas implementation
/*
    Your Trie object will be instantiated and called as such:
    Trie* obj = new Trie();
    obj->insert(word);
    bool check2 = obj->search(word);
    bool check3 = obj->startsWith(prefix);
 */
class TrieNode
{
public:
    char data;
    TrieNode *children[26]; 
    bool isTerminal; // Is it a last node

    TrieNode(char data)
    {
        this->data = data;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie
{

public:
    TrieNode *root;

    /** Initialize your data structure here. */
    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        // Assumption that input will be in captial i.e "ABE"
        int index = word[0] - 'a';
        TrieNode *child;

        if (root->children[index] != NULL)
        {
            // present
            child = root->children[index];
        }
        else
        {
            // absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // recursive call
        insertUtil(child, word.substr(1));
    }

    /** Inserts a word into the trie. */
    void insert(string word)
    {
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            return root->isTerminal;
        }

        int index = word[0] - 'a';
        TrieNode *child;

        // present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // absent
            return false;
        }

        // recursive call
        return searchUtil(child, word.substr(1));
    }

    /** Returns if the word is in the trie. */
    bool search(string word)
    {
        return searchUtil(root, word);
    }

    bool prefixUtil(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            return true;
        }

        int index = word[0] - 'a';
        TrieNode *child;

        // present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // absent
            return false;
        }

        // recursive call
        return prefixUtil(child, word.substr(1));
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix)
    {
        return prefixUtil(root, prefix);
    }
};