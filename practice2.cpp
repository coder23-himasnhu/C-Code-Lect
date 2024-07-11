#include<iostream>
using namespace std;

int main()
{
    int arr[5]={12,3,4,4,2};
    // int index[100];
    // index[0]=arr[0];
    int ans=0;
    for(int i=0; i<5; i+2)
    {
        ans = arr[i]+arr[i+1];
    }
    cout<<ans;
}