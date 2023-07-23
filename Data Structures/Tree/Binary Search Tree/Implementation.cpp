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
        this->left = NULL;
        this->right = NULL;
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

Node *insertIntoBst(Node *&root, int data)
{
    // base case
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (data > root->data)
    {
        root->right = insertIntoBst(root->right, data);
    }
    else
    {
        root->left = insertIntoBst(root->left, data);
    }

    return root;
}

Node *deleteFromBost(Node *root, int value)
{
    // base case
    if (root == NULL)
    {
        return root;
    }

    if (root->data == value)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 1 child
        // left child
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        // right child
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if (root->left != NULL && root->right != NULL)
        {
            int minimum = findMin(root->right)->data;
            root->data = minimum;
            root->right = deleteFromBost(root->right, minimum);
            return root;
        }
    }
    else if (root->data > value)
    {
        // left me jao
        root->left = deleteFromBost(root->left, value);
        return root;
    }
    else
    {
        // right me jao
        root->right = deleteFromBost(root->right, value);
        return root;
    }
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBst(root, data);
        cin >> data;
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
// Finding minimum which means that left side consists of minimum number
Node *findMin(Node *root)
{
    Node *temp = root;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }

    return temp;
}

// Finding maximum which means that right side consists of maximum number
Node *findMax(Node *root)
{
    Node *temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }

    return temp;
}

int main()
{
    Node *root = NULL;

    cout << "Enter the data to create BST : " << endl;
    takeInput(root);

    cout << "Printing the BST : " << endl;
    levelOrderTraversal(root);
    // 10 8 21 7 27 5 4 3 -1
    cout << "Inorder traversal : " << endl;
    inorderTraversal(root);
    cout << endl;
    cout << "Preorder traversal : " << endl;
    preorderTraversal(root);
    cout << endl;
    cout << "Postorder traversal : " << endl;
    postorderTraversal(root);
    cout << endl;

    return 0;
}