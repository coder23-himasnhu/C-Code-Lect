// pointers

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a=10;
//     cout<<&a<<endl;
//     int *ptr=&a;
//     cout<<ptr<<endl;
//     cout<<sizeof(ptr)<<endl;
//     float m=2.6;
//     float *ptr1=&m;
//     cout<<ptr1<<endl;
//     cout<<sizeof(ptr1)<<endl;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a=10;
//     int *ptr=&a;
//     cout<<ptr<<endl;  //address of a 
//     cout<<*ptr<<endl;  //value inside a

// }


#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
// print the address of first element
    // cout<<arr<<endl;
    // cout<<arr+0<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<ptr<<endl;

    // // print the address of the seceond element
    // cout<<arr+1<<endl;
    // cout<<&arr[1]<<endl;

    // // print the value of oth index
    // cout<<arr[0]<<endl;
    // cout<<*arr<<endl;
    // cout<<*(arr+0)<<endl;
    // cout<<*ptr<<endl;

    // // sare address ko print kar do
    // for(int i=0; i<5; i++)
    // {
    //     cout<<arr+i<<endl;
    // }

    // // print all the values
    // for(int i=0; i<5; i++)
    // {
    //     cout<<*(arr+i)<<endl;
    // }

    // print all the value
    for(int i=0; i<5; i++)
    {
        cout<<ptr[i]<<" "<<endl;
    }
    // print all the address
    for(int i=0; i<5; i++)
    {
        cout<<ptr+i<<" "<<endl;
    }
    // arithmetic opertation
    // print all the values
    for(int i=0; i<5; i++)
    {
        cout<<*ptr<<" "<<endl;
        ptr++;
    }
    // addition
    ptr=ptr+3;
    cout<<*ptr;
}


