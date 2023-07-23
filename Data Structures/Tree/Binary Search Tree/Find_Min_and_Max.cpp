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