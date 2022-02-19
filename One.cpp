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
        cout << node->data;
        node = node->next;
    }
}

int main()
{
    /* code */
    Node *head = new Node();
    Node *nTwo = new Node();
    Node *nThree = new Node();

    head->data = 1;
    head->next = nTwo;

    nTwo->data = 2;
    nTwo->next = nThree;

    nThree->data = 3;
    nThree->next = NULL;

    printLinkedList(head);

    return 0;
}
