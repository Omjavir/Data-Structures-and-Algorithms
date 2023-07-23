#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* solve(Node<int>* first, Node<int>* second)
{
    // If first list has only one node then point its next to second list
    if(first -> next == NULL){
        first -> next = second;
        return first;
    }

    // Declaring pointers
    Node<int>* curr1 = first;
    Node<int>* next1 = curr1 -> next;
    Node<int>* curr2 = second;
    Node<int>* next2 = curr2 -> next;

    // Traversing the both lists
    while(next1 != NULL && curr2 != NULL){
        // Checking for condition
        if((curr2 -> data >= curr1 -> data) && (curr2 -> data <= next1 -> data)){
            // Adding node in between curr1 and next1
            curr1 -> next = curr2;
            next2 = curr2 -> next;
            curr2 -> next = next1;
            // Updating the pointers
            curr1 = curr2;
            curr2 = next2;
        }else{
            curr1 = curr1 -> next;
            next1 = next1 -> next;

            if(next1 == NULL){
                curr1 -> next = curr2;
                return first;
            }
        }
    }
    return first;
}

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // first list is empty
    if(first == NULL){
        return second;
    }

    // second list is empty
    if(second == NULL){
        return first;
    }

    if(first -> data <= second -> data){
        return solve(first, second);
    }else{
        return solve(second, first);
    }
}
