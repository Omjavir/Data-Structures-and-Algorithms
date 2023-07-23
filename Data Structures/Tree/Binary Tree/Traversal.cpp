#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
    }
};

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorderTraversal(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void preorderTraversal(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

Node *buildTree(Node *root)
{
    cout << "Enter the data : " << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data for inserting in left side of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for inserting in right side of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void buildTreeFromLevelOrderTraversal(Node *&root)
{
    queue<Node *> q;
    cout << "Enter the data for root : " << endl;
    int data;
    cin >> data;
    root = new Node(data);
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << "Enter the left node for : " << temp->data << endl;
        int leftData;
        cin >> leftData;
        if (leftData != -1)
        {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout << "Enter the right node for : " << temp->data << endl;
        int rightData;
        cin >> rightData;
        if (rightData != -1)
        {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}

int main()
{
    Node *root = NULL;
    /*
    root = buildTree(root);
    cout << "Level Order Traversal : " << endl;
    levelOrderTraversal(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "Inorder Traversal : " << endl;
    inorderTraversal(root);
    cout << endl;
    cout << "Preorder Traversal : " << endl;
    preorderTraversal(root);
    cout << endl;
    cout << "Postrder Traversal : " << endl;
    postorderTraversal(root);
    cout << endl;
    */

   // Building the tree from level order traversal
    buildTreeFromLevelOrderTraversal(root);
    levelOrderTraversal(root);
    return 0;
}