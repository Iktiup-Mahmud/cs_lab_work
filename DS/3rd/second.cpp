#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print(Node *head)
{
    while (head)
    {
        cout << head->val << endl;
        head = head->next;
    }
}

void insert(Node *&head, int val, int loc)
{
    Node *new_node = new Node(val);

    if (!head)
    {
        head = new_node;
    }
    else
    {
        Node *tmp = head;
        for (size_t i = 1; i < loc - 1; i++)
        {
            tmp = tmp->next;
        }
        new_node->next = tmp->next;
        tmp->next = new_node;
    }
}

int main()
{
    Node *head = new Node(1);
    Node *a = new Node(3);
    Node *b = new Node(5);
    Node *c = new Node(7);
    Node *d = new Node(9);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    insert(head, 100, 3);
    print(head);

    return 0;
}