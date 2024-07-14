// Linked List:-
// The data present in the linked list is in distinct memory location whereas the data present in the array is in continuos manner
// Any address in the linked list has data as well as address of next data both. So, we can easily find the next address of data
// New keyword dynically way me node create karta hai
// Basics opertaion in Node:- Insertion, Deletion, Search, Update
// Linked List ke starting point ko Head bolte hai(Head is a pointer that points to the satrting of node)
// Insertion can be of three types:- Start, End, Middle

// Creation of Linked List Node
// #include<iostream>
// using namespace std;

// class Node
// {
//     public: 
//     int data;
//     Node *next;

//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };

// int main()
// {
//     // Node A1(4);  //this is static way
//     Node *Head;
//     Head = new Node(4);
//     cout<<Head->data<<endl;
//     cout<<Head->next<<endl;
// }


// Create a New Linked List with many nodes (start of the Node)
// if linked list doesnt exist and we want to add the ndoe at start then we have to use the if-else statement
// #include<iostream>
// using namespace std;

// class Node
// {
//     public: 
//     int data;
//     Node *next;

//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };

// int main()
// {
//     // Node A1(4);  //this is static way
//     Node *Head;
//     Head = NULL;

//     int arr[] = {2,3,4,5,6};
//     // Insert the node at beginning
//     // Linked List does't exist
//     for(int i=0; i<5; i++)
//     {
//     if(Head==NULL)
//     {
//         Head = new Node(arr[i]);
//     }
//     // Linked List exist karta hai
//     else{
//         Node *temp;
//         temp = new Node(arr[i]);
//         temp->next=Head;
//         Head = temp;
//     }
//     }

//     // print the value
//     Node *temp = Head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     };
// }


// insert node at last of linked list
// #include<iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node *next;

//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };

// int main()
// {
//     Node *Head, *Tail;
//     Tail = Head = NULL;  //tail aur head dono me NULL hai
//     int arr[] = {2,4,6,8,10};
//     // Linked List is empty
//     for(int i=0; i<5; i++)
//     {
//     if(Head == NULL)
//     {
//         Head = new Node(arr[i]);
//         Tail = Head;
//     }
//     else{
//         Tail->next = new Node(arr[i]);
//         Tail = Tail->next;
//     }
//     }

//     Node *temp;
//     temp = Head;
//     while(temp)
//     {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }


// Create Linked List with recursion