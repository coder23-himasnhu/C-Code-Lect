// Stack

// Defination:- It is a linear data structure, in which insertion and deletiononly allow at the end, called the top of stack.
// When, we define a stack as a abstract data type, then we are only intersted in know the stack operation from user, it simply mean we
// are not interseted in knowing the details, we only intersted in what type of operation we can perfrom.

// some operations of stack:- push, pop, top, empty, size
// Stack is LIFO i.e. Last In First Out
// Stack is not FILO qki agar hum kisi data ko do part me rakhte hai aur ek part pehle nikal dete hai memory se phir dusra dalte hai aur 
// dusra bhi nikalte hai, to ye property waha fail ho jayega.

// Stack Overflow:- stack ke size se jyada agar data dalne ka try kare to overflow ho jayega
// Stack Underflow:- if stack ke andar koi data present na ho.


// Stack Implementation using array
// #include<iostream>
// using namespace std;

// // Implement it with array
// class Stack
// {
//     int *arr;
//     int sizes;
//     int top;

// public:
//     int flag;
//     Stack(int s)
//     {
//         sizes = s;
//         top = -1;
//         arr = new int[s];
//         flag = 1;
//     }
//     // push
//     void push(int value)
//     {
//         if(top == sizes-1)
//         {
//             cout<<"Stack overflow\n";
//             return;
//         }
//         else{
//             top++;
//             arr[top] = value;
//             cout<<"Pushed value in the Stack\n";
//             flag = 0;
//         }
//     }
//     // pop
//     void pop()
//     {
//         if(top==-1)
//         {
//             cout<<"Stack Underflow\n";
//         }
//         else{
//             cout<<"popped "<<arr[top]<<" from the stack\n";
//             top--;
//             if(top == -1)
//             {
//                 flag = 1;
//             }
//         }
//     }
//     // peek value of stack
//     int peek()
//     {
//         if(top==-1)
//         {
//             cout<<"Stack is empty\n";
//             return -1;
//         }
//         else{
//             return arr[top];
//         }
//     }
//     // empty
//     bool empty()
//     {
//         return top==-1;
//     }
//     // size
//     int size()
//     {
//         return top+1;
//     }
// };

// int main()
// {
//     Stack S(5);
//     S.push(-1);
//     int value = S.peek();
//     if(S.flag == 0)
//     {
//         cout<<value<<endl;
//     }
// }



// Stack implementation using Linked List
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

// class Stack
// {
//     Node *top;
//     int size;

//     public:
//     Stack()
//     {
//         top = NULL;
//         size = 0;
//     }
//     // push
//     void push(int value)
//     {
//         Node *temp = new Node(value);
//         if(temp == NULL)  //restriction laga diya nhi to heap ka bhi data full ho jata.
//         {
//             cout<<"stack overflow\n";
//             return;
//         }
//         else{
//         temp->next = top;
//         top = temp;
//         size++;
//         cout<<"Pushed "<<value<<" into the Stack\n";
//         }
//     }
//     // pop
//     void pop()
//     {
//         if(top == NULL)
//         {
//             cout<<"Stack underflow\n";
//             return;
//         }
//         else{
//             Node *temp = temp;
//             cout<<"Popped"<<top->data<<" from the Stack\n";
//             top = top->next;
//             delete temp;
//             size--;
//         }
//     }
//     // peek
//     int peek()
//     {
//         if(top == NULL)
//         {
//             cout<<"Stack is Empty\n";
//             return -1;
//         }
//         else{
//             return top->data;
//         }
//     }
//     // is empty
//     bool isempty()
//     {
//         return top==NULL;
//     }
//     // is size
//     int issize()
//     {
//         return size;
//     }
// };

// int main()
// {
//     Stack S;
//     S.push(16);
//     S.push(6);
//     S.push(6);
//     S.push(126);
//     // S.pop();
//     cout<<S.issize()<<endl;
//     cout<<S.peek()<<endl;
//     cout<<S.isempty()<<endl;
// }



// Stack using STL(Standard Template Library)
// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;

// int main()
// {
//     stack<int>S;
//     S.push(6);
//     S.push(16);
//     S.push(62);
//     S.push(64);
//     cout<<S.size()<<endl;
//     cout<<S.top()<<endl;
//     cout<<S.empty()<<endl;
// }

// the actual implementation of stack is under deque
// deque is a topic which i doesnt study till now

// why we need stack if we have vector??
// ans:- if vector is full and we want to store one more data in it, then vector create a new vector with double size than previous one
// so this is disadvantage of vector, whereas in stack it wont happens.
// vector also take space in heap, so the data in not continous, thatswhy vector always create new vector of double size.


// valid parantheses:-
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

bool check(string str)
{
    stack<char>s;
    for(int i=0; i<str.size(); i++)
    {
        // opening
        if(str[i]=='(')
        {
            s.push(str[i]);
        }
        // closing
        else{
            if(s.empty())
            {
                return 0;
            }
            else{
                s.pop();
            }
        }
    }
    return s.empty();
};

int main()
{
    string str = "(((())";
    cout<<check(str)<<endl;
    return 0;
}