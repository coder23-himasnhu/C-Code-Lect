// search an input and find
// #include<iostream>
// using namespace std;

// int main() 
// {
//     int inp,index=-1;
//     cin>>inp;
//     int arr[6]={10,20,7,11,8,4};
//     for(int i=0; i<=5;i++)
//     {
//         if(inp==arr[i])
//         {
//             cout<<"it is equal";
//             cout<<arr[i];
//         }
//     }
// }


// reverse the array
// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[6]={1,2,3,4,5,6};
//     int start=0, end=5;
//     while(start<end)
//     {
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
//     for(int i=0;i<6;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }


// fibonacci series by array
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[1000];
//     // int past=0;
//     // int present=1;
//     arr[0]=0;
//     arr[1]=1;
//   for(int i=2; i<=n-1; i++)  //nth fibonacci series is present in n-1 position
//     {
//         arr[i]=arr[i-1]+arr[i-2];
//     }
//     cout<<arr[n-1];
// }


//how to add functions in an array 
// #include<iostream>
// using namespace std;

// void fun(int a[], int n)//here a[] takes the address this concept is used in pointer.
// {

//     for(int i=0; i<n; i++)
//     {
//         cout<<a[i]<<" ";
//     }
// }

// int main()
// {
//     int arr[5]={3,2,1,6,7};
//     // cout<<sizeof(arr)<<endl;
    // fun(arr,5);
// }