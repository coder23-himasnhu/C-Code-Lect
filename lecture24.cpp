// 3sum
#include<iostream>
#include<limits.h>

using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5,2,4,6,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    // for sorting
    for(int i=n-2; i>0; i--)
    {
        for(int j=0; j<i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0; i<n-2; i++)
    {
        // ans=target-arr[i];
        int ans=9-arr[i];
        int start=i+1, end=n-1;
        while(start<end)
        {
            if(arr[start]+arr[end]==ans)
            {
                cout<<arr[start]<<" "<<arr[end]<<" "<<arr[i];
                // cout<<"yes";
                return 1;
            }
            else if(arr[start]+arr[end]>ans)
            {
                end--;
            }
            else{
                start++;
            }
        }
    }
    cout<<"no";
    return 0;
}