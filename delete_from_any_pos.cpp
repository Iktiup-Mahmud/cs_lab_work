#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int val)
    {
        this->value = val;
        this->next = NULL;
    }
};

void delete_from_position(Node *head, int p)
{
    Node *tmp = head;
    for (int i = 1; i <= p-1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;    
}

void print_the_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;

    int p;
    cin >> p;
    // insert_at_position(head, p, v);
    delete_from_position(head, p);

    print_the_list(head);

    return 0;
}
