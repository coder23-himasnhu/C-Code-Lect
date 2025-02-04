//Queue with sliding window
// i/p:- 2,3,1,5,6,7,8
// o/p:- 2,3,1
//       3,1,5
//       1,5,6
//       5,6,7
//       6,7,8

#include<iostream>
#include<queue>

using namespace std;

void display(queue<int>q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main()
{
    int arr[] = {2,3,1,5,6,7,8};
    int n = 7;
    int k = 3;

    queue<int>q;
    //k-1 is because hamne pehle 2 element liya aur third wala push karenege.
    for(int i=0; i<k-1; i++)
    {
        q.push(arr[i]);
    }

    for(int i = k-1; i<n; i++)
    {
        q.push(arr[i]);
        display(q);
        q.pop();
    }
    return 0;
}


// First negative integer in every window of size k
GFG