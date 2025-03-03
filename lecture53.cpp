// Dequeue:- Double Ended Queue
// In this DS we can push value in front or back bot(push_front, push_back, pop_front, pop_back)
// We can implement it by array and linkedlist only


// class Node 
// {
//     public:
//     int data;
//     Node *next, *prev;

//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//         prev = NULL;
//     }
// };

// class dequeue
// {
//     Node *front, *rear;
//     public:
//     dequeue()
//     {
//         front = rear = NULL;
//     }
//     void push_front(int x)
//     {
//         if(front == NULL)
//         {
//             front = rear = new;
//             return;
//         }
//         else{
//             Node *temp = new Node(x);
//             temp->next = front;
//             front->prev = temp;
//             front = temp;
//             return;
//         }
//     }
//     void push_back(int x)
//     {
//         if (front == NULL)
//         {
//             front = rear = new Node(x);
//             return;
//         }
//         else{
//             Node *temp = new Node(x);
//             rear->next = temp;
//             temp->prev = rear;
//             rear = temp;
//             return;
//         }
//     }
//     void pop_front()
//     {
//         if(front==NULL)
//         {
//             return;
//         }
//         else{
//             Node *temp = front;
//             front  = front->next;
//             delete temp;
//             if(front)
//             {
//                 front->prev = NULL;
//             }
//             else{
//                 rear = NULL;
//             }
//         }
//     }
//     void pop_back()
//     {
//         if(front== NULL)
//         {
//             return;
//         }
//         else{
//             Node *temp = rear;
//             rear = rear->prev;
//             delete temp;
//             if(rear)
//             {
//                 rear->next = NULL;
//             }
//             else{
//                 front  = NULL;
//             }
//         }
//     }
//     //return first element
//     int start()
//     {
//         if(front==NULL)
//         {
//             return -1;
//         }
//         else{
//             return front->data;
//         }
//     } 
//     int end()
//     {
//         if(front==NULL)
//         {
//             return -1;
//         }
//         else{
//             return rear->data;
//         }
//     }
// }




// Implementation:-
#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next, *prev;

    Node(int value)
    {
        data = value;
        next = prev = NULL;
    }
};

class dequeue
{
    Node *front, *rear;
    public:

    dequeue()
    {
        front = rear = NULL;
    }
    //push front
    void push_front(int x)
    {
        //Empty
        if(front == NULL)
        {
            front = rear = new Node(x);
            std::cout<<"Pushed"<<x<<"in Front of deqeue.\n";
            return;
        }
        else{
            Node *temp = new Node(x);
            temp->next = front;
            front->prev = temp;
            front = temp;
            std::cout<<"Pushed"<<x<<"in front of dequeue\n";
            return;
        }
    }
    //push back
    void push_back(int x)
    {
        //Empty
        if(front == NULL)
        {
            front = rear = new Node(x);
            std::cout<<"Pushed"<<x<<"in Back of deqeue.\n";
            return;
        }
        else{
            Node *temp = new Node(x);
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
            std::cout<<"Pushed"<<x<<"in Back of dequeue\n";
            return;
        }
    }
    //pop front
    void pop_front()
    {
        //Empty
        if(front==NULL)
        {
           std::cout<<"Dequeue underflow\n";
            return;
        }
        else{
            Node *temp = front;
            cout<<"Popped "<<temp->data<<"from front\n";
            front = front->next;
            delete temp;
            //Greater than 1 Node 
            if(front)
            {
                front->prev = NULL;
            }
            else{
                // 1 Node
                rear = NULL;
            }
        }
    }
    //pop back
    void pop_back()
    {
        //Empty
        if(front==NULL)
        {
            cout<<"Dequeue underflow\n";
            return;
        }
        else{
            Node *temp = rear;
            cout<<"Popped "<<temp->data<<"from Back\n";
            rear = front->prev;
            delete temp;
            //Greater than 1 Node 
            if(rear)
            {
                rear->next = NULL;
            }
            else{
                // 1 Node
                front = NULL;
            }
        }
    }
    //start
    int start()
    {
        if(front==NULL)
        {
            return -1;
        }
        else{
            return front->data;
        }
    }
    //end
    int end()
    {
        if(front==NULL)
        {
            return -1;
        }
        else{
            return rear->data;
        }
    }
};

int main()
{
    dequeue d;
    d.push_back(5);
    d.push_front(8);
    cout<<d.end()<<endl;
    d.pop_back();
}



// Implement dequeue with help of Array