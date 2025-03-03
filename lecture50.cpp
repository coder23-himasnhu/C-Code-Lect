// Queue:-
// Queues are a type of container adaptors that operate in a first in first out (FIFO) type of arrangement.
// Elements are inserted at the back (end) and are deleted from the front.
// we can implement queue using array or linked list

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



// #include <iostream>
// using namespace std;

// // Implement queue using Circular array, circular queue
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
//         return (rear+1)%size==front;
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
//             rear = (rear+1)%5;
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
//                 front = (front+1)%5;
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


// Queue using linked list
// If the first and last pointer of the linked list is zero that means the queue is empty

// #include <iostream>
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

// class Queue
// {
//     Node *front;
//     Node *rear;

//     public:
//     Queue()
//     {
//         front = rear = NULL;
//     }
//     //Queue is empty or not
//     bool IsEmpty()
//     {
//         return front == NULL;
//     }
//     //push element into the queue
//     void push(int x)
//     {
//         //Empty
//         if(IsEmpty())
//         {
//             cout<<"Pushed "<<x<<" into the Queue\n";
//             front = rear = new Node(x);
//             return;
//         }
//         //Empty na ho
//         else{
//             rear->next = new Node(x);
//             cout<<"Pushed "<<x<<" into the Queue\n";
//             rear = rear->next;
//         }
//     }
//     //pop element from the queue
//     void pop()
//     {
//         //Empty toh nahi hai
//         if(IsEmpty())
//         {
//             cout<<"Queue Underflow\n";
//             return;
//         }
//         else{
//             cout<<"Popped "<<front->data<<" from the Queue\n";
//             Node *temp = front;
//             front = front->next;
//             delete temp;
//         }
//     }

//     int start()
//     {
//         if(IsEmpty())
//         {
//             cout<<"Queue is Empty\n";
//             return -1;
//         }
//         else{
//             return front->data;
//         }
//     }
// };

// int main()
// {
//     Queue q;
//     q.push(5);
//     q.push(15);
//     q.push(50);
//     q.push(150);
//     q.push(54);
//     q.pop();
//     cout<<q.start()<<endl;
// }

//so agar, hume queue ko implement karna hai to itna bada code likhne ka koi jarurat nhi hai, hum direct STL ka use karke queue ko implement
// kar sakte hai
// eg:- Queue<int>q;
        // q.push(5);
        // q.push(5);
        // q.push(5);
//with the help of STL we can use push, pop, size, front, empty function in queue.


// Queue using STL
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int>q;
    q.push(30);
    q.push(34);
    q.push(32);
    q.push(13);
    cout<<q.front()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
}

// Queue Follow first in first out
