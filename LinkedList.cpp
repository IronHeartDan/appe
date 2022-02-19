#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void printLinkedList(Node *node)
{
    while (node != NULL)
    {
        /* code */
        cout <<node->data<<"\n";
        node = node->next;
    }
}

void append(Node *check, Node *toAdd)
{
    if (check->next != NULL)
    {
        append(check->next, toAdd);
    }
    else
    {
        check->next = toAdd;
    }   
}

int main()
{
    Node *head = new Node();
    Node *last;
    head->next = NULL;
    bool takeInput = true;
    bool first = true;
    while (takeInput)
    {
        /* code */
        // Take Input
        int input;
        cin >> input;

        // If Negative Then Break
        if (input < 0)
        {
            takeInput = false;
            break;
        }

        // Add Data

        if (first)
        {
            head->data = input;
            last = head;
            first = false;
            continue;
        }

        Node *n = new Node();
        n->data = input;
        last->next = n;
        last = n;
        // append(head, n);
    }

    printLinkedList(head);

    return 0;
}
