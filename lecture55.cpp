// Tree:- It is a type of Data Structure that represent a heirarchial relationship between data elements and nodes
// Binary Tree:- It is defined as a Tree Data Structure where each node has alomst 2 children.
// If n node are present in binary tree then there are total n-1 edge

// Implement Tree:- 
// #include <iostream>
// #include <queue>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node *left, *right;

//     Node(int value)
//     {
//         data = value;
//         left = right = NULL;
//     }
// };

// int main()
// {
//     int x;
//     cout<<"Enter the Root Element:- ";
//     cin>>x;
//     int first, seceond;
//     queue<Node*>q;
//     Node *root = new Node(x);
//     q.push(root);

//     //Build the Binary Tree
//     while(!q.empty())
//     {
//         Node *temp = q.front();
//         q.pop();
//         cout<<"Enter the Left child of "<<temp->data<<":";
//         cin>>first; //Left Node ki value
//         //left Node
//         if(first!=-1)
//         {
//             temp->left = new Node(first);
//             q.push(temp->left);
//         }
//         //right Node
//         cout<<"Enter the Left child of "<<temp->data<<":";
//         cin>>seceond;
//         if(seceond!=-1)
//         {
//             temp->right = new Node(seceond);
//             q.push(temp->right);
//         }
//     }
// }


// Create the tree with another method:-
#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *left, *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

Node *BinaryTree()
{
    int x;
    cin>>x;
    if(x== -1)
    {
        return NULL;
    }
    Node *temp = new Node(x);
    //Left Side create 
    cout<<"Enter the Left child of "<<x<<" ";
    temp->left = BinaryTree();  //yaha agar value +ve hai, to right child bhi create ho jata hai par value nhi ja sakta hai bcz. wo phir se usi function ko call kar raha hai
    //right side create
    cout<<"Enter the Right child of "<<x<<" ";
    temp->right = BinaryTree();
    return temp;
}

int main()
{
    cout<<"Enter the Root Node:- ";
    Node *root;
    root = BinaryTree();

}

// There are three types of Binary tree traversal
1) Pre-order Traversal:- NLR(first visit Node then, left, then right)
2) In-Order Traversal:- LNR
3) Post-order Traversal:- LRN  