// Implement dequeue with Array:-
// to implement dequeue with array we have to treat the array as circular array

// #include <iostream>
// using namespace std;

// class dequeue
// {
//     int front, rear, size;
//     int *arr;

//     public:
//     dequeue(int n)
//     {
//         size  = n;
//         arr = new int[n];
//         front = rear = -1;
//     }

//     bool IsEmpty()
//     {
//         return front == -1;
//     }

//     bool IsFull()
//     {
//         return (rear+1)%size+front;
//     }

//     void push_front(int x)
//     {
//         //Empty
//         if(IsEmpty())
//         {
//             front=rear=0;
//             cout<<"Pushed "<<x<<"in front\n";
//             arr[0]=x;
//             return;
//         }
//         //Full
//         else if(IsFull())
//         {
//             cout<<"Dequue Overflow\n";
//             return;
//         }
//         // Normal
//         else{
//             front = (front-1+size)%size;
//             arr[front] = x;
//             cout<<"Pushed "<<x<<"in front\n";
//             return;
//         }
//     }

//     void push_back(int x)
//     {
//         //Empty
//         if(IsEmpty())
//         {
//             front=rear=0;
//             cout<<"Pushed "<<x<<"in back\n";
//             arr[0]=x;
//             return;
//         }
//         //Full
//         else if(IsFull())
//         {
//             cout<<"Dequue Overflow\n";
//             return;
//         }
//         // Normal
//         else{
//             rear = (rear+1)%size;
//             arr[rear] = x;
//             cout<<"Pushed "<<x<<"in back\n";
//             return;
//         }
//     }

//     void pop_front()
//     {
//         //Empty
//         if(IsEmpty())
//         {
//             cout<<"Dequqe Underflow\n";
//             return;
//         }
//         else{
//             cout<<"Popped "<<arr[front]<<"from dequeue";
//             //single element
//             if(front==rear)
//             {
//                 front = rear = -1;
//             }
//             //grater than 1 element
//             else{
//                 front = (front+1)%size;
//             }
//         }
//     }

//     void pop_back()
//     {
//         //Empty
//         if(IsEmpty())
//         {
//             cout<<"Dequqe Underflow\n";
//             return;
//         }
//         else{
//             cout<<"Popped "<<arr[rear]<<"from dequeue";
//             //single element
//             if(front==rear)
//             {
//                 front = rear = -1;
//             }
//             //grater than 1 element
//             else{
//                 rear = (rear-1+size)%size;
//             }
//         }
//     }

//     int start()
//     {
//         if(IsEmpty())
//         {
//             return -1;
//         }
//         else{
//             return arr[front];
//         }
//     }

//     int end()
//     {
//         if(IsEmpty())
//         {
//             return -1;
//         }
//         else{
//             return arr[rear];
//         }
//     }
// };

// int main()
// {
//     dequeue d(5);
//     d.push_back(10);
//     d.push_back(9);
//     d.push_front(13);
//     d.push_back(19);
//     d.push_front(13);
//     cout<<d.start()<<endl;
// }



// Dequeue using STL

#include <iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>q;
    q.push_back(5);
    q.push_back(10);
    q.pop_front();
    cout<<q.front()<<endl;
}

//We can also implement Stack using Deque.
// we only need push_back() and pop_back() operation as the data is only push in back and pop from the back

//We can also implement Queue using Deque.
// We only need push_back() and pop_front() operation