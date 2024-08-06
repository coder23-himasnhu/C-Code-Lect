// Linked list implementation in C++

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Creating a node
class Node
{
    public:
    int value;
    Node* next;
    Node(int data)
    {
        value = data;
        next = NULL;
    }
};

int main() {
    Node *head, *newhead;
    head = new Node(5);
    newhead = new Node(10);
    head->next = newhead;
    // newhead->next = head;
    cout<<head->value<<" ";
    cout<<head->next->value;
}