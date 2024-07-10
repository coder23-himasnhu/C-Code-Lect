// ARRAY
// Address of index = arr+index*size of data type


// to find the size of the array
#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<sizeof(arr)/sizeof(arr[0]);
}


// to take input from the user
// #include<iostream>
// using namespace std;

// int main()
// {
//     int size;
//     cin>>size;
//     int arr[100];
//     for(int i=0; i<=size; i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i=0; i<=size; i++)
//     {
//         cout<<arr[i];
//     }
// }


// to find the minimum number in an array
// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5]={1,2,3,4,5,6};
//     int ans=INT_MAX;
//     for(int i=0; i<=5; i++)
//     {
//         if(arr[i]<ans)
//         {
//             ans=arr[i];
//         }
//     }
//     cout<<ans;
// }


// to find the maximun number in an array
// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5]={1,2,3,4,5,6};
//     int ans=INT_Min;
//     for(int i=0; i<=5; i++)
//     {
//         if(arr[i]>ans)
//         {
//             ans=arr[i];
//         }
//     }
//     cout<<ans;

// }