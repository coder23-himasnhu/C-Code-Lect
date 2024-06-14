// binary search:- to search anything in binary search the array is must be is in sorted form 
// the binary search , searches the number by target the middle of the array by divide the first and last index of the array by 2, then it repeated multiple times to get the requires number 


// this code is for ascending order binary search
#include<iostream>
using namespace std;


int binarySearch(int arr[], int n, int key)
{
    //start// mid// end
    int start=0, end=n-1, mid;

    while(start<=end)  //if the start is greater than end then the number that you find is not present in the array
    {
        mid=(start+end)/2;  //this line of code may error beacuse of int overflow so use this start+(end-start)/2  //starting index+ending index of array by 2 to get the middle index of the array
        if(arr[mid]==key)
        {
            return mid;
            // break;
        }
        else if(arr[mid<key])  //arr[mid]<key
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
        return -1;  //if the number is not present in the array then it return the -1
}
int main()
{
    int arr[1000];
    int n;
    cout<<"enter the size of the array ";
    cin>>n;
    cout<<"enter the element ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key ";
    cin>> key;
    // this function created 
    cout<<binarySearch(arr,n,key);
    {
        return 0;
    }

}


// this code is for decending order binary search
// #include<iostream>
// using namespace std;

// int BinarySearch(int arr[], int n, int key)
// {
//     int start=0, end=n-1, mid;
//     while(start<=end)
//     {
//         mid=(start+end)/2;
//         if(arr[mid]==key)
//         {
//             return mid;
//         }
//         else if(arr[mid]<key)
//         {
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int n;
//     cout<<"enter the size of the array ";
//     cin>>n;
//     int arr[1000];
//     cout<<"enter the array ";
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
//     int key;
//     cout<<"enter the number you want to find ";
//     cin>>key;

//     cout<<BinarySearch(arr,n,key);
//     {
//         return 0;
//     }
// }