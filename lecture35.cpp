// 2D array with help of pointer

#include<iostream>
using namespace std;

int main()
{
    // array create karna hai jo store karega address
    int n,m; //n=rows, m=col
    cin>>n>>m;

    int **ptr=new int *[n];
    // created 2D array 
    for(int i=0; i<n; i++)
    {
        ptr[i]=new int[m];
    }
    // take input from user
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>ptr[i][j];
        }
    }
    // print the value
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<ptr[i][j]<<" ";
            cout<<endl;
        }
    }
    // release the memory from heap
    for(int i=0; i<n; i++)
    {
        delete[] ptr[i];

    }
    delete ptr;
}