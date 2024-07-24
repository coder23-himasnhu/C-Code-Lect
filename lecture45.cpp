// Delete a Node

// Delete the first Node:-
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

//     // delete a node at start 
//     if(Head!=NULL)
//     {
//         Node *temp = Head;
//         Head = Head->next;
//         delete temp;  //delete keyword isliye used hota hai qki jo bhu resources hum use kar rahe hai use release bhi karan padta hai
//     }


//     Node *temp;
//     temp = Head;
//     while(temp)
//     {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }



// delete last node
// last node ko delete to kar denge par uske sath hi uske seceond last ke address me NULL bhi sotre karana padega taki wo kisi aur ka address na bataye.(So we need two pointer)
// there are three cases:- 1) Node present hona chahiye
// 2)agar linked list me ek hi node hai to?
// 3)linked list ek node jyda hai
// if we handle all three cases then our program is right

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
//     // function to create linked list
//  Node *CreateLinkedList(int arr[], int index, int size)
//     {
//         if(index==size)
//         return NULL;
//         // int arr[] = {2,4,6,1,7};

//         Node *temp = new Node(arr[index]);
//         temp->next = CreateLinkedList(arr,index+1, size);
//         return temp;
//     }

// int main()
// {
//     Node *Head;
//     Head = NULL;  //tail aur head dono me NULL hai
//     int arr[] = {2,4,6,8,10};
    
//     Head = CreateLinkedList(arr, 0, 5);

//     //delete a node at end
//     // check if node exist
//     if(Head!=NULL)
//     {
//         //if only node is present
//         if(Head->next == NULL)
//         {
//             // Node *temp = Head;
//             delete Head;
//             Head = NULL;
//         }
//         // if More thn an one node is present(in this case we have to take two pointer which point on last and secenond last node)
//         else{
//             Node *curr = Head;
//             Node *prev = NULL;
//             while(curr->next!=NULL)
//             {
//                 prev = curr;
//                 curr = curr->next;
//             }
//             prev->next = NULL;
//             delete curr;
//         }
//     }
//     // printing the node
//         Node *temp = Head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     return 0;
// }



// Delete a Particular Node
// GFG 

// Reverse the Linked List with data only
// Solved on Leetcode

// Reverse the Linked List with address only
// class Solution{
//     public:
//     ListNode *reverseList(ListNode *head)
//     {
//         ListNode *curr = head, *prev = NULL, *fut = NULL;

//         while(curr)
//         {
//             fut = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = fut;
//         };
//             head = prev;
//             return prev;
//     }
// }


// Many problems solve on Leetcode of Linked List