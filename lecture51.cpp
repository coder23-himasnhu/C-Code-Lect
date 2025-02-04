// print all the element of the queue
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int>q;
    q.push(20);
    q.push(22);
    q.push(12);
    //print the value with popping the first element
    // while(!q.empty())
    // {
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }

    int n = q.size();
    while(n--)
    {
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
}


// Implementation of Queue Using Stack
// implement stack using Queue.
// Solved in Leetcode