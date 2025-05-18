#include<iostream>
#include "Node.h"
using namespace std;
Node* reverselist(Node *head)
{
    Node *prev= NULL;
    Node *curr = head;
    Node *next = NULL;

    while(curr != nullptr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void printlist(Node *temp)
{
    while(temp != nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    // Create a hard-coded linked list:
    // 1 -> 2 -> 3 -> 4 -> 5
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Given Linked list:"<<endl;
    printlist(head);

    head = reverselist(head);

    cout << "\nReversed Linked List:"<<endl;
    printlist(head);
    return 0;
}