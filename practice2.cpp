// #include <iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node* next;

//     Node(int value)
//     {
//         data = value;
//         next = NULL; 
//     }
// };

// int main()
// {
//     Node* head=NULL;

//     int arr[5] = {1,23,4,5,6};

//     for(int i=0; i<5; i++)
//     {
//         if(head==NULL)
//         {
//             head = new Node(arr[i]);
//         }
//         else{
//             Node* temp = new Node(arr[i]);
//             temp->next = head;
//             head = temp;
//         }
//     }

//     Node* temp = head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data;
//         temp = temp->next;
//     }
// }

// #include <iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node* next;

//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };
// int main()
// {
//     Node* head, *tail;
//     head = tail = NULL;
//     int arr[] = {1,2,3,4,5};
    
//     for(int i=0; i<5; i++)
//     {
//     if(head==NULL)
//     {
//         head = new Node(arr[i]);
//         tail = head;
//     }
//     else{
//         tail->next = new Node(arr[i]);
//         tail = tail->next;
//     }
//     }
//     Node* temp = head;
//     while(temp)
//     {
//         cout<<temp->data;
//         temp = temp->next;
//     }
// }

#include <vector>
#include <iostream>
#inclu
using namespace std;

int main()
{
    vector<int>s1;
    
}