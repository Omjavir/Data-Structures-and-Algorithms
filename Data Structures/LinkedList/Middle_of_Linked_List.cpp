// *** Approach 1*** 
// Time complexity = O(n^2)
int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

Node *findMiddle(Node *head)
{
    int length = getLength(head);
    int ans = (length / 2);

    int count = 0;
    Node *temp = head;
    while (count < ans)
    {
        temp = temp->next;
        count++;
    }
    return temp;
}

// *** Approach 2 ***
// Time complexity = O(n)
Node *findMiddle(Node *head)
{
    // base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    // 2 nodes
    if (head->next->next == NULL)
    {
        return head->next;
    }

    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}
