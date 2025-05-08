// find the first and last occurance of the element in an array :-question solve in letcode 

// to find first and last occurance of the element in an array , this code is written by me

#include<iostream>
#include<vector>

using namespace std;

int binarysearch(int arr[], int n, int target)
{
    int start=0, end=n-1, mid, first=-1, last=-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(start<=end)
        {
            if(arr[mid]==target)
            {
                first=mid;
                end=mid-1;
            }
            else if(arr[mid]<target)
            {
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        // return -1;
    }

    start=0, end=n-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(start<=end)
        {
            if(arr[mid]==target)
            {
                last=mid;
                start=mid+1;
            }
            else if(arr[mid]<target)
            {
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        // return -1;
    }

    vector<int>a(2);
    a[0]=start;
    a[1]=end;

    return (first, last);
}

int main()
{
    int n;
    cout<<"enter the size of the array";
    cin>>n;
    int arr[1000];
    cout<<"enter the array";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"enter the number you want to find";
    cin>>target;

    cout<<binarysearch(arr,n,target);
    {
        return 0;
    }

}


// question on search insert postion:- leetcode

