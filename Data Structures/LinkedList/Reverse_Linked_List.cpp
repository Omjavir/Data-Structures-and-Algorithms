// https://leetcode.com/problems/reverse-linked-list/?ref=localhost

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        /* Iterative
        ListNode *nextNode, *prevNode = NULL;
        while(head){
            nextNode = head -> next;
            head -> next = prevNode;
            prevNode = head;
            head = nextNode;
        }

        return prevNode;
        */

        /* Recursive
        if(head == NULL || head -> next == NULL){
            return head;
        }

        ListNode *node = reverseList(head -> next);
        head -> next -> next = head;
        head -> next = NULL;

        return node;
        */
    }
};

// Approach
/*
step 1 : prevNode and nextNode to be NULL
step 2 : allocate nextNode to head->next
step 3 : allocate head->next to prevNode which is NULL currently
step 4 : allocate prevNode to head
step 5 : allocate head to nextNode
step 6 : return prevNode
*/