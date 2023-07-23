#include <bits/stdc++.h> 
/*
    Following is the Binary Tree node structure:

    class BinaryTreeNode {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };
*/

// ** Recursive
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // base case
    if(root == NULL){
        return false;
    }

    if(root -> data == x){
        return true;
    }

    if(x > root -> data){
       return searchInBST(root -> right, x);
    }else{
       return searchInBST(root -> left, x);
    }
    
    return true;
}

// ** Iterative
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    
    BinaryTreeNode<int> * temp = root;

    while(temp != NULL){
        if(temp -> data == x){
            return true;
        }

        if(temp -> data > x){
            temp = temp -> left;
        }else{
            temp = temp -> right;
        }
    }
    
    return false;
}