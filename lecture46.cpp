// Doubly Linked List
// In doubly linked list, the node has previous and future data as well.

// To insert the data in node, we have to learn the concept of 1)Insert 2) delete
// 1)Insert:- -Insert at start, Insert at last, Insert at any given position

// How to Create the doubly linked list
// class Node
// {
//     public:
//     int data;
//     Node *prev;
//     Node *future;
//     void(int value)
//     {
//         data = value;
//         prev = NULL;
//         future = NULL;
//     }
// }


// #include<iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node *next;
//     Node *prev;

//     Node(int value)
//     {
//         data = value;
//         next = prev = NULL;
//     }
// };

// int main()
// {
//     Node *head = NULL;

//     // Insert at Start
//     // Linked List does not exist
//     if(head == NULL)
//     {
//         head = new Node(5);
//     }
//     // Linked List exist
//     else{
//         Node *temp = new Node(5);
//         temp->next = head;
//         head->prev = temp;
//         head = temp;
//     }
//     Node *trav = head;
//     while(trav)
//     {
//         cout<<trav->data<<" ";
//         trav = trav->next;
//     }
// }


// convert array in doubly linked list
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int value)
    {
        data = value;
        next = prev = NULL;
    }
};

int main()
{
    Node *head = NULL, *tail = NULL;
    int arr[] = {1,2,3,4,5};
    for(int i=0; i<5; i++)
    {
        // Linked list does not exist
        if(head == NULL)
        {
            head = new Node(arr[i]);
            tail = head;
        }
        // exist karti hai
        else{
            Node *temp = new Node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }
    Node *trav = head;
    while(trav)
    {
        cout<<trav->data<<" ";
        trav = trav->next;
    }
}

// 54 minute pe roka