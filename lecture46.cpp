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
//     Node *head = NULL, *tail = NULL;
//     int arr[] = {1,2,3,4,5};
//     for(int i=0; i<5; i++)
//     {
//         // Linked list does not exist
//         if(head == NULL)
//         {
//             head = new Node(arr[i]);
//             tail = head;
//         }
//         // exist karti hai
//         else{
//             Node *temp = new Node(arr[i]);
//             tail->next = temp;
//             temp->prev = tail;
//             tail = temp;
//         }
//     }
//     Node *trav = head;
//     while(trav)
//     {
//         cout<<trav->data<<" ";
//         trav = trav->next;
//     }
// }


// Insert node at any given position
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
//     Node *head = NULL, *tail = NULL;
//     int arr[] = {1,2,3,4,5};
//     for(int i=0; i<5; i++)
//     {
//         // Linked list does not exist
//         if(head == NULL)
//         {
//             head = new Node(arr[i]);
//             tail = head;
//         }
//         // exist karti hai
//         else{
//             Node *temp = new Node(arr[i]);
//             tail->next = temp;
//             temp->prev = tail;
//             tail = temp;
//         }
//     }
//     int pos = 2;  //in which position we have to insert
//     // insert at start
//     if(pos == 0)
//     {
//         // Linked list exist na kare
//         if(head == NULL)
//         {
//             head = new Node(5);
//         }
//         // linked list exist kare
//         else{
//             Node *temp = new Node(5);
//             temp->next = head;
//             head->prev = temp;
//             head = temp;
//         }
//     }
//     else{
//         Node *curr = head;
//         // go to the node, ater which i have to insert
//         while(--pos)
//         {
//             curr = curr->next;
//         };

//         // insert at end
//         if(curr->next==NULL)  //Last Node if it has NULL
//         {
//             Node *temp = new Node(5);
//             temp->prev = curr;
//             curr->next = temp;
//         }
//         // insert at middle
//         else{
//             Node *temp = new Node(5);
//             temp->next = curr->next;
//             temp->prev = curr;
//             curr->next = temp;
//             temp->next->prev = temp;
//         }
//     }
//     Node *trav = head;
//     while(trav)
//     {
//         cout<<trav->data<<" ";
//         trav = trav->next;
//     }
// }


// Deletion Of a Node 

// Delete at start
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
//     Node *head = NULL, *tail = NULL;
//     int arr[] = {1,2,3,4,5};

//     // delete at start
//     if(head!=NULL)
//     {
//         // if only one node exist
//         if(head->next == NULL)
//         {
//             delete head;
//             head = NULL;
//         }
//         // if more than one node exist
//         else{
//         Node *temp = head;
//         head = head->next;
//         delete temp;
//         head->prev = NULL;
//         }
//     }

//     // Traverse and Print the data
//     Node *trav = head;
//     while(trav)
//     {
//         cout<<trav->data<<" ";
//         trav = trav->next;
//     }
// }


// Application of Doubly Linked List:-
// 1)Undo/Redo


// Merge two sorted linked list problem on GFG:-
// function:-
Node *sortedMerge(Node *head1, Node *head2)
{
    Node *head = new Node(0);
    Node *tail = head;

    while(head1 && head2)
    {
        if(head1->data<=head2->data)
        {
            tail->next = head1;
            head1 = head1->next;
            tail = tail->next;
            tail->next = NULL;
        }
        else{
            tail->next = head2;
            head2 = head2->next;
            tail = tail->next;
            tail->next = NULL;
        }
    }
    if(head1)
    {
        tail->next = head1;
    }
    else{
        tail->next = head2;
    }
    tail = head;
    head = head->next;
    delete tail;

    return head;
}