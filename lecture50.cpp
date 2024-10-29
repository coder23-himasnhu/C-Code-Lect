// Queue:-
// Queues are a type of container adaptors that operate in a first in first out (FIFO) type of arrangement.
// Elements are inserted at the back (end) and are deleted from the front.

// it has some basic kind of operation:- 
// push, pop, isempty, front, isfull
// We can implement queue using array and linked list both.(in array the data is sotre in continuous manner and opposite of this in linked list)

// #include <iostream>
// using namespace std;

// // Implement queue using array
// class Queue
// {
//     int *arr;
//     int front, rear, size;

//     public:
//     // constructor
//     Queue(int n)
//     {
//         arr = new int[n];
//         size = n;
//         front = rear = -1;
//     }
//     // if queue is empty or not
//     bool IsEmpty()
//     {
//         return front==-1;
//     }
//     // Queue is full or not
//     bool IsFull()
//     {
//         return rear == size-1;
//     }
//     // push element into queue, end

//     void push(int x)
//     {
//         // Empty
//         if(IsEmpty())
//         {
//             cout<<"Pushed "<<x<<"into the Queue";
//             front = rear = 0;
//             arr[0] = x;
//             return;
//         }
//         // full
//         else if(IsFull())
//         {
//             cout<<"Overflow\n";
//             return;
//         }
//         // Insert
//         else{
//             rear = rear+1;
//             arr[rear] = x;
//             cout<<"Pushed "<<x<<"into the Queue";
//         }
//     }

//     // Pop Element, starting
//     void pop()
//     {
//         // Empty
//         if(IsEmpty())
//         {
//             cout<<"Underflow\n";
//             return;
//         }
//         // pop kar do
//         else{
//             if(front == rear)
//             {
//                 front = rear = -1;
//             }
//             else{
//                 front = front+1;
//             }
//         }
//     }

//     // Starting me konsa element rakha hai
//     int start()
//     {
//         if(IsEmpty())
//         {
//             cout<<"Queue is Empty\n";
//             return -1;
//         }
//         else{
//             return arr[front];
//         }
//     }
// };


// int main()
// {
//     Queue q(5);
//     q.push(5);
//     q.push(5);
//     q.pop();
//     q.pop();
//     cout<<q.start()<<endl;
// }



#include <iostream>
using namespace std;

// Implement queue using Circular array, circular queue
class Queue
{
    int *arr;
    int front, rear, size;

    public:
    // constructor
    Queue(int n)
    {
        arr = new int[n];
        size = n;
        front = rear = -1;
    }
    // if queue is empty or not
    bool IsEmpty()
    {
        return front==-1;
    }
    // Queue is full or not
    bool IsFull()
    {
        return (rear+1)%size==front;
    }
    // push element into queue, end

    void push(int x)
    {
        // Empty
        if(IsEmpty())
        {
            cout<<"Pushed "<<x<<"into the Queue";
            front = rear = 0;
            arr[0] = x;
            return;
        }
        // full
        else if(IsFull())
        {
            cout<<"Overflow\n";
            return;
        }
        // Insert
        else{
            rear = (rear+1)%5;
            arr[rear] = x;
            cout<<"Pushed "<<x<<"into the Queue";
        }
    }

    // Pop Element, starting
    void pop()
    {
        // Empty
        if(IsEmpty())
        {
            cout<<"Underflow\n";
            return;
        }
        // pop kar do
        else{
            if(front == rear)
            {
                front = rear = -1;
            }
            else{
                front = (front+1)%5;
            }
        }
    }

    // Starting me konsa element rakha hai
    int start()
    {
        if(IsEmpty())
        {
            cout<<"Queue is Empty\n";
            return -1;
        }
        else{
            return arr[front];
        }
    }
};


int main()
{
    Queue q(5);
    q.push(5);
    q.push(5);
    q.pop();
    q.pop();
    cout<<q.start()<<endl;
}