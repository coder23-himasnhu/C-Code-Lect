// sorting

// selection sort:- in selection sort we have to compare the element with all the element present in the array
// is algorithm me sabse pehle sabse chhota index find karo 

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[6]={9,8,1,7,4,6};
//     for(int j=0; j<5; j++){
//     int index=j;
//     for(int i=j+1; i<6; i++)
//     {
//         if(arr[i]<arr[index])
//         {
//             index=i;
//         }
//     }
//     swap(arr[j], arr[index]);
//     }
//     for(int i=0; i<6; i++)
//     {
//         cout<<arr[i];
//     }
// }


// to find the smallest number in an array
// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5]={5,2,3,1,4};
//     int index=0;
//     for(int i=1; i<5; i++)
//     {
//         if(arr[i]<arr[index])
//         {
//             index=i;
//         }
//     }
//     cout<<index;
// }

// shift the largest number to the last of the array
// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5]={6,3,7,32,4};
//     for(int i=0; i<4; i++)  // if the element in the array is n then the number of round us n-1
//     {
//         if(arr[i]>arr[i+1])
//         {
//             swap(arr[i], arr[i+1]);
//         }
//     }
//     for(int i=0; i<5; i++)
//     {
//         cout<<arr[i];
//     }
// }



// bubble sort:- In bubble sort we have to sort the element by the nearest elemnt 
// if the element in the array is n then the number of round us n-1
// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5]={1,8,7,6,5};
//     for(int i=3; i>=0; i--)  //0-3 index tak hi swapping chalega mtlb 4 swapping hoga , (if the element in the array is n then the number of round us n-1)
//     {                        //0-3 me 4 baar compare ho jata hai isliye 0-3 use kiya hai
//         bool swapped=0;
//         for(int j=0; j<=i; j++) //j<=i, j<=4, j<4 are all same
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 swapped=1;      //here we use swapped variable to only check the that the swapping is done or not if it not swap means the array is already sorted then no need to swapped so we break it in next line.
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//         if(swapped==0)
//         {
//             break;
//         }
//     }
//     for(int i=0; i<5; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }



// insertion sort

// to adjust the element in its correct position
// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[]={1,4,6,8,5};  //it is 5 size array so starting index of the for loop is 4 but if the loop has n number of element then the for loop start from n-1 location
//     for(int i=4; i>0; i--)  //we can also write i>=0, but in last of the array we dont have to compare the element with another element so maybe it give error.
//     {
//         if(arr[i]<arr[i-1])
//         {
//             swap(arr[i], arr[i-1]);
//         }
//         else{
//             break;
//         }
//     }
//     for(int i=0; i<=4; i++)
//     {
//         cout<<arr[i];
//     }
// }



#include<iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    // for short
    for(int i=1; i<n; i++)
    {
        for(int j=i; j>0; j--)
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr[j], arr[j-1]);
            }
            else{
                break;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}