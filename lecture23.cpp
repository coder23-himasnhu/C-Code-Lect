// prefix sum
#include<iostream>
using namespace std;

int main()
{
    int arr[100]={6,4,5,-3,2,8};

    int prefix[100];
    prefix[0]=arr[0];

    for(int i=1; i<6; i++)
    {
        prefix[i]=arr[i]+prefix[i-1];
    }
    for(int i=0; i<6; i++)
    {
        cout<<prefix[i]<<" ";
    }
}

// suffix sum
// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[100]={6,4,5,-3,2,8};
//     int suffix[100];
//     suffix[5]=arr[5];
//     for(int i=4; i>=0; i--)
//     {
//         suffix[i]=arr[i]+suffix[i+1];
//     }
//     for(int i=0; i<=5; i++)
//     {
//         cout<<suffix[i]<<" ";
//     }
// }

// print the number of subarray of any size from the array 
// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[]={6,4,5,-3,2};
//     int count=0, n=sizeof(arr)/sizeof(arr[0]);
//     int i;
//     cout<<"enter the size of the array you want:- ";
//     cin>>i;

//     cout<<"size of one element subarray:- ";
//     cout<<n-i<<endl;
// }


// // divide the arary in two part and the sum of both part is equal
// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;

// bool divide(vector<int>arr)
// {
//     int n=arr.size(),sum=0,prefix=0;
//     // it gives the total sum of the array
//     for(int i=0; i<n; i++)
//     {
//         sum+=arr[i];
//     }
//     // it divide the array in two parts and check the array sum
//     for(int i=0; i<n; i++)
//     {
//         prefix+=arr[i];
//         // int ans=sum-prefix;
//         if(sum==2*prefix)
//         {
//             return 1;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int n;
//     cout<<"Enter the size of the array:- ";
//     cin>>n;
//     vector<int>v(n);
//     cout<<"enter the element of the array:- ";
//     for(int i=0; i<n; i++)
//     {
//         cin>>v[i];
//     }

//     cout<<divide(v);
// }