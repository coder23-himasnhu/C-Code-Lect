#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

// Function to create linked list
Node *CreateLinkedList(int arr[], int index, int size)
{
    if (index == size)
        return NULL;

    Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index + 1, size);
    return temp;
}

int main()
{
    Node *Head = NULL;
    int arr[] = {2, 4, 6, 8, 10};

    Head = CreateLinkedList(arr, 0, 5);

    // delete a node at end
    // check if node exists
    if (Head != NULL)
    {
        // if only one node is present
        if (Head->next == NULL)
        {
            delete Head;
            Head = NULL;
        }
        // if more than one node is present
        else
        {
            Node *curr = Head;
            Node *prev = NULL;
            while (curr->next != NULL)
            {
                prev = curr;
                curr = curr->next;
            }
            prev->next = NULL;
            delete curr;
        }
    }

    // Printing the linked list to verify the final state
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
