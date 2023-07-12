#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    // creating a new node
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node *&tail, int data)
{
    // creating a new node
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{

    // Inserting at first position
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // Inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    // creating a new node
    Node *nodeToInssert = new Node(data);

    nodeToInssert->next = temp->next;
    temp->next = nodeToInssert;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    Node *head = node1;
    Node *tail = node1;
    print(head);
    // Inserting at head
    insertAtHead(head, 12);
    print(head);
    insertAtHead(head, 14);
    print(head);

    // Inserting at tail
    insertAtTail(tail, 8);
    print(head);
    insertAtTail(tail, 6);
    print(head);
    insertAtTail(tail, 4);
    print(head);

    // Inserting at position
    // insertAtPosition(head, tail, 1, 22); // Inserting at first position
    insertAtPosition(head, tail, 5, 22); // Inserting at position
    // insertAtPosition(head, tail, 7, 22); // Inserting at last position
    print(head);
    return 0;
}