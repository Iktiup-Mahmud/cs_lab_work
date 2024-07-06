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


void insert_head(Node *&head, int val){
    Node* new_node = new Node(val);

    if(head){
        new_node->next = head;
        head = new_node;
    }
    else{
        head = new_node;
    }
}

int main()
{
    Node *head = new Node(1);
    Node *a = new Node(3);
    Node *b = new Node(5);
    Node *c = new Node(7);
    Node *d = new Node(9);

    // head->next = a;
    // a->next = b;
    // b->next = c;
    // c->next = d;
    
    insert_head(head,100);
    print(head);

    return 0;
}